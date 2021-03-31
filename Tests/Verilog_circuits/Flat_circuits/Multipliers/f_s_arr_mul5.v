module f_s_arr_mul5(input [4:0] a, input [4:0] b, output [9:0] out);
  wire a_0;
  wire a_1;
  wire a_2;
  wire a_3;
  wire a_4;
  wire b_0;
  wire b_1;
  wire b_2;
  wire b_3;
  wire b_4;
  wire f_s_arr_mul5_xor_constant_wire_a_0;
  wire f_s_arr_mul5_xor_constant_wire_b_0;
  wire f_s_arr_mul5_xor_constant_wire_y0;
  wire f_s_arr_mul5_xnor_constant_wire_a_0;
  wire f_s_arr_mul5_xnor_constant_wire_b_0;
  wire f_s_arr_mul5_xnor_constant_wire_y0;
  wire f_s_arr_mul5_or_constant_wire_f_s_arr_mul5_xor_constant_wire_y0;
  wire f_s_arr_mul5_or_constant_wire_f_s_arr_mul5_xnor_constant_wire_y0;
  wire constant_wire;
  wire f_s_arr_mul5_and_0_0_a_0;
  wire f_s_arr_mul5_and_0_0_b_0;
  wire f_s_arr_mul5_and_0_0_y0;
  wire f_s_arr_mul5_and_1_0_a_1;
  wire f_s_arr_mul5_and_1_0_b_0;
  wire f_s_arr_mul5_and_1_0_y0;
  wire f_s_arr_mul5_and_2_0_a_2;
  wire f_s_arr_mul5_and_2_0_b_0;
  wire f_s_arr_mul5_and_2_0_y0;
  wire f_s_arr_mul5_and_3_0_a_3;
  wire f_s_arr_mul5_and_3_0_b_0;
  wire f_s_arr_mul5_and_3_0_y0;
  wire f_s_arr_mul5_nand_4_0_a_4;
  wire f_s_arr_mul5_nand_4_0_b_0;
  wire f_s_arr_mul5_nand_4_0_y0;
  wire f_s_arr_mul5_and_0_1_a_0;
  wire f_s_arr_mul5_and_0_1_b_1;
  wire f_s_arr_mul5_and_0_1_y0;
  wire f_s_arr_mul5_ha_0_1_f_s_arr_mul5_and_0_1_y0;
  wire f_s_arr_mul5_ha_0_1_f_s_arr_mul5_and_1_0_y0;
  wire f_s_arr_mul5_ha_0_1_y0;
  wire f_s_arr_mul5_ha_0_1_y1;
  wire f_s_arr_mul5_and_1_1_a_1;
  wire f_s_arr_mul5_and_1_1_b_1;
  wire f_s_arr_mul5_and_1_1_y0;
  wire f_s_arr_mul5_fa_1_1_f_s_arr_mul5_and_1_1_y0;
  wire f_s_arr_mul5_fa_1_1_f_s_arr_mul5_and_2_0_y0;
  wire f_s_arr_mul5_fa_1_1_y0;
  wire f_s_arr_mul5_fa_1_1_y1;
  wire f_s_arr_mul5_fa_1_1_f_s_arr_mul5_ha_0_1_y1;
  wire f_s_arr_mul5_fa_1_1_y2;
  wire f_s_arr_mul5_fa_1_1_y3;
  wire f_s_arr_mul5_fa_1_1_y4;
  wire f_s_arr_mul5_and_2_1_a_2;
  wire f_s_arr_mul5_and_2_1_b_1;
  wire f_s_arr_mul5_and_2_1_y0;
  wire f_s_arr_mul5_fa_2_1_f_s_arr_mul5_and_2_1_y0;
  wire f_s_arr_mul5_fa_2_1_f_s_arr_mul5_and_3_0_y0;
  wire f_s_arr_mul5_fa_2_1_y0;
  wire f_s_arr_mul5_fa_2_1_y1;
  wire f_s_arr_mul5_fa_2_1_f_s_arr_mul5_fa_1_1_y4;
  wire f_s_arr_mul5_fa_2_1_y2;
  wire f_s_arr_mul5_fa_2_1_y3;
  wire f_s_arr_mul5_fa_2_1_y4;
  wire f_s_arr_mul5_and_3_1_a_3;
  wire f_s_arr_mul5_and_3_1_b_1;
  wire f_s_arr_mul5_and_3_1_y0;
  wire f_s_arr_mul5_fa_3_1_f_s_arr_mul5_and_3_1_y0;
  wire f_s_arr_mul5_fa_3_1_f_s_arr_mul5_nand_4_0_y0;
  wire f_s_arr_mul5_fa_3_1_y0;
  wire f_s_arr_mul5_fa_3_1_y1;
  wire f_s_arr_mul5_fa_3_1_f_s_arr_mul5_fa_2_1_y4;
  wire f_s_arr_mul5_fa_3_1_y2;
  wire f_s_arr_mul5_fa_3_1_y3;
  wire f_s_arr_mul5_fa_3_1_y4;
  wire f_s_arr_mul5_nand_4_1_a_4;
  wire f_s_arr_mul5_nand_4_1_b_1;
  wire f_s_arr_mul5_nand_4_1_y0;
  wire f_s_arr_mul5_fa_4_1_f_s_arr_mul5_nand_4_1_y0;
  wire f_s_arr_mul5_fa_4_1_constant_wire;
  wire f_s_arr_mul5_fa_4_1_y0;
  wire f_s_arr_mul5_fa_4_1_y1;
  wire f_s_arr_mul5_fa_4_1_f_s_arr_mul5_fa_3_1_y4;
  wire f_s_arr_mul5_fa_4_1_y2;
  wire f_s_arr_mul5_fa_4_1_y3;
  wire f_s_arr_mul5_fa_4_1_y4;
  wire f_s_arr_mul5_and_0_2_a_0;
  wire f_s_arr_mul5_and_0_2_b_2;
  wire f_s_arr_mul5_and_0_2_y0;
  wire f_s_arr_mul5_ha_0_2_f_s_arr_mul5_and_0_2_y0;
  wire f_s_arr_mul5_ha_0_2_f_s_arr_mul5_fa_1_1_y2;
  wire f_s_arr_mul5_ha_0_2_y0;
  wire f_s_arr_mul5_ha_0_2_y1;
  wire f_s_arr_mul5_and_1_2_a_1;
  wire f_s_arr_mul5_and_1_2_b_2;
  wire f_s_arr_mul5_and_1_2_y0;
  wire f_s_arr_mul5_fa_1_2_f_s_arr_mul5_and_1_2_y0;
  wire f_s_arr_mul5_fa_1_2_f_s_arr_mul5_fa_2_1_y2;
  wire f_s_arr_mul5_fa_1_2_y0;
  wire f_s_arr_mul5_fa_1_2_y1;
  wire f_s_arr_mul5_fa_1_2_f_s_arr_mul5_ha_0_2_y1;
  wire f_s_arr_mul5_fa_1_2_y2;
  wire f_s_arr_mul5_fa_1_2_y3;
  wire f_s_arr_mul5_fa_1_2_y4;
  wire f_s_arr_mul5_and_2_2_a_2;
  wire f_s_arr_mul5_and_2_2_b_2;
  wire f_s_arr_mul5_and_2_2_y0;
  wire f_s_arr_mul5_fa_2_2_f_s_arr_mul5_and_2_2_y0;
  wire f_s_arr_mul5_fa_2_2_f_s_arr_mul5_fa_3_1_y2;
  wire f_s_arr_mul5_fa_2_2_y0;
  wire f_s_arr_mul5_fa_2_2_y1;
  wire f_s_arr_mul5_fa_2_2_f_s_arr_mul5_fa_1_2_y4;
  wire f_s_arr_mul5_fa_2_2_y2;
  wire f_s_arr_mul5_fa_2_2_y3;
  wire f_s_arr_mul5_fa_2_2_y4;
  wire f_s_arr_mul5_and_3_2_a_3;
  wire f_s_arr_mul5_and_3_2_b_2;
  wire f_s_arr_mul5_and_3_2_y0;
  wire f_s_arr_mul5_fa_3_2_f_s_arr_mul5_and_3_2_y0;
  wire f_s_arr_mul5_fa_3_2_f_s_arr_mul5_fa_4_1_y2;
  wire f_s_arr_mul5_fa_3_2_y0;
  wire f_s_arr_mul5_fa_3_2_y1;
  wire f_s_arr_mul5_fa_3_2_f_s_arr_mul5_fa_2_2_y4;
  wire f_s_arr_mul5_fa_3_2_y2;
  wire f_s_arr_mul5_fa_3_2_y3;
  wire f_s_arr_mul5_fa_3_2_y4;
  wire f_s_arr_mul5_nand_4_2_a_4;
  wire f_s_arr_mul5_nand_4_2_b_2;
  wire f_s_arr_mul5_nand_4_2_y0;
  wire f_s_arr_mul5_fa_4_2_f_s_arr_mul5_nand_4_2_y0;
  wire f_s_arr_mul5_fa_4_2_f_s_arr_mul5_fa_4_1_y4;
  wire f_s_arr_mul5_fa_4_2_y0;
  wire f_s_arr_mul5_fa_4_2_y1;
  wire f_s_arr_mul5_fa_4_2_f_s_arr_mul5_fa_3_2_y4;
  wire f_s_arr_mul5_fa_4_2_y2;
  wire f_s_arr_mul5_fa_4_2_y3;
  wire f_s_arr_mul5_fa_4_2_y4;
  wire f_s_arr_mul5_and_0_3_a_0;
  wire f_s_arr_mul5_and_0_3_b_3;
  wire f_s_arr_mul5_and_0_3_y0;
  wire f_s_arr_mul5_ha_0_3_f_s_arr_mul5_and_0_3_y0;
  wire f_s_arr_mul5_ha_0_3_f_s_arr_mul5_fa_1_2_y2;
  wire f_s_arr_mul5_ha_0_3_y0;
  wire f_s_arr_mul5_ha_0_3_y1;
  wire f_s_arr_mul5_and_1_3_a_1;
  wire f_s_arr_mul5_and_1_3_b_3;
  wire f_s_arr_mul5_and_1_3_y0;
  wire f_s_arr_mul5_fa_1_3_f_s_arr_mul5_and_1_3_y0;
  wire f_s_arr_mul5_fa_1_3_f_s_arr_mul5_fa_2_2_y2;
  wire f_s_arr_mul5_fa_1_3_y0;
  wire f_s_arr_mul5_fa_1_3_y1;
  wire f_s_arr_mul5_fa_1_3_f_s_arr_mul5_ha_0_3_y1;
  wire f_s_arr_mul5_fa_1_3_y2;
  wire f_s_arr_mul5_fa_1_3_y3;
  wire f_s_arr_mul5_fa_1_3_y4;
  wire f_s_arr_mul5_and_2_3_a_2;
  wire f_s_arr_mul5_and_2_3_b_3;
  wire f_s_arr_mul5_and_2_3_y0;
  wire f_s_arr_mul5_fa_2_3_f_s_arr_mul5_and_2_3_y0;
  wire f_s_arr_mul5_fa_2_3_f_s_arr_mul5_fa_3_2_y2;
  wire f_s_arr_mul5_fa_2_3_y0;
  wire f_s_arr_mul5_fa_2_3_y1;
  wire f_s_arr_mul5_fa_2_3_f_s_arr_mul5_fa_1_3_y4;
  wire f_s_arr_mul5_fa_2_3_y2;
  wire f_s_arr_mul5_fa_2_3_y3;
  wire f_s_arr_mul5_fa_2_3_y4;
  wire f_s_arr_mul5_and_3_3_a_3;
  wire f_s_arr_mul5_and_3_3_b_3;
  wire f_s_arr_mul5_and_3_3_y0;
  wire f_s_arr_mul5_fa_3_3_f_s_arr_mul5_and_3_3_y0;
  wire f_s_arr_mul5_fa_3_3_f_s_arr_mul5_fa_4_2_y2;
  wire f_s_arr_mul5_fa_3_3_y0;
  wire f_s_arr_mul5_fa_3_3_y1;
  wire f_s_arr_mul5_fa_3_3_f_s_arr_mul5_fa_2_3_y4;
  wire f_s_arr_mul5_fa_3_3_y2;
  wire f_s_arr_mul5_fa_3_3_y3;
  wire f_s_arr_mul5_fa_3_3_y4;
  wire f_s_arr_mul5_nand_4_3_a_4;
  wire f_s_arr_mul5_nand_4_3_b_3;
  wire f_s_arr_mul5_nand_4_3_y0;
  wire f_s_arr_mul5_fa_4_3_f_s_arr_mul5_nand_4_3_y0;
  wire f_s_arr_mul5_fa_4_3_f_s_arr_mul5_fa_4_2_y4;
  wire f_s_arr_mul5_fa_4_3_y0;
  wire f_s_arr_mul5_fa_4_3_y1;
  wire f_s_arr_mul5_fa_4_3_f_s_arr_mul5_fa_3_3_y4;
  wire f_s_arr_mul5_fa_4_3_y2;
  wire f_s_arr_mul5_fa_4_3_y3;
  wire f_s_arr_mul5_fa_4_3_y4;
  wire f_s_arr_mul5_nand_0_4_a_0;
  wire f_s_arr_mul5_nand_0_4_b_4;
  wire f_s_arr_mul5_nand_0_4_y0;
  wire f_s_arr_mul5_ha_0_4_f_s_arr_mul5_nand_0_4_y0;
  wire f_s_arr_mul5_ha_0_4_f_s_arr_mul5_fa_1_3_y2;
  wire f_s_arr_mul5_ha_0_4_y0;
  wire f_s_arr_mul5_ha_0_4_y1;
  wire f_s_arr_mul5_nand_1_4_a_1;
  wire f_s_arr_mul5_nand_1_4_b_4;
  wire f_s_arr_mul5_nand_1_4_y0;
  wire f_s_arr_mul5_fa_1_4_f_s_arr_mul5_nand_1_4_y0;
  wire f_s_arr_mul5_fa_1_4_f_s_arr_mul5_fa_2_3_y2;
  wire f_s_arr_mul5_fa_1_4_y0;
  wire f_s_arr_mul5_fa_1_4_y1;
  wire f_s_arr_mul5_fa_1_4_f_s_arr_mul5_ha_0_4_y1;
  wire f_s_arr_mul5_fa_1_4_y2;
  wire f_s_arr_mul5_fa_1_4_y3;
  wire f_s_arr_mul5_fa_1_4_y4;
  wire f_s_arr_mul5_nand_2_4_a_2;
  wire f_s_arr_mul5_nand_2_4_b_4;
  wire f_s_arr_mul5_nand_2_4_y0;
  wire f_s_arr_mul5_fa_2_4_f_s_arr_mul5_nand_2_4_y0;
  wire f_s_arr_mul5_fa_2_4_f_s_arr_mul5_fa_3_3_y2;
  wire f_s_arr_mul5_fa_2_4_y0;
  wire f_s_arr_mul5_fa_2_4_y1;
  wire f_s_arr_mul5_fa_2_4_f_s_arr_mul5_fa_1_4_y4;
  wire f_s_arr_mul5_fa_2_4_y2;
  wire f_s_arr_mul5_fa_2_4_y3;
  wire f_s_arr_mul5_fa_2_4_y4;
  wire f_s_arr_mul5_nand_3_4_a_3;
  wire f_s_arr_mul5_nand_3_4_b_4;
  wire f_s_arr_mul5_nand_3_4_y0;
  wire f_s_arr_mul5_fa_3_4_f_s_arr_mul5_nand_3_4_y0;
  wire f_s_arr_mul5_fa_3_4_f_s_arr_mul5_fa_4_3_y2;
  wire f_s_arr_mul5_fa_3_4_y0;
  wire f_s_arr_mul5_fa_3_4_y1;
  wire f_s_arr_mul5_fa_3_4_f_s_arr_mul5_fa_2_4_y4;
  wire f_s_arr_mul5_fa_3_4_y2;
  wire f_s_arr_mul5_fa_3_4_y3;
  wire f_s_arr_mul5_fa_3_4_y4;
  wire f_s_arr_mul5_and_4_4_a_4;
  wire f_s_arr_mul5_and_4_4_b_4;
  wire f_s_arr_mul5_and_4_4_y0;
  wire f_s_arr_mul5_fa_4_4_f_s_arr_mul5_and_4_4_y0;
  wire f_s_arr_mul5_fa_4_4_f_s_arr_mul5_fa_4_3_y4;
  wire f_s_arr_mul5_fa_4_4_y0;
  wire f_s_arr_mul5_fa_4_4_y1;
  wire f_s_arr_mul5_fa_4_4_f_s_arr_mul5_fa_3_4_y4;
  wire f_s_arr_mul5_fa_4_4_y2;
  wire f_s_arr_mul5_fa_4_4_y3;
  wire f_s_arr_mul5_fa_4_4_y4;
  wire f_s_arr_mul5_xor_5_4_f_s_arr_mul5_fa_4_4_y4;
  wire f_s_arr_mul5_xor_5_4_constant_wire;
  wire f_s_arr_mul5_xor_5_4_y0;

  assign a_0 = a[0];
  assign a_1 = a[1];
  assign a_2 = a[2];
  assign a_3 = a[3];
  assign a_4 = a[4];
  assign b_0 = b[0];
  assign b_1 = b[1];
  assign b_2 = b[2];
  assign b_3 = b[3];
  assign b_4 = b[4];
  assign f_s_arr_mul5_xor_constant_wire_a_0 = a_0;
  assign f_s_arr_mul5_xor_constant_wire_b_0 = b_0;
  assign f_s_arr_mul5_xor_constant_wire_y0 = f_s_arr_mul5_xor_constant_wire_a_0 ^ f_s_arr_mul5_xor_constant_wire_b_0;
  assign f_s_arr_mul5_xnor_constant_wire_a_0 = a_0;
  assign f_s_arr_mul5_xnor_constant_wire_b_0 = b_0;
  assign f_s_arr_mul5_xnor_constant_wire_y0 = ~(f_s_arr_mul5_xnor_constant_wire_a_0 ^ f_s_arr_mul5_xnor_constant_wire_b_0);
  assign f_s_arr_mul5_or_constant_wire_f_s_arr_mul5_xor_constant_wire_y0 = f_s_arr_mul5_xor_constant_wire_y0;
  assign f_s_arr_mul5_or_constant_wire_f_s_arr_mul5_xnor_constant_wire_y0 = f_s_arr_mul5_xnor_constant_wire_y0;
  assign constant_wire = f_s_arr_mul5_or_constant_wire_f_s_arr_mul5_xor_constant_wire_y0 | f_s_arr_mul5_or_constant_wire_f_s_arr_mul5_xnor_constant_wire_y0;
  assign f_s_arr_mul5_and_0_0_a_0 = a_0;
  assign f_s_arr_mul5_and_0_0_b_0 = b_0;
  assign f_s_arr_mul5_and_0_0_y0 = f_s_arr_mul5_and_0_0_a_0 & f_s_arr_mul5_and_0_0_b_0;
  assign f_s_arr_mul5_and_1_0_a_1 = a_1;
  assign f_s_arr_mul5_and_1_0_b_0 = b_0;
  assign f_s_arr_mul5_and_1_0_y0 = f_s_arr_mul5_and_1_0_a_1 & f_s_arr_mul5_and_1_0_b_0;
  assign f_s_arr_mul5_and_2_0_a_2 = a_2;
  assign f_s_arr_mul5_and_2_0_b_0 = b_0;
  assign f_s_arr_mul5_and_2_0_y0 = f_s_arr_mul5_and_2_0_a_2 & f_s_arr_mul5_and_2_0_b_0;
  assign f_s_arr_mul5_and_3_0_a_3 = a_3;
  assign f_s_arr_mul5_and_3_0_b_0 = b_0;
  assign f_s_arr_mul5_and_3_0_y0 = f_s_arr_mul5_and_3_0_a_3 & f_s_arr_mul5_and_3_0_b_0;
  assign f_s_arr_mul5_nand_4_0_a_4 = a_4;
  assign f_s_arr_mul5_nand_4_0_b_0 = b_0;
  assign f_s_arr_mul5_nand_4_0_y0 = ~(f_s_arr_mul5_nand_4_0_a_4 & f_s_arr_mul5_nand_4_0_b_0);
  assign f_s_arr_mul5_and_0_1_a_0 = a_0;
  assign f_s_arr_mul5_and_0_1_b_1 = b_1;
  assign f_s_arr_mul5_and_0_1_y0 = f_s_arr_mul5_and_0_1_a_0 & f_s_arr_mul5_and_0_1_b_1;
  assign f_s_arr_mul5_ha_0_1_f_s_arr_mul5_and_0_1_y0 = f_s_arr_mul5_and_0_1_y0;
  assign f_s_arr_mul5_ha_0_1_f_s_arr_mul5_and_1_0_y0 = f_s_arr_mul5_and_1_0_y0;
  assign f_s_arr_mul5_ha_0_1_y0 = f_s_arr_mul5_ha_0_1_f_s_arr_mul5_and_0_1_y0 ^ f_s_arr_mul5_ha_0_1_f_s_arr_mul5_and_1_0_y0;
  assign f_s_arr_mul5_ha_0_1_y1 = f_s_arr_mul5_ha_0_1_f_s_arr_mul5_and_0_1_y0 & f_s_arr_mul5_ha_0_1_f_s_arr_mul5_and_1_0_y0;
  assign f_s_arr_mul5_and_1_1_a_1 = a_1;
  assign f_s_arr_mul5_and_1_1_b_1 = b_1;
  assign f_s_arr_mul5_and_1_1_y0 = f_s_arr_mul5_and_1_1_a_1 & f_s_arr_mul5_and_1_1_b_1;
  assign f_s_arr_mul5_fa_1_1_f_s_arr_mul5_and_1_1_y0 = f_s_arr_mul5_and_1_1_y0;
  assign f_s_arr_mul5_fa_1_1_f_s_arr_mul5_and_2_0_y0 = f_s_arr_mul5_and_2_0_y0;
  assign f_s_arr_mul5_fa_1_1_f_s_arr_mul5_ha_0_1_y1 = f_s_arr_mul5_ha_0_1_y1;
  assign f_s_arr_mul5_fa_1_1_y0 = f_s_arr_mul5_fa_1_1_f_s_arr_mul5_and_1_1_y0 ^ f_s_arr_mul5_fa_1_1_f_s_arr_mul5_and_2_0_y0;
  assign f_s_arr_mul5_fa_1_1_y1 = f_s_arr_mul5_fa_1_1_f_s_arr_mul5_and_1_1_y0 & f_s_arr_mul5_fa_1_1_f_s_arr_mul5_and_2_0_y0;
  assign f_s_arr_mul5_fa_1_1_y2 = f_s_arr_mul5_fa_1_1_y0 ^ f_s_arr_mul5_fa_1_1_f_s_arr_mul5_ha_0_1_y1;
  assign f_s_arr_mul5_fa_1_1_y3 = f_s_arr_mul5_fa_1_1_y0 & f_s_arr_mul5_fa_1_1_f_s_arr_mul5_ha_0_1_y1;
  assign f_s_arr_mul5_fa_1_1_y4 = f_s_arr_mul5_fa_1_1_y1 | f_s_arr_mul5_fa_1_1_y3;
  assign f_s_arr_mul5_and_2_1_a_2 = a_2;
  assign f_s_arr_mul5_and_2_1_b_1 = b_1;
  assign f_s_arr_mul5_and_2_1_y0 = f_s_arr_mul5_and_2_1_a_2 & f_s_arr_mul5_and_2_1_b_1;
  assign f_s_arr_mul5_fa_2_1_f_s_arr_mul5_and_2_1_y0 = f_s_arr_mul5_and_2_1_y0;
  assign f_s_arr_mul5_fa_2_1_f_s_arr_mul5_and_3_0_y0 = f_s_arr_mul5_and_3_0_y0;
  assign f_s_arr_mul5_fa_2_1_f_s_arr_mul5_fa_1_1_y4 = f_s_arr_mul5_fa_1_1_y4;
  assign f_s_arr_mul5_fa_2_1_y0 = f_s_arr_mul5_fa_2_1_f_s_arr_mul5_and_2_1_y0 ^ f_s_arr_mul5_fa_2_1_f_s_arr_mul5_and_3_0_y0;
  assign f_s_arr_mul5_fa_2_1_y1 = f_s_arr_mul5_fa_2_1_f_s_arr_mul5_and_2_1_y0 & f_s_arr_mul5_fa_2_1_f_s_arr_mul5_and_3_0_y0;
  assign f_s_arr_mul5_fa_2_1_y2 = f_s_arr_mul5_fa_2_1_y0 ^ f_s_arr_mul5_fa_2_1_f_s_arr_mul5_fa_1_1_y4;
  assign f_s_arr_mul5_fa_2_1_y3 = f_s_arr_mul5_fa_2_1_y0 & f_s_arr_mul5_fa_2_1_f_s_arr_mul5_fa_1_1_y4;
  assign f_s_arr_mul5_fa_2_1_y4 = f_s_arr_mul5_fa_2_1_y1 | f_s_arr_mul5_fa_2_1_y3;
  assign f_s_arr_mul5_and_3_1_a_3 = a_3;
  assign f_s_arr_mul5_and_3_1_b_1 = b_1;
  assign f_s_arr_mul5_and_3_1_y0 = f_s_arr_mul5_and_3_1_a_3 & f_s_arr_mul5_and_3_1_b_1;
  assign f_s_arr_mul5_fa_3_1_f_s_arr_mul5_and_3_1_y0 = f_s_arr_mul5_and_3_1_y0;
  assign f_s_arr_mul5_fa_3_1_f_s_arr_mul5_nand_4_0_y0 = f_s_arr_mul5_nand_4_0_y0;
  assign f_s_arr_mul5_fa_3_1_f_s_arr_mul5_fa_2_1_y4 = f_s_arr_mul5_fa_2_1_y4;
  assign f_s_arr_mul5_fa_3_1_y0 = f_s_arr_mul5_fa_3_1_f_s_arr_mul5_and_3_1_y0 ^ f_s_arr_mul5_fa_3_1_f_s_arr_mul5_nand_4_0_y0;
  assign f_s_arr_mul5_fa_3_1_y1 = f_s_arr_mul5_fa_3_1_f_s_arr_mul5_and_3_1_y0 & f_s_arr_mul5_fa_3_1_f_s_arr_mul5_nand_4_0_y0;
  assign f_s_arr_mul5_fa_3_1_y2 = f_s_arr_mul5_fa_3_1_y0 ^ f_s_arr_mul5_fa_3_1_f_s_arr_mul5_fa_2_1_y4;
  assign f_s_arr_mul5_fa_3_1_y3 = f_s_arr_mul5_fa_3_1_y0 & f_s_arr_mul5_fa_3_1_f_s_arr_mul5_fa_2_1_y4;
  assign f_s_arr_mul5_fa_3_1_y4 = f_s_arr_mul5_fa_3_1_y1 | f_s_arr_mul5_fa_3_1_y3;
  assign f_s_arr_mul5_nand_4_1_a_4 = a_4;
  assign f_s_arr_mul5_nand_4_1_b_1 = b_1;
  assign f_s_arr_mul5_nand_4_1_y0 = ~(f_s_arr_mul5_nand_4_1_a_4 & f_s_arr_mul5_nand_4_1_b_1);
  assign f_s_arr_mul5_fa_4_1_f_s_arr_mul5_nand_4_1_y0 = f_s_arr_mul5_nand_4_1_y0;
  assign f_s_arr_mul5_fa_4_1_constant_wire = constant_wire;
  assign f_s_arr_mul5_fa_4_1_f_s_arr_mul5_fa_3_1_y4 = f_s_arr_mul5_fa_3_1_y4;
  assign f_s_arr_mul5_fa_4_1_y0 = f_s_arr_mul5_fa_4_1_f_s_arr_mul5_nand_4_1_y0 ^ f_s_arr_mul5_fa_4_1_constant_wire;
  assign f_s_arr_mul5_fa_4_1_y1 = f_s_arr_mul5_fa_4_1_f_s_arr_mul5_nand_4_1_y0 & f_s_arr_mul5_fa_4_1_constant_wire;
  assign f_s_arr_mul5_fa_4_1_y2 = f_s_arr_mul5_fa_4_1_y0 ^ f_s_arr_mul5_fa_4_1_f_s_arr_mul5_fa_3_1_y4;
  assign f_s_arr_mul5_fa_4_1_y3 = f_s_arr_mul5_fa_4_1_y0 & f_s_arr_mul5_fa_4_1_f_s_arr_mul5_fa_3_1_y4;
  assign f_s_arr_mul5_fa_4_1_y4 = f_s_arr_mul5_fa_4_1_y1 | f_s_arr_mul5_fa_4_1_y3;
  assign f_s_arr_mul5_and_0_2_a_0 = a_0;
  assign f_s_arr_mul5_and_0_2_b_2 = b_2;
  assign f_s_arr_mul5_and_0_2_y0 = f_s_arr_mul5_and_0_2_a_0 & f_s_arr_mul5_and_0_2_b_2;
  assign f_s_arr_mul5_ha_0_2_f_s_arr_mul5_and_0_2_y0 = f_s_arr_mul5_and_0_2_y0;
  assign f_s_arr_mul5_ha_0_2_f_s_arr_mul5_fa_1_1_y2 = f_s_arr_mul5_fa_1_1_y2;
  assign f_s_arr_mul5_ha_0_2_y0 = f_s_arr_mul5_ha_0_2_f_s_arr_mul5_and_0_2_y0 ^ f_s_arr_mul5_ha_0_2_f_s_arr_mul5_fa_1_1_y2;
  assign f_s_arr_mul5_ha_0_2_y1 = f_s_arr_mul5_ha_0_2_f_s_arr_mul5_and_0_2_y0 & f_s_arr_mul5_ha_0_2_f_s_arr_mul5_fa_1_1_y2;
  assign f_s_arr_mul5_and_1_2_a_1 = a_1;
  assign f_s_arr_mul5_and_1_2_b_2 = b_2;
  assign f_s_arr_mul5_and_1_2_y0 = f_s_arr_mul5_and_1_2_a_1 & f_s_arr_mul5_and_1_2_b_2;
  assign f_s_arr_mul5_fa_1_2_f_s_arr_mul5_and_1_2_y0 = f_s_arr_mul5_and_1_2_y0;
  assign f_s_arr_mul5_fa_1_2_f_s_arr_mul5_fa_2_1_y2 = f_s_arr_mul5_fa_2_1_y2;
  assign f_s_arr_mul5_fa_1_2_f_s_arr_mul5_ha_0_2_y1 = f_s_arr_mul5_ha_0_2_y1;
  assign f_s_arr_mul5_fa_1_2_y0 = f_s_arr_mul5_fa_1_2_f_s_arr_mul5_and_1_2_y0 ^ f_s_arr_mul5_fa_1_2_f_s_arr_mul5_fa_2_1_y2;
  assign f_s_arr_mul5_fa_1_2_y1 = f_s_arr_mul5_fa_1_2_f_s_arr_mul5_and_1_2_y0 & f_s_arr_mul5_fa_1_2_f_s_arr_mul5_fa_2_1_y2;
  assign f_s_arr_mul5_fa_1_2_y2 = f_s_arr_mul5_fa_1_2_y0 ^ f_s_arr_mul5_fa_1_2_f_s_arr_mul5_ha_0_2_y1;
  assign f_s_arr_mul5_fa_1_2_y3 = f_s_arr_mul5_fa_1_2_y0 & f_s_arr_mul5_fa_1_2_f_s_arr_mul5_ha_0_2_y1;
  assign f_s_arr_mul5_fa_1_2_y4 = f_s_arr_mul5_fa_1_2_y1 | f_s_arr_mul5_fa_1_2_y3;
  assign f_s_arr_mul5_and_2_2_a_2 = a_2;
  assign f_s_arr_mul5_and_2_2_b_2 = b_2;
  assign f_s_arr_mul5_and_2_2_y0 = f_s_arr_mul5_and_2_2_a_2 & f_s_arr_mul5_and_2_2_b_2;
  assign f_s_arr_mul5_fa_2_2_f_s_arr_mul5_and_2_2_y0 = f_s_arr_mul5_and_2_2_y0;
  assign f_s_arr_mul5_fa_2_2_f_s_arr_mul5_fa_3_1_y2 = f_s_arr_mul5_fa_3_1_y2;
  assign f_s_arr_mul5_fa_2_2_f_s_arr_mul5_fa_1_2_y4 = f_s_arr_mul5_fa_1_2_y4;
  assign f_s_arr_mul5_fa_2_2_y0 = f_s_arr_mul5_fa_2_2_f_s_arr_mul5_and_2_2_y0 ^ f_s_arr_mul5_fa_2_2_f_s_arr_mul5_fa_3_1_y2;
  assign f_s_arr_mul5_fa_2_2_y1 = f_s_arr_mul5_fa_2_2_f_s_arr_mul5_and_2_2_y0 & f_s_arr_mul5_fa_2_2_f_s_arr_mul5_fa_3_1_y2;
  assign f_s_arr_mul5_fa_2_2_y2 = f_s_arr_mul5_fa_2_2_y0 ^ f_s_arr_mul5_fa_2_2_f_s_arr_mul5_fa_1_2_y4;
  assign f_s_arr_mul5_fa_2_2_y3 = f_s_arr_mul5_fa_2_2_y0 & f_s_arr_mul5_fa_2_2_f_s_arr_mul5_fa_1_2_y4;
  assign f_s_arr_mul5_fa_2_2_y4 = f_s_arr_mul5_fa_2_2_y1 | f_s_arr_mul5_fa_2_2_y3;
  assign f_s_arr_mul5_and_3_2_a_3 = a_3;
  assign f_s_arr_mul5_and_3_2_b_2 = b_2;
  assign f_s_arr_mul5_and_3_2_y0 = f_s_arr_mul5_and_3_2_a_3 & f_s_arr_mul5_and_3_2_b_2;
  assign f_s_arr_mul5_fa_3_2_f_s_arr_mul5_and_3_2_y0 = f_s_arr_mul5_and_3_2_y0;
  assign f_s_arr_mul5_fa_3_2_f_s_arr_mul5_fa_4_1_y2 = f_s_arr_mul5_fa_4_1_y2;
  assign f_s_arr_mul5_fa_3_2_f_s_arr_mul5_fa_2_2_y4 = f_s_arr_mul5_fa_2_2_y4;
  assign f_s_arr_mul5_fa_3_2_y0 = f_s_arr_mul5_fa_3_2_f_s_arr_mul5_and_3_2_y0 ^ f_s_arr_mul5_fa_3_2_f_s_arr_mul5_fa_4_1_y2;
  assign f_s_arr_mul5_fa_3_2_y1 = f_s_arr_mul5_fa_3_2_f_s_arr_mul5_and_3_2_y0 & f_s_arr_mul5_fa_3_2_f_s_arr_mul5_fa_4_1_y2;
  assign f_s_arr_mul5_fa_3_2_y2 = f_s_arr_mul5_fa_3_2_y0 ^ f_s_arr_mul5_fa_3_2_f_s_arr_mul5_fa_2_2_y4;
  assign f_s_arr_mul5_fa_3_2_y3 = f_s_arr_mul5_fa_3_2_y0 & f_s_arr_mul5_fa_3_2_f_s_arr_mul5_fa_2_2_y4;
  assign f_s_arr_mul5_fa_3_2_y4 = f_s_arr_mul5_fa_3_2_y1 | f_s_arr_mul5_fa_3_2_y3;
  assign f_s_arr_mul5_nand_4_2_a_4 = a_4;
  assign f_s_arr_mul5_nand_4_2_b_2 = b_2;
  assign f_s_arr_mul5_nand_4_2_y0 = ~(f_s_arr_mul5_nand_4_2_a_4 & f_s_arr_mul5_nand_4_2_b_2);
  assign f_s_arr_mul5_fa_4_2_f_s_arr_mul5_nand_4_2_y0 = f_s_arr_mul5_nand_4_2_y0;
  assign f_s_arr_mul5_fa_4_2_f_s_arr_mul5_fa_4_1_y4 = f_s_arr_mul5_fa_4_1_y4;
  assign f_s_arr_mul5_fa_4_2_f_s_arr_mul5_fa_3_2_y4 = f_s_arr_mul5_fa_3_2_y4;
  assign f_s_arr_mul5_fa_4_2_y0 = f_s_arr_mul5_fa_4_2_f_s_arr_mul5_nand_4_2_y0 ^ f_s_arr_mul5_fa_4_2_f_s_arr_mul5_fa_4_1_y4;
  assign f_s_arr_mul5_fa_4_2_y1 = f_s_arr_mul5_fa_4_2_f_s_arr_mul5_nand_4_2_y0 & f_s_arr_mul5_fa_4_2_f_s_arr_mul5_fa_4_1_y4;
  assign f_s_arr_mul5_fa_4_2_y2 = f_s_arr_mul5_fa_4_2_y0 ^ f_s_arr_mul5_fa_4_2_f_s_arr_mul5_fa_3_2_y4;
  assign f_s_arr_mul5_fa_4_2_y3 = f_s_arr_mul5_fa_4_2_y0 & f_s_arr_mul5_fa_4_2_f_s_arr_mul5_fa_3_2_y4;
  assign f_s_arr_mul5_fa_4_2_y4 = f_s_arr_mul5_fa_4_2_y1 | f_s_arr_mul5_fa_4_2_y3;
  assign f_s_arr_mul5_and_0_3_a_0 = a_0;
  assign f_s_arr_mul5_and_0_3_b_3 = b_3;
  assign f_s_arr_mul5_and_0_3_y0 = f_s_arr_mul5_and_0_3_a_0 & f_s_arr_mul5_and_0_3_b_3;
  assign f_s_arr_mul5_ha_0_3_f_s_arr_mul5_and_0_3_y0 = f_s_arr_mul5_and_0_3_y0;
  assign f_s_arr_mul5_ha_0_3_f_s_arr_mul5_fa_1_2_y2 = f_s_arr_mul5_fa_1_2_y2;
  assign f_s_arr_mul5_ha_0_3_y0 = f_s_arr_mul5_ha_0_3_f_s_arr_mul5_and_0_3_y0 ^ f_s_arr_mul5_ha_0_3_f_s_arr_mul5_fa_1_2_y2;
  assign f_s_arr_mul5_ha_0_3_y1 = f_s_arr_mul5_ha_0_3_f_s_arr_mul5_and_0_3_y0 & f_s_arr_mul5_ha_0_3_f_s_arr_mul5_fa_1_2_y2;
  assign f_s_arr_mul5_and_1_3_a_1 = a_1;
  assign f_s_arr_mul5_and_1_3_b_3 = b_3;
  assign f_s_arr_mul5_and_1_3_y0 = f_s_arr_mul5_and_1_3_a_1 & f_s_arr_mul5_and_1_3_b_3;
  assign f_s_arr_mul5_fa_1_3_f_s_arr_mul5_and_1_3_y0 = f_s_arr_mul5_and_1_3_y0;
  assign f_s_arr_mul5_fa_1_3_f_s_arr_mul5_fa_2_2_y2 = f_s_arr_mul5_fa_2_2_y2;
  assign f_s_arr_mul5_fa_1_3_f_s_arr_mul5_ha_0_3_y1 = f_s_arr_mul5_ha_0_3_y1;
  assign f_s_arr_mul5_fa_1_3_y0 = f_s_arr_mul5_fa_1_3_f_s_arr_mul5_and_1_3_y0 ^ f_s_arr_mul5_fa_1_3_f_s_arr_mul5_fa_2_2_y2;
  assign f_s_arr_mul5_fa_1_3_y1 = f_s_arr_mul5_fa_1_3_f_s_arr_mul5_and_1_3_y0 & f_s_arr_mul5_fa_1_3_f_s_arr_mul5_fa_2_2_y2;
  assign f_s_arr_mul5_fa_1_3_y2 = f_s_arr_mul5_fa_1_3_y0 ^ f_s_arr_mul5_fa_1_3_f_s_arr_mul5_ha_0_3_y1;
  assign f_s_arr_mul5_fa_1_3_y3 = f_s_arr_mul5_fa_1_3_y0 & f_s_arr_mul5_fa_1_3_f_s_arr_mul5_ha_0_3_y1;
  assign f_s_arr_mul5_fa_1_3_y4 = f_s_arr_mul5_fa_1_3_y1 | f_s_arr_mul5_fa_1_3_y3;
  assign f_s_arr_mul5_and_2_3_a_2 = a_2;
  assign f_s_arr_mul5_and_2_3_b_3 = b_3;
  assign f_s_arr_mul5_and_2_3_y0 = f_s_arr_mul5_and_2_3_a_2 & f_s_arr_mul5_and_2_3_b_3;
  assign f_s_arr_mul5_fa_2_3_f_s_arr_mul5_and_2_3_y0 = f_s_arr_mul5_and_2_3_y0;
  assign f_s_arr_mul5_fa_2_3_f_s_arr_mul5_fa_3_2_y2 = f_s_arr_mul5_fa_3_2_y2;
  assign f_s_arr_mul5_fa_2_3_f_s_arr_mul5_fa_1_3_y4 = f_s_arr_mul5_fa_1_3_y4;
  assign f_s_arr_mul5_fa_2_3_y0 = f_s_arr_mul5_fa_2_3_f_s_arr_mul5_and_2_3_y0 ^ f_s_arr_mul5_fa_2_3_f_s_arr_mul5_fa_3_2_y2;
  assign f_s_arr_mul5_fa_2_3_y1 = f_s_arr_mul5_fa_2_3_f_s_arr_mul5_and_2_3_y0 & f_s_arr_mul5_fa_2_3_f_s_arr_mul5_fa_3_2_y2;
  assign f_s_arr_mul5_fa_2_3_y2 = f_s_arr_mul5_fa_2_3_y0 ^ f_s_arr_mul5_fa_2_3_f_s_arr_mul5_fa_1_3_y4;
  assign f_s_arr_mul5_fa_2_3_y3 = f_s_arr_mul5_fa_2_3_y0 & f_s_arr_mul5_fa_2_3_f_s_arr_mul5_fa_1_3_y4;
  assign f_s_arr_mul5_fa_2_3_y4 = f_s_arr_mul5_fa_2_3_y1 | f_s_arr_mul5_fa_2_3_y3;
  assign f_s_arr_mul5_and_3_3_a_3 = a_3;
  assign f_s_arr_mul5_and_3_3_b_3 = b_3;
  assign f_s_arr_mul5_and_3_3_y0 = f_s_arr_mul5_and_3_3_a_3 & f_s_arr_mul5_and_3_3_b_3;
  assign f_s_arr_mul5_fa_3_3_f_s_arr_mul5_and_3_3_y0 = f_s_arr_mul5_and_3_3_y0;
  assign f_s_arr_mul5_fa_3_3_f_s_arr_mul5_fa_4_2_y2 = f_s_arr_mul5_fa_4_2_y2;
  assign f_s_arr_mul5_fa_3_3_f_s_arr_mul5_fa_2_3_y4 = f_s_arr_mul5_fa_2_3_y4;
  assign f_s_arr_mul5_fa_3_3_y0 = f_s_arr_mul5_fa_3_3_f_s_arr_mul5_and_3_3_y0 ^ f_s_arr_mul5_fa_3_3_f_s_arr_mul5_fa_4_2_y2;
  assign f_s_arr_mul5_fa_3_3_y1 = f_s_arr_mul5_fa_3_3_f_s_arr_mul5_and_3_3_y0 & f_s_arr_mul5_fa_3_3_f_s_arr_mul5_fa_4_2_y2;
  assign f_s_arr_mul5_fa_3_3_y2 = f_s_arr_mul5_fa_3_3_y0 ^ f_s_arr_mul5_fa_3_3_f_s_arr_mul5_fa_2_3_y4;
  assign f_s_arr_mul5_fa_3_3_y3 = f_s_arr_mul5_fa_3_3_y0 & f_s_arr_mul5_fa_3_3_f_s_arr_mul5_fa_2_3_y4;
  assign f_s_arr_mul5_fa_3_3_y4 = f_s_arr_mul5_fa_3_3_y1 | f_s_arr_mul5_fa_3_3_y3;
  assign f_s_arr_mul5_nand_4_3_a_4 = a_4;
  assign f_s_arr_mul5_nand_4_3_b_3 = b_3;
  assign f_s_arr_mul5_nand_4_3_y0 = ~(f_s_arr_mul5_nand_4_3_a_4 & f_s_arr_mul5_nand_4_3_b_3);
  assign f_s_arr_mul5_fa_4_3_f_s_arr_mul5_nand_4_3_y0 = f_s_arr_mul5_nand_4_3_y0;
  assign f_s_arr_mul5_fa_4_3_f_s_arr_mul5_fa_4_2_y4 = f_s_arr_mul5_fa_4_2_y4;
  assign f_s_arr_mul5_fa_4_3_f_s_arr_mul5_fa_3_3_y4 = f_s_arr_mul5_fa_3_3_y4;
  assign f_s_arr_mul5_fa_4_3_y0 = f_s_arr_mul5_fa_4_3_f_s_arr_mul5_nand_4_3_y0 ^ f_s_arr_mul5_fa_4_3_f_s_arr_mul5_fa_4_2_y4;
  assign f_s_arr_mul5_fa_4_3_y1 = f_s_arr_mul5_fa_4_3_f_s_arr_mul5_nand_4_3_y0 & f_s_arr_mul5_fa_4_3_f_s_arr_mul5_fa_4_2_y4;
  assign f_s_arr_mul5_fa_4_3_y2 = f_s_arr_mul5_fa_4_3_y0 ^ f_s_arr_mul5_fa_4_3_f_s_arr_mul5_fa_3_3_y4;
  assign f_s_arr_mul5_fa_4_3_y3 = f_s_arr_mul5_fa_4_3_y0 & f_s_arr_mul5_fa_4_3_f_s_arr_mul5_fa_3_3_y4;
  assign f_s_arr_mul5_fa_4_3_y4 = f_s_arr_mul5_fa_4_3_y1 | f_s_arr_mul5_fa_4_3_y3;
  assign f_s_arr_mul5_nand_0_4_a_0 = a_0;
  assign f_s_arr_mul5_nand_0_4_b_4 = b_4;
  assign f_s_arr_mul5_nand_0_4_y0 = ~(f_s_arr_mul5_nand_0_4_a_0 & f_s_arr_mul5_nand_0_4_b_4);
  assign f_s_arr_mul5_ha_0_4_f_s_arr_mul5_nand_0_4_y0 = f_s_arr_mul5_nand_0_4_y0;
  assign f_s_arr_mul5_ha_0_4_f_s_arr_mul5_fa_1_3_y2 = f_s_arr_mul5_fa_1_3_y2;
  assign f_s_arr_mul5_ha_0_4_y0 = f_s_arr_mul5_ha_0_4_f_s_arr_mul5_nand_0_4_y0 ^ f_s_arr_mul5_ha_0_4_f_s_arr_mul5_fa_1_3_y2;
  assign f_s_arr_mul5_ha_0_4_y1 = f_s_arr_mul5_ha_0_4_f_s_arr_mul5_nand_0_4_y0 & f_s_arr_mul5_ha_0_4_f_s_arr_mul5_fa_1_3_y2;
  assign f_s_arr_mul5_nand_1_4_a_1 = a_1;
  assign f_s_arr_mul5_nand_1_4_b_4 = b_4;
  assign f_s_arr_mul5_nand_1_4_y0 = ~(f_s_arr_mul5_nand_1_4_a_1 & f_s_arr_mul5_nand_1_4_b_4);
  assign f_s_arr_mul5_fa_1_4_f_s_arr_mul5_nand_1_4_y0 = f_s_arr_mul5_nand_1_4_y0;
  assign f_s_arr_mul5_fa_1_4_f_s_arr_mul5_fa_2_3_y2 = f_s_arr_mul5_fa_2_3_y2;
  assign f_s_arr_mul5_fa_1_4_f_s_arr_mul5_ha_0_4_y1 = f_s_arr_mul5_ha_0_4_y1;
  assign f_s_arr_mul5_fa_1_4_y0 = f_s_arr_mul5_fa_1_4_f_s_arr_mul5_nand_1_4_y0 ^ f_s_arr_mul5_fa_1_4_f_s_arr_mul5_fa_2_3_y2;
  assign f_s_arr_mul5_fa_1_4_y1 = f_s_arr_mul5_fa_1_4_f_s_arr_mul5_nand_1_4_y0 & f_s_arr_mul5_fa_1_4_f_s_arr_mul5_fa_2_3_y2;
  assign f_s_arr_mul5_fa_1_4_y2 = f_s_arr_mul5_fa_1_4_y0 ^ f_s_arr_mul5_fa_1_4_f_s_arr_mul5_ha_0_4_y1;
  assign f_s_arr_mul5_fa_1_4_y3 = f_s_arr_mul5_fa_1_4_y0 & f_s_arr_mul5_fa_1_4_f_s_arr_mul5_ha_0_4_y1;
  assign f_s_arr_mul5_fa_1_4_y4 = f_s_arr_mul5_fa_1_4_y1 | f_s_arr_mul5_fa_1_4_y3;
  assign f_s_arr_mul5_nand_2_4_a_2 = a_2;
  assign f_s_arr_mul5_nand_2_4_b_4 = b_4;
  assign f_s_arr_mul5_nand_2_4_y0 = ~(f_s_arr_mul5_nand_2_4_a_2 & f_s_arr_mul5_nand_2_4_b_4);
  assign f_s_arr_mul5_fa_2_4_f_s_arr_mul5_nand_2_4_y0 = f_s_arr_mul5_nand_2_4_y0;
  assign f_s_arr_mul5_fa_2_4_f_s_arr_mul5_fa_3_3_y2 = f_s_arr_mul5_fa_3_3_y2;
  assign f_s_arr_mul5_fa_2_4_f_s_arr_mul5_fa_1_4_y4 = f_s_arr_mul5_fa_1_4_y4;
  assign f_s_arr_mul5_fa_2_4_y0 = f_s_arr_mul5_fa_2_4_f_s_arr_mul5_nand_2_4_y0 ^ f_s_arr_mul5_fa_2_4_f_s_arr_mul5_fa_3_3_y2;
  assign f_s_arr_mul5_fa_2_4_y1 = f_s_arr_mul5_fa_2_4_f_s_arr_mul5_nand_2_4_y0 & f_s_arr_mul5_fa_2_4_f_s_arr_mul5_fa_3_3_y2;
  assign f_s_arr_mul5_fa_2_4_y2 = f_s_arr_mul5_fa_2_4_y0 ^ f_s_arr_mul5_fa_2_4_f_s_arr_mul5_fa_1_4_y4;
  assign f_s_arr_mul5_fa_2_4_y3 = f_s_arr_mul5_fa_2_4_y0 & f_s_arr_mul5_fa_2_4_f_s_arr_mul5_fa_1_4_y4;
  assign f_s_arr_mul5_fa_2_4_y4 = f_s_arr_mul5_fa_2_4_y1 | f_s_arr_mul5_fa_2_4_y3;
  assign f_s_arr_mul5_nand_3_4_a_3 = a_3;
  assign f_s_arr_mul5_nand_3_4_b_4 = b_4;
  assign f_s_arr_mul5_nand_3_4_y0 = ~(f_s_arr_mul5_nand_3_4_a_3 & f_s_arr_mul5_nand_3_4_b_4);
  assign f_s_arr_mul5_fa_3_4_f_s_arr_mul5_nand_3_4_y0 = f_s_arr_mul5_nand_3_4_y0;
  assign f_s_arr_mul5_fa_3_4_f_s_arr_mul5_fa_4_3_y2 = f_s_arr_mul5_fa_4_3_y2;
  assign f_s_arr_mul5_fa_3_4_f_s_arr_mul5_fa_2_4_y4 = f_s_arr_mul5_fa_2_4_y4;
  assign f_s_arr_mul5_fa_3_4_y0 = f_s_arr_mul5_fa_3_4_f_s_arr_mul5_nand_3_4_y0 ^ f_s_arr_mul5_fa_3_4_f_s_arr_mul5_fa_4_3_y2;
  assign f_s_arr_mul5_fa_3_4_y1 = f_s_arr_mul5_fa_3_4_f_s_arr_mul5_nand_3_4_y0 & f_s_arr_mul5_fa_3_4_f_s_arr_mul5_fa_4_3_y2;
  assign f_s_arr_mul5_fa_3_4_y2 = f_s_arr_mul5_fa_3_4_y0 ^ f_s_arr_mul5_fa_3_4_f_s_arr_mul5_fa_2_4_y4;
  assign f_s_arr_mul5_fa_3_4_y3 = f_s_arr_mul5_fa_3_4_y0 & f_s_arr_mul5_fa_3_4_f_s_arr_mul5_fa_2_4_y4;
  assign f_s_arr_mul5_fa_3_4_y4 = f_s_arr_mul5_fa_3_4_y1 | f_s_arr_mul5_fa_3_4_y3;
  assign f_s_arr_mul5_and_4_4_a_4 = a_4;
  assign f_s_arr_mul5_and_4_4_b_4 = b_4;
  assign f_s_arr_mul5_and_4_4_y0 = f_s_arr_mul5_and_4_4_a_4 & f_s_arr_mul5_and_4_4_b_4;
  assign f_s_arr_mul5_fa_4_4_f_s_arr_mul5_and_4_4_y0 = f_s_arr_mul5_and_4_4_y0;
  assign f_s_arr_mul5_fa_4_4_f_s_arr_mul5_fa_4_3_y4 = f_s_arr_mul5_fa_4_3_y4;
  assign f_s_arr_mul5_fa_4_4_f_s_arr_mul5_fa_3_4_y4 = f_s_arr_mul5_fa_3_4_y4;
  assign f_s_arr_mul5_fa_4_4_y0 = f_s_arr_mul5_fa_4_4_f_s_arr_mul5_and_4_4_y0 ^ f_s_arr_mul5_fa_4_4_f_s_arr_mul5_fa_4_3_y4;
  assign f_s_arr_mul5_fa_4_4_y1 = f_s_arr_mul5_fa_4_4_f_s_arr_mul5_and_4_4_y0 & f_s_arr_mul5_fa_4_4_f_s_arr_mul5_fa_4_3_y4;
  assign f_s_arr_mul5_fa_4_4_y2 = f_s_arr_mul5_fa_4_4_y0 ^ f_s_arr_mul5_fa_4_4_f_s_arr_mul5_fa_3_4_y4;
  assign f_s_arr_mul5_fa_4_4_y3 = f_s_arr_mul5_fa_4_4_y0 & f_s_arr_mul5_fa_4_4_f_s_arr_mul5_fa_3_4_y4;
  assign f_s_arr_mul5_fa_4_4_y4 = f_s_arr_mul5_fa_4_4_y1 | f_s_arr_mul5_fa_4_4_y3;
  assign f_s_arr_mul5_xor_5_4_f_s_arr_mul5_fa_4_4_y4 = f_s_arr_mul5_fa_4_4_y4;
  assign f_s_arr_mul5_xor_5_4_constant_wire = constant_wire;
  assign f_s_arr_mul5_xor_5_4_y0 = f_s_arr_mul5_xor_5_4_f_s_arr_mul5_fa_4_4_y4 ^ f_s_arr_mul5_xor_5_4_constant_wire;

  assign out[0] = f_s_arr_mul5_and_0_0_y0;
  assign out[1] = f_s_arr_mul5_ha_0_1_y0;
  assign out[2] = f_s_arr_mul5_ha_0_2_y0;
  assign out[3] = f_s_arr_mul5_ha_0_3_y0;
  assign out[4] = f_s_arr_mul5_ha_0_4_y0;
  assign out[5] = f_s_arr_mul5_fa_1_4_y2;
  assign out[6] = f_s_arr_mul5_fa_2_4_y2;
  assign out[7] = f_s_arr_mul5_fa_3_4_y2;
  assign out[8] = f_s_arr_mul5_fa_4_4_y2;
  assign out[9] = f_s_arr_mul5_xor_5_4_y0;
endmodule