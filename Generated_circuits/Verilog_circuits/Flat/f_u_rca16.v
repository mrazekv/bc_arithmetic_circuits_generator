module f_u_rca16(input [15:0] a, input [15:0] b, output [16:0] out);
  wire a_0;
  wire a_1;
  wire a_2;
  wire a_3;
  wire a_4;
  wire a_5;
  wire a_6;
  wire a_7;
  wire a_8;
  wire a_9;
  wire a_10;
  wire a_11;
  wire a_12;
  wire a_13;
  wire a_14;
  wire a_15;
  wire b_0;
  wire b_1;
  wire b_2;
  wire b_3;
  wire b_4;
  wire b_5;
  wire b_6;
  wire b_7;
  wire b_8;
  wire b_9;
  wire b_10;
  wire b_11;
  wire b_12;
  wire b_13;
  wire b_14;
  wire b_15;
  wire f_u_rca16_ha_a_0;
  wire f_u_rca16_ha_b_0;
  wire f_u_rca16_ha_y0;
  wire f_u_rca16_ha_y1;
  wire f_u_rca16_fa1_a_1;
  wire f_u_rca16_fa1_b_1;
  wire f_u_rca16_fa1_y0;
  wire f_u_rca16_fa1_y1;
  wire f_u_rca16_fa1_f_u_rca16_ha_y1;
  wire f_u_rca16_fa1_y2;
  wire f_u_rca16_fa1_y3;
  wire f_u_rca16_fa1_y4;
  wire f_u_rca16_fa2_a_2;
  wire f_u_rca16_fa2_b_2;
  wire f_u_rca16_fa2_y0;
  wire f_u_rca16_fa2_y1;
  wire f_u_rca16_fa2_f_u_rca16_fa1_y4;
  wire f_u_rca16_fa2_y2;
  wire f_u_rca16_fa2_y3;
  wire f_u_rca16_fa2_y4;
  wire f_u_rca16_fa3_a_3;
  wire f_u_rca16_fa3_b_3;
  wire f_u_rca16_fa3_y0;
  wire f_u_rca16_fa3_y1;
  wire f_u_rca16_fa3_f_u_rca16_fa2_y4;
  wire f_u_rca16_fa3_y2;
  wire f_u_rca16_fa3_y3;
  wire f_u_rca16_fa3_y4;
  wire f_u_rca16_fa4_a_4;
  wire f_u_rca16_fa4_b_4;
  wire f_u_rca16_fa4_y0;
  wire f_u_rca16_fa4_y1;
  wire f_u_rca16_fa4_f_u_rca16_fa3_y4;
  wire f_u_rca16_fa4_y2;
  wire f_u_rca16_fa4_y3;
  wire f_u_rca16_fa4_y4;
  wire f_u_rca16_fa5_a_5;
  wire f_u_rca16_fa5_b_5;
  wire f_u_rca16_fa5_y0;
  wire f_u_rca16_fa5_y1;
  wire f_u_rca16_fa5_f_u_rca16_fa4_y4;
  wire f_u_rca16_fa5_y2;
  wire f_u_rca16_fa5_y3;
  wire f_u_rca16_fa5_y4;
  wire f_u_rca16_fa6_a_6;
  wire f_u_rca16_fa6_b_6;
  wire f_u_rca16_fa6_y0;
  wire f_u_rca16_fa6_y1;
  wire f_u_rca16_fa6_f_u_rca16_fa5_y4;
  wire f_u_rca16_fa6_y2;
  wire f_u_rca16_fa6_y3;
  wire f_u_rca16_fa6_y4;
  wire f_u_rca16_fa7_a_7;
  wire f_u_rca16_fa7_b_7;
  wire f_u_rca16_fa7_y0;
  wire f_u_rca16_fa7_y1;
  wire f_u_rca16_fa7_f_u_rca16_fa6_y4;
  wire f_u_rca16_fa7_y2;
  wire f_u_rca16_fa7_y3;
  wire f_u_rca16_fa7_y4;
  wire f_u_rca16_fa8_a_8;
  wire f_u_rca16_fa8_b_8;
  wire f_u_rca16_fa8_y0;
  wire f_u_rca16_fa8_y1;
  wire f_u_rca16_fa8_f_u_rca16_fa7_y4;
  wire f_u_rca16_fa8_y2;
  wire f_u_rca16_fa8_y3;
  wire f_u_rca16_fa8_y4;
  wire f_u_rca16_fa9_a_9;
  wire f_u_rca16_fa9_b_9;
  wire f_u_rca16_fa9_y0;
  wire f_u_rca16_fa9_y1;
  wire f_u_rca16_fa9_f_u_rca16_fa8_y4;
  wire f_u_rca16_fa9_y2;
  wire f_u_rca16_fa9_y3;
  wire f_u_rca16_fa9_y4;
  wire f_u_rca16_fa10_a_10;
  wire f_u_rca16_fa10_b_10;
  wire f_u_rca16_fa10_y0;
  wire f_u_rca16_fa10_y1;
  wire f_u_rca16_fa10_f_u_rca16_fa9_y4;
  wire f_u_rca16_fa10_y2;
  wire f_u_rca16_fa10_y3;
  wire f_u_rca16_fa10_y4;
  wire f_u_rca16_fa11_a_11;
  wire f_u_rca16_fa11_b_11;
  wire f_u_rca16_fa11_y0;
  wire f_u_rca16_fa11_y1;
  wire f_u_rca16_fa11_f_u_rca16_fa10_y4;
  wire f_u_rca16_fa11_y2;
  wire f_u_rca16_fa11_y3;
  wire f_u_rca16_fa11_y4;
  wire f_u_rca16_fa12_a_12;
  wire f_u_rca16_fa12_b_12;
  wire f_u_rca16_fa12_y0;
  wire f_u_rca16_fa12_y1;
  wire f_u_rca16_fa12_f_u_rca16_fa11_y4;
  wire f_u_rca16_fa12_y2;
  wire f_u_rca16_fa12_y3;
  wire f_u_rca16_fa12_y4;
  wire f_u_rca16_fa13_a_13;
  wire f_u_rca16_fa13_b_13;
  wire f_u_rca16_fa13_y0;
  wire f_u_rca16_fa13_y1;
  wire f_u_rca16_fa13_f_u_rca16_fa12_y4;
  wire f_u_rca16_fa13_y2;
  wire f_u_rca16_fa13_y3;
  wire f_u_rca16_fa13_y4;
  wire f_u_rca16_fa14_a_14;
  wire f_u_rca16_fa14_b_14;
  wire f_u_rca16_fa14_y0;
  wire f_u_rca16_fa14_y1;
  wire f_u_rca16_fa14_f_u_rca16_fa13_y4;
  wire f_u_rca16_fa14_y2;
  wire f_u_rca16_fa14_y3;
  wire f_u_rca16_fa14_y4;
  wire f_u_rca16_fa15_a_15;
  wire f_u_rca16_fa15_b_15;
  wire f_u_rca16_fa15_y0;
  wire f_u_rca16_fa15_y1;
  wire f_u_rca16_fa15_f_u_rca16_fa14_y4;
  wire f_u_rca16_fa15_y2;
  wire f_u_rca16_fa15_y3;
  wire f_u_rca16_fa15_y4;

  assign a_0 = a[0];
  assign a_1 = a[1];
  assign a_2 = a[2];
  assign a_3 = a[3];
  assign a_4 = a[4];
  assign a_5 = a[5];
  assign a_6 = a[6];
  assign a_7 = a[7];
  assign a_8 = a[8];
  assign a_9 = a[9];
  assign a_10 = a[10];
  assign a_11 = a[11];
  assign a_12 = a[12];
  assign a_13 = a[13];
  assign a_14 = a[14];
  assign a_15 = a[15];
  assign b_0 = b[0];
  assign b_1 = b[1];
  assign b_2 = b[2];
  assign b_3 = b[3];
  assign b_4 = b[4];
  assign b_5 = b[5];
  assign b_6 = b[6];
  assign b_7 = b[7];
  assign b_8 = b[8];
  assign b_9 = b[9];
  assign b_10 = b[10];
  assign b_11 = b[11];
  assign b_12 = b[12];
  assign b_13 = b[13];
  assign b_14 = b[14];
  assign b_15 = b[15];
  assign f_u_rca16_ha_a_0 = a_0;
  assign f_u_rca16_ha_b_0 = b_0;
  assign f_u_rca16_ha_y0 = f_u_rca16_ha_a_0 ^ f_u_rca16_ha_b_0;
  assign f_u_rca16_ha_y1 = f_u_rca16_ha_a_0 & f_u_rca16_ha_b_0;
  assign f_u_rca16_fa1_a_1 = a_1;
  assign f_u_rca16_fa1_b_1 = b_1;
  assign f_u_rca16_fa1_f_u_rca16_ha_y1 = f_u_rca16_ha_y1;
  assign f_u_rca16_fa1_y0 = f_u_rca16_fa1_a_1 ^ f_u_rca16_fa1_b_1;
  assign f_u_rca16_fa1_y1 = f_u_rca16_fa1_a_1 & f_u_rca16_fa1_b_1;
  assign f_u_rca16_fa1_y2 = f_u_rca16_fa1_y0 ^ f_u_rca16_fa1_f_u_rca16_ha_y1;
  assign f_u_rca16_fa1_y3 = f_u_rca16_fa1_y0 & f_u_rca16_fa1_f_u_rca16_ha_y1;
  assign f_u_rca16_fa1_y4 = f_u_rca16_fa1_y1 | f_u_rca16_fa1_y3;
  assign f_u_rca16_fa2_a_2 = a_2;
  assign f_u_rca16_fa2_b_2 = b_2;
  assign f_u_rca16_fa2_f_u_rca16_fa1_y4 = f_u_rca16_fa1_y4;
  assign f_u_rca16_fa2_y0 = f_u_rca16_fa2_a_2 ^ f_u_rca16_fa2_b_2;
  assign f_u_rca16_fa2_y1 = f_u_rca16_fa2_a_2 & f_u_rca16_fa2_b_2;
  assign f_u_rca16_fa2_y2 = f_u_rca16_fa2_y0 ^ f_u_rca16_fa2_f_u_rca16_fa1_y4;
  assign f_u_rca16_fa2_y3 = f_u_rca16_fa2_y0 & f_u_rca16_fa2_f_u_rca16_fa1_y4;
  assign f_u_rca16_fa2_y4 = f_u_rca16_fa2_y1 | f_u_rca16_fa2_y3;
  assign f_u_rca16_fa3_a_3 = a_3;
  assign f_u_rca16_fa3_b_3 = b_3;
  assign f_u_rca16_fa3_f_u_rca16_fa2_y4 = f_u_rca16_fa2_y4;
  assign f_u_rca16_fa3_y0 = f_u_rca16_fa3_a_3 ^ f_u_rca16_fa3_b_3;
  assign f_u_rca16_fa3_y1 = f_u_rca16_fa3_a_3 & f_u_rca16_fa3_b_3;
  assign f_u_rca16_fa3_y2 = f_u_rca16_fa3_y0 ^ f_u_rca16_fa3_f_u_rca16_fa2_y4;
  assign f_u_rca16_fa3_y3 = f_u_rca16_fa3_y0 & f_u_rca16_fa3_f_u_rca16_fa2_y4;
  assign f_u_rca16_fa3_y4 = f_u_rca16_fa3_y1 | f_u_rca16_fa3_y3;
  assign f_u_rca16_fa4_a_4 = a_4;
  assign f_u_rca16_fa4_b_4 = b_4;
  assign f_u_rca16_fa4_f_u_rca16_fa3_y4 = f_u_rca16_fa3_y4;
  assign f_u_rca16_fa4_y0 = f_u_rca16_fa4_a_4 ^ f_u_rca16_fa4_b_4;
  assign f_u_rca16_fa4_y1 = f_u_rca16_fa4_a_4 & f_u_rca16_fa4_b_4;
  assign f_u_rca16_fa4_y2 = f_u_rca16_fa4_y0 ^ f_u_rca16_fa4_f_u_rca16_fa3_y4;
  assign f_u_rca16_fa4_y3 = f_u_rca16_fa4_y0 & f_u_rca16_fa4_f_u_rca16_fa3_y4;
  assign f_u_rca16_fa4_y4 = f_u_rca16_fa4_y1 | f_u_rca16_fa4_y3;
  assign f_u_rca16_fa5_a_5 = a_5;
  assign f_u_rca16_fa5_b_5 = b_5;
  assign f_u_rca16_fa5_f_u_rca16_fa4_y4 = f_u_rca16_fa4_y4;
  assign f_u_rca16_fa5_y0 = f_u_rca16_fa5_a_5 ^ f_u_rca16_fa5_b_5;
  assign f_u_rca16_fa5_y1 = f_u_rca16_fa5_a_5 & f_u_rca16_fa5_b_5;
  assign f_u_rca16_fa5_y2 = f_u_rca16_fa5_y0 ^ f_u_rca16_fa5_f_u_rca16_fa4_y4;
  assign f_u_rca16_fa5_y3 = f_u_rca16_fa5_y0 & f_u_rca16_fa5_f_u_rca16_fa4_y4;
  assign f_u_rca16_fa5_y4 = f_u_rca16_fa5_y1 | f_u_rca16_fa5_y3;
  assign f_u_rca16_fa6_a_6 = a_6;
  assign f_u_rca16_fa6_b_6 = b_6;
  assign f_u_rca16_fa6_f_u_rca16_fa5_y4 = f_u_rca16_fa5_y4;
  assign f_u_rca16_fa6_y0 = f_u_rca16_fa6_a_6 ^ f_u_rca16_fa6_b_6;
  assign f_u_rca16_fa6_y1 = f_u_rca16_fa6_a_6 & f_u_rca16_fa6_b_6;
  assign f_u_rca16_fa6_y2 = f_u_rca16_fa6_y0 ^ f_u_rca16_fa6_f_u_rca16_fa5_y4;
  assign f_u_rca16_fa6_y3 = f_u_rca16_fa6_y0 & f_u_rca16_fa6_f_u_rca16_fa5_y4;
  assign f_u_rca16_fa6_y4 = f_u_rca16_fa6_y1 | f_u_rca16_fa6_y3;
  assign f_u_rca16_fa7_a_7 = a_7;
  assign f_u_rca16_fa7_b_7 = b_7;
  assign f_u_rca16_fa7_f_u_rca16_fa6_y4 = f_u_rca16_fa6_y4;
  assign f_u_rca16_fa7_y0 = f_u_rca16_fa7_a_7 ^ f_u_rca16_fa7_b_7;
  assign f_u_rca16_fa7_y1 = f_u_rca16_fa7_a_7 & f_u_rca16_fa7_b_7;
  assign f_u_rca16_fa7_y2 = f_u_rca16_fa7_y0 ^ f_u_rca16_fa7_f_u_rca16_fa6_y4;
  assign f_u_rca16_fa7_y3 = f_u_rca16_fa7_y0 & f_u_rca16_fa7_f_u_rca16_fa6_y4;
  assign f_u_rca16_fa7_y4 = f_u_rca16_fa7_y1 | f_u_rca16_fa7_y3;
  assign f_u_rca16_fa8_a_8 = a_8;
  assign f_u_rca16_fa8_b_8 = b_8;
  assign f_u_rca16_fa8_f_u_rca16_fa7_y4 = f_u_rca16_fa7_y4;
  assign f_u_rca16_fa8_y0 = f_u_rca16_fa8_a_8 ^ f_u_rca16_fa8_b_8;
  assign f_u_rca16_fa8_y1 = f_u_rca16_fa8_a_8 & f_u_rca16_fa8_b_8;
  assign f_u_rca16_fa8_y2 = f_u_rca16_fa8_y0 ^ f_u_rca16_fa8_f_u_rca16_fa7_y4;
  assign f_u_rca16_fa8_y3 = f_u_rca16_fa8_y0 & f_u_rca16_fa8_f_u_rca16_fa7_y4;
  assign f_u_rca16_fa8_y4 = f_u_rca16_fa8_y1 | f_u_rca16_fa8_y3;
  assign f_u_rca16_fa9_a_9 = a_9;
  assign f_u_rca16_fa9_b_9 = b_9;
  assign f_u_rca16_fa9_f_u_rca16_fa8_y4 = f_u_rca16_fa8_y4;
  assign f_u_rca16_fa9_y0 = f_u_rca16_fa9_a_9 ^ f_u_rca16_fa9_b_9;
  assign f_u_rca16_fa9_y1 = f_u_rca16_fa9_a_9 & f_u_rca16_fa9_b_9;
  assign f_u_rca16_fa9_y2 = f_u_rca16_fa9_y0 ^ f_u_rca16_fa9_f_u_rca16_fa8_y4;
  assign f_u_rca16_fa9_y3 = f_u_rca16_fa9_y0 & f_u_rca16_fa9_f_u_rca16_fa8_y4;
  assign f_u_rca16_fa9_y4 = f_u_rca16_fa9_y1 | f_u_rca16_fa9_y3;
  assign f_u_rca16_fa10_a_10 = a_10;
  assign f_u_rca16_fa10_b_10 = b_10;
  assign f_u_rca16_fa10_f_u_rca16_fa9_y4 = f_u_rca16_fa9_y4;
  assign f_u_rca16_fa10_y0 = f_u_rca16_fa10_a_10 ^ f_u_rca16_fa10_b_10;
  assign f_u_rca16_fa10_y1 = f_u_rca16_fa10_a_10 & f_u_rca16_fa10_b_10;
  assign f_u_rca16_fa10_y2 = f_u_rca16_fa10_y0 ^ f_u_rca16_fa10_f_u_rca16_fa9_y4;
  assign f_u_rca16_fa10_y3 = f_u_rca16_fa10_y0 & f_u_rca16_fa10_f_u_rca16_fa9_y4;
  assign f_u_rca16_fa10_y4 = f_u_rca16_fa10_y1 | f_u_rca16_fa10_y3;
  assign f_u_rca16_fa11_a_11 = a_11;
  assign f_u_rca16_fa11_b_11 = b_11;
  assign f_u_rca16_fa11_f_u_rca16_fa10_y4 = f_u_rca16_fa10_y4;
  assign f_u_rca16_fa11_y0 = f_u_rca16_fa11_a_11 ^ f_u_rca16_fa11_b_11;
  assign f_u_rca16_fa11_y1 = f_u_rca16_fa11_a_11 & f_u_rca16_fa11_b_11;
  assign f_u_rca16_fa11_y2 = f_u_rca16_fa11_y0 ^ f_u_rca16_fa11_f_u_rca16_fa10_y4;
  assign f_u_rca16_fa11_y3 = f_u_rca16_fa11_y0 & f_u_rca16_fa11_f_u_rca16_fa10_y4;
  assign f_u_rca16_fa11_y4 = f_u_rca16_fa11_y1 | f_u_rca16_fa11_y3;
  assign f_u_rca16_fa12_a_12 = a_12;
  assign f_u_rca16_fa12_b_12 = b_12;
  assign f_u_rca16_fa12_f_u_rca16_fa11_y4 = f_u_rca16_fa11_y4;
  assign f_u_rca16_fa12_y0 = f_u_rca16_fa12_a_12 ^ f_u_rca16_fa12_b_12;
  assign f_u_rca16_fa12_y1 = f_u_rca16_fa12_a_12 & f_u_rca16_fa12_b_12;
  assign f_u_rca16_fa12_y2 = f_u_rca16_fa12_y0 ^ f_u_rca16_fa12_f_u_rca16_fa11_y4;
  assign f_u_rca16_fa12_y3 = f_u_rca16_fa12_y0 & f_u_rca16_fa12_f_u_rca16_fa11_y4;
  assign f_u_rca16_fa12_y4 = f_u_rca16_fa12_y1 | f_u_rca16_fa12_y3;
  assign f_u_rca16_fa13_a_13 = a_13;
  assign f_u_rca16_fa13_b_13 = b_13;
  assign f_u_rca16_fa13_f_u_rca16_fa12_y4 = f_u_rca16_fa12_y4;
  assign f_u_rca16_fa13_y0 = f_u_rca16_fa13_a_13 ^ f_u_rca16_fa13_b_13;
  assign f_u_rca16_fa13_y1 = f_u_rca16_fa13_a_13 & f_u_rca16_fa13_b_13;
  assign f_u_rca16_fa13_y2 = f_u_rca16_fa13_y0 ^ f_u_rca16_fa13_f_u_rca16_fa12_y4;
  assign f_u_rca16_fa13_y3 = f_u_rca16_fa13_y0 & f_u_rca16_fa13_f_u_rca16_fa12_y4;
  assign f_u_rca16_fa13_y4 = f_u_rca16_fa13_y1 | f_u_rca16_fa13_y3;
  assign f_u_rca16_fa14_a_14 = a_14;
  assign f_u_rca16_fa14_b_14 = b_14;
  assign f_u_rca16_fa14_f_u_rca16_fa13_y4 = f_u_rca16_fa13_y4;
  assign f_u_rca16_fa14_y0 = f_u_rca16_fa14_a_14 ^ f_u_rca16_fa14_b_14;
  assign f_u_rca16_fa14_y1 = f_u_rca16_fa14_a_14 & f_u_rca16_fa14_b_14;
  assign f_u_rca16_fa14_y2 = f_u_rca16_fa14_y0 ^ f_u_rca16_fa14_f_u_rca16_fa13_y4;
  assign f_u_rca16_fa14_y3 = f_u_rca16_fa14_y0 & f_u_rca16_fa14_f_u_rca16_fa13_y4;
  assign f_u_rca16_fa14_y4 = f_u_rca16_fa14_y1 | f_u_rca16_fa14_y3;
  assign f_u_rca16_fa15_a_15 = a_15;
  assign f_u_rca16_fa15_b_15 = b_15;
  assign f_u_rca16_fa15_f_u_rca16_fa14_y4 = f_u_rca16_fa14_y4;
  assign f_u_rca16_fa15_y0 = f_u_rca16_fa15_a_15 ^ f_u_rca16_fa15_b_15;
  assign f_u_rca16_fa15_y1 = f_u_rca16_fa15_a_15 & f_u_rca16_fa15_b_15;
  assign f_u_rca16_fa15_y2 = f_u_rca16_fa15_y0 ^ f_u_rca16_fa15_f_u_rca16_fa14_y4;
  assign f_u_rca16_fa15_y3 = f_u_rca16_fa15_y0 & f_u_rca16_fa15_f_u_rca16_fa14_y4;
  assign f_u_rca16_fa15_y4 = f_u_rca16_fa15_y1 | f_u_rca16_fa15_y3;

  assign out[0] = f_u_rca16_ha_y0;
  assign out[1] = f_u_rca16_fa1_y2;
  assign out[2] = f_u_rca16_fa2_y2;
  assign out[3] = f_u_rca16_fa3_y2;
  assign out[4] = f_u_rca16_fa4_y2;
  assign out[5] = f_u_rca16_fa5_y2;
  assign out[6] = f_u_rca16_fa6_y2;
  assign out[7] = f_u_rca16_fa7_y2;
  assign out[8] = f_u_rca16_fa8_y2;
  assign out[9] = f_u_rca16_fa9_y2;
  assign out[10] = f_u_rca16_fa10_y2;
  assign out[11] = f_u_rca16_fa11_y2;
  assign out[12] = f_u_rca16_fa12_y2;
  assign out[13] = f_u_rca16_fa13_y2;
  assign out[14] = f_u_rca16_fa14_y2;
  assign out[15] = f_u_rca16_fa15_y2;
  assign out[16] = f_u_rca16_fa15_y4;
endmodule