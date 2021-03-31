module f_s_arrmul4(input [3:0] a, input [3:0] b, output [7:0] out);
  wire a_0;
  wire a_1;
  wire a_2;
  wire a_3;
  wire b_0;
  wire b_1;
  wire b_2;
  wire b_3;
  wire constant_wire_value_1_a_0;
  wire constant_wire_value_1_b_0;
  wire constant_wire_value_1_y0;
  wire constant_wire_value_1_y1;
  wire constant_wire_1;
  wire f_s_arrmul4_and0_0_a_0;
  wire f_s_arrmul4_and0_0_b_0;
  wire f_s_arrmul4_and0_0_y0;
  wire f_s_arrmul4_and1_0_a_1;
  wire f_s_arrmul4_and1_0_b_0;
  wire f_s_arrmul4_and1_0_y0;
  wire f_s_arrmul4_and2_0_a_2;
  wire f_s_arrmul4_and2_0_b_0;
  wire f_s_arrmul4_and2_0_y0;
  wire f_s_arrmul4_nand3_0_a_3;
  wire f_s_arrmul4_nand3_0_b_0;
  wire f_s_arrmul4_nand3_0_y0;
  wire f_s_arrmul4_and0_1_a_0;
  wire f_s_arrmul4_and0_1_b_1;
  wire f_s_arrmul4_and0_1_y0;
  wire f_s_arrmul4_ha0_1_f_s_arrmul4_and0_1_y0;
  wire f_s_arrmul4_ha0_1_f_s_arrmul4_and1_0_y0;
  wire f_s_arrmul4_ha0_1_y0;
  wire f_s_arrmul4_ha0_1_y1;
  wire f_s_arrmul4_and1_1_a_1;
  wire f_s_arrmul4_and1_1_b_1;
  wire f_s_arrmul4_and1_1_y0;
  wire f_s_arrmul4_fa1_1_f_s_arrmul4_and1_1_y0;
  wire f_s_arrmul4_fa1_1_f_s_arrmul4_and2_0_y0;
  wire f_s_arrmul4_fa1_1_y0;
  wire f_s_arrmul4_fa1_1_y1;
  wire f_s_arrmul4_fa1_1_f_s_arrmul4_ha0_1_y1;
  wire f_s_arrmul4_fa1_1_y2;
  wire f_s_arrmul4_fa1_1_y3;
  wire f_s_arrmul4_fa1_1_y4;
  wire f_s_arrmul4_and2_1_a_2;
  wire f_s_arrmul4_and2_1_b_1;
  wire f_s_arrmul4_and2_1_y0;
  wire f_s_arrmul4_fa2_1_f_s_arrmul4_and2_1_y0;
  wire f_s_arrmul4_fa2_1_f_s_arrmul4_nand3_0_y0;
  wire f_s_arrmul4_fa2_1_y0;
  wire f_s_arrmul4_fa2_1_y1;
  wire f_s_arrmul4_fa2_1_f_s_arrmul4_fa1_1_y4;
  wire f_s_arrmul4_fa2_1_y2;
  wire f_s_arrmul4_fa2_1_y3;
  wire f_s_arrmul4_fa2_1_y4;
  wire f_s_arrmul4_nand3_1_a_3;
  wire f_s_arrmul4_nand3_1_b_1;
  wire f_s_arrmul4_nand3_1_y0;
  wire f_s_arrmul4_fa3_1_f_s_arrmul4_nand3_1_y0;
  wire f_s_arrmul4_fa3_1_constant_wire_1;
  wire f_s_arrmul4_fa3_1_y0;
  wire f_s_arrmul4_fa3_1_y1;
  wire f_s_arrmul4_fa3_1_f_s_arrmul4_fa2_1_y4;
  wire f_s_arrmul4_fa3_1_y2;
  wire f_s_arrmul4_fa3_1_y3;
  wire f_s_arrmul4_fa3_1_y4;
  wire f_s_arrmul4_and0_2_a_0;
  wire f_s_arrmul4_and0_2_b_2;
  wire f_s_arrmul4_and0_2_y0;
  wire f_s_arrmul4_ha0_2_f_s_arrmul4_and0_2_y0;
  wire f_s_arrmul4_ha0_2_f_s_arrmul4_fa1_1_y2;
  wire f_s_arrmul4_ha0_2_y0;
  wire f_s_arrmul4_ha0_2_y1;
  wire f_s_arrmul4_and1_2_a_1;
  wire f_s_arrmul4_and1_2_b_2;
  wire f_s_arrmul4_and1_2_y0;
  wire f_s_arrmul4_fa1_2_f_s_arrmul4_and1_2_y0;
  wire f_s_arrmul4_fa1_2_f_s_arrmul4_fa2_1_y2;
  wire f_s_arrmul4_fa1_2_y0;
  wire f_s_arrmul4_fa1_2_y1;
  wire f_s_arrmul4_fa1_2_f_s_arrmul4_ha0_2_y1;
  wire f_s_arrmul4_fa1_2_y2;
  wire f_s_arrmul4_fa1_2_y3;
  wire f_s_arrmul4_fa1_2_y4;
  wire f_s_arrmul4_and2_2_a_2;
  wire f_s_arrmul4_and2_2_b_2;
  wire f_s_arrmul4_and2_2_y0;
  wire f_s_arrmul4_fa2_2_f_s_arrmul4_and2_2_y0;
  wire f_s_arrmul4_fa2_2_f_s_arrmul4_fa3_1_y2;
  wire f_s_arrmul4_fa2_2_y0;
  wire f_s_arrmul4_fa2_2_y1;
  wire f_s_arrmul4_fa2_2_f_s_arrmul4_fa1_2_y4;
  wire f_s_arrmul4_fa2_2_y2;
  wire f_s_arrmul4_fa2_2_y3;
  wire f_s_arrmul4_fa2_2_y4;
  wire f_s_arrmul4_nand3_2_a_3;
  wire f_s_arrmul4_nand3_2_b_2;
  wire f_s_arrmul4_nand3_2_y0;
  wire f_s_arrmul4_fa3_2_f_s_arrmul4_nand3_2_y0;
  wire f_s_arrmul4_fa3_2_f_s_arrmul4_fa3_1_y4;
  wire f_s_arrmul4_fa3_2_y0;
  wire f_s_arrmul4_fa3_2_y1;
  wire f_s_arrmul4_fa3_2_f_s_arrmul4_fa2_2_y4;
  wire f_s_arrmul4_fa3_2_y2;
  wire f_s_arrmul4_fa3_2_y3;
  wire f_s_arrmul4_fa3_2_y4;
  wire f_s_arrmul4_nand0_3_a_0;
  wire f_s_arrmul4_nand0_3_b_3;
  wire f_s_arrmul4_nand0_3_y0;
  wire f_s_arrmul4_ha0_3_f_s_arrmul4_nand0_3_y0;
  wire f_s_arrmul4_ha0_3_f_s_arrmul4_fa1_2_y2;
  wire f_s_arrmul4_ha0_3_y0;
  wire f_s_arrmul4_ha0_3_y1;
  wire f_s_arrmul4_nand1_3_a_1;
  wire f_s_arrmul4_nand1_3_b_3;
  wire f_s_arrmul4_nand1_3_y0;
  wire f_s_arrmul4_fa1_3_f_s_arrmul4_nand1_3_y0;
  wire f_s_arrmul4_fa1_3_f_s_arrmul4_fa2_2_y2;
  wire f_s_arrmul4_fa1_3_y0;
  wire f_s_arrmul4_fa1_3_y1;
  wire f_s_arrmul4_fa1_3_f_s_arrmul4_ha0_3_y1;
  wire f_s_arrmul4_fa1_3_y2;
  wire f_s_arrmul4_fa1_3_y3;
  wire f_s_arrmul4_fa1_3_y4;
  wire f_s_arrmul4_nand2_3_a_2;
  wire f_s_arrmul4_nand2_3_b_3;
  wire f_s_arrmul4_nand2_3_y0;
  wire f_s_arrmul4_fa2_3_f_s_arrmul4_nand2_3_y0;
  wire f_s_arrmul4_fa2_3_f_s_arrmul4_fa3_2_y2;
  wire f_s_arrmul4_fa2_3_y0;
  wire f_s_arrmul4_fa2_3_y1;
  wire f_s_arrmul4_fa2_3_f_s_arrmul4_fa1_3_y4;
  wire f_s_arrmul4_fa2_3_y2;
  wire f_s_arrmul4_fa2_3_y3;
  wire f_s_arrmul4_fa2_3_y4;
  wire f_s_arrmul4_and3_3_a_3;
  wire f_s_arrmul4_and3_3_b_3;
  wire f_s_arrmul4_and3_3_y0;
  wire f_s_arrmul4_fa3_3_f_s_arrmul4_and3_3_y0;
  wire f_s_arrmul4_fa3_3_f_s_arrmul4_fa3_2_y4;
  wire f_s_arrmul4_fa3_3_y0;
  wire f_s_arrmul4_fa3_3_y1;
  wire f_s_arrmul4_fa3_3_f_s_arrmul4_fa2_3_y4;
  wire f_s_arrmul4_fa3_3_y2;
  wire f_s_arrmul4_fa3_3_y3;
  wire f_s_arrmul4_fa3_3_y4;
  wire f_s_arrmul4_xor4_3_f_s_arrmul4_fa3_3_y4;
  wire f_s_arrmul4_xor4_3_constant_wire_1;
  wire f_s_arrmul4_xor4_3_y0;

  assign a_0 = a[0];
  assign a_1 = a[1];
  assign a_2 = a[2];
  assign a_3 = a[3];
  assign b_0 = b[0];
  assign b_1 = b[1];
  assign b_2 = b[2];
  assign b_3 = b[3];
  assign constant_wire_value_1_a_0 = a_0;
  assign constant_wire_value_1_b_0 = b_0;
  assign constant_wire_value_1_y0 = constant_wire_value_1_a_0 ^ constant_wire_value_1_b_0;
  assign constant_wire_value_1_y1 = ~(constant_wire_value_1_a_0 ^ constant_wire_value_1_b_0);
  assign constant_wire_1 = constant_wire_value_1_y0 | constant_wire_value_1_y1;
  assign f_s_arrmul4_and0_0_a_0 = a_0;
  assign f_s_arrmul4_and0_0_b_0 = b_0;
  assign f_s_arrmul4_and0_0_y0 = f_s_arrmul4_and0_0_a_0 & f_s_arrmul4_and0_0_b_0;
  assign f_s_arrmul4_and1_0_a_1 = a_1;
  assign f_s_arrmul4_and1_0_b_0 = b_0;
  assign f_s_arrmul4_and1_0_y0 = f_s_arrmul4_and1_0_a_1 & f_s_arrmul4_and1_0_b_0;
  assign f_s_arrmul4_and2_0_a_2 = a_2;
  assign f_s_arrmul4_and2_0_b_0 = b_0;
  assign f_s_arrmul4_and2_0_y0 = f_s_arrmul4_and2_0_a_2 & f_s_arrmul4_and2_0_b_0;
  assign f_s_arrmul4_nand3_0_a_3 = a_3;
  assign f_s_arrmul4_nand3_0_b_0 = b_0;
  assign f_s_arrmul4_nand3_0_y0 = ~(f_s_arrmul4_nand3_0_a_3 & f_s_arrmul4_nand3_0_b_0);
  assign f_s_arrmul4_and0_1_a_0 = a_0;
  assign f_s_arrmul4_and0_1_b_1 = b_1;
  assign f_s_arrmul4_and0_1_y0 = f_s_arrmul4_and0_1_a_0 & f_s_arrmul4_and0_1_b_1;
  assign f_s_arrmul4_ha0_1_f_s_arrmul4_and0_1_y0 = f_s_arrmul4_and0_1_y0;
  assign f_s_arrmul4_ha0_1_f_s_arrmul4_and1_0_y0 = f_s_arrmul4_and1_0_y0;
  assign f_s_arrmul4_ha0_1_y0 = f_s_arrmul4_ha0_1_f_s_arrmul4_and0_1_y0 ^ f_s_arrmul4_ha0_1_f_s_arrmul4_and1_0_y0;
  assign f_s_arrmul4_ha0_1_y1 = f_s_arrmul4_ha0_1_f_s_arrmul4_and0_1_y0 & f_s_arrmul4_ha0_1_f_s_arrmul4_and1_0_y0;
  assign f_s_arrmul4_and1_1_a_1 = a_1;
  assign f_s_arrmul4_and1_1_b_1 = b_1;
  assign f_s_arrmul4_and1_1_y0 = f_s_arrmul4_and1_1_a_1 & f_s_arrmul4_and1_1_b_1;
  assign f_s_arrmul4_fa1_1_f_s_arrmul4_and1_1_y0 = f_s_arrmul4_and1_1_y0;
  assign f_s_arrmul4_fa1_1_f_s_arrmul4_and2_0_y0 = f_s_arrmul4_and2_0_y0;
  assign f_s_arrmul4_fa1_1_f_s_arrmul4_ha0_1_y1 = f_s_arrmul4_ha0_1_y1;
  assign f_s_arrmul4_fa1_1_y0 = f_s_arrmul4_fa1_1_f_s_arrmul4_and1_1_y0 ^ f_s_arrmul4_fa1_1_f_s_arrmul4_and2_0_y0;
  assign f_s_arrmul4_fa1_1_y1 = f_s_arrmul4_fa1_1_f_s_arrmul4_and1_1_y0 & f_s_arrmul4_fa1_1_f_s_arrmul4_and2_0_y0;
  assign f_s_arrmul4_fa1_1_y2 = f_s_arrmul4_fa1_1_y0 ^ f_s_arrmul4_fa1_1_f_s_arrmul4_ha0_1_y1;
  assign f_s_arrmul4_fa1_1_y3 = f_s_arrmul4_fa1_1_y0 & f_s_arrmul4_fa1_1_f_s_arrmul4_ha0_1_y1;
  assign f_s_arrmul4_fa1_1_y4 = f_s_arrmul4_fa1_1_y1 | f_s_arrmul4_fa1_1_y3;
  assign f_s_arrmul4_and2_1_a_2 = a_2;
  assign f_s_arrmul4_and2_1_b_1 = b_1;
  assign f_s_arrmul4_and2_1_y0 = f_s_arrmul4_and2_1_a_2 & f_s_arrmul4_and2_1_b_1;
  assign f_s_arrmul4_fa2_1_f_s_arrmul4_and2_1_y0 = f_s_arrmul4_and2_1_y0;
  assign f_s_arrmul4_fa2_1_f_s_arrmul4_nand3_0_y0 = f_s_arrmul4_nand3_0_y0;
  assign f_s_arrmul4_fa2_1_f_s_arrmul4_fa1_1_y4 = f_s_arrmul4_fa1_1_y4;
  assign f_s_arrmul4_fa2_1_y0 = f_s_arrmul4_fa2_1_f_s_arrmul4_and2_1_y0 ^ f_s_arrmul4_fa2_1_f_s_arrmul4_nand3_0_y0;
  assign f_s_arrmul4_fa2_1_y1 = f_s_arrmul4_fa2_1_f_s_arrmul4_and2_1_y0 & f_s_arrmul4_fa2_1_f_s_arrmul4_nand3_0_y0;
  assign f_s_arrmul4_fa2_1_y2 = f_s_arrmul4_fa2_1_y0 ^ f_s_arrmul4_fa2_1_f_s_arrmul4_fa1_1_y4;
  assign f_s_arrmul4_fa2_1_y3 = f_s_arrmul4_fa2_1_y0 & f_s_arrmul4_fa2_1_f_s_arrmul4_fa1_1_y4;
  assign f_s_arrmul4_fa2_1_y4 = f_s_arrmul4_fa2_1_y1 | f_s_arrmul4_fa2_1_y3;
  assign f_s_arrmul4_nand3_1_a_3 = a_3;
  assign f_s_arrmul4_nand3_1_b_1 = b_1;
  assign f_s_arrmul4_nand3_1_y0 = ~(f_s_arrmul4_nand3_1_a_3 & f_s_arrmul4_nand3_1_b_1);
  assign f_s_arrmul4_fa3_1_f_s_arrmul4_nand3_1_y0 = f_s_arrmul4_nand3_1_y0;
  assign f_s_arrmul4_fa3_1_constant_wire_1 = constant_wire_1;
  assign f_s_arrmul4_fa3_1_f_s_arrmul4_fa2_1_y4 = f_s_arrmul4_fa2_1_y4;
  assign f_s_arrmul4_fa3_1_y0 = f_s_arrmul4_fa3_1_f_s_arrmul4_nand3_1_y0 ^ f_s_arrmul4_fa3_1_constant_wire_1;
  assign f_s_arrmul4_fa3_1_y1 = f_s_arrmul4_fa3_1_f_s_arrmul4_nand3_1_y0 & f_s_arrmul4_fa3_1_constant_wire_1;
  assign f_s_arrmul4_fa3_1_y2 = f_s_arrmul4_fa3_1_y0 ^ f_s_arrmul4_fa3_1_f_s_arrmul4_fa2_1_y4;
  assign f_s_arrmul4_fa3_1_y3 = f_s_arrmul4_fa3_1_y0 & f_s_arrmul4_fa3_1_f_s_arrmul4_fa2_1_y4;
  assign f_s_arrmul4_fa3_1_y4 = f_s_arrmul4_fa3_1_y1 | f_s_arrmul4_fa3_1_y3;
  assign f_s_arrmul4_and0_2_a_0 = a_0;
  assign f_s_arrmul4_and0_2_b_2 = b_2;
  assign f_s_arrmul4_and0_2_y0 = f_s_arrmul4_and0_2_a_0 & f_s_arrmul4_and0_2_b_2;
  assign f_s_arrmul4_ha0_2_f_s_arrmul4_and0_2_y0 = f_s_arrmul4_and0_2_y0;
  assign f_s_arrmul4_ha0_2_f_s_arrmul4_fa1_1_y2 = f_s_arrmul4_fa1_1_y2;
  assign f_s_arrmul4_ha0_2_y0 = f_s_arrmul4_ha0_2_f_s_arrmul4_and0_2_y0 ^ f_s_arrmul4_ha0_2_f_s_arrmul4_fa1_1_y2;
  assign f_s_arrmul4_ha0_2_y1 = f_s_arrmul4_ha0_2_f_s_arrmul4_and0_2_y0 & f_s_arrmul4_ha0_2_f_s_arrmul4_fa1_1_y2;
  assign f_s_arrmul4_and1_2_a_1 = a_1;
  assign f_s_arrmul4_and1_2_b_2 = b_2;
  assign f_s_arrmul4_and1_2_y0 = f_s_arrmul4_and1_2_a_1 & f_s_arrmul4_and1_2_b_2;
  assign f_s_arrmul4_fa1_2_f_s_arrmul4_and1_2_y0 = f_s_arrmul4_and1_2_y0;
  assign f_s_arrmul4_fa1_2_f_s_arrmul4_fa2_1_y2 = f_s_arrmul4_fa2_1_y2;
  assign f_s_arrmul4_fa1_2_f_s_arrmul4_ha0_2_y1 = f_s_arrmul4_ha0_2_y1;
  assign f_s_arrmul4_fa1_2_y0 = f_s_arrmul4_fa1_2_f_s_arrmul4_and1_2_y0 ^ f_s_arrmul4_fa1_2_f_s_arrmul4_fa2_1_y2;
  assign f_s_arrmul4_fa1_2_y1 = f_s_arrmul4_fa1_2_f_s_arrmul4_and1_2_y0 & f_s_arrmul4_fa1_2_f_s_arrmul4_fa2_1_y2;
  assign f_s_arrmul4_fa1_2_y2 = f_s_arrmul4_fa1_2_y0 ^ f_s_arrmul4_fa1_2_f_s_arrmul4_ha0_2_y1;
  assign f_s_arrmul4_fa1_2_y3 = f_s_arrmul4_fa1_2_y0 & f_s_arrmul4_fa1_2_f_s_arrmul4_ha0_2_y1;
  assign f_s_arrmul4_fa1_2_y4 = f_s_arrmul4_fa1_2_y1 | f_s_arrmul4_fa1_2_y3;
  assign f_s_arrmul4_and2_2_a_2 = a_2;
  assign f_s_arrmul4_and2_2_b_2 = b_2;
  assign f_s_arrmul4_and2_2_y0 = f_s_arrmul4_and2_2_a_2 & f_s_arrmul4_and2_2_b_2;
  assign f_s_arrmul4_fa2_2_f_s_arrmul4_and2_2_y0 = f_s_arrmul4_and2_2_y0;
  assign f_s_arrmul4_fa2_2_f_s_arrmul4_fa3_1_y2 = f_s_arrmul4_fa3_1_y2;
  assign f_s_arrmul4_fa2_2_f_s_arrmul4_fa1_2_y4 = f_s_arrmul4_fa1_2_y4;
  assign f_s_arrmul4_fa2_2_y0 = f_s_arrmul4_fa2_2_f_s_arrmul4_and2_2_y0 ^ f_s_arrmul4_fa2_2_f_s_arrmul4_fa3_1_y2;
  assign f_s_arrmul4_fa2_2_y1 = f_s_arrmul4_fa2_2_f_s_arrmul4_and2_2_y0 & f_s_arrmul4_fa2_2_f_s_arrmul4_fa3_1_y2;
  assign f_s_arrmul4_fa2_2_y2 = f_s_arrmul4_fa2_2_y0 ^ f_s_arrmul4_fa2_2_f_s_arrmul4_fa1_2_y4;
  assign f_s_arrmul4_fa2_2_y3 = f_s_arrmul4_fa2_2_y0 & f_s_arrmul4_fa2_2_f_s_arrmul4_fa1_2_y4;
  assign f_s_arrmul4_fa2_2_y4 = f_s_arrmul4_fa2_2_y1 | f_s_arrmul4_fa2_2_y3;
  assign f_s_arrmul4_nand3_2_a_3 = a_3;
  assign f_s_arrmul4_nand3_2_b_2 = b_2;
  assign f_s_arrmul4_nand3_2_y0 = ~(f_s_arrmul4_nand3_2_a_3 & f_s_arrmul4_nand3_2_b_2);
  assign f_s_arrmul4_fa3_2_f_s_arrmul4_nand3_2_y0 = f_s_arrmul4_nand3_2_y0;
  assign f_s_arrmul4_fa3_2_f_s_arrmul4_fa3_1_y4 = f_s_arrmul4_fa3_1_y4;
  assign f_s_arrmul4_fa3_2_f_s_arrmul4_fa2_2_y4 = f_s_arrmul4_fa2_2_y4;
  assign f_s_arrmul4_fa3_2_y0 = f_s_arrmul4_fa3_2_f_s_arrmul4_nand3_2_y0 ^ f_s_arrmul4_fa3_2_f_s_arrmul4_fa3_1_y4;
  assign f_s_arrmul4_fa3_2_y1 = f_s_arrmul4_fa3_2_f_s_arrmul4_nand3_2_y0 & f_s_arrmul4_fa3_2_f_s_arrmul4_fa3_1_y4;
  assign f_s_arrmul4_fa3_2_y2 = f_s_arrmul4_fa3_2_y0 ^ f_s_arrmul4_fa3_2_f_s_arrmul4_fa2_2_y4;
  assign f_s_arrmul4_fa3_2_y3 = f_s_arrmul4_fa3_2_y0 & f_s_arrmul4_fa3_2_f_s_arrmul4_fa2_2_y4;
  assign f_s_arrmul4_fa3_2_y4 = f_s_arrmul4_fa3_2_y1 | f_s_arrmul4_fa3_2_y3;
  assign f_s_arrmul4_nand0_3_a_0 = a_0;
  assign f_s_arrmul4_nand0_3_b_3 = b_3;
  assign f_s_arrmul4_nand0_3_y0 = ~(f_s_arrmul4_nand0_3_a_0 & f_s_arrmul4_nand0_3_b_3);
  assign f_s_arrmul4_ha0_3_f_s_arrmul4_nand0_3_y0 = f_s_arrmul4_nand0_3_y0;
  assign f_s_arrmul4_ha0_3_f_s_arrmul4_fa1_2_y2 = f_s_arrmul4_fa1_2_y2;
  assign f_s_arrmul4_ha0_3_y0 = f_s_arrmul4_ha0_3_f_s_arrmul4_nand0_3_y0 ^ f_s_arrmul4_ha0_3_f_s_arrmul4_fa1_2_y2;
  assign f_s_arrmul4_ha0_3_y1 = f_s_arrmul4_ha0_3_f_s_arrmul4_nand0_3_y0 & f_s_arrmul4_ha0_3_f_s_arrmul4_fa1_2_y2;
  assign f_s_arrmul4_nand1_3_a_1 = a_1;
  assign f_s_arrmul4_nand1_3_b_3 = b_3;
  assign f_s_arrmul4_nand1_3_y0 = ~(f_s_arrmul4_nand1_3_a_1 & f_s_arrmul4_nand1_3_b_3);
  assign f_s_arrmul4_fa1_3_f_s_arrmul4_nand1_3_y0 = f_s_arrmul4_nand1_3_y0;
  assign f_s_arrmul4_fa1_3_f_s_arrmul4_fa2_2_y2 = f_s_arrmul4_fa2_2_y2;
  assign f_s_arrmul4_fa1_3_f_s_arrmul4_ha0_3_y1 = f_s_arrmul4_ha0_3_y1;
  assign f_s_arrmul4_fa1_3_y0 = f_s_arrmul4_fa1_3_f_s_arrmul4_nand1_3_y0 ^ f_s_arrmul4_fa1_3_f_s_arrmul4_fa2_2_y2;
  assign f_s_arrmul4_fa1_3_y1 = f_s_arrmul4_fa1_3_f_s_arrmul4_nand1_3_y0 & f_s_arrmul4_fa1_3_f_s_arrmul4_fa2_2_y2;
  assign f_s_arrmul4_fa1_3_y2 = f_s_arrmul4_fa1_3_y0 ^ f_s_arrmul4_fa1_3_f_s_arrmul4_ha0_3_y1;
  assign f_s_arrmul4_fa1_3_y3 = f_s_arrmul4_fa1_3_y0 & f_s_arrmul4_fa1_3_f_s_arrmul4_ha0_3_y1;
  assign f_s_arrmul4_fa1_3_y4 = f_s_arrmul4_fa1_3_y1 | f_s_arrmul4_fa1_3_y3;
  assign f_s_arrmul4_nand2_3_a_2 = a_2;
  assign f_s_arrmul4_nand2_3_b_3 = b_3;
  assign f_s_arrmul4_nand2_3_y0 = ~(f_s_arrmul4_nand2_3_a_2 & f_s_arrmul4_nand2_3_b_3);
  assign f_s_arrmul4_fa2_3_f_s_arrmul4_nand2_3_y0 = f_s_arrmul4_nand2_3_y0;
  assign f_s_arrmul4_fa2_3_f_s_arrmul4_fa3_2_y2 = f_s_arrmul4_fa3_2_y2;
  assign f_s_arrmul4_fa2_3_f_s_arrmul4_fa1_3_y4 = f_s_arrmul4_fa1_3_y4;
  assign f_s_arrmul4_fa2_3_y0 = f_s_arrmul4_fa2_3_f_s_arrmul4_nand2_3_y0 ^ f_s_arrmul4_fa2_3_f_s_arrmul4_fa3_2_y2;
  assign f_s_arrmul4_fa2_3_y1 = f_s_arrmul4_fa2_3_f_s_arrmul4_nand2_3_y0 & f_s_arrmul4_fa2_3_f_s_arrmul4_fa3_2_y2;
  assign f_s_arrmul4_fa2_3_y2 = f_s_arrmul4_fa2_3_y0 ^ f_s_arrmul4_fa2_3_f_s_arrmul4_fa1_3_y4;
  assign f_s_arrmul4_fa2_3_y3 = f_s_arrmul4_fa2_3_y0 & f_s_arrmul4_fa2_3_f_s_arrmul4_fa1_3_y4;
  assign f_s_arrmul4_fa2_3_y4 = f_s_arrmul4_fa2_3_y1 | f_s_arrmul4_fa2_3_y3;
  assign f_s_arrmul4_and3_3_a_3 = a_3;
  assign f_s_arrmul4_and3_3_b_3 = b_3;
  assign f_s_arrmul4_and3_3_y0 = f_s_arrmul4_and3_3_a_3 & f_s_arrmul4_and3_3_b_3;
  assign f_s_arrmul4_fa3_3_f_s_arrmul4_and3_3_y0 = f_s_arrmul4_and3_3_y0;
  assign f_s_arrmul4_fa3_3_f_s_arrmul4_fa3_2_y4 = f_s_arrmul4_fa3_2_y4;
  assign f_s_arrmul4_fa3_3_f_s_arrmul4_fa2_3_y4 = f_s_arrmul4_fa2_3_y4;
  assign f_s_arrmul4_fa3_3_y0 = f_s_arrmul4_fa3_3_f_s_arrmul4_and3_3_y0 ^ f_s_arrmul4_fa3_3_f_s_arrmul4_fa3_2_y4;
  assign f_s_arrmul4_fa3_3_y1 = f_s_arrmul4_fa3_3_f_s_arrmul4_and3_3_y0 & f_s_arrmul4_fa3_3_f_s_arrmul4_fa3_2_y4;
  assign f_s_arrmul4_fa3_3_y2 = f_s_arrmul4_fa3_3_y0 ^ f_s_arrmul4_fa3_3_f_s_arrmul4_fa2_3_y4;
  assign f_s_arrmul4_fa3_3_y3 = f_s_arrmul4_fa3_3_y0 & f_s_arrmul4_fa3_3_f_s_arrmul4_fa2_3_y4;
  assign f_s_arrmul4_fa3_3_y4 = f_s_arrmul4_fa3_3_y1 | f_s_arrmul4_fa3_3_y3;
  assign f_s_arrmul4_xor4_3_f_s_arrmul4_fa3_3_y4 = f_s_arrmul4_fa3_3_y4;
  assign f_s_arrmul4_xor4_3_constant_wire_1 = constant_wire_1;
  assign f_s_arrmul4_xor4_3_y0 = f_s_arrmul4_xor4_3_f_s_arrmul4_fa3_3_y4 ^ f_s_arrmul4_xor4_3_constant_wire_1;

  assign out[0] = f_s_arrmul4_and0_0_y0;
  assign out[1] = f_s_arrmul4_ha0_1_y0;
  assign out[2] = f_s_arrmul4_ha0_2_y0;
  assign out[3] = f_s_arrmul4_ha0_3_y0;
  assign out[4] = f_s_arrmul4_fa1_3_y2;
  assign out[5] = f_s_arrmul4_fa2_3_y2;
  assign out[6] = f_s_arrmul4_fa3_3_y2;
  assign out[7] = f_s_arrmul4_xor4_3_y0;
endmodule