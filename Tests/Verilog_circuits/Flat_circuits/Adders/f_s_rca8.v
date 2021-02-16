module s_rca8(input [7:0] a, input [7:0] b, output [8:0] out);
  wire s_rca8_ha_a_0;
  wire s_rca8_ha_b_0;
  wire s_rca8_ha_y0;
  wire s_rca8_ha_y1;
  wire s_rca8_fa1_a_1;
  wire s_rca8_fa1_b_1;
  wire s_rca8_fa1_y0;
  wire s_rca8_fa1_y1;
  wire s_rca8_fa1_s_rca8_ha_y1;
  wire s_rca8_fa1_y2;
  wire s_rca8_fa1_y3;
  wire s_rca8_fa1_y4;
  wire s_rca8_fa2_a_2;
  wire s_rca8_fa2_b_2;
  wire s_rca8_fa2_y0;
  wire s_rca8_fa2_y1;
  wire s_rca8_fa2_s_rca8_fa1_y4;
  wire s_rca8_fa2_y2;
  wire s_rca8_fa2_y3;
  wire s_rca8_fa2_y4;
  wire s_rca8_fa3_a_3;
  wire s_rca8_fa3_b_3;
  wire s_rca8_fa3_y0;
  wire s_rca8_fa3_y1;
  wire s_rca8_fa3_s_rca8_fa2_y4;
  wire s_rca8_fa3_y2;
  wire s_rca8_fa3_y3;
  wire s_rca8_fa3_y4;
  wire s_rca8_fa4_a_4;
  wire s_rca8_fa4_b_4;
  wire s_rca8_fa4_y0;
  wire s_rca8_fa4_y1;
  wire s_rca8_fa4_s_rca8_fa3_y4;
  wire s_rca8_fa4_y2;
  wire s_rca8_fa4_y3;
  wire s_rca8_fa4_y4;
  wire s_rca8_fa5_a_5;
  wire s_rca8_fa5_b_5;
  wire s_rca8_fa5_y0;
  wire s_rca8_fa5_y1;
  wire s_rca8_fa5_s_rca8_fa4_y4;
  wire s_rca8_fa5_y2;
  wire s_rca8_fa5_y3;
  wire s_rca8_fa5_y4;
  wire s_rca8_fa6_a_6;
  wire s_rca8_fa6_b_6;
  wire s_rca8_fa6_y0;
  wire s_rca8_fa6_y1;
  wire s_rca8_fa6_s_rca8_fa5_y4;
  wire s_rca8_fa6_y2;
  wire s_rca8_fa6_y3;
  wire s_rca8_fa6_y4;
  wire s_rca8_fa7_a_7;
  wire s_rca8_fa7_b_7;
  wire s_rca8_fa7_y0;
  wire s_rca8_fa7_y1;
  wire s_rca8_fa7_s_rca8_fa6_y4;
  wire s_rca8_fa7_y2;
  wire s_rca8_fa7_y3;
  wire s_rca8_fa7_y4;
  wire s_rca8_xor_1_a_7;
  wire s_rca8_xor_1_b_7;
  wire s_rca8_xor_1_y0;
  wire s_rca8_xor_2_s_rca8_xor_1_y0;
  wire s_rca8_xor_2_s_rca8_fa7_y4;
  wire s_rca8_xor_2_y0;

  assign s_rca8_ha_a_0 = a[0];
  assign s_rca8_ha_b_0 = b[0];
  assign s_rca8_ha_y0 = s_rca8_ha_a_0 ^ s_rca8_ha_b_0;
  assign s_rca8_ha_y1 = s_rca8_ha_a_0 & s_rca8_ha_b_0;
  assign s_rca8_fa1_a_1 = a[1];
  assign s_rca8_fa1_b_1 = b[1];
  assign s_rca8_fa1_s_rca8_ha_y1 = s_rca8_ha_y1[1];
  assign s_rca8_fa1_y0 = s_rca8_fa1_a_1 ^ s_rca8_fa1_b_1;
  assign s_rca8_fa1_y1 = s_rca8_fa1_a_1 & s_rca8_fa1_b_1;
  assign s_rca8_fa1_y2 = s_rca8_fa1_y0 ^ s_rca8_fa1_s_rca8_ha_y1;
  assign s_rca8_fa1_y3 = s_rca8_fa1_y0 & s_rca8_fa1_s_rca8_ha_y1;
  assign s_rca8_fa1_y4 = s_rca8_fa1_y1 | s_rca8_fa1_y3;
  assign s_rca8_fa2_a_2 = a[2];
  assign s_rca8_fa2_b_2 = b[2];
  assign s_rca8_fa2_s_rca8_fa1_y4 = s_rca8_fa1_y4[2];
  assign s_rca8_fa2_y0 = s_rca8_fa2_a_2 ^ s_rca8_fa2_b_2;
  assign s_rca8_fa2_y1 = s_rca8_fa2_a_2 & s_rca8_fa2_b_2;
  assign s_rca8_fa2_y2 = s_rca8_fa2_y0 ^ s_rca8_fa2_s_rca8_fa1_y4;
  assign s_rca8_fa2_y3 = s_rca8_fa2_y0 & s_rca8_fa2_s_rca8_fa1_y4;
  assign s_rca8_fa2_y4 = s_rca8_fa2_y1 | s_rca8_fa2_y3;
  assign s_rca8_fa3_a_3 = a[3];
  assign s_rca8_fa3_b_3 = b[3];
  assign s_rca8_fa3_s_rca8_fa2_y4 = s_rca8_fa2_y4[3];
  assign s_rca8_fa3_y0 = s_rca8_fa3_a_3 ^ s_rca8_fa3_b_3;
  assign s_rca8_fa3_y1 = s_rca8_fa3_a_3 & s_rca8_fa3_b_3;
  assign s_rca8_fa3_y2 = s_rca8_fa3_y0 ^ s_rca8_fa3_s_rca8_fa2_y4;
  assign s_rca8_fa3_y3 = s_rca8_fa3_y0 & s_rca8_fa3_s_rca8_fa2_y4;
  assign s_rca8_fa3_y4 = s_rca8_fa3_y1 | s_rca8_fa3_y3;
  assign s_rca8_fa4_a_4 = a[4];
  assign s_rca8_fa4_b_4 = b[4];
  assign s_rca8_fa4_s_rca8_fa3_y4 = s_rca8_fa3_y4[4];
  assign s_rca8_fa4_y0 = s_rca8_fa4_a_4 ^ s_rca8_fa4_b_4;
  assign s_rca8_fa4_y1 = s_rca8_fa4_a_4 & s_rca8_fa4_b_4;
  assign s_rca8_fa4_y2 = s_rca8_fa4_y0 ^ s_rca8_fa4_s_rca8_fa3_y4;
  assign s_rca8_fa4_y3 = s_rca8_fa4_y0 & s_rca8_fa4_s_rca8_fa3_y4;
  assign s_rca8_fa4_y4 = s_rca8_fa4_y1 | s_rca8_fa4_y3;
  assign s_rca8_fa5_a_5 = a[5];
  assign s_rca8_fa5_b_5 = b[5];
  assign s_rca8_fa5_s_rca8_fa4_y4 = s_rca8_fa4_y4[5];
  assign s_rca8_fa5_y0 = s_rca8_fa5_a_5 ^ s_rca8_fa5_b_5;
  assign s_rca8_fa5_y1 = s_rca8_fa5_a_5 & s_rca8_fa5_b_5;
  assign s_rca8_fa5_y2 = s_rca8_fa5_y0 ^ s_rca8_fa5_s_rca8_fa4_y4;
  assign s_rca8_fa5_y3 = s_rca8_fa5_y0 & s_rca8_fa5_s_rca8_fa4_y4;
  assign s_rca8_fa5_y4 = s_rca8_fa5_y1 | s_rca8_fa5_y3;
  assign s_rca8_fa6_a_6 = a[6];
  assign s_rca8_fa6_b_6 = b[6];
  assign s_rca8_fa6_s_rca8_fa5_y4 = s_rca8_fa5_y4[6];
  assign s_rca8_fa6_y0 = s_rca8_fa6_a_6 ^ s_rca8_fa6_b_6;
  assign s_rca8_fa6_y1 = s_rca8_fa6_a_6 & s_rca8_fa6_b_6;
  assign s_rca8_fa6_y2 = s_rca8_fa6_y0 ^ s_rca8_fa6_s_rca8_fa5_y4;
  assign s_rca8_fa6_y3 = s_rca8_fa6_y0 & s_rca8_fa6_s_rca8_fa5_y4;
  assign s_rca8_fa6_y4 = s_rca8_fa6_y1 | s_rca8_fa6_y3;
  assign s_rca8_fa7_a_7 = a[7];
  assign s_rca8_fa7_b_7 = b[7];
  assign s_rca8_fa7_s_rca8_fa6_y4 = s_rca8_fa6_y4[7];
  assign s_rca8_fa7_y0 = s_rca8_fa7_a_7 ^ s_rca8_fa7_b_7;
  assign s_rca8_fa7_y1 = s_rca8_fa7_a_7 & s_rca8_fa7_b_7;
  assign s_rca8_fa7_y2 = s_rca8_fa7_y0 ^ s_rca8_fa7_s_rca8_fa6_y4;
  assign s_rca8_fa7_y3 = s_rca8_fa7_y0 & s_rca8_fa7_s_rca8_fa6_y4;
  assign s_rca8_fa7_y4 = s_rca8_fa7_y1 | s_rca8_fa7_y3;
  assign s_rca8_xor_1_a_7 = a[7];
  assign s_rca8_xor_1_b_7 = b[7];
  assign s_rca8_xor_1_y0 = s_rca8_xor_1_a_7 ^ s_rca8_xor_1_b_7;
  assign s_rca8_xor_2_s_rca8_xor_1_y0 = s_rca8_xor_1_y0;
  assign s_rca8_xor_2_s_rca8_fa7_y4 = s_rca8_fa7_y4;
  assign s_rca8_xor_2_y0 = s_rca8_xor_2_s_rca8_xor_1_y0 ^ s_rca8_xor_2_s_rca8_fa7_y4;

  assign out[0] = s_rca8_ha_y0;
  assign out[1] = s_rca8_fa1_y2;
  assign out[2] = s_rca8_fa2_y2;
  assign out[3] = s_rca8_fa3_y2;
  assign out[4] = s_rca8_fa4_y2;
  assign out[5] = s_rca8_fa5_y2;
  assign out[6] = s_rca8_fa6_y2;
  assign out[7] = s_rca8_fa7_y2;
  assign out[8] = s_rca8_xor_2_y0;
endmodule