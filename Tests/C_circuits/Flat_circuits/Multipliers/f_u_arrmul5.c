#include <stdio.h>
#include <stdint.h>

uint64_t f_u_arrmul5(uint64_t a, uint64_t b){
  uint64_t out = 0;
  uint8_t a_0 = 0;
  uint8_t a_1 = 0;
  uint8_t a_2 = 0;
  uint8_t a_3 = 0;
  uint8_t a_4 = 0;
  uint8_t b_0 = 0;
  uint8_t b_1 = 0;
  uint8_t b_2 = 0;
  uint8_t b_3 = 0;
  uint8_t b_4 = 0;
  uint8_t f_u_arrmul5_and0_0_a_0 = 0;
  uint8_t f_u_arrmul5_and0_0_b_0 = 0;
  uint8_t f_u_arrmul5_and0_0_y0 = 0;
  uint8_t f_u_arrmul5_and1_0_a_1 = 0;
  uint8_t f_u_arrmul5_and1_0_b_0 = 0;
  uint8_t f_u_arrmul5_and1_0_y0 = 0;
  uint8_t f_u_arrmul5_and2_0_a_2 = 0;
  uint8_t f_u_arrmul5_and2_0_b_0 = 0;
  uint8_t f_u_arrmul5_and2_0_y0 = 0;
  uint8_t f_u_arrmul5_and3_0_a_3 = 0;
  uint8_t f_u_arrmul5_and3_0_b_0 = 0;
  uint8_t f_u_arrmul5_and3_0_y0 = 0;
  uint8_t f_u_arrmul5_and4_0_a_4 = 0;
  uint8_t f_u_arrmul5_and4_0_b_0 = 0;
  uint8_t f_u_arrmul5_and4_0_y0 = 0;
  uint8_t f_u_arrmul5_and0_1_a_0 = 0;
  uint8_t f_u_arrmul5_and0_1_b_1 = 0;
  uint8_t f_u_arrmul5_and0_1_y0 = 0;
  uint8_t f_u_arrmul5_ha0_1_f_u_arrmul5_and0_1_y0 = 0;
  uint8_t f_u_arrmul5_ha0_1_f_u_arrmul5_and1_0_y0 = 0;
  uint8_t f_u_arrmul5_ha0_1_y0 = 0;
  uint8_t f_u_arrmul5_ha0_1_y1 = 0;
  uint8_t f_u_arrmul5_and1_1_a_1 = 0;
  uint8_t f_u_arrmul5_and1_1_b_1 = 0;
  uint8_t f_u_arrmul5_and1_1_y0 = 0;
  uint8_t f_u_arrmul5_fa1_1_f_u_arrmul5_and1_1_y0 = 0;
  uint8_t f_u_arrmul5_fa1_1_f_u_arrmul5_and2_0_y0 = 0;
  uint8_t f_u_arrmul5_fa1_1_y0 = 0;
  uint8_t f_u_arrmul5_fa1_1_y1 = 0;
  uint8_t f_u_arrmul5_fa1_1_f_u_arrmul5_ha0_1_y1 = 0;
  uint8_t f_u_arrmul5_fa1_1_y2 = 0;
  uint8_t f_u_arrmul5_fa1_1_y3 = 0;
  uint8_t f_u_arrmul5_fa1_1_y4 = 0;
  uint8_t f_u_arrmul5_and2_1_a_2 = 0;
  uint8_t f_u_arrmul5_and2_1_b_1 = 0;
  uint8_t f_u_arrmul5_and2_1_y0 = 0;
  uint8_t f_u_arrmul5_fa2_1_f_u_arrmul5_and2_1_y0 = 0;
  uint8_t f_u_arrmul5_fa2_1_f_u_arrmul5_and3_0_y0 = 0;
  uint8_t f_u_arrmul5_fa2_1_y0 = 0;
  uint8_t f_u_arrmul5_fa2_1_y1 = 0;
  uint8_t f_u_arrmul5_fa2_1_f_u_arrmul5_fa1_1_y4 = 0;
  uint8_t f_u_arrmul5_fa2_1_y2 = 0;
  uint8_t f_u_arrmul5_fa2_1_y3 = 0;
  uint8_t f_u_arrmul5_fa2_1_y4 = 0;
  uint8_t f_u_arrmul5_and3_1_a_3 = 0;
  uint8_t f_u_arrmul5_and3_1_b_1 = 0;
  uint8_t f_u_arrmul5_and3_1_y0 = 0;
  uint8_t f_u_arrmul5_fa3_1_f_u_arrmul5_and3_1_y0 = 0;
  uint8_t f_u_arrmul5_fa3_1_f_u_arrmul5_and4_0_y0 = 0;
  uint8_t f_u_arrmul5_fa3_1_y0 = 0;
  uint8_t f_u_arrmul5_fa3_1_y1 = 0;
  uint8_t f_u_arrmul5_fa3_1_f_u_arrmul5_fa2_1_y4 = 0;
  uint8_t f_u_arrmul5_fa3_1_y2 = 0;
  uint8_t f_u_arrmul5_fa3_1_y3 = 0;
  uint8_t f_u_arrmul5_fa3_1_y4 = 0;
  uint8_t f_u_arrmul5_and4_1_a_4 = 0;
  uint8_t f_u_arrmul5_and4_1_b_1 = 0;
  uint8_t f_u_arrmul5_and4_1_y0 = 0;
  uint8_t f_u_arrmul5_ha4_1_f_u_arrmul5_and4_1_y0 = 0;
  uint8_t f_u_arrmul5_ha4_1_f_u_arrmul5_fa3_1_y4 = 0;
  uint8_t f_u_arrmul5_ha4_1_y0 = 0;
  uint8_t f_u_arrmul5_ha4_1_y1 = 0;
  uint8_t f_u_arrmul5_and0_2_a_0 = 0;
  uint8_t f_u_arrmul5_and0_2_b_2 = 0;
  uint8_t f_u_arrmul5_and0_2_y0 = 0;
  uint8_t f_u_arrmul5_ha0_2_f_u_arrmul5_and0_2_y0 = 0;
  uint8_t f_u_arrmul5_ha0_2_f_u_arrmul5_fa1_1_y2 = 0;
  uint8_t f_u_arrmul5_ha0_2_y0 = 0;
  uint8_t f_u_arrmul5_ha0_2_y1 = 0;
  uint8_t f_u_arrmul5_and1_2_a_1 = 0;
  uint8_t f_u_arrmul5_and1_2_b_2 = 0;
  uint8_t f_u_arrmul5_and1_2_y0 = 0;
  uint8_t f_u_arrmul5_fa1_2_f_u_arrmul5_and1_2_y0 = 0;
  uint8_t f_u_arrmul5_fa1_2_f_u_arrmul5_fa2_1_y2 = 0;
  uint8_t f_u_arrmul5_fa1_2_y0 = 0;
  uint8_t f_u_arrmul5_fa1_2_y1 = 0;
  uint8_t f_u_arrmul5_fa1_2_f_u_arrmul5_ha0_2_y1 = 0;
  uint8_t f_u_arrmul5_fa1_2_y2 = 0;
  uint8_t f_u_arrmul5_fa1_2_y3 = 0;
  uint8_t f_u_arrmul5_fa1_2_y4 = 0;
  uint8_t f_u_arrmul5_and2_2_a_2 = 0;
  uint8_t f_u_arrmul5_and2_2_b_2 = 0;
  uint8_t f_u_arrmul5_and2_2_y0 = 0;
  uint8_t f_u_arrmul5_fa2_2_f_u_arrmul5_and2_2_y0 = 0;
  uint8_t f_u_arrmul5_fa2_2_f_u_arrmul5_fa3_1_y2 = 0;
  uint8_t f_u_arrmul5_fa2_2_y0 = 0;
  uint8_t f_u_arrmul5_fa2_2_y1 = 0;
  uint8_t f_u_arrmul5_fa2_2_f_u_arrmul5_fa1_2_y4 = 0;
  uint8_t f_u_arrmul5_fa2_2_y2 = 0;
  uint8_t f_u_arrmul5_fa2_2_y3 = 0;
  uint8_t f_u_arrmul5_fa2_2_y4 = 0;
  uint8_t f_u_arrmul5_and3_2_a_3 = 0;
  uint8_t f_u_arrmul5_and3_2_b_2 = 0;
  uint8_t f_u_arrmul5_and3_2_y0 = 0;
  uint8_t f_u_arrmul5_fa3_2_f_u_arrmul5_and3_2_y0 = 0;
  uint8_t f_u_arrmul5_fa3_2_f_u_arrmul5_ha4_1_y0 = 0;
  uint8_t f_u_arrmul5_fa3_2_y0 = 0;
  uint8_t f_u_arrmul5_fa3_2_y1 = 0;
  uint8_t f_u_arrmul5_fa3_2_f_u_arrmul5_fa2_2_y4 = 0;
  uint8_t f_u_arrmul5_fa3_2_y2 = 0;
  uint8_t f_u_arrmul5_fa3_2_y3 = 0;
  uint8_t f_u_arrmul5_fa3_2_y4 = 0;
  uint8_t f_u_arrmul5_and4_2_a_4 = 0;
  uint8_t f_u_arrmul5_and4_2_b_2 = 0;
  uint8_t f_u_arrmul5_and4_2_y0 = 0;
  uint8_t f_u_arrmul5_fa4_2_f_u_arrmul5_and4_2_y0 = 0;
  uint8_t f_u_arrmul5_fa4_2_f_u_arrmul5_ha4_1_y1 = 0;
  uint8_t f_u_arrmul5_fa4_2_y0 = 0;
  uint8_t f_u_arrmul5_fa4_2_y1 = 0;
  uint8_t f_u_arrmul5_fa4_2_f_u_arrmul5_fa3_2_y4 = 0;
  uint8_t f_u_arrmul5_fa4_2_y2 = 0;
  uint8_t f_u_arrmul5_fa4_2_y3 = 0;
  uint8_t f_u_arrmul5_fa4_2_y4 = 0;
  uint8_t f_u_arrmul5_and0_3_a_0 = 0;
  uint8_t f_u_arrmul5_and0_3_b_3 = 0;
  uint8_t f_u_arrmul5_and0_3_y0 = 0;
  uint8_t f_u_arrmul5_ha0_3_f_u_arrmul5_and0_3_y0 = 0;
  uint8_t f_u_arrmul5_ha0_3_f_u_arrmul5_fa1_2_y2 = 0;
  uint8_t f_u_arrmul5_ha0_3_y0 = 0;
  uint8_t f_u_arrmul5_ha0_3_y1 = 0;
  uint8_t f_u_arrmul5_and1_3_a_1 = 0;
  uint8_t f_u_arrmul5_and1_3_b_3 = 0;
  uint8_t f_u_arrmul5_and1_3_y0 = 0;
  uint8_t f_u_arrmul5_fa1_3_f_u_arrmul5_and1_3_y0 = 0;
  uint8_t f_u_arrmul5_fa1_3_f_u_arrmul5_fa2_2_y2 = 0;
  uint8_t f_u_arrmul5_fa1_3_y0 = 0;
  uint8_t f_u_arrmul5_fa1_3_y1 = 0;
  uint8_t f_u_arrmul5_fa1_3_f_u_arrmul5_ha0_3_y1 = 0;
  uint8_t f_u_arrmul5_fa1_3_y2 = 0;
  uint8_t f_u_arrmul5_fa1_3_y3 = 0;
  uint8_t f_u_arrmul5_fa1_3_y4 = 0;
  uint8_t f_u_arrmul5_and2_3_a_2 = 0;
  uint8_t f_u_arrmul5_and2_3_b_3 = 0;
  uint8_t f_u_arrmul5_and2_3_y0 = 0;
  uint8_t f_u_arrmul5_fa2_3_f_u_arrmul5_and2_3_y0 = 0;
  uint8_t f_u_arrmul5_fa2_3_f_u_arrmul5_fa3_2_y2 = 0;
  uint8_t f_u_arrmul5_fa2_3_y0 = 0;
  uint8_t f_u_arrmul5_fa2_3_y1 = 0;
  uint8_t f_u_arrmul5_fa2_3_f_u_arrmul5_fa1_3_y4 = 0;
  uint8_t f_u_arrmul5_fa2_3_y2 = 0;
  uint8_t f_u_arrmul5_fa2_3_y3 = 0;
  uint8_t f_u_arrmul5_fa2_3_y4 = 0;
  uint8_t f_u_arrmul5_and3_3_a_3 = 0;
  uint8_t f_u_arrmul5_and3_3_b_3 = 0;
  uint8_t f_u_arrmul5_and3_3_y0 = 0;
  uint8_t f_u_arrmul5_fa3_3_f_u_arrmul5_and3_3_y0 = 0;
  uint8_t f_u_arrmul5_fa3_3_f_u_arrmul5_fa4_2_y2 = 0;
  uint8_t f_u_arrmul5_fa3_3_y0 = 0;
  uint8_t f_u_arrmul5_fa3_3_y1 = 0;
  uint8_t f_u_arrmul5_fa3_3_f_u_arrmul5_fa2_3_y4 = 0;
  uint8_t f_u_arrmul5_fa3_3_y2 = 0;
  uint8_t f_u_arrmul5_fa3_3_y3 = 0;
  uint8_t f_u_arrmul5_fa3_3_y4 = 0;
  uint8_t f_u_arrmul5_and4_3_a_4 = 0;
  uint8_t f_u_arrmul5_and4_3_b_3 = 0;
  uint8_t f_u_arrmul5_and4_3_y0 = 0;
  uint8_t f_u_arrmul5_fa4_3_f_u_arrmul5_and4_3_y0 = 0;
  uint8_t f_u_arrmul5_fa4_3_f_u_arrmul5_fa4_2_y4 = 0;
  uint8_t f_u_arrmul5_fa4_3_y0 = 0;
  uint8_t f_u_arrmul5_fa4_3_y1 = 0;
  uint8_t f_u_arrmul5_fa4_3_f_u_arrmul5_fa3_3_y4 = 0;
  uint8_t f_u_arrmul5_fa4_3_y2 = 0;
  uint8_t f_u_arrmul5_fa4_3_y3 = 0;
  uint8_t f_u_arrmul5_fa4_3_y4 = 0;
  uint8_t f_u_arrmul5_and0_4_a_0 = 0;
  uint8_t f_u_arrmul5_and0_4_b_4 = 0;
  uint8_t f_u_arrmul5_and0_4_y0 = 0;
  uint8_t f_u_arrmul5_ha0_4_f_u_arrmul5_and0_4_y0 = 0;
  uint8_t f_u_arrmul5_ha0_4_f_u_arrmul5_fa1_3_y2 = 0;
  uint8_t f_u_arrmul5_ha0_4_y0 = 0;
  uint8_t f_u_arrmul5_ha0_4_y1 = 0;
  uint8_t f_u_arrmul5_and1_4_a_1 = 0;
  uint8_t f_u_arrmul5_and1_4_b_4 = 0;
  uint8_t f_u_arrmul5_and1_4_y0 = 0;
  uint8_t f_u_arrmul5_fa1_4_f_u_arrmul5_and1_4_y0 = 0;
  uint8_t f_u_arrmul5_fa1_4_f_u_arrmul5_fa2_3_y2 = 0;
  uint8_t f_u_arrmul5_fa1_4_y0 = 0;
  uint8_t f_u_arrmul5_fa1_4_y1 = 0;
  uint8_t f_u_arrmul5_fa1_4_f_u_arrmul5_ha0_4_y1 = 0;
  uint8_t f_u_arrmul5_fa1_4_y2 = 0;
  uint8_t f_u_arrmul5_fa1_4_y3 = 0;
  uint8_t f_u_arrmul5_fa1_4_y4 = 0;
  uint8_t f_u_arrmul5_and2_4_a_2 = 0;
  uint8_t f_u_arrmul5_and2_4_b_4 = 0;
  uint8_t f_u_arrmul5_and2_4_y0 = 0;
  uint8_t f_u_arrmul5_fa2_4_f_u_arrmul5_and2_4_y0 = 0;
  uint8_t f_u_arrmul5_fa2_4_f_u_arrmul5_fa3_3_y2 = 0;
  uint8_t f_u_arrmul5_fa2_4_y0 = 0;
  uint8_t f_u_arrmul5_fa2_4_y1 = 0;
  uint8_t f_u_arrmul5_fa2_4_f_u_arrmul5_fa1_4_y4 = 0;
  uint8_t f_u_arrmul5_fa2_4_y2 = 0;
  uint8_t f_u_arrmul5_fa2_4_y3 = 0;
  uint8_t f_u_arrmul5_fa2_4_y4 = 0;
  uint8_t f_u_arrmul5_and3_4_a_3 = 0;
  uint8_t f_u_arrmul5_and3_4_b_4 = 0;
  uint8_t f_u_arrmul5_and3_4_y0 = 0;
  uint8_t f_u_arrmul5_fa3_4_f_u_arrmul5_and3_4_y0 = 0;
  uint8_t f_u_arrmul5_fa3_4_f_u_arrmul5_fa4_3_y2 = 0;
  uint8_t f_u_arrmul5_fa3_4_y0 = 0;
  uint8_t f_u_arrmul5_fa3_4_y1 = 0;
  uint8_t f_u_arrmul5_fa3_4_f_u_arrmul5_fa2_4_y4 = 0;
  uint8_t f_u_arrmul5_fa3_4_y2 = 0;
  uint8_t f_u_arrmul5_fa3_4_y3 = 0;
  uint8_t f_u_arrmul5_fa3_4_y4 = 0;
  uint8_t f_u_arrmul5_and4_4_a_4 = 0;
  uint8_t f_u_arrmul5_and4_4_b_4 = 0;
  uint8_t f_u_arrmul5_and4_4_y0 = 0;
  uint8_t f_u_arrmul5_fa4_4_f_u_arrmul5_and4_4_y0 = 0;
  uint8_t f_u_arrmul5_fa4_4_f_u_arrmul5_fa4_3_y4 = 0;
  uint8_t f_u_arrmul5_fa4_4_y0 = 0;
  uint8_t f_u_arrmul5_fa4_4_y1 = 0;
  uint8_t f_u_arrmul5_fa4_4_f_u_arrmul5_fa3_4_y4 = 0;
  uint8_t f_u_arrmul5_fa4_4_y2 = 0;
  uint8_t f_u_arrmul5_fa4_4_y3 = 0;
  uint8_t f_u_arrmul5_fa4_4_y4 = 0;

  a_0 = ((a >> 0) & 0x01);
  a_1 = ((a >> 1) & 0x01);
  a_2 = ((a >> 2) & 0x01);
  a_3 = ((a >> 3) & 0x01);
  a_4 = ((a >> 4) & 0x01);
  b_0 = ((b >> 0) & 0x01);
  b_1 = ((b >> 1) & 0x01);
  b_2 = ((b >> 2) & 0x01);
  b_3 = ((b >> 3) & 0x01);
  b_4 = ((b >> 4) & 0x01);
  f_u_arrmul5_and0_0_a_0 = a_0;
  f_u_arrmul5_and0_0_b_0 = b_0;
  f_u_arrmul5_and0_0_y0 = f_u_arrmul5_and0_0_a_0 & f_u_arrmul5_and0_0_b_0;
  f_u_arrmul5_and1_0_a_1 = a_1;
  f_u_arrmul5_and1_0_b_0 = b_0;
  f_u_arrmul5_and1_0_y0 = f_u_arrmul5_and1_0_a_1 & f_u_arrmul5_and1_0_b_0;
  f_u_arrmul5_and2_0_a_2 = a_2;
  f_u_arrmul5_and2_0_b_0 = b_0;
  f_u_arrmul5_and2_0_y0 = f_u_arrmul5_and2_0_a_2 & f_u_arrmul5_and2_0_b_0;
  f_u_arrmul5_and3_0_a_3 = a_3;
  f_u_arrmul5_and3_0_b_0 = b_0;
  f_u_arrmul5_and3_0_y0 = f_u_arrmul5_and3_0_a_3 & f_u_arrmul5_and3_0_b_0;
  f_u_arrmul5_and4_0_a_4 = a_4;
  f_u_arrmul5_and4_0_b_0 = b_0;
  f_u_arrmul5_and4_0_y0 = f_u_arrmul5_and4_0_a_4 & f_u_arrmul5_and4_0_b_0;
  f_u_arrmul5_and0_1_a_0 = a_0;
  f_u_arrmul5_and0_1_b_1 = b_1;
  f_u_arrmul5_and0_1_y0 = f_u_arrmul5_and0_1_a_0 & f_u_arrmul5_and0_1_b_1;
  f_u_arrmul5_ha0_1_f_u_arrmul5_and0_1_y0 = ((f_u_arrmul5_and0_1_y0 >> 0) & 0x01);
  f_u_arrmul5_ha0_1_f_u_arrmul5_and1_0_y0 = ((f_u_arrmul5_and1_0_y0 >> 0) & 0x01);
  f_u_arrmul5_ha0_1_y0 = f_u_arrmul5_ha0_1_f_u_arrmul5_and0_1_y0 ^ f_u_arrmul5_ha0_1_f_u_arrmul5_and1_0_y0;
  f_u_arrmul5_ha0_1_y1 = f_u_arrmul5_ha0_1_f_u_arrmul5_and0_1_y0 & f_u_arrmul5_ha0_1_f_u_arrmul5_and1_0_y0;
  f_u_arrmul5_and1_1_a_1 = a_1;
  f_u_arrmul5_and1_1_b_1 = b_1;
  f_u_arrmul5_and1_1_y0 = f_u_arrmul5_and1_1_a_1 & f_u_arrmul5_and1_1_b_1;
  f_u_arrmul5_fa1_1_f_u_arrmul5_and1_1_y0 = ((f_u_arrmul5_and1_1_y0 >> 0) & 0x01);
  f_u_arrmul5_fa1_1_f_u_arrmul5_and2_0_y0 = ((f_u_arrmul5_and2_0_y0 >> 0) & 0x01);
  f_u_arrmul5_fa1_1_f_u_arrmul5_ha0_1_y1 = ((f_u_arrmul5_ha0_1_y1 >> 0) & 0x01);
  f_u_arrmul5_fa1_1_y0 = f_u_arrmul5_fa1_1_f_u_arrmul5_and1_1_y0 ^ f_u_arrmul5_fa1_1_f_u_arrmul5_and2_0_y0;
  f_u_arrmul5_fa1_1_y1 = f_u_arrmul5_fa1_1_f_u_arrmul5_and1_1_y0 & f_u_arrmul5_fa1_1_f_u_arrmul5_and2_0_y0;
  f_u_arrmul5_fa1_1_y2 = f_u_arrmul5_fa1_1_y0 ^ f_u_arrmul5_fa1_1_f_u_arrmul5_ha0_1_y1;
  f_u_arrmul5_fa1_1_y3 = f_u_arrmul5_fa1_1_y0 & f_u_arrmul5_fa1_1_f_u_arrmul5_ha0_1_y1;
  f_u_arrmul5_fa1_1_y4 = f_u_arrmul5_fa1_1_y1 | f_u_arrmul5_fa1_1_y3;
  f_u_arrmul5_and2_1_a_2 = a_2;
  f_u_arrmul5_and2_1_b_1 = b_1;
  f_u_arrmul5_and2_1_y0 = f_u_arrmul5_and2_1_a_2 & f_u_arrmul5_and2_1_b_1;
  f_u_arrmul5_fa2_1_f_u_arrmul5_and2_1_y0 = ((f_u_arrmul5_and2_1_y0 >> 0) & 0x01);
  f_u_arrmul5_fa2_1_f_u_arrmul5_and3_0_y0 = ((f_u_arrmul5_and3_0_y0 >> 0) & 0x01);
  f_u_arrmul5_fa2_1_f_u_arrmul5_fa1_1_y4 = ((f_u_arrmul5_fa1_1_y4 >> 0) & 0x01);
  f_u_arrmul5_fa2_1_y0 = f_u_arrmul5_fa2_1_f_u_arrmul5_and2_1_y0 ^ f_u_arrmul5_fa2_1_f_u_arrmul5_and3_0_y0;
  f_u_arrmul5_fa2_1_y1 = f_u_arrmul5_fa2_1_f_u_arrmul5_and2_1_y0 & f_u_arrmul5_fa2_1_f_u_arrmul5_and3_0_y0;
  f_u_arrmul5_fa2_1_y2 = f_u_arrmul5_fa2_1_y0 ^ f_u_arrmul5_fa2_1_f_u_arrmul5_fa1_1_y4;
  f_u_arrmul5_fa2_1_y3 = f_u_arrmul5_fa2_1_y0 & f_u_arrmul5_fa2_1_f_u_arrmul5_fa1_1_y4;
  f_u_arrmul5_fa2_1_y4 = f_u_arrmul5_fa2_1_y1 | f_u_arrmul5_fa2_1_y3;
  f_u_arrmul5_and3_1_a_3 = a_3;
  f_u_arrmul5_and3_1_b_1 = b_1;
  f_u_arrmul5_and3_1_y0 = f_u_arrmul5_and3_1_a_3 & f_u_arrmul5_and3_1_b_1;
  f_u_arrmul5_fa3_1_f_u_arrmul5_and3_1_y0 = ((f_u_arrmul5_and3_1_y0 >> 0) & 0x01);
  f_u_arrmul5_fa3_1_f_u_arrmul5_and4_0_y0 = ((f_u_arrmul5_and4_0_y0 >> 0) & 0x01);
  f_u_arrmul5_fa3_1_f_u_arrmul5_fa2_1_y4 = ((f_u_arrmul5_fa2_1_y4 >> 0) & 0x01);
  f_u_arrmul5_fa3_1_y0 = f_u_arrmul5_fa3_1_f_u_arrmul5_and3_1_y0 ^ f_u_arrmul5_fa3_1_f_u_arrmul5_and4_0_y0;
  f_u_arrmul5_fa3_1_y1 = f_u_arrmul5_fa3_1_f_u_arrmul5_and3_1_y0 & f_u_arrmul5_fa3_1_f_u_arrmul5_and4_0_y0;
  f_u_arrmul5_fa3_1_y2 = f_u_arrmul5_fa3_1_y0 ^ f_u_arrmul5_fa3_1_f_u_arrmul5_fa2_1_y4;
  f_u_arrmul5_fa3_1_y3 = f_u_arrmul5_fa3_1_y0 & f_u_arrmul5_fa3_1_f_u_arrmul5_fa2_1_y4;
  f_u_arrmul5_fa3_1_y4 = f_u_arrmul5_fa3_1_y1 | f_u_arrmul5_fa3_1_y3;
  f_u_arrmul5_and4_1_a_4 = a_4;
  f_u_arrmul5_and4_1_b_1 = b_1;
  f_u_arrmul5_and4_1_y0 = f_u_arrmul5_and4_1_a_4 & f_u_arrmul5_and4_1_b_1;
  f_u_arrmul5_ha4_1_f_u_arrmul5_and4_1_y0 = ((f_u_arrmul5_and4_1_y0 >> 0) & 0x01);
  f_u_arrmul5_ha4_1_f_u_arrmul5_fa3_1_y4 = ((f_u_arrmul5_fa3_1_y4 >> 0) & 0x01);
  f_u_arrmul5_ha4_1_y0 = f_u_arrmul5_ha4_1_f_u_arrmul5_and4_1_y0 ^ f_u_arrmul5_ha4_1_f_u_arrmul5_fa3_1_y4;
  f_u_arrmul5_ha4_1_y1 = f_u_arrmul5_ha4_1_f_u_arrmul5_and4_1_y0 & f_u_arrmul5_ha4_1_f_u_arrmul5_fa3_1_y4;
  f_u_arrmul5_and0_2_a_0 = a_0;
  f_u_arrmul5_and0_2_b_2 = b_2;
  f_u_arrmul5_and0_2_y0 = f_u_arrmul5_and0_2_a_0 & f_u_arrmul5_and0_2_b_2;
  f_u_arrmul5_ha0_2_f_u_arrmul5_and0_2_y0 = ((f_u_arrmul5_and0_2_y0 >> 0) & 0x01);
  f_u_arrmul5_ha0_2_f_u_arrmul5_fa1_1_y2 = ((f_u_arrmul5_fa1_1_y2 >> 0) & 0x01);
  f_u_arrmul5_ha0_2_y0 = f_u_arrmul5_ha0_2_f_u_arrmul5_and0_2_y0 ^ f_u_arrmul5_ha0_2_f_u_arrmul5_fa1_1_y2;
  f_u_arrmul5_ha0_2_y1 = f_u_arrmul5_ha0_2_f_u_arrmul5_and0_2_y0 & f_u_arrmul5_ha0_2_f_u_arrmul5_fa1_1_y2;
  f_u_arrmul5_and1_2_a_1 = a_1;
  f_u_arrmul5_and1_2_b_2 = b_2;
  f_u_arrmul5_and1_2_y0 = f_u_arrmul5_and1_2_a_1 & f_u_arrmul5_and1_2_b_2;
  f_u_arrmul5_fa1_2_f_u_arrmul5_and1_2_y0 = ((f_u_arrmul5_and1_2_y0 >> 0) & 0x01);
  f_u_arrmul5_fa1_2_f_u_arrmul5_fa2_1_y2 = ((f_u_arrmul5_fa2_1_y2 >> 0) & 0x01);
  f_u_arrmul5_fa1_2_f_u_arrmul5_ha0_2_y1 = ((f_u_arrmul5_ha0_2_y1 >> 0) & 0x01);
  f_u_arrmul5_fa1_2_y0 = f_u_arrmul5_fa1_2_f_u_arrmul5_and1_2_y0 ^ f_u_arrmul5_fa1_2_f_u_arrmul5_fa2_1_y2;
  f_u_arrmul5_fa1_2_y1 = f_u_arrmul5_fa1_2_f_u_arrmul5_and1_2_y0 & f_u_arrmul5_fa1_2_f_u_arrmul5_fa2_1_y2;
  f_u_arrmul5_fa1_2_y2 = f_u_arrmul5_fa1_2_y0 ^ f_u_arrmul5_fa1_2_f_u_arrmul5_ha0_2_y1;
  f_u_arrmul5_fa1_2_y3 = f_u_arrmul5_fa1_2_y0 & f_u_arrmul5_fa1_2_f_u_arrmul5_ha0_2_y1;
  f_u_arrmul5_fa1_2_y4 = f_u_arrmul5_fa1_2_y1 | f_u_arrmul5_fa1_2_y3;
  f_u_arrmul5_and2_2_a_2 = a_2;
  f_u_arrmul5_and2_2_b_2 = b_2;
  f_u_arrmul5_and2_2_y0 = f_u_arrmul5_and2_2_a_2 & f_u_arrmul5_and2_2_b_2;
  f_u_arrmul5_fa2_2_f_u_arrmul5_and2_2_y0 = ((f_u_arrmul5_and2_2_y0 >> 0) & 0x01);
  f_u_arrmul5_fa2_2_f_u_arrmul5_fa3_1_y2 = ((f_u_arrmul5_fa3_1_y2 >> 0) & 0x01);
  f_u_arrmul5_fa2_2_f_u_arrmul5_fa1_2_y4 = ((f_u_arrmul5_fa1_2_y4 >> 0) & 0x01);
  f_u_arrmul5_fa2_2_y0 = f_u_arrmul5_fa2_2_f_u_arrmul5_and2_2_y0 ^ f_u_arrmul5_fa2_2_f_u_arrmul5_fa3_1_y2;
  f_u_arrmul5_fa2_2_y1 = f_u_arrmul5_fa2_2_f_u_arrmul5_and2_2_y0 & f_u_arrmul5_fa2_2_f_u_arrmul5_fa3_1_y2;
  f_u_arrmul5_fa2_2_y2 = f_u_arrmul5_fa2_2_y0 ^ f_u_arrmul5_fa2_2_f_u_arrmul5_fa1_2_y4;
  f_u_arrmul5_fa2_2_y3 = f_u_arrmul5_fa2_2_y0 & f_u_arrmul5_fa2_2_f_u_arrmul5_fa1_2_y4;
  f_u_arrmul5_fa2_2_y4 = f_u_arrmul5_fa2_2_y1 | f_u_arrmul5_fa2_2_y3;
  f_u_arrmul5_and3_2_a_3 = a_3;
  f_u_arrmul5_and3_2_b_2 = b_2;
  f_u_arrmul5_and3_2_y0 = f_u_arrmul5_and3_2_a_3 & f_u_arrmul5_and3_2_b_2;
  f_u_arrmul5_fa3_2_f_u_arrmul5_and3_2_y0 = ((f_u_arrmul5_and3_2_y0 >> 0) & 0x01);
  f_u_arrmul5_fa3_2_f_u_arrmul5_ha4_1_y0 = ((f_u_arrmul5_ha4_1_y0 >> 0) & 0x01);
  f_u_arrmul5_fa3_2_f_u_arrmul5_fa2_2_y4 = ((f_u_arrmul5_fa2_2_y4 >> 0) & 0x01);
  f_u_arrmul5_fa3_2_y0 = f_u_arrmul5_fa3_2_f_u_arrmul5_and3_2_y0 ^ f_u_arrmul5_fa3_2_f_u_arrmul5_ha4_1_y0;
  f_u_arrmul5_fa3_2_y1 = f_u_arrmul5_fa3_2_f_u_arrmul5_and3_2_y0 & f_u_arrmul5_fa3_2_f_u_arrmul5_ha4_1_y0;
  f_u_arrmul5_fa3_2_y2 = f_u_arrmul5_fa3_2_y0 ^ f_u_arrmul5_fa3_2_f_u_arrmul5_fa2_2_y4;
  f_u_arrmul5_fa3_2_y3 = f_u_arrmul5_fa3_2_y0 & f_u_arrmul5_fa3_2_f_u_arrmul5_fa2_2_y4;
  f_u_arrmul5_fa3_2_y4 = f_u_arrmul5_fa3_2_y1 | f_u_arrmul5_fa3_2_y3;
  f_u_arrmul5_and4_2_a_4 = a_4;
  f_u_arrmul5_and4_2_b_2 = b_2;
  f_u_arrmul5_and4_2_y0 = f_u_arrmul5_and4_2_a_4 & f_u_arrmul5_and4_2_b_2;
  f_u_arrmul5_fa4_2_f_u_arrmul5_and4_2_y0 = ((f_u_arrmul5_and4_2_y0 >> 0) & 0x01);
  f_u_arrmul5_fa4_2_f_u_arrmul5_ha4_1_y1 = ((f_u_arrmul5_ha4_1_y1 >> 0) & 0x01);
  f_u_arrmul5_fa4_2_f_u_arrmul5_fa3_2_y4 = ((f_u_arrmul5_fa3_2_y4 >> 0) & 0x01);
  f_u_arrmul5_fa4_2_y0 = f_u_arrmul5_fa4_2_f_u_arrmul5_and4_2_y0 ^ f_u_arrmul5_fa4_2_f_u_arrmul5_ha4_1_y1;
  f_u_arrmul5_fa4_2_y1 = f_u_arrmul5_fa4_2_f_u_arrmul5_and4_2_y0 & f_u_arrmul5_fa4_2_f_u_arrmul5_ha4_1_y1;
  f_u_arrmul5_fa4_2_y2 = f_u_arrmul5_fa4_2_y0 ^ f_u_arrmul5_fa4_2_f_u_arrmul5_fa3_2_y4;
  f_u_arrmul5_fa4_2_y3 = f_u_arrmul5_fa4_2_y0 & f_u_arrmul5_fa4_2_f_u_arrmul5_fa3_2_y4;
  f_u_arrmul5_fa4_2_y4 = f_u_arrmul5_fa4_2_y1 | f_u_arrmul5_fa4_2_y3;
  f_u_arrmul5_and0_3_a_0 = a_0;
  f_u_arrmul5_and0_3_b_3 = b_3;
  f_u_arrmul5_and0_3_y0 = f_u_arrmul5_and0_3_a_0 & f_u_arrmul5_and0_3_b_3;
  f_u_arrmul5_ha0_3_f_u_arrmul5_and0_3_y0 = ((f_u_arrmul5_and0_3_y0 >> 0) & 0x01);
  f_u_arrmul5_ha0_3_f_u_arrmul5_fa1_2_y2 = ((f_u_arrmul5_fa1_2_y2 >> 0) & 0x01);
  f_u_arrmul5_ha0_3_y0 = f_u_arrmul5_ha0_3_f_u_arrmul5_and0_3_y0 ^ f_u_arrmul5_ha0_3_f_u_arrmul5_fa1_2_y2;
  f_u_arrmul5_ha0_3_y1 = f_u_arrmul5_ha0_3_f_u_arrmul5_and0_3_y0 & f_u_arrmul5_ha0_3_f_u_arrmul5_fa1_2_y2;
  f_u_arrmul5_and1_3_a_1 = a_1;
  f_u_arrmul5_and1_3_b_3 = b_3;
  f_u_arrmul5_and1_3_y0 = f_u_arrmul5_and1_3_a_1 & f_u_arrmul5_and1_3_b_3;
  f_u_arrmul5_fa1_3_f_u_arrmul5_and1_3_y0 = ((f_u_arrmul5_and1_3_y0 >> 0) & 0x01);
  f_u_arrmul5_fa1_3_f_u_arrmul5_fa2_2_y2 = ((f_u_arrmul5_fa2_2_y2 >> 0) & 0x01);
  f_u_arrmul5_fa1_3_f_u_arrmul5_ha0_3_y1 = ((f_u_arrmul5_ha0_3_y1 >> 0) & 0x01);
  f_u_arrmul5_fa1_3_y0 = f_u_arrmul5_fa1_3_f_u_arrmul5_and1_3_y0 ^ f_u_arrmul5_fa1_3_f_u_arrmul5_fa2_2_y2;
  f_u_arrmul5_fa1_3_y1 = f_u_arrmul5_fa1_3_f_u_arrmul5_and1_3_y0 & f_u_arrmul5_fa1_3_f_u_arrmul5_fa2_2_y2;
  f_u_arrmul5_fa1_3_y2 = f_u_arrmul5_fa1_3_y0 ^ f_u_arrmul5_fa1_3_f_u_arrmul5_ha0_3_y1;
  f_u_arrmul5_fa1_3_y3 = f_u_arrmul5_fa1_3_y0 & f_u_arrmul5_fa1_3_f_u_arrmul5_ha0_3_y1;
  f_u_arrmul5_fa1_3_y4 = f_u_arrmul5_fa1_3_y1 | f_u_arrmul5_fa1_3_y3;
  f_u_arrmul5_and2_3_a_2 = a_2;
  f_u_arrmul5_and2_3_b_3 = b_3;
  f_u_arrmul5_and2_3_y0 = f_u_arrmul5_and2_3_a_2 & f_u_arrmul5_and2_3_b_3;
  f_u_arrmul5_fa2_3_f_u_arrmul5_and2_3_y0 = ((f_u_arrmul5_and2_3_y0 >> 0) & 0x01);
  f_u_arrmul5_fa2_3_f_u_arrmul5_fa3_2_y2 = ((f_u_arrmul5_fa3_2_y2 >> 0) & 0x01);
  f_u_arrmul5_fa2_3_f_u_arrmul5_fa1_3_y4 = ((f_u_arrmul5_fa1_3_y4 >> 0) & 0x01);
  f_u_arrmul5_fa2_3_y0 = f_u_arrmul5_fa2_3_f_u_arrmul5_and2_3_y0 ^ f_u_arrmul5_fa2_3_f_u_arrmul5_fa3_2_y2;
  f_u_arrmul5_fa2_3_y1 = f_u_arrmul5_fa2_3_f_u_arrmul5_and2_3_y0 & f_u_arrmul5_fa2_3_f_u_arrmul5_fa3_2_y2;
  f_u_arrmul5_fa2_3_y2 = f_u_arrmul5_fa2_3_y0 ^ f_u_arrmul5_fa2_3_f_u_arrmul5_fa1_3_y4;
  f_u_arrmul5_fa2_3_y3 = f_u_arrmul5_fa2_3_y0 & f_u_arrmul5_fa2_3_f_u_arrmul5_fa1_3_y4;
  f_u_arrmul5_fa2_3_y4 = f_u_arrmul5_fa2_3_y1 | f_u_arrmul5_fa2_3_y3;
  f_u_arrmul5_and3_3_a_3 = a_3;
  f_u_arrmul5_and3_3_b_3 = b_3;
  f_u_arrmul5_and3_3_y0 = f_u_arrmul5_and3_3_a_3 & f_u_arrmul5_and3_3_b_3;
  f_u_arrmul5_fa3_3_f_u_arrmul5_and3_3_y0 = ((f_u_arrmul5_and3_3_y0 >> 0) & 0x01);
  f_u_arrmul5_fa3_3_f_u_arrmul5_fa4_2_y2 = ((f_u_arrmul5_fa4_2_y2 >> 0) & 0x01);
  f_u_arrmul5_fa3_3_f_u_arrmul5_fa2_3_y4 = ((f_u_arrmul5_fa2_3_y4 >> 0) & 0x01);
  f_u_arrmul5_fa3_3_y0 = f_u_arrmul5_fa3_3_f_u_arrmul5_and3_3_y0 ^ f_u_arrmul5_fa3_3_f_u_arrmul5_fa4_2_y2;
  f_u_arrmul5_fa3_3_y1 = f_u_arrmul5_fa3_3_f_u_arrmul5_and3_3_y0 & f_u_arrmul5_fa3_3_f_u_arrmul5_fa4_2_y2;
  f_u_arrmul5_fa3_3_y2 = f_u_arrmul5_fa3_3_y0 ^ f_u_arrmul5_fa3_3_f_u_arrmul5_fa2_3_y4;
  f_u_arrmul5_fa3_3_y3 = f_u_arrmul5_fa3_3_y0 & f_u_arrmul5_fa3_3_f_u_arrmul5_fa2_3_y4;
  f_u_arrmul5_fa3_3_y4 = f_u_arrmul5_fa3_3_y1 | f_u_arrmul5_fa3_3_y3;
  f_u_arrmul5_and4_3_a_4 = a_4;
  f_u_arrmul5_and4_3_b_3 = b_3;
  f_u_arrmul5_and4_3_y0 = f_u_arrmul5_and4_3_a_4 & f_u_arrmul5_and4_3_b_3;
  f_u_arrmul5_fa4_3_f_u_arrmul5_and4_3_y0 = ((f_u_arrmul5_and4_3_y0 >> 0) & 0x01);
  f_u_arrmul5_fa4_3_f_u_arrmul5_fa4_2_y4 = ((f_u_arrmul5_fa4_2_y4 >> 0) & 0x01);
  f_u_arrmul5_fa4_3_f_u_arrmul5_fa3_3_y4 = ((f_u_arrmul5_fa3_3_y4 >> 0) & 0x01);
  f_u_arrmul5_fa4_3_y0 = f_u_arrmul5_fa4_3_f_u_arrmul5_and4_3_y0 ^ f_u_arrmul5_fa4_3_f_u_arrmul5_fa4_2_y4;
  f_u_arrmul5_fa4_3_y1 = f_u_arrmul5_fa4_3_f_u_arrmul5_and4_3_y0 & f_u_arrmul5_fa4_3_f_u_arrmul5_fa4_2_y4;
  f_u_arrmul5_fa4_3_y2 = f_u_arrmul5_fa4_3_y0 ^ f_u_arrmul5_fa4_3_f_u_arrmul5_fa3_3_y4;
  f_u_arrmul5_fa4_3_y3 = f_u_arrmul5_fa4_3_y0 & f_u_arrmul5_fa4_3_f_u_arrmul5_fa3_3_y4;
  f_u_arrmul5_fa4_3_y4 = f_u_arrmul5_fa4_3_y1 | f_u_arrmul5_fa4_3_y3;
  f_u_arrmul5_and0_4_a_0 = a_0;
  f_u_arrmul5_and0_4_b_4 = b_4;
  f_u_arrmul5_and0_4_y0 = f_u_arrmul5_and0_4_a_0 & f_u_arrmul5_and0_4_b_4;
  f_u_arrmul5_ha0_4_f_u_arrmul5_and0_4_y0 = ((f_u_arrmul5_and0_4_y0 >> 0) & 0x01);
  f_u_arrmul5_ha0_4_f_u_arrmul5_fa1_3_y2 = ((f_u_arrmul5_fa1_3_y2 >> 0) & 0x01);
  f_u_arrmul5_ha0_4_y0 = f_u_arrmul5_ha0_4_f_u_arrmul5_and0_4_y0 ^ f_u_arrmul5_ha0_4_f_u_arrmul5_fa1_3_y2;
  f_u_arrmul5_ha0_4_y1 = f_u_arrmul5_ha0_4_f_u_arrmul5_and0_4_y0 & f_u_arrmul5_ha0_4_f_u_arrmul5_fa1_3_y2;
  f_u_arrmul5_and1_4_a_1 = a_1;
  f_u_arrmul5_and1_4_b_4 = b_4;
  f_u_arrmul5_and1_4_y0 = f_u_arrmul5_and1_4_a_1 & f_u_arrmul5_and1_4_b_4;
  f_u_arrmul5_fa1_4_f_u_arrmul5_and1_4_y0 = ((f_u_arrmul5_and1_4_y0 >> 0) & 0x01);
  f_u_arrmul5_fa1_4_f_u_arrmul5_fa2_3_y2 = ((f_u_arrmul5_fa2_3_y2 >> 0) & 0x01);
  f_u_arrmul5_fa1_4_f_u_arrmul5_ha0_4_y1 = ((f_u_arrmul5_ha0_4_y1 >> 0) & 0x01);
  f_u_arrmul5_fa1_4_y0 = f_u_arrmul5_fa1_4_f_u_arrmul5_and1_4_y0 ^ f_u_arrmul5_fa1_4_f_u_arrmul5_fa2_3_y2;
  f_u_arrmul5_fa1_4_y1 = f_u_arrmul5_fa1_4_f_u_arrmul5_and1_4_y0 & f_u_arrmul5_fa1_4_f_u_arrmul5_fa2_3_y2;
  f_u_arrmul5_fa1_4_y2 = f_u_arrmul5_fa1_4_y0 ^ f_u_arrmul5_fa1_4_f_u_arrmul5_ha0_4_y1;
  f_u_arrmul5_fa1_4_y3 = f_u_arrmul5_fa1_4_y0 & f_u_arrmul5_fa1_4_f_u_arrmul5_ha0_4_y1;
  f_u_arrmul5_fa1_4_y4 = f_u_arrmul5_fa1_4_y1 | f_u_arrmul5_fa1_4_y3;
  f_u_arrmul5_and2_4_a_2 = a_2;
  f_u_arrmul5_and2_4_b_4 = b_4;
  f_u_arrmul5_and2_4_y0 = f_u_arrmul5_and2_4_a_2 & f_u_arrmul5_and2_4_b_4;
  f_u_arrmul5_fa2_4_f_u_arrmul5_and2_4_y0 = ((f_u_arrmul5_and2_4_y0 >> 0) & 0x01);
  f_u_arrmul5_fa2_4_f_u_arrmul5_fa3_3_y2 = ((f_u_arrmul5_fa3_3_y2 >> 0) & 0x01);
  f_u_arrmul5_fa2_4_f_u_arrmul5_fa1_4_y4 = ((f_u_arrmul5_fa1_4_y4 >> 0) & 0x01);
  f_u_arrmul5_fa2_4_y0 = f_u_arrmul5_fa2_4_f_u_arrmul5_and2_4_y0 ^ f_u_arrmul5_fa2_4_f_u_arrmul5_fa3_3_y2;
  f_u_arrmul5_fa2_4_y1 = f_u_arrmul5_fa2_4_f_u_arrmul5_and2_4_y0 & f_u_arrmul5_fa2_4_f_u_arrmul5_fa3_3_y2;
  f_u_arrmul5_fa2_4_y2 = f_u_arrmul5_fa2_4_y0 ^ f_u_arrmul5_fa2_4_f_u_arrmul5_fa1_4_y4;
  f_u_arrmul5_fa2_4_y3 = f_u_arrmul5_fa2_4_y0 & f_u_arrmul5_fa2_4_f_u_arrmul5_fa1_4_y4;
  f_u_arrmul5_fa2_4_y4 = f_u_arrmul5_fa2_4_y1 | f_u_arrmul5_fa2_4_y3;
  f_u_arrmul5_and3_4_a_3 = a_3;
  f_u_arrmul5_and3_4_b_4 = b_4;
  f_u_arrmul5_and3_4_y0 = f_u_arrmul5_and3_4_a_3 & f_u_arrmul5_and3_4_b_4;
  f_u_arrmul5_fa3_4_f_u_arrmul5_and3_4_y0 = ((f_u_arrmul5_and3_4_y0 >> 0) & 0x01);
  f_u_arrmul5_fa3_4_f_u_arrmul5_fa4_3_y2 = ((f_u_arrmul5_fa4_3_y2 >> 0) & 0x01);
  f_u_arrmul5_fa3_4_f_u_arrmul5_fa2_4_y4 = ((f_u_arrmul5_fa2_4_y4 >> 0) & 0x01);
  f_u_arrmul5_fa3_4_y0 = f_u_arrmul5_fa3_4_f_u_arrmul5_and3_4_y0 ^ f_u_arrmul5_fa3_4_f_u_arrmul5_fa4_3_y2;
  f_u_arrmul5_fa3_4_y1 = f_u_arrmul5_fa3_4_f_u_arrmul5_and3_4_y0 & f_u_arrmul5_fa3_4_f_u_arrmul5_fa4_3_y2;
  f_u_arrmul5_fa3_4_y2 = f_u_arrmul5_fa3_4_y0 ^ f_u_arrmul5_fa3_4_f_u_arrmul5_fa2_4_y4;
  f_u_arrmul5_fa3_4_y3 = f_u_arrmul5_fa3_4_y0 & f_u_arrmul5_fa3_4_f_u_arrmul5_fa2_4_y4;
  f_u_arrmul5_fa3_4_y4 = f_u_arrmul5_fa3_4_y1 | f_u_arrmul5_fa3_4_y3;
  f_u_arrmul5_and4_4_a_4 = a_4;
  f_u_arrmul5_and4_4_b_4 = b_4;
  f_u_arrmul5_and4_4_y0 = f_u_arrmul5_and4_4_a_4 & f_u_arrmul5_and4_4_b_4;
  f_u_arrmul5_fa4_4_f_u_arrmul5_and4_4_y0 = ((f_u_arrmul5_and4_4_y0 >> 0) & 0x01);
  f_u_arrmul5_fa4_4_f_u_arrmul5_fa4_3_y4 = ((f_u_arrmul5_fa4_3_y4 >> 0) & 0x01);
  f_u_arrmul5_fa4_4_f_u_arrmul5_fa3_4_y4 = ((f_u_arrmul5_fa3_4_y4 >> 0) & 0x01);
  f_u_arrmul5_fa4_4_y0 = f_u_arrmul5_fa4_4_f_u_arrmul5_and4_4_y0 ^ f_u_arrmul5_fa4_4_f_u_arrmul5_fa4_3_y4;
  f_u_arrmul5_fa4_4_y1 = f_u_arrmul5_fa4_4_f_u_arrmul5_and4_4_y0 & f_u_arrmul5_fa4_4_f_u_arrmul5_fa4_3_y4;
  f_u_arrmul5_fa4_4_y2 = f_u_arrmul5_fa4_4_y0 ^ f_u_arrmul5_fa4_4_f_u_arrmul5_fa3_4_y4;
  f_u_arrmul5_fa4_4_y3 = f_u_arrmul5_fa4_4_y0 & f_u_arrmul5_fa4_4_f_u_arrmul5_fa3_4_y4;
  f_u_arrmul5_fa4_4_y4 = f_u_arrmul5_fa4_4_y1 | f_u_arrmul5_fa4_4_y3;

  out |= (f_u_arrmul5_and0_0_y0 & 0x01) << 0;
  out |= (f_u_arrmul5_ha0_1_y0 & 0x01) << 1;
  out |= (f_u_arrmul5_ha0_2_y0 & 0x01) << 2;
  out |= (f_u_arrmul5_ha0_3_y0 & 0x01) << 3;
  out |= (f_u_arrmul5_ha0_4_y0 & 0x01) << 4;
  out |= (f_u_arrmul5_fa1_4_y2 & 0x01) << 5;
  out |= (f_u_arrmul5_fa2_4_y2 & 0x01) << 6;
  out |= (f_u_arrmul5_fa3_4_y2 & 0x01) << 7;
  out |= (f_u_arrmul5_fa4_4_y2 & 0x01) << 8;
  out |= (f_u_arrmul5_fa4_4_y4 & 0x01) << 9;
  return out;
}

#include <assert.h>
int main(){
  for (int i = 0; i < 32; i++){
    for (int j = 0; j < 32; j++){
      assert((i * j) == f_u_arrmul5(i,j));
    }
  }
  return 0;
}