module f_u_dadda_rca4(input [3:0] a, input [3:0] b, output [7:0] out);
  wire a_0;
  wire a_1;
  wire a_2;
  wire a_3;
  wire b_0;
  wire b_1;
  wire b_2;
  wire b_3;
  wire f_u_dadda_rca4_and_3_0_a_3;
  wire f_u_dadda_rca4_and_3_0_b_0;
  wire f_u_dadda_rca4_and_3_0_y0;
  wire f_u_dadda_rca4_and_2_1_a_2;
  wire f_u_dadda_rca4_and_2_1_b_1;
  wire f_u_dadda_rca4_and_2_1_y0;
  wire f_u_dadda_rca4_ha0_f_u_dadda_rca4_and_3_0_y0;
  wire f_u_dadda_rca4_ha0_f_u_dadda_rca4_and_2_1_y0;
  wire f_u_dadda_rca4_ha0_y0;
  wire f_u_dadda_rca4_ha0_y1;
  wire f_u_dadda_rca4_and_3_1_a_3;
  wire f_u_dadda_rca4_and_3_1_b_1;
  wire f_u_dadda_rca4_and_3_1_y0;
  wire f_u_dadda_rca4_ha1_f_u_dadda_rca4_ha0_y1;
  wire f_u_dadda_rca4_ha1_f_u_dadda_rca4_and_3_1_y0;
  wire f_u_dadda_rca4_ha1_y0;
  wire f_u_dadda_rca4_ha1_y1;
  wire f_u_dadda_rca4_and_2_0_a_2;
  wire f_u_dadda_rca4_and_2_0_b_0;
  wire f_u_dadda_rca4_and_2_0_y0;
  wire f_u_dadda_rca4_and_1_1_a_1;
  wire f_u_dadda_rca4_and_1_1_b_1;
  wire f_u_dadda_rca4_and_1_1_y0;
  wire f_u_dadda_rca4_ha2_f_u_dadda_rca4_and_2_0_y0;
  wire f_u_dadda_rca4_ha2_f_u_dadda_rca4_and_1_1_y0;
  wire f_u_dadda_rca4_ha2_y0;
  wire f_u_dadda_rca4_ha2_y1;
  wire f_u_dadda_rca4_and_1_2_a_1;
  wire f_u_dadda_rca4_and_1_2_b_2;
  wire f_u_dadda_rca4_and_1_2_y0;
  wire f_u_dadda_rca4_and_0_3_a_0;
  wire f_u_dadda_rca4_and_0_3_b_3;
  wire f_u_dadda_rca4_and_0_3_y0;
  wire f_u_dadda_rca4_fa0_f_u_dadda_rca4_ha2_y1;
  wire f_u_dadda_rca4_fa0_f_u_dadda_rca4_and_1_2_y0;
  wire f_u_dadda_rca4_fa0_y0;
  wire f_u_dadda_rca4_fa0_y1;
  wire f_u_dadda_rca4_fa0_f_u_dadda_rca4_and_0_3_y0;
  wire f_u_dadda_rca4_fa0_y2;
  wire f_u_dadda_rca4_fa0_y3;
  wire f_u_dadda_rca4_fa0_y4;
  wire f_u_dadda_rca4_and_2_2_a_2;
  wire f_u_dadda_rca4_and_2_2_b_2;
  wire f_u_dadda_rca4_and_2_2_y0;
  wire f_u_dadda_rca4_and_1_3_a_1;
  wire f_u_dadda_rca4_and_1_3_b_3;
  wire f_u_dadda_rca4_and_1_3_y0;
  wire f_u_dadda_rca4_fa1_f_u_dadda_rca4_fa0_y4;
  wire f_u_dadda_rca4_fa1_f_u_dadda_rca4_and_2_2_y0;
  wire f_u_dadda_rca4_fa1_y0;
  wire f_u_dadda_rca4_fa1_y1;
  wire f_u_dadda_rca4_fa1_f_u_dadda_rca4_and_1_3_y0;
  wire f_u_dadda_rca4_fa1_y2;
  wire f_u_dadda_rca4_fa1_y3;
  wire f_u_dadda_rca4_fa1_y4;
  wire f_u_dadda_rca4_and_3_2_a_3;
  wire f_u_dadda_rca4_and_3_2_b_2;
  wire f_u_dadda_rca4_and_3_2_y0;
  wire f_u_dadda_rca4_fa2_f_u_dadda_rca4_fa1_y4;
  wire f_u_dadda_rca4_fa2_f_u_dadda_rca4_ha1_y1;
  wire f_u_dadda_rca4_fa2_y0;
  wire f_u_dadda_rca4_fa2_y1;
  wire f_u_dadda_rca4_fa2_f_u_dadda_rca4_and_3_2_y0;
  wire f_u_dadda_rca4_fa2_y2;
  wire f_u_dadda_rca4_fa2_y3;
  wire f_u_dadda_rca4_fa2_y4;
  wire f_u_dadda_rca4_and_0_0_a_0;
  wire f_u_dadda_rca4_and_0_0_b_0;
  wire f_u_dadda_rca4_and_0_0_y0;
  wire f_u_dadda_rca4_and_1_0_a_1;
  wire f_u_dadda_rca4_and_1_0_b_0;
  wire f_u_dadda_rca4_and_1_0_y0;
  wire f_u_dadda_rca4_and_0_2_a_0;
  wire f_u_dadda_rca4_and_0_2_b_2;
  wire f_u_dadda_rca4_and_0_2_y0;
  wire f_u_dadda_rca4_and_2_3_a_2;
  wire f_u_dadda_rca4_and_2_3_b_3;
  wire f_u_dadda_rca4_and_2_3_y0;
  wire f_u_dadda_rca4_and_0_1_a_0;
  wire f_u_dadda_rca4_and_0_1_b_1;
  wire f_u_dadda_rca4_and_0_1_y0;
  wire f_u_dadda_rca4_and_3_3_a_3;
  wire f_u_dadda_rca4_and_3_3_b_3;
  wire f_u_dadda_rca4_and_3_3_y0;
  wire f_u_dadda_rca4_u_rca_ha_f_u_dadda_rca4_and_1_0_y0;
  wire f_u_dadda_rca4_u_rca_ha_f_u_dadda_rca4_and_0_1_y0;
  wire f_u_dadda_rca4_u_rca_ha_y0;
  wire f_u_dadda_rca4_u_rca_ha_y1;
  wire f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_and_0_2_y0;
  wire f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_ha2_y0;
  wire f_u_dadda_rca4_u_rca_fa1_y0;
  wire f_u_dadda_rca4_u_rca_fa1_y1;
  wire f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_u_rca_ha_y1;
  wire f_u_dadda_rca4_u_rca_fa1_y2;
  wire f_u_dadda_rca4_u_rca_fa1_y3;
  wire f_u_dadda_rca4_u_rca_fa1_y4;
  wire f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_ha0_y0;
  wire f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_fa0_y2;
  wire f_u_dadda_rca4_u_rca_fa2_y0;
  wire f_u_dadda_rca4_u_rca_fa2_y1;
  wire f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_u_rca_fa1_y4;
  wire f_u_dadda_rca4_u_rca_fa2_y2;
  wire f_u_dadda_rca4_u_rca_fa2_y3;
  wire f_u_dadda_rca4_u_rca_fa2_y4;
  wire f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_ha1_y0;
  wire f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_fa1_y2;
  wire f_u_dadda_rca4_u_rca_fa3_y0;
  wire f_u_dadda_rca4_u_rca_fa3_y1;
  wire f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_u_rca_fa2_y4;
  wire f_u_dadda_rca4_u_rca_fa3_y2;
  wire f_u_dadda_rca4_u_rca_fa3_y3;
  wire f_u_dadda_rca4_u_rca_fa3_y4;
  wire f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_and_2_3_y0;
  wire f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_fa2_y2;
  wire f_u_dadda_rca4_u_rca_fa4_y0;
  wire f_u_dadda_rca4_u_rca_fa4_y1;
  wire f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_u_rca_fa3_y4;
  wire f_u_dadda_rca4_u_rca_fa4_y2;
  wire f_u_dadda_rca4_u_rca_fa4_y3;
  wire f_u_dadda_rca4_u_rca_fa4_y4;
  wire f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_fa2_y4;
  wire f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_and_3_3_y0;
  wire f_u_dadda_rca4_u_rca_fa5_y0;
  wire f_u_dadda_rca4_u_rca_fa5_y1;
  wire f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_u_rca_fa4_y4;
  wire f_u_dadda_rca4_u_rca_fa5_y2;
  wire f_u_dadda_rca4_u_rca_fa5_y3;
  wire f_u_dadda_rca4_u_rca_fa5_y4;

  assign a_0 = a[0];
  assign a_1 = a[1];
  assign a_2 = a[2];
  assign a_3 = a[3];
  assign b_0 = b[0];
  assign b_1 = b[1];
  assign b_2 = b[2];
  assign b_3 = b[3];
  assign f_u_dadda_rca4_and_3_0_a_3 = a_3;
  assign f_u_dadda_rca4_and_3_0_b_0 = b_0;
  assign f_u_dadda_rca4_and_3_0_y0 = f_u_dadda_rca4_and_3_0_a_3 & f_u_dadda_rca4_and_3_0_b_0;
  assign f_u_dadda_rca4_and_2_1_a_2 = a_2;
  assign f_u_dadda_rca4_and_2_1_b_1 = b_1;
  assign f_u_dadda_rca4_and_2_1_y0 = f_u_dadda_rca4_and_2_1_a_2 & f_u_dadda_rca4_and_2_1_b_1;
  assign f_u_dadda_rca4_ha0_f_u_dadda_rca4_and_3_0_y0 = f_u_dadda_rca4_and_3_0_y0;
  assign f_u_dadda_rca4_ha0_f_u_dadda_rca4_and_2_1_y0 = f_u_dadda_rca4_and_2_1_y0;
  assign f_u_dadda_rca4_ha0_y0 = f_u_dadda_rca4_ha0_f_u_dadda_rca4_and_3_0_y0 ^ f_u_dadda_rca4_ha0_f_u_dadda_rca4_and_2_1_y0;
  assign f_u_dadda_rca4_ha0_y1 = f_u_dadda_rca4_ha0_f_u_dadda_rca4_and_3_0_y0 & f_u_dadda_rca4_ha0_f_u_dadda_rca4_and_2_1_y0;
  assign f_u_dadda_rca4_and_3_1_a_3 = a_3;
  assign f_u_dadda_rca4_and_3_1_b_1 = b_1;
  assign f_u_dadda_rca4_and_3_1_y0 = f_u_dadda_rca4_and_3_1_a_3 & f_u_dadda_rca4_and_3_1_b_1;
  assign f_u_dadda_rca4_ha1_f_u_dadda_rca4_ha0_y1 = f_u_dadda_rca4_ha0_y1;
  assign f_u_dadda_rca4_ha1_f_u_dadda_rca4_and_3_1_y0 = f_u_dadda_rca4_and_3_1_y0;
  assign f_u_dadda_rca4_ha1_y0 = f_u_dadda_rca4_ha1_f_u_dadda_rca4_ha0_y1 ^ f_u_dadda_rca4_ha1_f_u_dadda_rca4_and_3_1_y0;
  assign f_u_dadda_rca4_ha1_y1 = f_u_dadda_rca4_ha1_f_u_dadda_rca4_ha0_y1 & f_u_dadda_rca4_ha1_f_u_dadda_rca4_and_3_1_y0;
  assign f_u_dadda_rca4_and_2_0_a_2 = a_2;
  assign f_u_dadda_rca4_and_2_0_b_0 = b_0;
  assign f_u_dadda_rca4_and_2_0_y0 = f_u_dadda_rca4_and_2_0_a_2 & f_u_dadda_rca4_and_2_0_b_0;
  assign f_u_dadda_rca4_and_1_1_a_1 = a_1;
  assign f_u_dadda_rca4_and_1_1_b_1 = b_1;
  assign f_u_dadda_rca4_and_1_1_y0 = f_u_dadda_rca4_and_1_1_a_1 & f_u_dadda_rca4_and_1_1_b_1;
  assign f_u_dadda_rca4_ha2_f_u_dadda_rca4_and_2_0_y0 = f_u_dadda_rca4_and_2_0_y0;
  assign f_u_dadda_rca4_ha2_f_u_dadda_rca4_and_1_1_y0 = f_u_dadda_rca4_and_1_1_y0;
  assign f_u_dadda_rca4_ha2_y0 = f_u_dadda_rca4_ha2_f_u_dadda_rca4_and_2_0_y0 ^ f_u_dadda_rca4_ha2_f_u_dadda_rca4_and_1_1_y0;
  assign f_u_dadda_rca4_ha2_y1 = f_u_dadda_rca4_ha2_f_u_dadda_rca4_and_2_0_y0 & f_u_dadda_rca4_ha2_f_u_dadda_rca4_and_1_1_y0;
  assign f_u_dadda_rca4_and_1_2_a_1 = a_1;
  assign f_u_dadda_rca4_and_1_2_b_2 = b_2;
  assign f_u_dadda_rca4_and_1_2_y0 = f_u_dadda_rca4_and_1_2_a_1 & f_u_dadda_rca4_and_1_2_b_2;
  assign f_u_dadda_rca4_and_0_3_a_0 = a_0;
  assign f_u_dadda_rca4_and_0_3_b_3 = b_3;
  assign f_u_dadda_rca4_and_0_3_y0 = f_u_dadda_rca4_and_0_3_a_0 & f_u_dadda_rca4_and_0_3_b_3;
  assign f_u_dadda_rca4_fa0_f_u_dadda_rca4_ha2_y1 = f_u_dadda_rca4_ha2_y1;
  assign f_u_dadda_rca4_fa0_f_u_dadda_rca4_and_1_2_y0 = f_u_dadda_rca4_and_1_2_y0;
  assign f_u_dadda_rca4_fa0_f_u_dadda_rca4_and_0_3_y0 = f_u_dadda_rca4_and_0_3_y0;
  assign f_u_dadda_rca4_fa0_y0 = f_u_dadda_rca4_fa0_f_u_dadda_rca4_ha2_y1 ^ f_u_dadda_rca4_fa0_f_u_dadda_rca4_and_1_2_y0;
  assign f_u_dadda_rca4_fa0_y1 = f_u_dadda_rca4_fa0_f_u_dadda_rca4_ha2_y1 & f_u_dadda_rca4_fa0_f_u_dadda_rca4_and_1_2_y0;
  assign f_u_dadda_rca4_fa0_y2 = f_u_dadda_rca4_fa0_y0 ^ f_u_dadda_rca4_fa0_f_u_dadda_rca4_and_0_3_y0;
  assign f_u_dadda_rca4_fa0_y3 = f_u_dadda_rca4_fa0_y0 & f_u_dadda_rca4_fa0_f_u_dadda_rca4_and_0_3_y0;
  assign f_u_dadda_rca4_fa0_y4 = f_u_dadda_rca4_fa0_y1 | f_u_dadda_rca4_fa0_y3;
  assign f_u_dadda_rca4_and_2_2_a_2 = a_2;
  assign f_u_dadda_rca4_and_2_2_b_2 = b_2;
  assign f_u_dadda_rca4_and_2_2_y0 = f_u_dadda_rca4_and_2_2_a_2 & f_u_dadda_rca4_and_2_2_b_2;
  assign f_u_dadda_rca4_and_1_3_a_1 = a_1;
  assign f_u_dadda_rca4_and_1_3_b_3 = b_3;
  assign f_u_dadda_rca4_and_1_3_y0 = f_u_dadda_rca4_and_1_3_a_1 & f_u_dadda_rca4_and_1_3_b_3;
  assign f_u_dadda_rca4_fa1_f_u_dadda_rca4_fa0_y4 = f_u_dadda_rca4_fa0_y4;
  assign f_u_dadda_rca4_fa1_f_u_dadda_rca4_and_2_2_y0 = f_u_dadda_rca4_and_2_2_y0;
  assign f_u_dadda_rca4_fa1_f_u_dadda_rca4_and_1_3_y0 = f_u_dadda_rca4_and_1_3_y0;
  assign f_u_dadda_rca4_fa1_y0 = f_u_dadda_rca4_fa1_f_u_dadda_rca4_fa0_y4 ^ f_u_dadda_rca4_fa1_f_u_dadda_rca4_and_2_2_y0;
  assign f_u_dadda_rca4_fa1_y1 = f_u_dadda_rca4_fa1_f_u_dadda_rca4_fa0_y4 & f_u_dadda_rca4_fa1_f_u_dadda_rca4_and_2_2_y0;
  assign f_u_dadda_rca4_fa1_y2 = f_u_dadda_rca4_fa1_y0 ^ f_u_dadda_rca4_fa1_f_u_dadda_rca4_and_1_3_y0;
  assign f_u_dadda_rca4_fa1_y3 = f_u_dadda_rca4_fa1_y0 & f_u_dadda_rca4_fa1_f_u_dadda_rca4_and_1_3_y0;
  assign f_u_dadda_rca4_fa1_y4 = f_u_dadda_rca4_fa1_y1 | f_u_dadda_rca4_fa1_y3;
  assign f_u_dadda_rca4_and_3_2_a_3 = a_3;
  assign f_u_dadda_rca4_and_3_2_b_2 = b_2;
  assign f_u_dadda_rca4_and_3_2_y0 = f_u_dadda_rca4_and_3_2_a_3 & f_u_dadda_rca4_and_3_2_b_2;
  assign f_u_dadda_rca4_fa2_f_u_dadda_rca4_fa1_y4 = f_u_dadda_rca4_fa1_y4;
  assign f_u_dadda_rca4_fa2_f_u_dadda_rca4_ha1_y1 = f_u_dadda_rca4_ha1_y1;
  assign f_u_dadda_rca4_fa2_f_u_dadda_rca4_and_3_2_y0 = f_u_dadda_rca4_and_3_2_y0;
  assign f_u_dadda_rca4_fa2_y0 = f_u_dadda_rca4_fa2_f_u_dadda_rca4_fa1_y4 ^ f_u_dadda_rca4_fa2_f_u_dadda_rca4_ha1_y1;
  assign f_u_dadda_rca4_fa2_y1 = f_u_dadda_rca4_fa2_f_u_dadda_rca4_fa1_y4 & f_u_dadda_rca4_fa2_f_u_dadda_rca4_ha1_y1;
  assign f_u_dadda_rca4_fa2_y2 = f_u_dadda_rca4_fa2_y0 ^ f_u_dadda_rca4_fa2_f_u_dadda_rca4_and_3_2_y0;
  assign f_u_dadda_rca4_fa2_y3 = f_u_dadda_rca4_fa2_y0 & f_u_dadda_rca4_fa2_f_u_dadda_rca4_and_3_2_y0;
  assign f_u_dadda_rca4_fa2_y4 = f_u_dadda_rca4_fa2_y1 | f_u_dadda_rca4_fa2_y3;
  assign f_u_dadda_rca4_and_0_0_a_0 = a_0;
  assign f_u_dadda_rca4_and_0_0_b_0 = b_0;
  assign f_u_dadda_rca4_and_0_0_y0 = f_u_dadda_rca4_and_0_0_a_0 & f_u_dadda_rca4_and_0_0_b_0;
  assign f_u_dadda_rca4_and_1_0_a_1 = a_1;
  assign f_u_dadda_rca4_and_1_0_b_0 = b_0;
  assign f_u_dadda_rca4_and_1_0_y0 = f_u_dadda_rca4_and_1_0_a_1 & f_u_dadda_rca4_and_1_0_b_0;
  assign f_u_dadda_rca4_and_0_2_a_0 = a_0;
  assign f_u_dadda_rca4_and_0_2_b_2 = b_2;
  assign f_u_dadda_rca4_and_0_2_y0 = f_u_dadda_rca4_and_0_2_a_0 & f_u_dadda_rca4_and_0_2_b_2;
  assign f_u_dadda_rca4_and_2_3_a_2 = a_2;
  assign f_u_dadda_rca4_and_2_3_b_3 = b_3;
  assign f_u_dadda_rca4_and_2_3_y0 = f_u_dadda_rca4_and_2_3_a_2 & f_u_dadda_rca4_and_2_3_b_3;
  assign f_u_dadda_rca4_and_0_1_a_0 = a_0;
  assign f_u_dadda_rca4_and_0_1_b_1 = b_1;
  assign f_u_dadda_rca4_and_0_1_y0 = f_u_dadda_rca4_and_0_1_a_0 & f_u_dadda_rca4_and_0_1_b_1;
  assign f_u_dadda_rca4_and_3_3_a_3 = a_3;
  assign f_u_dadda_rca4_and_3_3_b_3 = b_3;
  assign f_u_dadda_rca4_and_3_3_y0 = f_u_dadda_rca4_and_3_3_a_3 & f_u_dadda_rca4_and_3_3_b_3;
  assign f_u_dadda_rca4_u_rca_ha_f_u_dadda_rca4_and_1_0_y0 = f_u_dadda_rca4_and_1_0_y0;
  assign f_u_dadda_rca4_u_rca_ha_f_u_dadda_rca4_and_0_1_y0 = f_u_dadda_rca4_and_0_1_y0;
  assign f_u_dadda_rca4_u_rca_ha_y0 = f_u_dadda_rca4_u_rca_ha_f_u_dadda_rca4_and_1_0_y0 ^ f_u_dadda_rca4_u_rca_ha_f_u_dadda_rca4_and_0_1_y0;
  assign f_u_dadda_rca4_u_rca_ha_y1 = f_u_dadda_rca4_u_rca_ha_f_u_dadda_rca4_and_1_0_y0 & f_u_dadda_rca4_u_rca_ha_f_u_dadda_rca4_and_0_1_y0;
  assign f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_and_0_2_y0 = f_u_dadda_rca4_and_0_2_y0;
  assign f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_ha2_y0 = f_u_dadda_rca4_ha2_y0;
  assign f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_u_rca_ha_y1 = f_u_dadda_rca4_u_rca_ha_y1;
  assign f_u_dadda_rca4_u_rca_fa1_y0 = f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_and_0_2_y0 ^ f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_ha2_y0;
  assign f_u_dadda_rca4_u_rca_fa1_y1 = f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_and_0_2_y0 & f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_ha2_y0;
  assign f_u_dadda_rca4_u_rca_fa1_y2 = f_u_dadda_rca4_u_rca_fa1_y0 ^ f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_u_rca_ha_y1;
  assign f_u_dadda_rca4_u_rca_fa1_y3 = f_u_dadda_rca4_u_rca_fa1_y0 & f_u_dadda_rca4_u_rca_fa1_f_u_dadda_rca4_u_rca_ha_y1;
  assign f_u_dadda_rca4_u_rca_fa1_y4 = f_u_dadda_rca4_u_rca_fa1_y1 | f_u_dadda_rca4_u_rca_fa1_y3;
  assign f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_ha0_y0 = f_u_dadda_rca4_ha0_y0;
  assign f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_fa0_y2 = f_u_dadda_rca4_fa0_y2;
  assign f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_u_rca_fa1_y4 = f_u_dadda_rca4_u_rca_fa1_y4;
  assign f_u_dadda_rca4_u_rca_fa2_y0 = f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_ha0_y0 ^ f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_fa0_y2;
  assign f_u_dadda_rca4_u_rca_fa2_y1 = f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_ha0_y0 & f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_fa0_y2;
  assign f_u_dadda_rca4_u_rca_fa2_y2 = f_u_dadda_rca4_u_rca_fa2_y0 ^ f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_u_rca_fa1_y4;
  assign f_u_dadda_rca4_u_rca_fa2_y3 = f_u_dadda_rca4_u_rca_fa2_y0 & f_u_dadda_rca4_u_rca_fa2_f_u_dadda_rca4_u_rca_fa1_y4;
  assign f_u_dadda_rca4_u_rca_fa2_y4 = f_u_dadda_rca4_u_rca_fa2_y1 | f_u_dadda_rca4_u_rca_fa2_y3;
  assign f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_ha1_y0 = f_u_dadda_rca4_ha1_y0;
  assign f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_fa1_y2 = f_u_dadda_rca4_fa1_y2;
  assign f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_u_rca_fa2_y4 = f_u_dadda_rca4_u_rca_fa2_y4;
  assign f_u_dadda_rca4_u_rca_fa3_y0 = f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_ha1_y0 ^ f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_fa1_y2;
  assign f_u_dadda_rca4_u_rca_fa3_y1 = f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_ha1_y0 & f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_fa1_y2;
  assign f_u_dadda_rca4_u_rca_fa3_y2 = f_u_dadda_rca4_u_rca_fa3_y0 ^ f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_u_rca_fa2_y4;
  assign f_u_dadda_rca4_u_rca_fa3_y3 = f_u_dadda_rca4_u_rca_fa3_y0 & f_u_dadda_rca4_u_rca_fa3_f_u_dadda_rca4_u_rca_fa2_y4;
  assign f_u_dadda_rca4_u_rca_fa3_y4 = f_u_dadda_rca4_u_rca_fa3_y1 | f_u_dadda_rca4_u_rca_fa3_y3;
  assign f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_and_2_3_y0 = f_u_dadda_rca4_and_2_3_y0;
  assign f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_fa2_y2 = f_u_dadda_rca4_fa2_y2;
  assign f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_u_rca_fa3_y4 = f_u_dadda_rca4_u_rca_fa3_y4;
  assign f_u_dadda_rca4_u_rca_fa4_y0 = f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_and_2_3_y0 ^ f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_fa2_y2;
  assign f_u_dadda_rca4_u_rca_fa4_y1 = f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_and_2_3_y0 & f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_fa2_y2;
  assign f_u_dadda_rca4_u_rca_fa4_y2 = f_u_dadda_rca4_u_rca_fa4_y0 ^ f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_u_rca_fa3_y4;
  assign f_u_dadda_rca4_u_rca_fa4_y3 = f_u_dadda_rca4_u_rca_fa4_y0 & f_u_dadda_rca4_u_rca_fa4_f_u_dadda_rca4_u_rca_fa3_y4;
  assign f_u_dadda_rca4_u_rca_fa4_y4 = f_u_dadda_rca4_u_rca_fa4_y1 | f_u_dadda_rca4_u_rca_fa4_y3;
  assign f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_fa2_y4 = f_u_dadda_rca4_fa2_y4;
  assign f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_and_3_3_y0 = f_u_dadda_rca4_and_3_3_y0;
  assign f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_u_rca_fa4_y4 = f_u_dadda_rca4_u_rca_fa4_y4;
  assign f_u_dadda_rca4_u_rca_fa5_y0 = f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_fa2_y4 ^ f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_and_3_3_y0;
  assign f_u_dadda_rca4_u_rca_fa5_y1 = f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_fa2_y4 & f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_and_3_3_y0;
  assign f_u_dadda_rca4_u_rca_fa5_y2 = f_u_dadda_rca4_u_rca_fa5_y0 ^ f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_u_rca_fa4_y4;
  assign f_u_dadda_rca4_u_rca_fa5_y3 = f_u_dadda_rca4_u_rca_fa5_y0 & f_u_dadda_rca4_u_rca_fa5_f_u_dadda_rca4_u_rca_fa4_y4;
  assign f_u_dadda_rca4_u_rca_fa5_y4 = f_u_dadda_rca4_u_rca_fa5_y1 | f_u_dadda_rca4_u_rca_fa5_y3;

  assign out[0] = f_u_dadda_rca4_and_0_0_y0;
  assign out[1] = f_u_dadda_rca4_u_rca_ha_y0;
  assign out[2] = f_u_dadda_rca4_u_rca_fa1_y2;
  assign out[3] = f_u_dadda_rca4_u_rca_fa2_y2;
  assign out[4] = f_u_dadda_rca4_u_rca_fa3_y2;
  assign out[5] = f_u_dadda_rca4_u_rca_fa4_y2;
  assign out[6] = f_u_dadda_rca4_u_rca_fa5_y2;
  assign out[7] = f_u_dadda_rca4_u_rca_fa5_y4;
endmodule