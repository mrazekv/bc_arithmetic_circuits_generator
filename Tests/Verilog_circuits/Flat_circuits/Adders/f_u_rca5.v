module u_rca5(input [4:0] a, input [4:0] b, output [5:0] out);
  wire u_rca5_ha_a_0;
  wire u_rca5_ha_b_0;
  wire u_rca5_ha_y0;
  wire u_rca5_ha_y1;
  wire u_rca5_fa1_a_1;
  wire u_rca5_fa1_b_1;
  wire u_rca5_fa1_y0;
  wire u_rca5_fa1_y1;
  wire u_rca5_fa1_u_rca5_ha_y1;
  wire u_rca5_fa1_y2;
  wire u_rca5_fa1_y3;
  wire u_rca5_fa1_y4;
  wire u_rca5_fa2_a_2;
  wire u_rca5_fa2_b_2;
  wire u_rca5_fa2_y0;
  wire u_rca5_fa2_y1;
  wire u_rca5_fa2_u_rca5_fa1_y4;
  wire u_rca5_fa2_y2;
  wire u_rca5_fa2_y3;
  wire u_rca5_fa2_y4;
  wire u_rca5_fa3_a_3;
  wire u_rca5_fa3_b_3;
  wire u_rca5_fa3_y0;
  wire u_rca5_fa3_y1;
  wire u_rca5_fa3_u_rca5_fa2_y4;
  wire u_rca5_fa3_y2;
  wire u_rca5_fa3_y3;
  wire u_rca5_fa3_y4;
  wire u_rca5_fa4_a_4;
  wire u_rca5_fa4_b_4;
  wire u_rca5_fa4_y0;
  wire u_rca5_fa4_y1;
  wire u_rca5_fa4_u_rca5_fa3_y4;
  wire u_rca5_fa4_y2;
  wire u_rca5_fa4_y3;
  wire u_rca5_fa4_y4;

  assign u_rca5_ha_a_0 = a[0];
  assign u_rca5_ha_b_0 = b[0];
  assign u_rca5_ha_y0 = u_rca5_ha_a_0 ^ u_rca5_ha_b_0;
  assign u_rca5_ha_y1 = u_rca5_ha_a_0 & u_rca5_ha_b_0;
  assign u_rca5_fa1_a_1 = a[1];
  assign u_rca5_fa1_b_1 = b[1];
  assign u_rca5_fa1_u_rca5_ha_y1 = u_rca5_ha_y1[1];
  assign u_rca5_fa1_y0 = u_rca5_fa1_a_1 ^ u_rca5_fa1_b_1;
  assign u_rca5_fa1_y1 = u_rca5_fa1_a_1 & u_rca5_fa1_b_1;
  assign u_rca5_fa1_y2 = u_rca5_fa1_y0 ^ u_rca5_fa1_u_rca5_ha_y1;
  assign u_rca5_fa1_y3 = u_rca5_fa1_y0 & u_rca5_fa1_u_rca5_ha_y1;
  assign u_rca5_fa1_y4 = u_rca5_fa1_y1 | u_rca5_fa1_y3;
  assign u_rca5_fa2_a_2 = a[2];
  assign u_rca5_fa2_b_2 = b[2];
  assign u_rca5_fa2_u_rca5_fa1_y4 = u_rca5_fa1_y4[2];
  assign u_rca5_fa2_y0 = u_rca5_fa2_a_2 ^ u_rca5_fa2_b_2;
  assign u_rca5_fa2_y1 = u_rca5_fa2_a_2 & u_rca5_fa2_b_2;
  assign u_rca5_fa2_y2 = u_rca5_fa2_y0 ^ u_rca5_fa2_u_rca5_fa1_y4;
  assign u_rca5_fa2_y3 = u_rca5_fa2_y0 & u_rca5_fa2_u_rca5_fa1_y4;
  assign u_rca5_fa2_y4 = u_rca5_fa2_y1 | u_rca5_fa2_y3;
  assign u_rca5_fa3_a_3 = a[3];
  assign u_rca5_fa3_b_3 = b[3];
  assign u_rca5_fa3_u_rca5_fa2_y4 = u_rca5_fa2_y4[3];
  assign u_rca5_fa3_y0 = u_rca5_fa3_a_3 ^ u_rca5_fa3_b_3;
  assign u_rca5_fa3_y1 = u_rca5_fa3_a_3 & u_rca5_fa3_b_3;
  assign u_rca5_fa3_y2 = u_rca5_fa3_y0 ^ u_rca5_fa3_u_rca5_fa2_y4;
  assign u_rca5_fa3_y3 = u_rca5_fa3_y0 & u_rca5_fa3_u_rca5_fa2_y4;
  assign u_rca5_fa3_y4 = u_rca5_fa3_y1 | u_rca5_fa3_y3;
  assign u_rca5_fa4_a_4 = a[4];
  assign u_rca5_fa4_b_4 = b[4];
  assign u_rca5_fa4_u_rca5_fa3_y4 = u_rca5_fa3_y4[4];
  assign u_rca5_fa4_y0 = u_rca5_fa4_a_4 ^ u_rca5_fa4_b_4;
  assign u_rca5_fa4_y1 = u_rca5_fa4_a_4 & u_rca5_fa4_b_4;
  assign u_rca5_fa4_y2 = u_rca5_fa4_y0 ^ u_rca5_fa4_u_rca5_fa3_y4;
  assign u_rca5_fa4_y3 = u_rca5_fa4_y0 & u_rca5_fa4_u_rca5_fa3_y4;
  assign u_rca5_fa4_y4 = u_rca5_fa4_y1 | u_rca5_fa4_y3;

  assign out[0] = u_rca5_ha_y0;
  assign out[1] = u_rca5_fa1_y2;
  assign out[2] = u_rca5_fa2_y2;
  assign out[3] = u_rca5_fa3_y2;
  assign out[4] = u_rca5_fa4_y2;
  assign out[5] = u_rca5_fa4_y4;
endmodule