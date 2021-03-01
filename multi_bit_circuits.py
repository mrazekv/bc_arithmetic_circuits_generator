from arithmetic_circuits import arithmetic_circuit, signed_adder_circuit, signed_multiplier_circuit
from one_bit_circuits import half_adder, full_adder
from logic_gates import logic_gate, and_gate, nand_gate, or_gate, nor_gate, xor_gate, xnor_gate, not_gate
from wire_components import wire, bus

""" MULTI BIT CIRCUITS """


# ADDERS
class unsigned_ripple_carry_adder(arithmetic_circuit):
    def __init__(self, a: bus, b: bus, prefix: str = "u_rca"):
        super().__init__()
        self.N = max(a.N, b.N)
        # Bus sign extension in case buses have different lengths
        a.bus_extend(N=self.N, prefix=a.prefix)
        b.bus_extend(N=self.N, prefix=b.prefix)
        self.a = a
        self.b = b
        if prefix == "u_rca" or prefix == "s_rca":
            self.prefix = prefix+str(self.N)
        else:
            self.prefix = prefix

        # Output wires for N sum bits and additional cout bit
        self.out = bus("out", self.N+1)

        # Gradual addition of 1-bit adder components
        for input_index in range(self.N):
            # First one is a half adder
            if input_index == 0:
                obj_ha = half_adder(a.get_wire(input_index), b.get_wire(input_index), prefix=self.prefix+"_ha")
                self.add_component(obj_ha)
                self.out.connect(input_index, obj_ha.get_sum_wire())
            # Rest are full adders
            else:
                obj_fa = full_adder(a.get_wire(input_index), b.get_wire(input_index), self.get_previous_component().get_carry_wire(), prefix=self.prefix+"_fa"+str(input_index))
                self.add_component(obj_fa)
                self.out.connect(input_index, obj_fa.get_sum_wire())

                if input_index == (self.N-1):
                    self.out.connect(self.N, obj_fa.get_carry_wire())


class signed_ripple_carry_adder(unsigned_ripple_carry_adder, signed_adder_circuit):
    def __init__(self, a: bus, b: bus, prefix: str = "s_rca"):
        super().__init__(a=a, b=b, prefix=prefix)
        self.c_data_type = "int64_t"

        # Additional XOR gates to ensure correct sign extension in case of sign addition
        sign_xor_1 = xor_gate(self.get_previous_component().a, self.get_previous_component().b, prefix=self.prefix+"_xor_1")
        sign_xor_2 = xor_gate(sign_xor_1.out, self.get_previous_component().get_carry_wire(), prefix=self.prefix+"_xor_2")
        self.add_component(sign_xor_1)
        self.add_component(sign_xor_2)
        self.out.connect(self.N, sign_xor_2.out)


# MULTIPLIERS
class unsigned_array_multiplier(arithmetic_circuit):
    def __init__(self, a: bus, b: bus, prefix: str = "u_arr_mul"):
        super().__init__()
        self.N = max(a.N, b.N)
        # Bus sign extension in case buses have different lengths
        a.bus_extend(N=self.N, prefix=a.prefix)
        b.bus_extend(N=self.N, prefix=b.prefix)
        self.a = a
        self.b = b
        if prefix == "u_arr_mul":
            self.prefix = prefix+str(self.N)
        else:
            self.prefix = prefix

        # Output wires for multiplication product
        self.out = bus("out", self.N*2) if self.N > 1 else bus("out", self.N)

        # Gradual generation of partial products
        for b_multiplier_index in range(self.N):
            for a_multiplicand_index in range(self.N):
                # AND gates generation for calculation of partial products
                obj_and = and_gate(a.get_wire(a_multiplicand_index), b.get_wire(b_multiplier_index), prefix=self.prefix+"_and_"+str(a_multiplicand_index)+"_"+str(b_multiplier_index))
                self.add_component(obj_and)

                if b_multiplier_index != 0:
                    previous_product = self.components[a_multiplicand_index + b_multiplier_index].out if b_multiplier_index == 1 else self.get_previous_partial_product(a_index=a_multiplicand_index, b_index=b_multiplier_index)
                    # HA generation for first 1-bit adder in each row starting from the second one
                    if a_multiplicand_index == 0:
                        obj_adder = half_adder(self.get_previous_component().out, previous_product, prefix=self.prefix+"_ha_"+str(a_multiplicand_index)+"_"+str(b_multiplier_index))
                        self.add_component(obj_adder)
                        # Product generation
                        self.out.connect(b_multiplier_index, obj_adder.get_sum_wire())

                    # HA generation, last 1-bit adder in second row
                    elif a_multiplicand_index == self.N-1 and b_multiplier_index == 1:
                        obj_adder = half_adder(self.get_previous_component().out, self.get_previous_component(number=2).get_carry_wire(), prefix=self.prefix+"_ha_"+str(a_multiplicand_index)+"_"+str(b_multiplier_index))
                        self.add_component(obj_adder)

                    # FA generation
                    else:
                        obj_adder = full_adder(self.get_previous_component().out, previous_product, self.get_previous_component(number=2).get_carry_wire(), prefix=self.prefix+"_fa_"+str(a_multiplicand_index)+"_"+str(b_multiplier_index))
                        self.add_component(obj_adder)

                # PRODUCT GENERATION
                if a_multiplicand_index == 0 and b_multiplier_index == 0:
                    self.out.connect(a_multiplicand_index, obj_and.out)

                elif b_multiplier_index == self.N-1:
                    self.out.connect(b_multiplier_index + a_multiplicand_index, obj_adder.get_sum_wire())

                    if a_multiplicand_index == self.N-1:
                        self.out.connect(self.out.N-1, obj_adder.get_carry_wire())


