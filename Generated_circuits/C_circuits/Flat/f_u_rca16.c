#include <stdio.h>
#include <stdint.h>

uint64_t f_u_rca16(uint64_t a, uint64_t b){
  uint64_t out = 0;
  uint8_t a_0 = 0;
  uint8_t a_1 = 0;
  uint8_t a_2 = 0;
  uint8_t a_3 = 0;
  uint8_t a_4 = 0;
  uint8_t a_5 = 0;
  uint8_t a_6 = 0;
  uint8_t a_7 = 0;
  uint8_t a_8 = 0;
  uint8_t a_9 = 0;
  uint8_t a_10 = 0;
  uint8_t a_11 = 0;
  uint8_t a_12 = 0;
  uint8_t a_13 = 0;
  uint8_t a_14 = 0;
  uint8_t a_15 = 0;
  uint8_t b_0 = 0;
  uint8_t b_1 = 0;
  uint8_t b_2 = 0;
  uint8_t b_3 = 0;
  uint8_t b_4 = 0;
  uint8_t b_5 = 0;
  uint8_t b_6 = 0;
  uint8_t b_7 = 0;
  uint8_t b_8 = 0;
  uint8_t b_9 = 0;
  uint8_t b_10 = 0;
  uint8_t b_11 = 0;
  uint8_t b_12 = 0;
  uint8_t b_13 = 0;
  uint8_t b_14 = 0;
  uint8_t b_15 = 0;
  uint8_t f_u_rca16_ha_a_0 = 0;
  uint8_t f_u_rca16_ha_b_0 = 0;
  uint8_t f_u_rca16_ha_y0 = 0;
  uint8_t f_u_rca16_ha_y1 = 0;
  uint8_t f_u_rca16_fa1_a_1 = 0;
  uint8_t f_u_rca16_fa1_b_1 = 0;
  uint8_t f_u_rca16_fa1_y0 = 0;
  uint8_t f_u_rca16_fa1_y1 = 0;
  uint8_t f_u_rca16_fa1_f_u_rca16_ha_y1 = 0;
  uint8_t f_u_rca16_fa1_y2 = 0;
  uint8_t f_u_rca16_fa1_y3 = 0;
  uint8_t f_u_rca16_fa1_y4 = 0;
  uint8_t f_u_rca16_fa2_a_2 = 0;
  uint8_t f_u_rca16_fa2_b_2 = 0;
  uint8_t f_u_rca16_fa2_y0 = 0;
  uint8_t f_u_rca16_fa2_y1 = 0;
  uint8_t f_u_rca16_fa2_f_u_rca16_fa1_y4 = 0;
  uint8_t f_u_rca16_fa2_y2 = 0;
  uint8_t f_u_rca16_fa2_y3 = 0;
  uint8_t f_u_rca16_fa2_y4 = 0;
  uint8_t f_u_rca16_fa3_a_3 = 0;
  uint8_t f_u_rca16_fa3_b_3 = 0;
  uint8_t f_u_rca16_fa3_y0 = 0;
  uint8_t f_u_rca16_fa3_y1 = 0;
  uint8_t f_u_rca16_fa3_f_u_rca16_fa2_y4 = 0;
  uint8_t f_u_rca16_fa3_y2 = 0;
  uint8_t f_u_rca16_fa3_y3 = 0;
  uint8_t f_u_rca16_fa3_y4 = 0;
  uint8_t f_u_rca16_fa4_a_4 = 0;
  uint8_t f_u_rca16_fa4_b_4 = 0;
  uint8_t f_u_rca16_fa4_y0 = 0;
  uint8_t f_u_rca16_fa4_y1 = 0;
  uint8_t f_u_rca16_fa4_f_u_rca16_fa3_y4 = 0;
  uint8_t f_u_rca16_fa4_y2 = 0;
  uint8_t f_u_rca16_fa4_y3 = 0;
  uint8_t f_u_rca16_fa4_y4 = 0;
  uint8_t f_u_rca16_fa5_a_5 = 0;
  uint8_t f_u_rca16_fa5_b_5 = 0;
  uint8_t f_u_rca16_fa5_y0 = 0;
  uint8_t f_u_rca16_fa5_y1 = 0;
  uint8_t f_u_rca16_fa5_f_u_rca16_fa4_y4 = 0;
  uint8_t f_u_rca16_fa5_y2 = 0;
  uint8_t f_u_rca16_fa5_y3 = 0;
  uint8_t f_u_rca16_fa5_y4 = 0;
  uint8_t f_u_rca16_fa6_a_6 = 0;
  uint8_t f_u_rca16_fa6_b_6 = 0;
  uint8_t f_u_rca16_fa6_y0 = 0;
  uint8_t f_u_rca16_fa6_y1 = 0;
  uint8_t f_u_rca16_fa6_f_u_rca16_fa5_y4 = 0;
  uint8_t f_u_rca16_fa6_y2 = 0;
  uint8_t f_u_rca16_fa6_y3 = 0;
  uint8_t f_u_rca16_fa6_y4 = 0;
  uint8_t f_u_rca16_fa7_a_7 = 0;
  uint8_t f_u_rca16_fa7_b_7 = 0;
  uint8_t f_u_rca16_fa7_y0 = 0;
  uint8_t f_u_rca16_fa7_y1 = 0;
  uint8_t f_u_rca16_fa7_f_u_rca16_fa6_y4 = 0;
  uint8_t f_u_rca16_fa7_y2 = 0;
  uint8_t f_u_rca16_fa7_y3 = 0;
  uint8_t f_u_rca16_fa7_y4 = 0;
  uint8_t f_u_rca16_fa8_a_8 = 0;
  uint8_t f_u_rca16_fa8_b_8 = 0;
  uint8_t f_u_rca16_fa8_y0 = 0;
  uint8_t f_u_rca16_fa8_y1 = 0;
  uint8_t f_u_rca16_fa8_f_u_rca16_fa7_y4 = 0;
  uint8_t f_u_rca16_fa8_y2 = 0;
  uint8_t f_u_rca16_fa8_y3 = 0;
  uint8_t f_u_rca16_fa8_y4 = 0;
  uint8_t f_u_rca16_fa9_a_9 = 0;
  uint8_t f_u_rca16_fa9_b_9 = 0;
  uint8_t f_u_rca16_fa9_y0 = 0;
  uint8_t f_u_rca16_fa9_y1 = 0;
  uint8_t f_u_rca16_fa9_f_u_rca16_fa8_y4 = 0;
  uint8_t f_u_rca16_fa9_y2 = 0;
  uint8_t f_u_rca16_fa9_y3 = 0;
  uint8_t f_u_rca16_fa9_y4 = 0;
  uint8_t f_u_rca16_fa10_a_10 = 0;
  uint8_t f_u_rca16_fa10_b_10 = 0;
  uint8_t f_u_rca16_fa10_y0 = 0;
  uint8_t f_u_rca16_fa10_y1 = 0;
  uint8_t f_u_rca16_fa10_f_u_rca16_fa9_y4 = 0;
  uint8_t f_u_rca16_fa10_y2 = 0;
  uint8_t f_u_rca16_fa10_y3 = 0;
  uint8_t f_u_rca16_fa10_y4 = 0;
  uint8_t f_u_rca16_fa11_a_11 = 0;
  uint8_t f_u_rca16_fa11_b_11 = 0;
  uint8_t f_u_rca16_fa11_y0 = 0;
  uint8_t f_u_rca16_fa11_y1 = 0;
  uint8_t f_u_rca16_fa11_f_u_rca16_fa10_y4 = 0;
  uint8_t f_u_rca16_fa11_y2 = 0;
  uint8_t f_u_rca16_fa11_y3 = 0;
  uint8_t f_u_rca16_fa11_y4 = 0;
  uint8_t f_u_rca16_fa12_a_12 = 0;
  uint8_t f_u_rca16_fa12_b_12 = 0;
  uint8_t f_u_rca16_fa12_y0 = 0;
  uint8_t f_u_rca16_fa12_y1 = 0;
  uint8_t f_u_rca16_fa12_f_u_rca16_fa11_y4 = 0;
  uint8_t f_u_rca16_fa12_y2 = 0;
  uint8_t f_u_rca16_fa12_y3 = 0;
  uint8_t f_u_rca16_fa12_y4 = 0;
  uint8_t f_u_rca16_fa13_a_13 = 0;
  uint8_t f_u_rca16_fa13_b_13 = 0;
  uint8_t f_u_rca16_fa13_y0 = 0;
  uint8_t f_u_rca16_fa13_y1 = 0;
  uint8_t f_u_rca16_fa13_f_u_rca16_fa12_y4 = 0;
  uint8_t f_u_rca16_fa13_y2 = 0;
  uint8_t f_u_rca16_fa13_y3 = 0;
  uint8_t f_u_rca16_fa13_y4 = 0;
  uint8_t f_u_rca16_fa14_a_14 = 0;
  uint8_t f_u_rca16_fa14_b_14 = 0;
  uint8_t f_u_rca16_fa14_y0 = 0;
  uint8_t f_u_rca16_fa14_y1 = 0;
  uint8_t f_u_rca16_fa14_f_u_rca16_fa13_y4 = 0;
  uint8_t f_u_rca16_fa14_y2 = 0;
  uint8_t f_u_rca16_fa14_y3 = 0;
  uint8_t f_u_rca16_fa14_y4 = 0;
  uint8_t f_u_rca16_fa15_a_15 = 0;
  uint8_t f_u_rca16_fa15_b_15 = 0;
  uint8_t f_u_rca16_fa15_y0 = 0;
  uint8_t f_u_rca16_fa15_y1 = 0;
  uint8_t f_u_rca16_fa15_f_u_rca16_fa14_y4 = 0;
  uint8_t f_u_rca16_fa15_y2 = 0;
  uint8_t f_u_rca16_fa15_y3 = 0;
  uint8_t f_u_rca16_fa15_y4 = 0;

  a_0 = ((a >> 0) & 0x01);
  a_1 = ((a >> 1) & 0x01);
  a_2 = ((a >> 2) & 0x01);
  a_3 = ((a >> 3) & 0x01);
  a_4 = ((a >> 4) & 0x01);
  a_5 = ((a >> 5) & 0x01);
  a_6 = ((a >> 6) & 0x01);
  a_7 = ((a >> 7) & 0x01);
  a_8 = ((a >> 8) & 0x01);
  a_9 = ((a >> 9) & 0x01);
  a_10 = ((a >> 10) & 0x01);
  a_11 = ((a >> 11) & 0x01);
  a_12 = ((a >> 12) & 0x01);
  a_13 = ((a >> 13) & 0x01);
  a_14 = ((a >> 14) & 0x01);
  a_15 = ((a >> 15) & 0x01);
  b_0 = ((b >> 0) & 0x01);
  b_1 = ((b >> 1) & 0x01);
  b_2 = ((b >> 2) & 0x01);
  b_3 = ((b >> 3) & 0x01);
  b_4 = ((b >> 4) & 0x01);
  b_5 = ((b >> 5) & 0x01);
  b_6 = ((b >> 6) & 0x01);
  b_7 = ((b >> 7) & 0x01);
  b_8 = ((b >> 8) & 0x01);
  b_9 = ((b >> 9) & 0x01);
  b_10 = ((b >> 10) & 0x01);
  b_11 = ((b >> 11) & 0x01);
  b_12 = ((b >> 12) & 0x01);
  b_13 = ((b >> 13) & 0x01);
  b_14 = ((b >> 14) & 0x01);
  b_15 = ((b >> 15) & 0x01);
  f_u_rca16_ha_a_0 = ((a_0 >> 0) & 0x01);
  f_u_rca16_ha_b_0 = ((b_0 >> 0) & 0x01);
  f_u_rca16_ha_y0 = f_u_rca16_ha_a_0 ^ f_u_rca16_ha_b_0;
  f_u_rca16_ha_y1 = f_u_rca16_ha_a_0 & f_u_rca16_ha_b_0;
  f_u_rca16_fa1_a_1 = ((a_1 >> 0) & 0x01);
  f_u_rca16_fa1_b_1 = ((b_1 >> 0) & 0x01);
  f_u_rca16_fa1_f_u_rca16_ha_y1 = ((f_u_rca16_ha_y1 >> 0) & 0x01);
  f_u_rca16_fa1_y0 = f_u_rca16_fa1_a_1 ^ f_u_rca16_fa1_b_1;
  f_u_rca16_fa1_y1 = f_u_rca16_fa1_a_1 & f_u_rca16_fa1_b_1;
  f_u_rca16_fa1_y2 = f_u_rca16_fa1_y0 ^ f_u_rca16_fa1_f_u_rca16_ha_y1;
  f_u_rca16_fa1_y3 = f_u_rca16_fa1_y0 & f_u_rca16_fa1_f_u_rca16_ha_y1;
  f_u_rca16_fa1_y4 = f_u_rca16_fa1_y1 | f_u_rca16_fa1_y3;
  f_u_rca16_fa2_a_2 = ((a_2 >> 0) & 0x01);
  f_u_rca16_fa2_b_2 = ((b_2 >> 0) & 0x01);
  f_u_rca16_fa2_f_u_rca16_fa1_y4 = ((f_u_rca16_fa1_y4 >> 0) & 0x01);
  f_u_rca16_fa2_y0 = f_u_rca16_fa2_a_2 ^ f_u_rca16_fa2_b_2;
  f_u_rca16_fa2_y1 = f_u_rca16_fa2_a_2 & f_u_rca16_fa2_b_2;
  f_u_rca16_fa2_y2 = f_u_rca16_fa2_y0 ^ f_u_rca16_fa2_f_u_rca16_fa1_y4;
  f_u_rca16_fa2_y3 = f_u_rca16_fa2_y0 & f_u_rca16_fa2_f_u_rca16_fa1_y4;
  f_u_rca16_fa2_y4 = f_u_rca16_fa2_y1 | f_u_rca16_fa2_y3;
  f_u_rca16_fa3_a_3 = ((a_3 >> 0) & 0x01);
  f_u_rca16_fa3_b_3 = ((b_3 >> 0) & 0x01);
  f_u_rca16_fa3_f_u_rca16_fa2_y4 = ((f_u_rca16_fa2_y4 >> 0) & 0x01);
  f_u_rca16_fa3_y0 = f_u_rca16_fa3_a_3 ^ f_u_rca16_fa3_b_3;
  f_u_rca16_fa3_y1 = f_u_rca16_fa3_a_3 & f_u_rca16_fa3_b_3;
  f_u_rca16_fa3_y2 = f_u_rca16_fa3_y0 ^ f_u_rca16_fa3_f_u_rca16_fa2_y4;
  f_u_rca16_fa3_y3 = f_u_rca16_fa3_y0 & f_u_rca16_fa3_f_u_rca16_fa2_y4;
  f_u_rca16_fa3_y4 = f_u_rca16_fa3_y1 | f_u_rca16_fa3_y3;
  f_u_rca16_fa4_a_4 = ((a_4 >> 0) & 0x01);
  f_u_rca16_fa4_b_4 = ((b_4 >> 0) & 0x01);
  f_u_rca16_fa4_f_u_rca16_fa3_y4 = ((f_u_rca16_fa3_y4 >> 0) & 0x01);
  f_u_rca16_fa4_y0 = f_u_rca16_fa4_a_4 ^ f_u_rca16_fa4_b_4;
  f_u_rca16_fa4_y1 = f_u_rca16_fa4_a_4 & f_u_rca16_fa4_b_4;
  f_u_rca16_fa4_y2 = f_u_rca16_fa4_y0 ^ f_u_rca16_fa4_f_u_rca16_fa3_y4;
  f_u_rca16_fa4_y3 = f_u_rca16_fa4_y0 & f_u_rca16_fa4_f_u_rca16_fa3_y4;
  f_u_rca16_fa4_y4 = f_u_rca16_fa4_y1 | f_u_rca16_fa4_y3;
  f_u_rca16_fa5_a_5 = ((a_5 >> 0) & 0x01);
  f_u_rca16_fa5_b_5 = ((b_5 >> 0) & 0x01);
  f_u_rca16_fa5_f_u_rca16_fa4_y4 = ((f_u_rca16_fa4_y4 >> 0) & 0x01);
  f_u_rca16_fa5_y0 = f_u_rca16_fa5_a_5 ^ f_u_rca16_fa5_b_5;
  f_u_rca16_fa5_y1 = f_u_rca16_fa5_a_5 & f_u_rca16_fa5_b_5;
  f_u_rca16_fa5_y2 = f_u_rca16_fa5_y0 ^ f_u_rca16_fa5_f_u_rca16_fa4_y4;
  f_u_rca16_fa5_y3 = f_u_rca16_fa5_y0 & f_u_rca16_fa5_f_u_rca16_fa4_y4;
  f_u_rca16_fa5_y4 = f_u_rca16_fa5_y1 | f_u_rca16_fa5_y3;
  f_u_rca16_fa6_a_6 = ((a_6 >> 0) & 0x01);
  f_u_rca16_fa6_b_6 = ((b_6 >> 0) & 0x01);
  f_u_rca16_fa6_f_u_rca16_fa5_y4 = ((f_u_rca16_fa5_y4 >> 0) & 0x01);
  f_u_rca16_fa6_y0 = f_u_rca16_fa6_a_6 ^ f_u_rca16_fa6_b_6;
  f_u_rca16_fa6_y1 = f_u_rca16_fa6_a_6 & f_u_rca16_fa6_b_6;
  f_u_rca16_fa6_y2 = f_u_rca16_fa6_y0 ^ f_u_rca16_fa6_f_u_rca16_fa5_y4;
  f_u_rca16_fa6_y3 = f_u_rca16_fa6_y0 & f_u_rca16_fa6_f_u_rca16_fa5_y4;
  f_u_rca16_fa6_y4 = f_u_rca16_fa6_y1 | f_u_rca16_fa6_y3;
  f_u_rca16_fa7_a_7 = ((a_7 >> 0) & 0x01);
  f_u_rca16_fa7_b_7 = ((b_7 >> 0) & 0x01);
  f_u_rca16_fa7_f_u_rca16_fa6_y4 = ((f_u_rca16_fa6_y4 >> 0) & 0x01);
  f_u_rca16_fa7_y0 = f_u_rca16_fa7_a_7 ^ f_u_rca16_fa7_b_7;
  f_u_rca16_fa7_y1 = f_u_rca16_fa7_a_7 & f_u_rca16_fa7_b_7;
  f_u_rca16_fa7_y2 = f_u_rca16_fa7_y0 ^ f_u_rca16_fa7_f_u_rca16_fa6_y4;
  f_u_rca16_fa7_y3 = f_u_rca16_fa7_y0 & f_u_rca16_fa7_f_u_rca16_fa6_y4;
  f_u_rca16_fa7_y4 = f_u_rca16_fa7_y1 | f_u_rca16_fa7_y3;
  f_u_rca16_fa8_a_8 = ((a_8 >> 0) & 0x01);
  f_u_rca16_fa8_b_8 = ((b_8 >> 0) & 0x01);
  f_u_rca16_fa8_f_u_rca16_fa7_y4 = ((f_u_rca16_fa7_y4 >> 0) & 0x01);
  f_u_rca16_fa8_y0 = f_u_rca16_fa8_a_8 ^ f_u_rca16_fa8_b_8;
  f_u_rca16_fa8_y1 = f_u_rca16_fa8_a_8 & f_u_rca16_fa8_b_8;
  f_u_rca16_fa8_y2 = f_u_rca16_fa8_y0 ^ f_u_rca16_fa8_f_u_rca16_fa7_y4;
  f_u_rca16_fa8_y3 = f_u_rca16_fa8_y0 & f_u_rca16_fa8_f_u_rca16_fa7_y4;
  f_u_rca16_fa8_y4 = f_u_rca16_fa8_y1 | f_u_rca16_fa8_y3;
  f_u_rca16_fa9_a_9 = ((a_9 >> 0) & 0x01);
  f_u_rca16_fa9_b_9 = ((b_9 >> 0) & 0x01);
  f_u_rca16_fa9_f_u_rca16_fa8_y4 = ((f_u_rca16_fa8_y4 >> 0) & 0x01);
  f_u_rca16_fa9_y0 = f_u_rca16_fa9_a_9 ^ f_u_rca16_fa9_b_9;
  f_u_rca16_fa9_y1 = f_u_rca16_fa9_a_9 & f_u_rca16_fa9_b_9;
  f_u_rca16_fa9_y2 = f_u_rca16_fa9_y0 ^ f_u_rca16_fa9_f_u_rca16_fa8_y4;
  f_u_rca16_fa9_y3 = f_u_rca16_fa9_y0 & f_u_rca16_fa9_f_u_rca16_fa8_y4;
  f_u_rca16_fa9_y4 = f_u_rca16_fa9_y1 | f_u_rca16_fa9_y3;
  f_u_rca16_fa10_a_10 = ((a_10 >> 0) & 0x01);
  f_u_rca16_fa10_b_10 = ((b_10 >> 0) & 0x01);
  f_u_rca16_fa10_f_u_rca16_fa9_y4 = ((f_u_rca16_fa9_y4 >> 0) & 0x01);
  f_u_rca16_fa10_y0 = f_u_rca16_fa10_a_10 ^ f_u_rca16_fa10_b_10;
  f_u_rca16_fa10_y1 = f_u_rca16_fa10_a_10 & f_u_rca16_fa10_b_10;
  f_u_rca16_fa10_y2 = f_u_rca16_fa10_y0 ^ f_u_rca16_fa10_f_u_rca16_fa9_y4;
  f_u_rca16_fa10_y3 = f_u_rca16_fa10_y0 & f_u_rca16_fa10_f_u_rca16_fa9_y4;
  f_u_rca16_fa10_y4 = f_u_rca16_fa10_y1 | f_u_rca16_fa10_y3;
  f_u_rca16_fa11_a_11 = ((a_11 >> 0) & 0x01);
  f_u_rca16_fa11_b_11 = ((b_11 >> 0) & 0x01);
  f_u_rca16_fa11_f_u_rca16_fa10_y4 = ((f_u_rca16_fa10_y4 >> 0) & 0x01);
  f_u_rca16_fa11_y0 = f_u_rca16_fa11_a_11 ^ f_u_rca16_fa11_b_11;
  f_u_rca16_fa11_y1 = f_u_rca16_fa11_a_11 & f_u_rca16_fa11_b_11;
  f_u_rca16_fa11_y2 = f_u_rca16_fa11_y0 ^ f_u_rca16_fa11_f_u_rca16_fa10_y4;
  f_u_rca16_fa11_y3 = f_u_rca16_fa11_y0 & f_u_rca16_fa11_f_u_rca16_fa10_y4;
  f_u_rca16_fa11_y4 = f_u_rca16_fa11_y1 | f_u_rca16_fa11_y3;
  f_u_rca16_fa12_a_12 = ((a_12 >> 0) & 0x01);
  f_u_rca16_fa12_b_12 = ((b_12 >> 0) & 0x01);
  f_u_rca16_fa12_f_u_rca16_fa11_y4 = ((f_u_rca16_fa11_y4 >> 0) & 0x01);
  f_u_rca16_fa12_y0 = f_u_rca16_fa12_a_12 ^ f_u_rca16_fa12_b_12;
  f_u_rca16_fa12_y1 = f_u_rca16_fa12_a_12 & f_u_rca16_fa12_b_12;
  f_u_rca16_fa12_y2 = f_u_rca16_fa12_y0 ^ f_u_rca16_fa12_f_u_rca16_fa11_y4;
  f_u_rca16_fa12_y3 = f_u_rca16_fa12_y0 & f_u_rca16_fa12_f_u_rca16_fa11_y4;
  f_u_rca16_fa12_y4 = f_u_rca16_fa12_y1 | f_u_rca16_fa12_y3;
  f_u_rca16_fa13_a_13 = ((a_13 >> 0) & 0x01);
  f_u_rca16_fa13_b_13 = ((b_13 >> 0) & 0x01);
  f_u_rca16_fa13_f_u_rca16_fa12_y4 = ((f_u_rca16_fa12_y4 >> 0) & 0x01);
  f_u_rca16_fa13_y0 = f_u_rca16_fa13_a_13 ^ f_u_rca16_fa13_b_13;
  f_u_rca16_fa13_y1 = f_u_rca16_fa13_a_13 & f_u_rca16_fa13_b_13;
  f_u_rca16_fa13_y2 = f_u_rca16_fa13_y0 ^ f_u_rca16_fa13_f_u_rca16_fa12_y4;
  f_u_rca16_fa13_y3 = f_u_rca16_fa13_y0 & f_u_rca16_fa13_f_u_rca16_fa12_y4;
  f_u_rca16_fa13_y4 = f_u_rca16_fa13_y1 | f_u_rca16_fa13_y3;
  f_u_rca16_fa14_a_14 = ((a_14 >> 0) & 0x01);
  f_u_rca16_fa14_b_14 = ((b_14 >> 0) & 0x01);
  f_u_rca16_fa14_f_u_rca16_fa13_y4 = ((f_u_rca16_fa13_y4 >> 0) & 0x01);
  f_u_rca16_fa14_y0 = f_u_rca16_fa14_a_14 ^ f_u_rca16_fa14_b_14;
  f_u_rca16_fa14_y1 = f_u_rca16_fa14_a_14 & f_u_rca16_fa14_b_14;
  f_u_rca16_fa14_y2 = f_u_rca16_fa14_y0 ^ f_u_rca16_fa14_f_u_rca16_fa13_y4;
  f_u_rca16_fa14_y3 = f_u_rca16_fa14_y0 & f_u_rca16_fa14_f_u_rca16_fa13_y4;
  f_u_rca16_fa14_y4 = f_u_rca16_fa14_y1 | f_u_rca16_fa14_y3;
  f_u_rca16_fa15_a_15 = ((a_15 >> 0) & 0x01);
  f_u_rca16_fa15_b_15 = ((b_15 >> 0) & 0x01);
  f_u_rca16_fa15_f_u_rca16_fa14_y4 = ((f_u_rca16_fa14_y4 >> 0) & 0x01);
  f_u_rca16_fa15_y0 = f_u_rca16_fa15_a_15 ^ f_u_rca16_fa15_b_15;
  f_u_rca16_fa15_y1 = f_u_rca16_fa15_a_15 & f_u_rca16_fa15_b_15;
  f_u_rca16_fa15_y2 = f_u_rca16_fa15_y0 ^ f_u_rca16_fa15_f_u_rca16_fa14_y4;
  f_u_rca16_fa15_y3 = f_u_rca16_fa15_y0 & f_u_rca16_fa15_f_u_rca16_fa14_y4;
  f_u_rca16_fa15_y4 = f_u_rca16_fa15_y1 | f_u_rca16_fa15_y3;

  out |= (f_u_rca16_ha_y0 & 0x01) << 0;
  out |= (f_u_rca16_fa1_y2 & 0x01) << 1;
  out |= (f_u_rca16_fa2_y2 & 0x01) << 2;
  out |= (f_u_rca16_fa3_y2 & 0x01) << 3;
  out |= (f_u_rca16_fa4_y2 & 0x01) << 4;
  out |= (f_u_rca16_fa5_y2 & 0x01) << 5;
  out |= (f_u_rca16_fa6_y2 & 0x01) << 6;
  out |= (f_u_rca16_fa7_y2 & 0x01) << 7;
  out |= (f_u_rca16_fa8_y2 & 0x01) << 8;
  out |= (f_u_rca16_fa9_y2 & 0x01) << 9;
  out |= (f_u_rca16_fa10_y2 & 0x01) << 10;
  out |= (f_u_rca16_fa11_y2 & 0x01) << 11;
  out |= (f_u_rca16_fa12_y2 & 0x01) << 12;
  out |= (f_u_rca16_fa13_y2 & 0x01) << 13;
  out |= (f_u_rca16_fa14_y2 & 0x01) << 14;
  out |= (f_u_rca16_fa15_y2 & 0x01) << 15;
  out |= (f_u_rca16_fa15_y4 & 0x01) << 16;
  return out;
}