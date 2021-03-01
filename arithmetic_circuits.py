from logic_gates import logic_gate, and_gate, nand_gate, or_gate, nor_gate, xor_gate, xnor_gate, not_gate
from wire_components import wire, bus
import itertools

""" ARITHMETIC CIRCUITS """


class arithmetic_circuit():
    def __init__(self):
        self.components = []
        self.circuit_wires = []
        self.circuit_gates = []
        self.c_data_type = "uint64_t"
        self.N = 1

        # TODO delete?
        self.carry_out_gate = None
        self.sum_out_gates = []

    def add_component(self, component):
        self.components.append(component)

    def get_previous_component(self, number: int = 1):
        return self.components[-number]

    def get_component_types(self):
        return list({type(c): c for c in self.components}.values())

    def get_unique_types(self):
        hier_components = self.components_gates + self.component_types
        return list({type(c): c for c in hier_components}.values())

    def get_gate_types(self):
        return list({type(g): g for g in self.components_gates}.values())

    def get_previous_partial_product(self, a_index: int, b_index: int):
        index = ((b_index-2) * (self.N*2)) + ((self.N-1)+2*(a_index+2))

        if a_index == self.N-1:
            index = index-2
            return self.components[index].get_carry_wire()
        else:
            return self.components[index].get_sum_wire()

    def get_sum_wire(self):
        return self.out.get_wire(0)

    def get_carry_wire(self):
        return self.out.get_wire(1)

    def get_circuit_wires(self):
        for component in self.components:
            if not [item for item in self.circuit_wires if item[1] == component.a.name]:
                self.circuit_wires.append((component.a, component.a.name, len(self.circuit_wires)))

            if not [item for item in self.circuit_wires if item[1] == component.b.name]:
                self.circuit_wires.append((component.b, component.b.name, len(self.circuit_wires)))

            if not [item for item in self.circuit_wires if item[1] == component.out.name]:
                self.circuit_wires.append((component.out, component.out.name, len(self.circuit_wires)))

    # Search for circuit's wire unique index for cgp chromosome generation
    def get_circuit_wire_index(self, wire: wire):
        for w in self.circuit_wires:
            if wire.name.endswith(w[1]):
                return w[2]

    # Get list of all gates present in circuit
    def get_circuit_gates(self):
        gates = []
        # TODO CHANGE SIGNED MULTIPLIER IMPLEMENTATION (REPLACE CONSTANT WIRE FOR EXTRA GATES) FOR THIS TO BE DELETED
        if hasattr(self, 'constant_wire'):
            gates.append(xor_gate(a=self.a.get_wire(), b=self.b.get_wire(), prefix=self.prefix+"_xor_constant_wire"))
            gates.append(xnor_gate(a=self.a.get_wire(), b=self.b.get_wire(), prefix=self.prefix+"_xnor_constant_wire"))
            gates.append(or_gate(a=gates[0].out, b=gates[1].out, prefix=self.prefix+"_or_constant_wire"))
            gates[2].out.name = "constant_wire"

        for c in self.components:
            if isinstance(c, logic_gate):
                gates.append(c)
            else:
                gates.extend((c.get_circuit_gates()))
        return gates

    # Get list of all wires in circuit along with their index position for cgp chromosome generation
    def get_cgp_wires(self):
        if isinstance(self.a, bus):
            [self.circuit_wires.append((w, f"_{w.name}", len(self.circuit_wires))) for w in self.a.bus]
            [self.circuit_wires.append((w, f"_{w.name}", len(self.circuit_wires))) for w in self.b.bus]
        else:
            self.circuit_wires.append((self.a, f"_{self.a.name}", len(self.circuit_wires)))
            self.circuit_wires.append((self.b, f"_{self.b.name}", len(self.circuit_wires)))
            if hasattr(self, 'c'):
                self.circuit_wires.append((self.c, f"_{self.c.name}", len(self.circuit_wires)))

        for gate in self.circuit_gates:
            if not [item for item in self.circuit_wires if gate.a.name.endswith(item[1])]:
                self.circuit_wires.append((gate.a, gate.a.name, len(self.circuit_wires)))

            if not [item for item in self.circuit_wires if gate.b.name.endswith(item[1])]:
                self.circuit_wires.append((gate.b, gate.b.name, len(self.circuit_wires)))

            if not [item for item in self.circuit_wires if gate.out.name.endswith(item[1])]:
                self.circuit_wires.append((gate.out, gate.out.name, len(self.circuit_wires)))

    """ C CODE GENERATION """
    # FLAT C #
    @staticmethod
    def get_includes_c():
        return f"#include <stdio.h>\n#include <stdint.h>\n\n"

    def get_prototype_c(self):
        return f"{self.c_data_type} {self.prefix}({self.c_data_type} {self.a.prefix}, {self.c_data_type} {self.b.prefix})" + "{" + "\n"

    def get_declaration_c_flat(self):
        return f"".join([c.get_declaration_c_flat() for c in self.components])

    def get_init_c_flat(self):
        return "".join([c.get_assign_c_flat(prefix_a=self.a.prefix, prefix_b=self.b.prefix) if isinstance(c, logic_gate) else c.get_init_c_flat() for c in self.components])

    def get_function_out_c_flat(self):
        return "".join([f"  {self.out.prefix} |= {o.return_wire_value_c(offset=self.out.bus.index(o))};\n" for o in self.out.bus])

    # Generating flat C code representation of circuit
    def get_c_code_flat(self, file_object):
        file_object.write(self.get_includes_c())
        file_object.write(self.get_prototype_c())
        file_object.write(self.out.get_declaration_c())
        file_object.write(self.get_declaration_c_flat()+"\n")
        file_object.write(self.get_init_c_flat()+"\n")
        file_object.write(self.get_function_out_c_flat())
        file_object.write(f"  return {self.out.prefix}"+";\n}")
        file_object.close()

    # HIERARCHICAL C #
    def get_function_blocks_c(self):
        # Add unique 1-bit adder components (ha, fa)
        self.component_types = self.get_component_types()
        # Add unique logic gates composing subcomponents
        self.components_gates = list(itertools.chain.from_iterable([c.get_component_types() for c in self.component_types]))
        self.component_types = self.get_unique_types()
        return "".join([c.get_function_block_c() for c in self.component_types])

    def get_declaration_c_hier(self):
        return "".join(self.a.get_wire_declaration_c()) + \
               "".join(self.b.get_wire_declaration_c()) + \
               "".join([c.out.get_declaration_c() if isinstance(c, logic_gate) else c.out.get_wire_declaration_c() for c in self.components])

    def get_init_c_hier(self):
        return ";\n".join([f"  {w.name} = " + w.get_wire_value_c(offset=w.index, prefix=w.prefix) for w in self.a.bus]) + ";\n" + \
               ";\n".join([f"  {w.name} = " + w.get_wire_value_c(offset=w.index, prefix=w.prefix) for w in self.b.bus]) + ";\n" + \
               "\n".join([f"  {c.out.name} = {c.get_gate_invocation_c(a=c.a, b=c.b, get_index=True)}" if isinstance(c, logic_gate) else c.get_out_invocation_c() for c in self.components])

    def get_function_out_c_hier(self):
        return "".join([f"  {self.out.prefix} |= {o.return_wire_value_c(offset=self.out.bus.index(o))};\n" for o in self.out.bus])

    def get_circuit_c(self):
        return f"{self.get_prototype_c()}" + \
               f"{self.out.get_declaration_c()}" + \
               f"{self.get_declaration_c_hier()}\n" + \
               f"{self.get_init_c_hier()}\n\n" + \
               f"{self.get_function_out_c_hier()}" + \
               f"  return {self.out.prefix}"+";\n}"

    # Generating hierarchical C code representation of circuit
    def get_c_code_hier(self, file_object):
        file_object.write(self.get_includes_c())
        file_object.write(self.get_function_blocks_c())
        file_object.write(self.get_circuit_c())
        file_object.close()

    """ VERILOG CODE GENERATION """
    # FLAT VERILOG #
    def get_prototype_v(self):
        return f"module {self.prefix}(input [{self.N-1}:0] {self.a.prefix}, input [{self.N-1}:0] {self.b.prefix}, output [{self.out.N-1}:0] {self.out.prefix});\n"

    def get_declaration_v_flat(self):
        return f"".join([c.get_declaration_v_flat() for c in self.components])

    def get_init_v_flat(self, offset: int = 0, array: bool = False):
        return "\n".join([c.get_assign_v_flat(prefix_a=self.a.prefix, prefix_b=self.b.prefix, offset=offset, array=True) if isinstance(c, logic_gate) else c.get_init_v_flat(offset=self.components.index(c), array=array) for c in self.components]) + "\n"

    def get_function_out_v_flat(self):
        return "".join([f"  assign {self.out.prefix}[{self.out.bus.index(o)}] = {o.prefix};\n" for o in self.out.bus])

    # Generating flat V code representation of circuit
    def get_v_code_flat(self, file_object):
        file_object.write(self.get_prototype_v())
        file_object.write(self.get_declaration_v_flat()+"\n")
        file_object.write(self.get_init_v_flat(array=False)+"\n")
        file_object.write(self.get_function_out_v_flat())
        file_object.write(f"endmodule")
        file_object.close()

    # HIERARCHICAL VERILOG #
    def get_function_blocks_v(self):
        # Add unique 1-bit adder components (ha, fa)
        self.component_types = self.get_component_types()
        # Add unique logic gates composing subcomponents
        self.components_gates = list(itertools.chain.from_iterable([c.get_component_types() for c in self.component_types]))
        self.component_types = self.get_unique_types()
        return "".join([c.get_function_block_v() for c in self.component_types])

    def get_declaration_v_hier(self):
        return "".join(self.a.get_wire_declaration_v()) + \
               "".join(self.b.get_wire_declaration_v()) + \
               "".join([c.out.get_declaration_v() if isinstance(c, logic_gate) else c.out.get_wire_declaration_v() for c in self.components])

    def get_init_v_hier(self):
        return ";\n".join([f"  assign {w.name} = " + w.get_wire_value_v(offset=w.index, prefix=w.prefix, array=True) for w in self.a.bus]) + ";\n" + \
               ";\n".join([f"  assign {w.name} = " + w.get_wire_value_v(offset=w.index, prefix=w.prefix, array=True) for w in self.b.bus]) + ";\n" + \
               "\n".join([f"{c.get_gate_invocation_v(a=c.a, b=c.b, out=c.out, get_index=True)}" if isinstance(c, logic_gate) else c.get_invocation_v() for c in self.components]) + "\n"

    def get_function_out_v_hier(self):
        return "".join([f"  assign {self.out.prefix}[{self.out.bus.index(o)}] = {o.name};\n" for o in self.out.bus])

    def get_circuit_v(self):
        return f"{self.get_prototype_v()}" + \
               f"{self.get_declaration_v_hier()}\n" + \
               f"{self.get_init_v_hier()}\n" + \
               f"{self.get_function_out_v_hier()}" + \
               f"endmodule"

    # Generating hierarchical C code representation of circuit
    def get_v_code_hier(self, file_object):
        file_object.write(self.get_function_blocks_v())
        file_object.write(self.get_circuit_v())
        file_object.close()

    """ CGP CODE GENERATION """
    # FLAT CGP #
    def get_parameters_cgp(self):
        self.circuit_gates = self.get_circuit_gates()
        return f"{{1,{len(self.circuit_gates)},2,1,0}}"

    def get_triplet_cgp(self):
        self.get_cgp_wires()
        return "".join([g.get_triplet_cgp(a_index=self.get_circuit_wire_index(g.a), b_index=self.get_circuit_wire_index(g.b)) for g in self.circuit_gates])

    def get_output_cgp(self):
        return "(" + ",".join([str(self.get_circuit_wire_index(o)) for o in self.out.bus[::-1]]) + ")"

    def get_cgp_code(self, file_object):
        file_object.write(self.get_parameters_cgp())
        file_object.write(self.get_triplet_cgp())
        file_object.write(self.get_output_cgp())
        file_object.close()