class signed_array_multiplier(signed_multiplier_circuit):
    def __init__(self, a: bus, b: bus, prefix: str = "s_arr_mul"):
        super().__init__()
        self.c_data_type = "int64_t"
        self.N = max(a.N, b.N)
        # Bus sign extension in case buses have different lengths
        a.bus_extend(N=self.N, prefix=a.prefix)
        b.bus_extend(N=self.N, prefix=b.prefix)
        self.a = a
        self.b = b
        if prefix == "s_arr_mul":
            self.prefix = prefix+str(self.N)
        else:
            self.prefix = prefix

        # TODO CHANGE SIGNED MULTIPLIER CIRCUIT (REPLACE CONSTANT WIRE WITH LOGIC GATES)
        self.constant_wire = wire(name="constant_wire", value=1)

        # Output wires for multiplication product
        self.out = bus("out", self.N*2) if self.N > 1 else bus("out", self.N)

        # Gradual generation of partial products
        for b_multiplier_index in range(self.N):
            for a_multiplicand_index in range(self.N):
                # AND and NAND gates generation for calculation of partial products and sign extension
                if (b_multiplier_index == self.N-1 and a_multiplicand_index != self.N-1) or (b_multiplier_index != self.N-1 and a_multiplicand_index == self.N-1):
                    obj_nand = nand_gate(a.get_wire(a_multiplicand_index), b.get_wire(b_multiplier_index), prefix=self.prefix+"_nand_"+str(a_multiplicand_index)+"_"+str(b_multiplier_index))
                    self.add_component(obj_nand)
                else:
                    obj_and = and_gate(a.get_wire(a_multiplicand_index), b.get_wire(b_multiplier_index), prefix=self.prefix+"_and_"+str(a_multiplicand_index)+"_"+str(b_multiplier_index))
                    self.add_component(obj_and)

                if b_multiplier_index != 0:
                    previous_product = self.components[a_multiplicand_index + b_multiplier_index].out if b_multiplier_index == 1 else self.get_previous_partial_product(a_index=a_multiplicand_index, b_index=b_multiplier_index)
                    # HA generation for first 1-bit adder in each row starting from the second one
                    if a_multiplicand_index == 0:
                        obj_adder = half_adder(self.get_previous_component().out, previous_product, prefix=self.prefix+"_ha_"+str(a_multiplicand_index)+"_"+str(b_multiplier_index))
                        self.add_component(obj_adder)
                        # Product generation
                        self.out.connect(b_multiplier_index, obj_adder.get_sum_wire())

                    # FA generation
                    else:
                        if a_multiplicand_index == self.N-1 and b_multiplier_index == 1:
                            previous_product = self.constant_wire

                        obj_adder = full_adder(self.get_previous_component().out, previous_product, self.get_previous_component(number=2).get_carry_wire(), prefix=self.prefix+"_fa_"+str(a_multiplicand_index)+"_"+str(b_multiplier_index))
                        self.add_component(obj_adder)

                # PRODUCT GENERATION
                if a_multiplicand_index == 0 and b_multiplier_index == 0:
                    self.out.connect(a_multiplicand_index, obj_and.out)

                elif b_multiplier_index == self.N-1:
                    self.out.connect(b_multiplier_index + a_multiplicand_index, obj_adder.get_sum_wire())

                    if a_multiplicand_index == self.N-1:
                        obj_adder = half_adder(self.get_previous_component().get_carry_wire(), self.constant_wire, prefix=self.prefix+"_ha_"+str(a_multiplicand_index+1)+"_"+str(b_multiplier_index))
                        self.add_component(obj_adder)

                        self.out.connect(self.out.N-1, obj_adder.get_sum_wire())