""" SIGNED ARITHMETIC CIRCUITS """


class signed_adder_circuit(arithmetic_circuit):
    def __init__(self):
        super().__init__()

    # TODO TRY TO THINK ABOUT A WAY TO MORE EFFICIENTLY GENERATE OUTPUT FORMATS FOR EXTRA SIGN XOR INVOCATIONS
    """ C CODE GENERATION """
    # FLAT C #
    # Initialization of 1-bit adders and sign extension XOR gates
    def get_init_c_flat(self):
        return "".join([c.get_init_c_flat() for c in self.components if isinstance(c, arithmetic_circuit)]) + \
               f"{self.get_previous_component(number=2).get_assign_c_flat(prefix_a=self.a.prefix, prefix_b=self.b.prefix, offset=self.N-1)}" + \
               f"{self.get_previous_component().get_assign_c_flat(prefix_a=self.get_previous_component(number=2).out.prefix, prefix_b=self.get_previous_component(number=3).get_carry_wire().prefix)}"

    # HIERARCHICAL C #
    def get_init_c_hier(self):
        return ";\n".join([f"  {w.name} = " + w.get_wire_value_c(offset=w.index, prefix=w.prefix) for w in self.a.bus]) + ";\n" + \
               ";\n".join([f"  {w.name} = " + w.get_wire_value_c(offset=w.index, prefix=w.prefix) for w in self.b.bus]) + ";\n" + \
               "\n".join([f"  {c.out.name} = {c.get_gate_invocation_c(a=c.a, b=c.b, get_index=True)}" if isinstance(c, logic_gate) else c.get_out_invocation_c() for c in self.components[:-1]]) + "\n" + \
              f"  {self.get_previous_component().out.name} = {self.get_previous_component().get_gate_invocation_c(a=self.get_previous_component(number=2).out, b=self.get_previous_component(number=3).get_carry_wire())}"

    """ VERILOG CODE GENERATION """
    # FLAT VERILOG #
    # Initialization of 1-bit adders and sign extension XOR gates
    def get_init_v_flat(self, offset: int = 0, array: bool = False):
        return f"\n".join([c.get_init_v_flat(offset=self.components.index(c), array=True) for c in self.components[:-2]]) + "\n" + \
               f"{self.get_previous_component(number=2).get_assign_v_flat(prefix_a=self.a.prefix, prefix_b=self.b.prefix, offset=self.N-1, array=True)}" + \
               f"{self.get_previous_component().get_assign_v_flat(prefix_a=self.get_previous_component(number=2).out.name, prefix_b=self.get_previous_component(number=3).get_carry_wire().name, offset=offset, array=array)}"

    # HIERARCHICAL VERILOG #
    def get_init_v_hier(self):
        return ";\n".join([f"  assign {w.name} = " + w.get_wire_value_v(offset=w.index, prefix=w.prefix, array=True) for w in self.a.bus]) + ";\n" + \
               ";\n".join([f"  assign {w.name} = " + w.get_wire_value_v(offset=w.index, prefix=w.prefix, array=True) for w in self.b.bus]) + ";\n" + \
               "\n".join([f"{c.get_gate_invocation_v(a=c.a, b=c.b, out=c.out, get_index=True)}" if isinstance(c, logic_gate) else c.get_invocation_v() for c in self.components[:-1]]) + "\n" + \
              f"{self.get_previous_component().get_gate_invocation_v(a=self.get_previous_component(number=2).out, b=self.get_previous_component(number=3).get_carry_wire(), out=self.get_previous_component().out)}\n"


class signed_multiplier_circuit(arithmetic_circuit):
    def __init__(self):
        super().__init__()

    # TODO CHANGE SIGNED MULTIPLIER CIRCUIT (REPLACE CONSTANT WIRE WITH LOGIC GATES)
    # C CODE GENERATION
    # FLAT C #
    def get_declaration_c_flat(self):
        return super().get_declaration_c_flat() + \
              f"{self.constant_wire.get_declaration_c()}"

    # HIERARCHICAL C #
    def get_declaration_c_hier(self):
        return super().get_declaration_c_hier() + \
              f"{self.constant_wire.get_declaration_c()}"

    # VERILOG CODE GENERATION
    # FLAT VERILOG #
    def get_declaration_v_flat(self):
        return super().get_declaration_v_flat() + \
              f"{self.constant_wire.get_declaration_init_v()}"

    # HIERARCHICAL V #
    def get_declaration_v_hier(self):
        return super().get_declaration_v_hier() + \
              f"{self.constant_wire.get_declaration_init_v()}"