#include <stdio.h>
#include <stdint.h>

uint8_t and_gate(uint8_t _a, uint8_t _b){
  return ((_a >> 0) & 0x01) & ((_b >> 0) & 0x01);
}

uint8_t xor_gate(uint8_t _a, uint8_t _b){
  return ((_a >> 0) & 0x01) ^ ((_b >> 0) & 0x01);
}

uint8_t or_gate(uint8_t _a, uint8_t _b){
  return ((_a >> 0) & 0x01) | ((_b >> 0) & 0x01);
}

uint8_t ha(uint8_t a, uint8_t b){
  uint8_t out = 0;
  uint8_t ha_a = 0;
  uint8_t ha_b = 0;
  uint8_t ha_y0 = 0;
  uint8_t ha_y1 = 0;

  ha_a = ((a >> 0) & 0x01);
  ha_b = ((b >> 0) & 0x01);
  ha_y0 = xor_gate(ha_a, ha_b);
  ha_y1 = and_gate(ha_a, ha_b);

  out |= (ha_y0 & 0x01) << 0;
  out |= (ha_y1 & 0x01) << 1;
  return out;
}

uint8_t fa(uint8_t a, uint8_t b, uint8_t cin){
  uint8_t out = 0;
  uint8_t fa_a = 0;
  uint8_t fa_b = 0;
  uint8_t fa_y0 = 0;
  uint8_t fa_y1 = 0;
  uint8_t fa_cin = 0;
  uint8_t fa_y2 = 0;
  uint8_t fa_y3 = 0;
  uint8_t fa_y4 = 0;

  fa_a = ((a >> 0) & 0x01);
  fa_b = ((b >> 0) & 0x01);
  fa_cin = ((cin >> 0) & 0x01);
  fa_y0 = xor_gate(fa_a, fa_b);
  fa_y1 = and_gate(fa_a, fa_b);
  fa_y2 = xor_gate(fa_y0, fa_cin);
  fa_y3 = and_gate(fa_y0, fa_cin);
  fa_y4 = or_gate(fa_y1, fa_y3);

  out |= (fa_y2 & 0x01) << 0;
  out |= (fa_y4 & 0x01) << 1;
  return out;
}

uint64_t h_u_arrmul10(uint64_t a, uint64_t b){
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
  uint8_t h_u_arrmul10_and0_0_y0 = 0;
  uint8_t h_u_arrmul10_and1_0_y0 = 0;
  uint8_t h_u_arrmul10_and2_0_y0 = 0;
  uint8_t h_u_arrmul10_and3_0_y0 = 0;
  uint8_t h_u_arrmul10_and4_0_y0 = 0;
  uint8_t h_u_arrmul10_and5_0_y0 = 0;
  uint8_t h_u_arrmul10_and6_0_y0 = 0;
  uint8_t h_u_arrmul10_and7_0_y0 = 0;
  uint8_t h_u_arrmul10_and8_0_y0 = 0;
  uint8_t h_u_arrmul10_and9_0_y0 = 0;
  uint8_t h_u_arrmul10_and0_1_y0 = 0;
  uint8_t h_u_arrmul10_ha0_1_y0 = 0;
  uint8_t h_u_arrmul10_ha0_1_y1 = 0;
  uint8_t h_u_arrmul10_and1_1_y0 = 0;
  uint8_t h_u_arrmul10_fa1_1_y2 = 0;
  uint8_t h_u_arrmul10_fa1_1_y4 = 0;
  uint8_t h_u_arrmul10_and2_1_y0 = 0;
  uint8_t h_u_arrmul10_fa2_1_y2 = 0;
  uint8_t h_u_arrmul10_fa2_1_y4 = 0;
  uint8_t h_u_arrmul10_and3_1_y0 = 0;
  uint8_t h_u_arrmul10_fa3_1_y2 = 0;
  uint8_t h_u_arrmul10_fa3_1_y4 = 0;
  uint8_t h_u_arrmul10_and4_1_y0 = 0;
  uint8_t h_u_arrmul10_fa4_1_y2 = 0;
  uint8_t h_u_arrmul10_fa4_1_y4 = 0;
  uint8_t h_u_arrmul10_and5_1_y0 = 0;
  uint8_t h_u_arrmul10_fa5_1_y2 = 0;
  uint8_t h_u_arrmul10_fa5_1_y4 = 0;
  uint8_t h_u_arrmul10_and6_1_y0 = 0;
  uint8_t h_u_arrmul10_fa6_1_y2 = 0;
  uint8_t h_u_arrmul10_fa6_1_y4 = 0;
  uint8_t h_u_arrmul10_and7_1_y0 = 0;
  uint8_t h_u_arrmul10_fa7_1_y2 = 0;
  uint8_t h_u_arrmul10_fa7_1_y4 = 0;
  uint8_t h_u_arrmul10_and8_1_y0 = 0;
  uint8_t h_u_arrmul10_fa8_1_y2 = 0;
  uint8_t h_u_arrmul10_fa8_1_y4 = 0;
  uint8_t h_u_arrmul10_and9_1_y0 = 0;
  uint8_t h_u_arrmul10_ha9_1_y0 = 0;
  uint8_t h_u_arrmul10_ha9_1_y1 = 0;
  uint8_t h_u_arrmul10_and0_2_y0 = 0;
  uint8_t h_u_arrmul10_ha0_2_y0 = 0;
  uint8_t h_u_arrmul10_ha0_2_y1 = 0;
  uint8_t h_u_arrmul10_and1_2_y0 = 0;
  uint8_t h_u_arrmul10_fa1_2_y2 = 0;
  uint8_t h_u_arrmul10_fa1_2_y4 = 0;
  uint8_t h_u_arrmul10_and2_2_y0 = 0;
  uint8_t h_u_arrmul10_fa2_2_y2 = 0;
  uint8_t h_u_arrmul10_fa2_2_y4 = 0;
  uint8_t h_u_arrmul10_and3_2_y0 = 0;
  uint8_t h_u_arrmul10_fa3_2_y2 = 0;
  uint8_t h_u_arrmul10_fa3_2_y4 = 0;
  uint8_t h_u_arrmul10_and4_2_y0 = 0;
  uint8_t h_u_arrmul10_fa4_2_y2 = 0;
  uint8_t h_u_arrmul10_fa4_2_y4 = 0;
  uint8_t h_u_arrmul10_and5_2_y0 = 0;
  uint8_t h_u_arrmul10_fa5_2_y2 = 0;
  uint8_t h_u_arrmul10_fa5_2_y4 = 0;
  uint8_t h_u_arrmul10_and6_2_y0 = 0;
  uint8_t h_u_arrmul10_fa6_2_y2 = 0;
  uint8_t h_u_arrmul10_fa6_2_y4 = 0;
  uint8_t h_u_arrmul10_and7_2_y0 = 0;
  uint8_t h_u_arrmul10_fa7_2_y2 = 0;
  uint8_t h_u_arrmul10_fa7_2_y4 = 0;
  uint8_t h_u_arrmul10_and8_2_y0 = 0;
  uint8_t h_u_arrmul10_fa8_2_y2 = 0;
  uint8_t h_u_arrmul10_fa8_2_y4 = 0;
  uint8_t h_u_arrmul10_and9_2_y0 = 0;
  uint8_t h_u_arrmul10_fa9_2_y2 = 0;
  uint8_t h_u_arrmul10_fa9_2_y4 = 0;
  uint8_t h_u_arrmul10_and0_3_y0 = 0;
  uint8_t h_u_arrmul10_ha0_3_y0 = 0;
  uint8_t h_u_arrmul10_ha0_3_y1 = 0;
  uint8_t h_u_arrmul10_and1_3_y0 = 0;
  uint8_t h_u_arrmul10_fa1_3_y2 = 0;
  uint8_t h_u_arrmul10_fa1_3_y4 = 0;
  uint8_t h_u_arrmul10_and2_3_y0 = 0;
  uint8_t h_u_arrmul10_fa2_3_y2 = 0;
  uint8_t h_u_arrmul10_fa2_3_y4 = 0;
  uint8_t h_u_arrmul10_and3_3_y0 = 0;
  uint8_t h_u_arrmul10_fa3_3_y2 = 0;
  uint8_t h_u_arrmul10_fa3_3_y4 = 0;
  uint8_t h_u_arrmul10_and4_3_y0 = 0;
  uint8_t h_u_arrmul10_fa4_3_y2 = 0;
  uint8_t h_u_arrmul10_fa4_3_y4 = 0;
  uint8_t h_u_arrmul10_and5_3_y0 = 0;
  uint8_t h_u_arrmul10_fa5_3_y2 = 0;
  uint8_t h_u_arrmul10_fa5_3_y4 = 0;
  uint8_t h_u_arrmul10_and6_3_y0 = 0;
  uint8_t h_u_arrmul10_fa6_3_y2 = 0;
  uint8_t h_u_arrmul10_fa6_3_y4 = 0;
  uint8_t h_u_arrmul10_and7_3_y0 = 0;
  uint8_t h_u_arrmul10_fa7_3_y2 = 0;
  uint8_t h_u_arrmul10_fa7_3_y4 = 0;
  uint8_t h_u_arrmul10_and8_3_y0 = 0;
  uint8_t h_u_arrmul10_fa8_3_y2 = 0;
  uint8_t h_u_arrmul10_fa8_3_y4 = 0;
  uint8_t h_u_arrmul10_and9_3_y0 = 0;
  uint8_t h_u_arrmul10_fa9_3_y2 = 0;
  uint8_t h_u_arrmul10_fa9_3_y4 = 0;
  uint8_t h_u_arrmul10_and0_4_y0 = 0;
  uint8_t h_u_arrmul10_ha0_4_y0 = 0;
  uint8_t h_u_arrmul10_ha0_4_y1 = 0;
  uint8_t h_u_arrmul10_and1_4_y0 = 0;
  uint8_t h_u_arrmul10_fa1_4_y2 = 0;
  uint8_t h_u_arrmul10_fa1_4_y4 = 0;
  uint8_t h_u_arrmul10_and2_4_y0 = 0;
  uint8_t h_u_arrmul10_fa2_4_y2 = 0;
  uint8_t h_u_arrmul10_fa2_4_y4 = 0;
  uint8_t h_u_arrmul10_and3_4_y0 = 0;
  uint8_t h_u_arrmul10_fa3_4_y2 = 0;
  uint8_t h_u_arrmul10_fa3_4_y4 = 0;
  uint8_t h_u_arrmul10_and4_4_y0 = 0;
  uint8_t h_u_arrmul10_fa4_4_y2 = 0;
  uint8_t h_u_arrmul10_fa4_4_y4 = 0;
  uint8_t h_u_arrmul10_and5_4_y0 = 0;
  uint8_t h_u_arrmul10_fa5_4_y2 = 0;
  uint8_t h_u_arrmul10_fa5_4_y4 = 0;
  uint8_t h_u_arrmul10_and6_4_y0 = 0;
  uint8_t h_u_arrmul10_fa6_4_y2 = 0;
  uint8_t h_u_arrmul10_fa6_4_y4 = 0;
  uint8_t h_u_arrmul10_and7_4_y0 = 0;
  uint8_t h_u_arrmul10_fa7_4_y2 = 0;
  uint8_t h_u_arrmul10_fa7_4_y4 = 0;
  uint8_t h_u_arrmul10_and8_4_y0 = 0;
  uint8_t h_u_arrmul10_fa8_4_y2 = 0;
  uint8_t h_u_arrmul10_fa8_4_y4 = 0;
  uint8_t h_u_arrmul10_and9_4_y0 = 0;
  uint8_t h_u_arrmul10_fa9_4_y2 = 0;
  uint8_t h_u_arrmul10_fa9_4_y4 = 0;
  uint8_t h_u_arrmul10_and0_5_y0 = 0;
  uint8_t h_u_arrmul10_ha0_5_y0 = 0;
  uint8_t h_u_arrmul10_ha0_5_y1 = 0;
  uint8_t h_u_arrmul10_and1_5_y0 = 0;
  uint8_t h_u_arrmul10_fa1_5_y2 = 0;
  uint8_t h_u_arrmul10_fa1_5_y4 = 0;
  uint8_t h_u_arrmul10_and2_5_y0 = 0;
  uint8_t h_u_arrmul10_fa2_5_y2 = 0;
  uint8_t h_u_arrmul10_fa2_5_y4 = 0;
  uint8_t h_u_arrmul10_and3_5_y0 = 0;
  uint8_t h_u_arrmul10_fa3_5_y2 = 0;
  uint8_t h_u_arrmul10_fa3_5_y4 = 0;
  uint8_t h_u_arrmul10_and4_5_y0 = 0;
  uint8_t h_u_arrmul10_fa4_5_y2 = 0;
  uint8_t h_u_arrmul10_fa4_5_y4 = 0;
  uint8_t h_u_arrmul10_and5_5_y0 = 0;
  uint8_t h_u_arrmul10_fa5_5_y2 = 0;
  uint8_t h_u_arrmul10_fa5_5_y4 = 0;
  uint8_t h_u_arrmul10_and6_5_y0 = 0;
  uint8_t h_u_arrmul10_fa6_5_y2 = 0;
  uint8_t h_u_arrmul10_fa6_5_y4 = 0;
  uint8_t h_u_arrmul10_and7_5_y0 = 0;
  uint8_t h_u_arrmul10_fa7_5_y2 = 0;
  uint8_t h_u_arrmul10_fa7_5_y4 = 0;
  uint8_t h_u_arrmul10_and8_5_y0 = 0;
  uint8_t h_u_arrmul10_fa8_5_y2 = 0;
  uint8_t h_u_arrmul10_fa8_5_y4 = 0;
  uint8_t h_u_arrmul10_and9_5_y0 = 0;
  uint8_t h_u_arrmul10_fa9_5_y2 = 0;
  uint8_t h_u_arrmul10_fa9_5_y4 = 0;
  uint8_t h_u_arrmul10_and0_6_y0 = 0;
  uint8_t h_u_arrmul10_ha0_6_y0 = 0;
  uint8_t h_u_arrmul10_ha0_6_y1 = 0;
  uint8_t h_u_arrmul10_and1_6_y0 = 0;
  uint8_t h_u_arrmul10_fa1_6_y2 = 0;
  uint8_t h_u_arrmul10_fa1_6_y4 = 0;
  uint8_t h_u_arrmul10_and2_6_y0 = 0;
  uint8_t h_u_arrmul10_fa2_6_y2 = 0;
  uint8_t h_u_arrmul10_fa2_6_y4 = 0;
  uint8_t h_u_arrmul10_and3_6_y0 = 0;
  uint8_t h_u_arrmul10_fa3_6_y2 = 0;
  uint8_t h_u_arrmul10_fa3_6_y4 = 0;
  uint8_t h_u_arrmul10_and4_6_y0 = 0;
  uint8_t h_u_arrmul10_fa4_6_y2 = 0;
  uint8_t h_u_arrmul10_fa4_6_y4 = 0;
  uint8_t h_u_arrmul10_and5_6_y0 = 0;
  uint8_t h_u_arrmul10_fa5_6_y2 = 0;
  uint8_t h_u_arrmul10_fa5_6_y4 = 0;
  uint8_t h_u_arrmul10_and6_6_y0 = 0;
  uint8_t h_u_arrmul10_fa6_6_y2 = 0;
  uint8_t h_u_arrmul10_fa6_6_y4 = 0;
  uint8_t h_u_arrmul10_and7_6_y0 = 0;
  uint8_t h_u_arrmul10_fa7_6_y2 = 0;
  uint8_t h_u_arrmul10_fa7_6_y4 = 0;
  uint8_t h_u_arrmul10_and8_6_y0 = 0;
  uint8_t h_u_arrmul10_fa8_6_y2 = 0;
  uint8_t h_u_arrmul10_fa8_6_y4 = 0;
  uint8_t h_u_arrmul10_and9_6_y0 = 0;
  uint8_t h_u_arrmul10_fa9_6_y2 = 0;
  uint8_t h_u_arrmul10_fa9_6_y4 = 0;
  uint8_t h_u_arrmul10_and0_7_y0 = 0;
  uint8_t h_u_arrmul10_ha0_7_y0 = 0;
  uint8_t h_u_arrmul10_ha0_7_y1 = 0;
  uint8_t h_u_arrmul10_and1_7_y0 = 0;
  uint8_t h_u_arrmul10_fa1_7_y2 = 0;
  uint8_t h_u_arrmul10_fa1_7_y4 = 0;
  uint8_t h_u_arrmul10_and2_7_y0 = 0;
  uint8_t h_u_arrmul10_fa2_7_y2 = 0;
  uint8_t h_u_arrmul10_fa2_7_y4 = 0;
  uint8_t h_u_arrmul10_and3_7_y0 = 0;
  uint8_t h_u_arrmul10_fa3_7_y2 = 0;
  uint8_t h_u_arrmul10_fa3_7_y4 = 0;
  uint8_t h_u_arrmul10_and4_7_y0 = 0;
  uint8_t h_u_arrmul10_fa4_7_y2 = 0;
  uint8_t h_u_arrmul10_fa4_7_y4 = 0;
  uint8_t h_u_arrmul10_and5_7_y0 = 0;
  uint8_t h_u_arrmul10_fa5_7_y2 = 0;
  uint8_t h_u_arrmul10_fa5_7_y4 = 0;
  uint8_t h_u_arrmul10_and6_7_y0 = 0;
  uint8_t h_u_arrmul10_fa6_7_y2 = 0;
  uint8_t h_u_arrmul10_fa6_7_y4 = 0;
  uint8_t h_u_arrmul10_and7_7_y0 = 0;
  uint8_t h_u_arrmul10_fa7_7_y2 = 0;
  uint8_t h_u_arrmul10_fa7_7_y4 = 0;
  uint8_t h_u_arrmul10_and8_7_y0 = 0;
  uint8_t h_u_arrmul10_fa8_7_y2 = 0;
  uint8_t h_u_arrmul10_fa8_7_y4 = 0;
  uint8_t h_u_arrmul10_and9_7_y0 = 0;
  uint8_t h_u_arrmul10_fa9_7_y2 = 0;
  uint8_t h_u_arrmul10_fa9_7_y4 = 0;
  uint8_t h_u_arrmul10_and0_8_y0 = 0;
  uint8_t h_u_arrmul10_ha0_8_y0 = 0;
  uint8_t h_u_arrmul10_ha0_8_y1 = 0;
  uint8_t h_u_arrmul10_and1_8_y0 = 0;
  uint8_t h_u_arrmul10_fa1_8_y2 = 0;
  uint8_t h_u_arrmul10_fa1_8_y4 = 0;
  uint8_t h_u_arrmul10_and2_8_y0 = 0;
  uint8_t h_u_arrmul10_fa2_8_y2 = 0;
  uint8_t h_u_arrmul10_fa2_8_y4 = 0;
  uint8_t h_u_arrmul10_and3_8_y0 = 0;
  uint8_t h_u_arrmul10_fa3_8_y2 = 0;
  uint8_t h_u_arrmul10_fa3_8_y4 = 0;
  uint8_t h_u_arrmul10_and4_8_y0 = 0;
  uint8_t h_u_arrmul10_fa4_8_y2 = 0;
  uint8_t h_u_arrmul10_fa4_8_y4 = 0;
  uint8_t h_u_arrmul10_and5_8_y0 = 0;
  uint8_t h_u_arrmul10_fa5_8_y2 = 0;
  uint8_t h_u_arrmul10_fa5_8_y4 = 0;
  uint8_t h_u_arrmul10_and6_8_y0 = 0;
  uint8_t h_u_arrmul10_fa6_8_y2 = 0;
  uint8_t h_u_arrmul10_fa6_8_y4 = 0;
  uint8_t h_u_arrmul10_and7_8_y0 = 0;
  uint8_t h_u_arrmul10_fa7_8_y2 = 0;
  uint8_t h_u_arrmul10_fa7_8_y4 = 0;
  uint8_t h_u_arrmul10_and8_8_y0 = 0;
  uint8_t h_u_arrmul10_fa8_8_y2 = 0;
  uint8_t h_u_arrmul10_fa8_8_y4 = 0;
  uint8_t h_u_arrmul10_and9_8_y0 = 0;
  uint8_t h_u_arrmul10_fa9_8_y2 = 0;
  uint8_t h_u_arrmul10_fa9_8_y4 = 0;
  uint8_t h_u_arrmul10_and0_9_y0 = 0;
  uint8_t h_u_arrmul10_ha0_9_y0 = 0;
  uint8_t h_u_arrmul10_ha0_9_y1 = 0;
  uint8_t h_u_arrmul10_and1_9_y0 = 0;
  uint8_t h_u_arrmul10_fa1_9_y2 = 0;
  uint8_t h_u_arrmul10_fa1_9_y4 = 0;
  uint8_t h_u_arrmul10_and2_9_y0 = 0;
  uint8_t h_u_arrmul10_fa2_9_y2 = 0;
  uint8_t h_u_arrmul10_fa2_9_y4 = 0;
  uint8_t h_u_arrmul10_and3_9_y0 = 0;
  uint8_t h_u_arrmul10_fa3_9_y2 = 0;
  uint8_t h_u_arrmul10_fa3_9_y4 = 0;
  uint8_t h_u_arrmul10_and4_9_y0 = 0;
  uint8_t h_u_arrmul10_fa4_9_y2 = 0;
  uint8_t h_u_arrmul10_fa4_9_y4 = 0;
  uint8_t h_u_arrmul10_and5_9_y0 = 0;
  uint8_t h_u_arrmul10_fa5_9_y2 = 0;
  uint8_t h_u_arrmul10_fa5_9_y4 = 0;
  uint8_t h_u_arrmul10_and6_9_y0 = 0;
  uint8_t h_u_arrmul10_fa6_9_y2 = 0;
  uint8_t h_u_arrmul10_fa6_9_y4 = 0;
  uint8_t h_u_arrmul10_and7_9_y0 = 0;
  uint8_t h_u_arrmul10_fa7_9_y2 = 0;
  uint8_t h_u_arrmul10_fa7_9_y4 = 0;
  uint8_t h_u_arrmul10_and8_9_y0 = 0;
  uint8_t h_u_arrmul10_fa8_9_y2 = 0;
  uint8_t h_u_arrmul10_fa8_9_y4 = 0;
  uint8_t h_u_arrmul10_and9_9_y0 = 0;
  uint8_t h_u_arrmul10_fa9_9_y2 = 0;
  uint8_t h_u_arrmul10_fa9_9_y4 = 0;

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
  h_u_arrmul10_and0_0_y0 = and_gate(a_0, b_0);
  h_u_arrmul10_and1_0_y0 = and_gate(a_1, b_0);
  h_u_arrmul10_and2_0_y0 = and_gate(a_2, b_0);
  h_u_arrmul10_and3_0_y0 = and_gate(a_3, b_0);
  h_u_arrmul10_and4_0_y0 = and_gate(a_4, b_0);
  h_u_arrmul10_and5_0_y0 = and_gate(a_5, b_0);
  h_u_arrmul10_and6_0_y0 = and_gate(a_6, b_0);
  h_u_arrmul10_and7_0_y0 = and_gate(a_7, b_0);
  h_u_arrmul10_and8_0_y0 = and_gate(a_8, b_0);
  h_u_arrmul10_and9_0_y0 = and_gate(a_9, b_0);
  h_u_arrmul10_and0_1_y0 = and_gate(a_0, b_1);
  h_u_arrmul10_ha0_1_y0 = (ha(h_u_arrmul10_and0_1_y0, h_u_arrmul10_and1_0_y0) >> 0) & 0x01;
  h_u_arrmul10_ha0_1_y1 = (ha(h_u_arrmul10_and0_1_y0, h_u_arrmul10_and1_0_y0) >> 1) & 0x01;
  h_u_arrmul10_and1_1_y0 = and_gate(a_1, b_1);
  h_u_arrmul10_fa1_1_y2 = (fa(h_u_arrmul10_and1_1_y0, h_u_arrmul10_and2_0_y0, h_u_arrmul10_ha0_1_y1) >> 0) & 0x01;
  h_u_arrmul10_fa1_1_y4 = (fa(h_u_arrmul10_and1_1_y0, h_u_arrmul10_and2_0_y0, h_u_arrmul10_ha0_1_y1) >> 1) & 0x01;
  h_u_arrmul10_and2_1_y0 = and_gate(a_2, b_1);
  h_u_arrmul10_fa2_1_y2 = (fa(h_u_arrmul10_and2_1_y0, h_u_arrmul10_and3_0_y0, h_u_arrmul10_fa1_1_y4) >> 0) & 0x01;
  h_u_arrmul10_fa2_1_y4 = (fa(h_u_arrmul10_and2_1_y0, h_u_arrmul10_and3_0_y0, h_u_arrmul10_fa1_1_y4) >> 1) & 0x01;
  h_u_arrmul10_and3_1_y0 = and_gate(a_3, b_1);
  h_u_arrmul10_fa3_1_y2 = (fa(h_u_arrmul10_and3_1_y0, h_u_arrmul10_and4_0_y0, h_u_arrmul10_fa2_1_y4) >> 0) & 0x01;
  h_u_arrmul10_fa3_1_y4 = (fa(h_u_arrmul10_and3_1_y0, h_u_arrmul10_and4_0_y0, h_u_arrmul10_fa2_1_y4) >> 1) & 0x01;
  h_u_arrmul10_and4_1_y0 = and_gate(a_4, b_1);
  h_u_arrmul10_fa4_1_y2 = (fa(h_u_arrmul10_and4_1_y0, h_u_arrmul10_and5_0_y0, h_u_arrmul10_fa3_1_y4) >> 0) & 0x01;
  h_u_arrmul10_fa4_1_y4 = (fa(h_u_arrmul10_and4_1_y0, h_u_arrmul10_and5_0_y0, h_u_arrmul10_fa3_1_y4) >> 1) & 0x01;
  h_u_arrmul10_and5_1_y0 = and_gate(a_5, b_1);
  h_u_arrmul10_fa5_1_y2 = (fa(h_u_arrmul10_and5_1_y0, h_u_arrmul10_and6_0_y0, h_u_arrmul10_fa4_1_y4) >> 0) & 0x01;
  h_u_arrmul10_fa5_1_y4 = (fa(h_u_arrmul10_and5_1_y0, h_u_arrmul10_and6_0_y0, h_u_arrmul10_fa4_1_y4) >> 1) & 0x01;
  h_u_arrmul10_and6_1_y0 = and_gate(a_6, b_1);
  h_u_arrmul10_fa6_1_y2 = (fa(h_u_arrmul10_and6_1_y0, h_u_arrmul10_and7_0_y0, h_u_arrmul10_fa5_1_y4) >> 0) & 0x01;
  h_u_arrmul10_fa6_1_y4 = (fa(h_u_arrmul10_and6_1_y0, h_u_arrmul10_and7_0_y0, h_u_arrmul10_fa5_1_y4) >> 1) & 0x01;
  h_u_arrmul10_and7_1_y0 = and_gate(a_7, b_1);
  h_u_arrmul10_fa7_1_y2 = (fa(h_u_arrmul10_and7_1_y0, h_u_arrmul10_and8_0_y0, h_u_arrmul10_fa6_1_y4) >> 0) & 0x01;
  h_u_arrmul10_fa7_1_y4 = (fa(h_u_arrmul10_and7_1_y0, h_u_arrmul10_and8_0_y0, h_u_arrmul10_fa6_1_y4) >> 1) & 0x01;
  h_u_arrmul10_and8_1_y0 = and_gate(a_8, b_1);
  h_u_arrmul10_fa8_1_y2 = (fa(h_u_arrmul10_and8_1_y0, h_u_arrmul10_and9_0_y0, h_u_arrmul10_fa7_1_y4) >> 0) & 0x01;
  h_u_arrmul10_fa8_1_y4 = (fa(h_u_arrmul10_and8_1_y0, h_u_arrmul10_and9_0_y0, h_u_arrmul10_fa7_1_y4) >> 1) & 0x01;
  h_u_arrmul10_and9_1_y0 = and_gate(a_9, b_1);
  h_u_arrmul10_ha9_1_y0 = (ha(h_u_arrmul10_and9_1_y0, h_u_arrmul10_fa8_1_y4) >> 0) & 0x01;
  h_u_arrmul10_ha9_1_y1 = (ha(h_u_arrmul10_and9_1_y0, h_u_arrmul10_fa8_1_y4) >> 1) & 0x01;
  h_u_arrmul10_and0_2_y0 = and_gate(a_0, b_2);
  h_u_arrmul10_ha0_2_y0 = (ha(h_u_arrmul10_and0_2_y0, h_u_arrmul10_fa1_1_y2) >> 0) & 0x01;
  h_u_arrmul10_ha0_2_y1 = (ha(h_u_arrmul10_and0_2_y0, h_u_arrmul10_fa1_1_y2) >> 1) & 0x01;
  h_u_arrmul10_and1_2_y0 = and_gate(a_1, b_2);
  h_u_arrmul10_fa1_2_y2 = (fa(h_u_arrmul10_and1_2_y0, h_u_arrmul10_fa2_1_y2, h_u_arrmul10_ha0_2_y1) >> 0) & 0x01;
  h_u_arrmul10_fa1_2_y4 = (fa(h_u_arrmul10_and1_2_y0, h_u_arrmul10_fa2_1_y2, h_u_arrmul10_ha0_2_y1) >> 1) & 0x01;
  h_u_arrmul10_and2_2_y0 = and_gate(a_2, b_2);
  h_u_arrmul10_fa2_2_y2 = (fa(h_u_arrmul10_and2_2_y0, h_u_arrmul10_fa3_1_y2, h_u_arrmul10_fa1_2_y4) >> 0) & 0x01;
  h_u_arrmul10_fa2_2_y4 = (fa(h_u_arrmul10_and2_2_y0, h_u_arrmul10_fa3_1_y2, h_u_arrmul10_fa1_2_y4) >> 1) & 0x01;
  h_u_arrmul10_and3_2_y0 = and_gate(a_3, b_2);
  h_u_arrmul10_fa3_2_y2 = (fa(h_u_arrmul10_and3_2_y0, h_u_arrmul10_fa4_1_y2, h_u_arrmul10_fa2_2_y4) >> 0) & 0x01;
  h_u_arrmul10_fa3_2_y4 = (fa(h_u_arrmul10_and3_2_y0, h_u_arrmul10_fa4_1_y2, h_u_arrmul10_fa2_2_y4) >> 1) & 0x01;
  h_u_arrmul10_and4_2_y0 = and_gate(a_4, b_2);
  h_u_arrmul10_fa4_2_y2 = (fa(h_u_arrmul10_and4_2_y0, h_u_arrmul10_fa5_1_y2, h_u_arrmul10_fa3_2_y4) >> 0) & 0x01;
  h_u_arrmul10_fa4_2_y4 = (fa(h_u_arrmul10_and4_2_y0, h_u_arrmul10_fa5_1_y2, h_u_arrmul10_fa3_2_y4) >> 1) & 0x01;
  h_u_arrmul10_and5_2_y0 = and_gate(a_5, b_2);
  h_u_arrmul10_fa5_2_y2 = (fa(h_u_arrmul10_and5_2_y0, h_u_arrmul10_fa6_1_y2, h_u_arrmul10_fa4_2_y4) >> 0) & 0x01;
  h_u_arrmul10_fa5_2_y4 = (fa(h_u_arrmul10_and5_2_y0, h_u_arrmul10_fa6_1_y2, h_u_arrmul10_fa4_2_y4) >> 1) & 0x01;
  h_u_arrmul10_and6_2_y0 = and_gate(a_6, b_2);
  h_u_arrmul10_fa6_2_y2 = (fa(h_u_arrmul10_and6_2_y0, h_u_arrmul10_fa7_1_y2, h_u_arrmul10_fa5_2_y4) >> 0) & 0x01;
  h_u_arrmul10_fa6_2_y4 = (fa(h_u_arrmul10_and6_2_y0, h_u_arrmul10_fa7_1_y2, h_u_arrmul10_fa5_2_y4) >> 1) & 0x01;
  h_u_arrmul10_and7_2_y0 = and_gate(a_7, b_2);
  h_u_arrmul10_fa7_2_y2 = (fa(h_u_arrmul10_and7_2_y0, h_u_arrmul10_fa8_1_y2, h_u_arrmul10_fa6_2_y4) >> 0) & 0x01;
  h_u_arrmul10_fa7_2_y4 = (fa(h_u_arrmul10_and7_2_y0, h_u_arrmul10_fa8_1_y2, h_u_arrmul10_fa6_2_y4) >> 1) & 0x01;
  h_u_arrmul10_and8_2_y0 = and_gate(a_8, b_2);
  h_u_arrmul10_fa8_2_y2 = (fa(h_u_arrmul10_and8_2_y0, h_u_arrmul10_ha9_1_y0, h_u_arrmul10_fa7_2_y4) >> 0) & 0x01;
  h_u_arrmul10_fa8_2_y4 = (fa(h_u_arrmul10_and8_2_y0, h_u_arrmul10_ha9_1_y0, h_u_arrmul10_fa7_2_y4) >> 1) & 0x01;
  h_u_arrmul10_and9_2_y0 = and_gate(a_9, b_2);
  h_u_arrmul10_fa9_2_y2 = (fa(h_u_arrmul10_and9_2_y0, h_u_arrmul10_ha9_1_y1, h_u_arrmul10_fa8_2_y4) >> 0) & 0x01;
  h_u_arrmul10_fa9_2_y4 = (fa(h_u_arrmul10_and9_2_y0, h_u_arrmul10_ha9_1_y1, h_u_arrmul10_fa8_2_y4) >> 1) & 0x01;
  h_u_arrmul10_and0_3_y0 = and_gate(a_0, b_3);
  h_u_arrmul10_ha0_3_y0 = (ha(h_u_arrmul10_and0_3_y0, h_u_arrmul10_fa1_2_y2) >> 0) & 0x01;
  h_u_arrmul10_ha0_3_y1 = (ha(h_u_arrmul10_and0_3_y0, h_u_arrmul10_fa1_2_y2) >> 1) & 0x01;
  h_u_arrmul10_and1_3_y0 = and_gate(a_1, b_3);
  h_u_arrmul10_fa1_3_y2 = (fa(h_u_arrmul10_and1_3_y0, h_u_arrmul10_fa2_2_y2, h_u_arrmul10_ha0_3_y1) >> 0) & 0x01;
  h_u_arrmul10_fa1_3_y4 = (fa(h_u_arrmul10_and1_3_y0, h_u_arrmul10_fa2_2_y2, h_u_arrmul10_ha0_3_y1) >> 1) & 0x01;
  h_u_arrmul10_and2_3_y0 = and_gate(a_2, b_3);
  h_u_arrmul10_fa2_3_y2 = (fa(h_u_arrmul10_and2_3_y0, h_u_arrmul10_fa3_2_y2, h_u_arrmul10_fa1_3_y4) >> 0) & 0x01;
  h_u_arrmul10_fa2_3_y4 = (fa(h_u_arrmul10_and2_3_y0, h_u_arrmul10_fa3_2_y2, h_u_arrmul10_fa1_3_y4) >> 1) & 0x01;
  h_u_arrmul10_and3_3_y0 = and_gate(a_3, b_3);
  h_u_arrmul10_fa3_3_y2 = (fa(h_u_arrmul10_and3_3_y0, h_u_arrmul10_fa4_2_y2, h_u_arrmul10_fa2_3_y4) >> 0) & 0x01;
  h_u_arrmul10_fa3_3_y4 = (fa(h_u_arrmul10_and3_3_y0, h_u_arrmul10_fa4_2_y2, h_u_arrmul10_fa2_3_y4) >> 1) & 0x01;
  h_u_arrmul10_and4_3_y0 = and_gate(a_4, b_3);
  h_u_arrmul10_fa4_3_y2 = (fa(h_u_arrmul10_and4_3_y0, h_u_arrmul10_fa5_2_y2, h_u_arrmul10_fa3_3_y4) >> 0) & 0x01;
  h_u_arrmul10_fa4_3_y4 = (fa(h_u_arrmul10_and4_3_y0, h_u_arrmul10_fa5_2_y2, h_u_arrmul10_fa3_3_y4) >> 1) & 0x01;
  h_u_arrmul10_and5_3_y0 = and_gate(a_5, b_3);
  h_u_arrmul10_fa5_3_y2 = (fa(h_u_arrmul10_and5_3_y0, h_u_arrmul10_fa6_2_y2, h_u_arrmul10_fa4_3_y4) >> 0) & 0x01;
  h_u_arrmul10_fa5_3_y4 = (fa(h_u_arrmul10_and5_3_y0, h_u_arrmul10_fa6_2_y2, h_u_arrmul10_fa4_3_y4) >> 1) & 0x01;
  h_u_arrmul10_and6_3_y0 = and_gate(a_6, b_3);
  h_u_arrmul10_fa6_3_y2 = (fa(h_u_arrmul10_and6_3_y0, h_u_arrmul10_fa7_2_y2, h_u_arrmul10_fa5_3_y4) >> 0) & 0x01;
  h_u_arrmul10_fa6_3_y4 = (fa(h_u_arrmul10_and6_3_y0, h_u_arrmul10_fa7_2_y2, h_u_arrmul10_fa5_3_y4) >> 1) & 0x01;
  h_u_arrmul10_and7_3_y0 = and_gate(a_7, b_3);
  h_u_arrmul10_fa7_3_y2 = (fa(h_u_arrmul10_and7_3_y0, h_u_arrmul10_fa8_2_y2, h_u_arrmul10_fa6_3_y4) >> 0) & 0x01;
  h_u_arrmul10_fa7_3_y4 = (fa(h_u_arrmul10_and7_3_y0, h_u_arrmul10_fa8_2_y2, h_u_arrmul10_fa6_3_y4) >> 1) & 0x01;
  h_u_arrmul10_and8_3_y0 = and_gate(a_8, b_3);
  h_u_arrmul10_fa8_3_y2 = (fa(h_u_arrmul10_and8_3_y0, h_u_arrmul10_fa9_2_y2, h_u_arrmul10_fa7_3_y4) >> 0) & 0x01;
  h_u_arrmul10_fa8_3_y4 = (fa(h_u_arrmul10_and8_3_y0, h_u_arrmul10_fa9_2_y2, h_u_arrmul10_fa7_3_y4) >> 1) & 0x01;
  h_u_arrmul10_and9_3_y0 = and_gate(a_9, b_3);
  h_u_arrmul10_fa9_3_y2 = (fa(h_u_arrmul10_and9_3_y0, h_u_arrmul10_fa9_2_y4, h_u_arrmul10_fa8_3_y4) >> 0) & 0x01;
  h_u_arrmul10_fa9_3_y4 = (fa(h_u_arrmul10_and9_3_y0, h_u_arrmul10_fa9_2_y4, h_u_arrmul10_fa8_3_y4) >> 1) & 0x01;
  h_u_arrmul10_and0_4_y0 = and_gate(a_0, b_4);
  h_u_arrmul10_ha0_4_y0 = (ha(h_u_arrmul10_and0_4_y0, h_u_arrmul10_fa1_3_y2) >> 0) & 0x01;
  h_u_arrmul10_ha0_4_y1 = (ha(h_u_arrmul10_and0_4_y0, h_u_arrmul10_fa1_3_y2) >> 1) & 0x01;
  h_u_arrmul10_and1_4_y0 = and_gate(a_1, b_4);
  h_u_arrmul10_fa1_4_y2 = (fa(h_u_arrmul10_and1_4_y0, h_u_arrmul10_fa2_3_y2, h_u_arrmul10_ha0_4_y1) >> 0) & 0x01;
  h_u_arrmul10_fa1_4_y4 = (fa(h_u_arrmul10_and1_4_y0, h_u_arrmul10_fa2_3_y2, h_u_arrmul10_ha0_4_y1) >> 1) & 0x01;
  h_u_arrmul10_and2_4_y0 = and_gate(a_2, b_4);
  h_u_arrmul10_fa2_4_y2 = (fa(h_u_arrmul10_and2_4_y0, h_u_arrmul10_fa3_3_y2, h_u_arrmul10_fa1_4_y4) >> 0) & 0x01;
  h_u_arrmul10_fa2_4_y4 = (fa(h_u_arrmul10_and2_4_y0, h_u_arrmul10_fa3_3_y2, h_u_arrmul10_fa1_4_y4) >> 1) & 0x01;
  h_u_arrmul10_and3_4_y0 = and_gate(a_3, b_4);
  h_u_arrmul10_fa3_4_y2 = (fa(h_u_arrmul10_and3_4_y0, h_u_arrmul10_fa4_3_y2, h_u_arrmul10_fa2_4_y4) >> 0) & 0x01;
  h_u_arrmul10_fa3_4_y4 = (fa(h_u_arrmul10_and3_4_y0, h_u_arrmul10_fa4_3_y2, h_u_arrmul10_fa2_4_y4) >> 1) & 0x01;
  h_u_arrmul10_and4_4_y0 = and_gate(a_4, b_4);
  h_u_arrmul10_fa4_4_y2 = (fa(h_u_arrmul10_and4_4_y0, h_u_arrmul10_fa5_3_y2, h_u_arrmul10_fa3_4_y4) >> 0) & 0x01;
  h_u_arrmul10_fa4_4_y4 = (fa(h_u_arrmul10_and4_4_y0, h_u_arrmul10_fa5_3_y2, h_u_arrmul10_fa3_4_y4) >> 1) & 0x01;
  h_u_arrmul10_and5_4_y0 = and_gate(a_5, b_4);
  h_u_arrmul10_fa5_4_y2 = (fa(h_u_arrmul10_and5_4_y0, h_u_arrmul10_fa6_3_y2, h_u_arrmul10_fa4_4_y4) >> 0) & 0x01;
  h_u_arrmul10_fa5_4_y4 = (fa(h_u_arrmul10_and5_4_y0, h_u_arrmul10_fa6_3_y2, h_u_arrmul10_fa4_4_y4) >> 1) & 0x01;
  h_u_arrmul10_and6_4_y0 = and_gate(a_6, b_4);
  h_u_arrmul10_fa6_4_y2 = (fa(h_u_arrmul10_and6_4_y0, h_u_arrmul10_fa7_3_y2, h_u_arrmul10_fa5_4_y4) >> 0) & 0x01;
  h_u_arrmul10_fa6_4_y4 = (fa(h_u_arrmul10_and6_4_y0, h_u_arrmul10_fa7_3_y2, h_u_arrmul10_fa5_4_y4) >> 1) & 0x01;
  h_u_arrmul10_and7_4_y0 = and_gate(a_7, b_4);
  h_u_arrmul10_fa7_4_y2 = (fa(h_u_arrmul10_and7_4_y0, h_u_arrmul10_fa8_3_y2, h_u_arrmul10_fa6_4_y4) >> 0) & 0x01;
  h_u_arrmul10_fa7_4_y4 = (fa(h_u_arrmul10_and7_4_y0, h_u_arrmul10_fa8_3_y2, h_u_arrmul10_fa6_4_y4) >> 1) & 0x01;
  h_u_arrmul10_and8_4_y0 = and_gate(a_8, b_4);
  h_u_arrmul10_fa8_4_y2 = (fa(h_u_arrmul10_and8_4_y0, h_u_arrmul10_fa9_3_y2, h_u_arrmul10_fa7_4_y4) >> 0) & 0x01;
  h_u_arrmul10_fa8_4_y4 = (fa(h_u_arrmul10_and8_4_y0, h_u_arrmul10_fa9_3_y2, h_u_arrmul10_fa7_4_y4) >> 1) & 0x01;
  h_u_arrmul10_and9_4_y0 = and_gate(a_9, b_4);
  h_u_arrmul10_fa9_4_y2 = (fa(h_u_arrmul10_and9_4_y0, h_u_arrmul10_fa9_3_y4, h_u_arrmul10_fa8_4_y4) >> 0) & 0x01;
  h_u_arrmul10_fa9_4_y4 = (fa(h_u_arrmul10_and9_4_y0, h_u_arrmul10_fa9_3_y4, h_u_arrmul10_fa8_4_y4) >> 1) & 0x01;
  h_u_arrmul10_and0_5_y0 = and_gate(a_0, b_5);
  h_u_arrmul10_ha0_5_y0 = (ha(h_u_arrmul10_and0_5_y0, h_u_arrmul10_fa1_4_y2) >> 0) & 0x01;
  h_u_arrmul10_ha0_5_y1 = (ha(h_u_arrmul10_and0_5_y0, h_u_arrmul10_fa1_4_y2) >> 1) & 0x01;
  h_u_arrmul10_and1_5_y0 = and_gate(a_1, b_5);
  h_u_arrmul10_fa1_5_y2 = (fa(h_u_arrmul10_and1_5_y0, h_u_arrmul10_fa2_4_y2, h_u_arrmul10_ha0_5_y1) >> 0) & 0x01;
  h_u_arrmul10_fa1_5_y4 = (fa(h_u_arrmul10_and1_5_y0, h_u_arrmul10_fa2_4_y2, h_u_arrmul10_ha0_5_y1) >> 1) & 0x01;
  h_u_arrmul10_and2_5_y0 = and_gate(a_2, b_5);
  h_u_arrmul10_fa2_5_y2 = (fa(h_u_arrmul10_and2_5_y0, h_u_arrmul10_fa3_4_y2, h_u_arrmul10_fa1_5_y4) >> 0) & 0x01;
  h_u_arrmul10_fa2_5_y4 = (fa(h_u_arrmul10_and2_5_y0, h_u_arrmul10_fa3_4_y2, h_u_arrmul10_fa1_5_y4) >> 1) & 0x01;
  h_u_arrmul10_and3_5_y0 = and_gate(a_3, b_5);
  h_u_arrmul10_fa3_5_y2 = (fa(h_u_arrmul10_and3_5_y0, h_u_arrmul10_fa4_4_y2, h_u_arrmul10_fa2_5_y4) >> 0) & 0x01;
  h_u_arrmul10_fa3_5_y4 = (fa(h_u_arrmul10_and3_5_y0, h_u_arrmul10_fa4_4_y2, h_u_arrmul10_fa2_5_y4) >> 1) & 0x01;
  h_u_arrmul10_and4_5_y0 = and_gate(a_4, b_5);
  h_u_arrmul10_fa4_5_y2 = (fa(h_u_arrmul10_and4_5_y0, h_u_arrmul10_fa5_4_y2, h_u_arrmul10_fa3_5_y4) >> 0) & 0x01;
  h_u_arrmul10_fa4_5_y4 = (fa(h_u_arrmul10_and4_5_y0, h_u_arrmul10_fa5_4_y2, h_u_arrmul10_fa3_5_y4) >> 1) & 0x01;
  h_u_arrmul10_and5_5_y0 = and_gate(a_5, b_5);
  h_u_arrmul10_fa5_5_y2 = (fa(h_u_arrmul10_and5_5_y0, h_u_arrmul10_fa6_4_y2, h_u_arrmul10_fa4_5_y4) >> 0) & 0x01;
  h_u_arrmul10_fa5_5_y4 = (fa(h_u_arrmul10_and5_5_y0, h_u_arrmul10_fa6_4_y2, h_u_arrmul10_fa4_5_y4) >> 1) & 0x01;
  h_u_arrmul10_and6_5_y0 = and_gate(a_6, b_5);
  h_u_arrmul10_fa6_5_y2 = (fa(h_u_arrmul10_and6_5_y0, h_u_arrmul10_fa7_4_y2, h_u_arrmul10_fa5_5_y4) >> 0) & 0x01;
  h_u_arrmul10_fa6_5_y4 = (fa(h_u_arrmul10_and6_5_y0, h_u_arrmul10_fa7_4_y2, h_u_arrmul10_fa5_5_y4) >> 1) & 0x01;
  h_u_arrmul10_and7_5_y0 = and_gate(a_7, b_5);
  h_u_arrmul10_fa7_5_y2 = (fa(h_u_arrmul10_and7_5_y0, h_u_arrmul10_fa8_4_y2, h_u_arrmul10_fa6_5_y4) >> 0) & 0x01;
  h_u_arrmul10_fa7_5_y4 = (fa(h_u_arrmul10_and7_5_y0, h_u_arrmul10_fa8_4_y2, h_u_arrmul10_fa6_5_y4) >> 1) & 0x01;
  h_u_arrmul10_and8_5_y0 = and_gate(a_8, b_5);
  h_u_arrmul10_fa8_5_y2 = (fa(h_u_arrmul10_and8_5_y0, h_u_arrmul10_fa9_4_y2, h_u_arrmul10_fa7_5_y4) >> 0) & 0x01;
  h_u_arrmul10_fa8_5_y4 = (fa(h_u_arrmul10_and8_5_y0, h_u_arrmul10_fa9_4_y2, h_u_arrmul10_fa7_5_y4) >> 1) & 0x01;
  h_u_arrmul10_and9_5_y0 = and_gate(a_9, b_5);
  h_u_arrmul10_fa9_5_y2 = (fa(h_u_arrmul10_and9_5_y0, h_u_arrmul10_fa9_4_y4, h_u_arrmul10_fa8_5_y4) >> 0) & 0x01;
  h_u_arrmul10_fa9_5_y4 = (fa(h_u_arrmul10_and9_5_y0, h_u_arrmul10_fa9_4_y4, h_u_arrmul10_fa8_5_y4) >> 1) & 0x01;
  h_u_arrmul10_and0_6_y0 = and_gate(a_0, b_6);
  h_u_arrmul10_ha0_6_y0 = (ha(h_u_arrmul10_and0_6_y0, h_u_arrmul10_fa1_5_y2) >> 0) & 0x01;
  h_u_arrmul10_ha0_6_y1 = (ha(h_u_arrmul10_and0_6_y0, h_u_arrmul10_fa1_5_y2) >> 1) & 0x01;
  h_u_arrmul10_and1_6_y0 = and_gate(a_1, b_6);
  h_u_arrmul10_fa1_6_y2 = (fa(h_u_arrmul10_and1_6_y0, h_u_arrmul10_fa2_5_y2, h_u_arrmul10_ha0_6_y1) >> 0) & 0x01;
  h_u_arrmul10_fa1_6_y4 = (fa(h_u_arrmul10_and1_6_y0, h_u_arrmul10_fa2_5_y2, h_u_arrmul10_ha0_6_y1) >> 1) & 0x01;
  h_u_arrmul10_and2_6_y0 = and_gate(a_2, b_6);
  h_u_arrmul10_fa2_6_y2 = (fa(h_u_arrmul10_and2_6_y0, h_u_arrmul10_fa3_5_y2, h_u_arrmul10_fa1_6_y4) >> 0) & 0x01;
  h_u_arrmul10_fa2_6_y4 = (fa(h_u_arrmul10_and2_6_y0, h_u_arrmul10_fa3_5_y2, h_u_arrmul10_fa1_6_y4) >> 1) & 0x01;
  h_u_arrmul10_and3_6_y0 = and_gate(a_3, b_6);
  h_u_arrmul10_fa3_6_y2 = (fa(h_u_arrmul10_and3_6_y0, h_u_arrmul10_fa4_5_y2, h_u_arrmul10_fa2_6_y4) >> 0) & 0x01;
  h_u_arrmul10_fa3_6_y4 = (fa(h_u_arrmul10_and3_6_y0, h_u_arrmul10_fa4_5_y2, h_u_arrmul10_fa2_6_y4) >> 1) & 0x01;
  h_u_arrmul10_and4_6_y0 = and_gate(a_4, b_6);
  h_u_arrmul10_fa4_6_y2 = (fa(h_u_arrmul10_and4_6_y0, h_u_arrmul10_fa5_5_y2, h_u_arrmul10_fa3_6_y4) >> 0) & 0x01;
  h_u_arrmul10_fa4_6_y4 = (fa(h_u_arrmul10_and4_6_y0, h_u_arrmul10_fa5_5_y2, h_u_arrmul10_fa3_6_y4) >> 1) & 0x01;
  h_u_arrmul10_and5_6_y0 = and_gate(a_5, b_6);
  h_u_arrmul10_fa5_6_y2 = (fa(h_u_arrmul10_and5_6_y0, h_u_arrmul10_fa6_5_y2, h_u_arrmul10_fa4_6_y4) >> 0) & 0x01;
  h_u_arrmul10_fa5_6_y4 = (fa(h_u_arrmul10_and5_6_y0, h_u_arrmul10_fa6_5_y2, h_u_arrmul10_fa4_6_y4) >> 1) & 0x01;
  h_u_arrmul10_and6_6_y0 = and_gate(a_6, b_6);
  h_u_arrmul10_fa6_6_y2 = (fa(h_u_arrmul10_and6_6_y0, h_u_arrmul10_fa7_5_y2, h_u_arrmul10_fa5_6_y4) >> 0) & 0x01;
  h_u_arrmul10_fa6_6_y4 = (fa(h_u_arrmul10_and6_6_y0, h_u_arrmul10_fa7_5_y2, h_u_arrmul10_fa5_6_y4) >> 1) & 0x01;
  h_u_arrmul10_and7_6_y0 = and_gate(a_7, b_6);
  h_u_arrmul10_fa7_6_y2 = (fa(h_u_arrmul10_and7_6_y0, h_u_arrmul10_fa8_5_y2, h_u_arrmul10_fa6_6_y4) >> 0) & 0x01;
  h_u_arrmul10_fa7_6_y4 = (fa(h_u_arrmul10_and7_6_y0, h_u_arrmul10_fa8_5_y2, h_u_arrmul10_fa6_6_y4) >> 1) & 0x01;
  h_u_arrmul10_and8_6_y0 = and_gate(a_8, b_6);
  h_u_arrmul10_fa8_6_y2 = (fa(h_u_arrmul10_and8_6_y0, h_u_arrmul10_fa9_5_y2, h_u_arrmul10_fa7_6_y4) >> 0) & 0x01;
  h_u_arrmul10_fa8_6_y4 = (fa(h_u_arrmul10_and8_6_y0, h_u_arrmul10_fa9_5_y2, h_u_arrmul10_fa7_6_y4) >> 1) & 0x01;
  h_u_arrmul10_and9_6_y0 = and_gate(a_9, b_6);
  h_u_arrmul10_fa9_6_y2 = (fa(h_u_arrmul10_and9_6_y0, h_u_arrmul10_fa9_5_y4, h_u_arrmul10_fa8_6_y4) >> 0) & 0x01;
  h_u_arrmul10_fa9_6_y4 = (fa(h_u_arrmul10_and9_6_y0, h_u_arrmul10_fa9_5_y4, h_u_arrmul10_fa8_6_y4) >> 1) & 0x01;
  h_u_arrmul10_and0_7_y0 = and_gate(a_0, b_7);
  h_u_arrmul10_ha0_7_y0 = (ha(h_u_arrmul10_and0_7_y0, h_u_arrmul10_fa1_6_y2) >> 0) & 0x01;
  h_u_arrmul10_ha0_7_y1 = (ha(h_u_arrmul10_and0_7_y0, h_u_arrmul10_fa1_6_y2) >> 1) & 0x01;
  h_u_arrmul10_and1_7_y0 = and_gate(a_1, b_7);
  h_u_arrmul10_fa1_7_y2 = (fa(h_u_arrmul10_and1_7_y0, h_u_arrmul10_fa2_6_y2, h_u_arrmul10_ha0_7_y1) >> 0) & 0x01;
  h_u_arrmul10_fa1_7_y4 = (fa(h_u_arrmul10_and1_7_y0, h_u_arrmul10_fa2_6_y2, h_u_arrmul10_ha0_7_y1) >> 1) & 0x01;
  h_u_arrmul10_and2_7_y0 = and_gate(a_2, b_7);
  h_u_arrmul10_fa2_7_y2 = (fa(h_u_arrmul10_and2_7_y0, h_u_arrmul10_fa3_6_y2, h_u_arrmul10_fa1_7_y4) >> 0) & 0x01;
  h_u_arrmul10_fa2_7_y4 = (fa(h_u_arrmul10_and2_7_y0, h_u_arrmul10_fa3_6_y2, h_u_arrmul10_fa1_7_y4) >> 1) & 0x01;
  h_u_arrmul10_and3_7_y0 = and_gate(a_3, b_7);
  h_u_arrmul10_fa3_7_y2 = (fa(h_u_arrmul10_and3_7_y0, h_u_arrmul10_fa4_6_y2, h_u_arrmul10_fa2_7_y4) >> 0) & 0x01;
  h_u_arrmul10_fa3_7_y4 = (fa(h_u_arrmul10_and3_7_y0, h_u_arrmul10_fa4_6_y2, h_u_arrmul10_fa2_7_y4) >> 1) & 0x01;
  h_u_arrmul10_and4_7_y0 = and_gate(a_4, b_7);
  h_u_arrmul10_fa4_7_y2 = (fa(h_u_arrmul10_and4_7_y0, h_u_arrmul10_fa5_6_y2, h_u_arrmul10_fa3_7_y4) >> 0) & 0x01;
  h_u_arrmul10_fa4_7_y4 = (fa(h_u_arrmul10_and4_7_y0, h_u_arrmul10_fa5_6_y2, h_u_arrmul10_fa3_7_y4) >> 1) & 0x01;
  h_u_arrmul10_and5_7_y0 = and_gate(a_5, b_7);
  h_u_arrmul10_fa5_7_y2 = (fa(h_u_arrmul10_and5_7_y0, h_u_arrmul10_fa6_6_y2, h_u_arrmul10_fa4_7_y4) >> 0) & 0x01;
  h_u_arrmul10_fa5_7_y4 = (fa(h_u_arrmul10_and5_7_y0, h_u_arrmul10_fa6_6_y2, h_u_arrmul10_fa4_7_y4) >> 1) & 0x01;
  h_u_arrmul10_and6_7_y0 = and_gate(a_6, b_7);
  h_u_arrmul10_fa6_7_y2 = (fa(h_u_arrmul10_and6_7_y0, h_u_arrmul10_fa7_6_y2, h_u_arrmul10_fa5_7_y4) >> 0) & 0x01;
  h_u_arrmul10_fa6_7_y4 = (fa(h_u_arrmul10_and6_7_y0, h_u_arrmul10_fa7_6_y2, h_u_arrmul10_fa5_7_y4) >> 1) & 0x01;
  h_u_arrmul10_and7_7_y0 = and_gate(a_7, b_7);
  h_u_arrmul10_fa7_7_y2 = (fa(h_u_arrmul10_and7_7_y0, h_u_arrmul10_fa8_6_y2, h_u_arrmul10_fa6_7_y4) >> 0) & 0x01;
  h_u_arrmul10_fa7_7_y4 = (fa(h_u_arrmul10_and7_7_y0, h_u_arrmul10_fa8_6_y2, h_u_arrmul10_fa6_7_y4) >> 1) & 0x01;
  h_u_arrmul10_and8_7_y0 = and_gate(a_8, b_7);
  h_u_arrmul10_fa8_7_y2 = (fa(h_u_arrmul10_and8_7_y0, h_u_arrmul10_fa9_6_y2, h_u_arrmul10_fa7_7_y4) >> 0) & 0x01;
  h_u_arrmul10_fa8_7_y4 = (fa(h_u_arrmul10_and8_7_y0, h_u_arrmul10_fa9_6_y2, h_u_arrmul10_fa7_7_y4) >> 1) & 0x01;
  h_u_arrmul10_and9_7_y0 = and_gate(a_9, b_7);
  h_u_arrmul10_fa9_7_y2 = (fa(h_u_arrmul10_and9_7_y0, h_u_arrmul10_fa9_6_y4, h_u_arrmul10_fa8_7_y4) >> 0) & 0x01;
  h_u_arrmul10_fa9_7_y4 = (fa(h_u_arrmul10_and9_7_y0, h_u_arrmul10_fa9_6_y4, h_u_arrmul10_fa8_7_y4) >> 1) & 0x01;
  h_u_arrmul10_and0_8_y0 = and_gate(a_0, b_8);
  h_u_arrmul10_ha0_8_y0 = (ha(h_u_arrmul10_and0_8_y0, h_u_arrmul10_fa1_7_y2) >> 0) & 0x01;
  h_u_arrmul10_ha0_8_y1 = (ha(h_u_arrmul10_and0_8_y0, h_u_arrmul10_fa1_7_y2) >> 1) & 0x01;
  h_u_arrmul10_and1_8_y0 = and_gate(a_1, b_8);
  h_u_arrmul10_fa1_8_y2 = (fa(h_u_arrmul10_and1_8_y0, h_u_arrmul10_fa2_7_y2, h_u_arrmul10_ha0_8_y1) >> 0) & 0x01;
  h_u_arrmul10_fa1_8_y4 = (fa(h_u_arrmul10_and1_8_y0, h_u_arrmul10_fa2_7_y2, h_u_arrmul10_ha0_8_y1) >> 1) & 0x01;
  h_u_arrmul10_and2_8_y0 = and_gate(a_2, b_8);
  h_u_arrmul10_fa2_8_y2 = (fa(h_u_arrmul10_and2_8_y0, h_u_arrmul10_fa3_7_y2, h_u_arrmul10_fa1_8_y4) >> 0) & 0x01;
  h_u_arrmul10_fa2_8_y4 = (fa(h_u_arrmul10_and2_8_y0, h_u_arrmul10_fa3_7_y2, h_u_arrmul10_fa1_8_y4) >> 1) & 0x01;
  h_u_arrmul10_and3_8_y0 = and_gate(a_3, b_8);
  h_u_arrmul10_fa3_8_y2 = (fa(h_u_arrmul10_and3_8_y0, h_u_arrmul10_fa4_7_y2, h_u_arrmul10_fa2_8_y4) >> 0) & 0x01;
  h_u_arrmul10_fa3_8_y4 = (fa(h_u_arrmul10_and3_8_y0, h_u_arrmul10_fa4_7_y2, h_u_arrmul10_fa2_8_y4) >> 1) & 0x01;
  h_u_arrmul10_and4_8_y0 = and_gate(a_4, b_8);
  h_u_arrmul10_fa4_8_y2 = (fa(h_u_arrmul10_and4_8_y0, h_u_arrmul10_fa5_7_y2, h_u_arrmul10_fa3_8_y4) >> 0) & 0x01;
  h_u_arrmul10_fa4_8_y4 = (fa(h_u_arrmul10_and4_8_y0, h_u_arrmul10_fa5_7_y2, h_u_arrmul10_fa3_8_y4) >> 1) & 0x01;
  h_u_arrmul10_and5_8_y0 = and_gate(a_5, b_8);
  h_u_arrmul10_fa5_8_y2 = (fa(h_u_arrmul10_and5_8_y0, h_u_arrmul10_fa6_7_y2, h_u_arrmul10_fa4_8_y4) >> 0) & 0x01;
  h_u_arrmul10_fa5_8_y4 = (fa(h_u_arrmul10_and5_8_y0, h_u_arrmul10_fa6_7_y2, h_u_arrmul10_fa4_8_y4) >> 1) & 0x01;
  h_u_arrmul10_and6_8_y0 = and_gate(a_6, b_8);
  h_u_arrmul10_fa6_8_y2 = (fa(h_u_arrmul10_and6_8_y0, h_u_arrmul10_fa7_7_y2, h_u_arrmul10_fa5_8_y4) >> 0) & 0x01;
  h_u_arrmul10_fa6_8_y4 = (fa(h_u_arrmul10_and6_8_y0, h_u_arrmul10_fa7_7_y2, h_u_arrmul10_fa5_8_y4) >> 1) & 0x01;
  h_u_arrmul10_and7_8_y0 = and_gate(a_7, b_8);
  h_u_arrmul10_fa7_8_y2 = (fa(h_u_arrmul10_and7_8_y0, h_u_arrmul10_fa8_7_y2, h_u_arrmul10_fa6_8_y4) >> 0) & 0x01;
  h_u_arrmul10_fa7_8_y4 = (fa(h_u_arrmul10_and7_8_y0, h_u_arrmul10_fa8_7_y2, h_u_arrmul10_fa6_8_y4) >> 1) & 0x01;
  h_u_arrmul10_and8_8_y0 = and_gate(a_8, b_8);
  h_u_arrmul10_fa8_8_y2 = (fa(h_u_arrmul10_and8_8_y0, h_u_arrmul10_fa9_7_y2, h_u_arrmul10_fa7_8_y4) >> 0) & 0x01;
  h_u_arrmul10_fa8_8_y4 = (fa(h_u_arrmul10_and8_8_y0, h_u_arrmul10_fa9_7_y2, h_u_arrmul10_fa7_8_y4) >> 1) & 0x01;
  h_u_arrmul10_and9_8_y0 = and_gate(a_9, b_8);
  h_u_arrmul10_fa9_8_y2 = (fa(h_u_arrmul10_and9_8_y0, h_u_arrmul10_fa9_7_y4, h_u_arrmul10_fa8_8_y4) >> 0) & 0x01;
  h_u_arrmul10_fa9_8_y4 = (fa(h_u_arrmul10_and9_8_y0, h_u_arrmul10_fa9_7_y4, h_u_arrmul10_fa8_8_y4) >> 1) & 0x01;
  h_u_arrmul10_and0_9_y0 = and_gate(a_0, b_9);
  h_u_arrmul10_ha0_9_y0 = (ha(h_u_arrmul10_and0_9_y0, h_u_arrmul10_fa1_8_y2) >> 0) & 0x01;
  h_u_arrmul10_ha0_9_y1 = (ha(h_u_arrmul10_and0_9_y0, h_u_arrmul10_fa1_8_y2) >> 1) & 0x01;
  h_u_arrmul10_and1_9_y0 = and_gate(a_1, b_9);
  h_u_arrmul10_fa1_9_y2 = (fa(h_u_arrmul10_and1_9_y0, h_u_arrmul10_fa2_8_y2, h_u_arrmul10_ha0_9_y1) >> 0) & 0x01;
  h_u_arrmul10_fa1_9_y4 = (fa(h_u_arrmul10_and1_9_y0, h_u_arrmul10_fa2_8_y2, h_u_arrmul10_ha0_9_y1) >> 1) & 0x01;
  h_u_arrmul10_and2_9_y0 = and_gate(a_2, b_9);
  h_u_arrmul10_fa2_9_y2 = (fa(h_u_arrmul10_and2_9_y0, h_u_arrmul10_fa3_8_y2, h_u_arrmul10_fa1_9_y4) >> 0) & 0x01;
  h_u_arrmul10_fa2_9_y4 = (fa(h_u_arrmul10_and2_9_y0, h_u_arrmul10_fa3_8_y2, h_u_arrmul10_fa1_9_y4) >> 1) & 0x01;
  h_u_arrmul10_and3_9_y0 = and_gate(a_3, b_9);
  h_u_arrmul10_fa3_9_y2 = (fa(h_u_arrmul10_and3_9_y0, h_u_arrmul10_fa4_8_y2, h_u_arrmul10_fa2_9_y4) >> 0) & 0x01;
  h_u_arrmul10_fa3_9_y4 = (fa(h_u_arrmul10_and3_9_y0, h_u_arrmul10_fa4_8_y2, h_u_arrmul10_fa2_9_y4) >> 1) & 0x01;
  h_u_arrmul10_and4_9_y0 = and_gate(a_4, b_9);
  h_u_arrmul10_fa4_9_y2 = (fa(h_u_arrmul10_and4_9_y0, h_u_arrmul10_fa5_8_y2, h_u_arrmul10_fa3_9_y4) >> 0) & 0x01;
  h_u_arrmul10_fa4_9_y4 = (fa(h_u_arrmul10_and4_9_y0, h_u_arrmul10_fa5_8_y2, h_u_arrmul10_fa3_9_y4) >> 1) & 0x01;
  h_u_arrmul10_and5_9_y0 = and_gate(a_5, b_9);
  h_u_arrmul10_fa5_9_y2 = (fa(h_u_arrmul10_and5_9_y0, h_u_arrmul10_fa6_8_y2, h_u_arrmul10_fa4_9_y4) >> 0) & 0x01;
  h_u_arrmul10_fa5_9_y4 = (fa(h_u_arrmul10_and5_9_y0, h_u_arrmul10_fa6_8_y2, h_u_arrmul10_fa4_9_y4) >> 1) & 0x01;
  h_u_arrmul10_and6_9_y0 = and_gate(a_6, b_9);
  h_u_arrmul10_fa6_9_y2 = (fa(h_u_arrmul10_and6_9_y0, h_u_arrmul10_fa7_8_y2, h_u_arrmul10_fa5_9_y4) >> 0) & 0x01;
  h_u_arrmul10_fa6_9_y4 = (fa(h_u_arrmul10_and6_9_y0, h_u_arrmul10_fa7_8_y2, h_u_arrmul10_fa5_9_y4) >> 1) & 0x01;
  h_u_arrmul10_and7_9_y0 = and_gate(a_7, b_9);
  h_u_arrmul10_fa7_9_y2 = (fa(h_u_arrmul10_and7_9_y0, h_u_arrmul10_fa8_8_y2, h_u_arrmul10_fa6_9_y4) >> 0) & 0x01;
  h_u_arrmul10_fa7_9_y4 = (fa(h_u_arrmul10_and7_9_y0, h_u_arrmul10_fa8_8_y2, h_u_arrmul10_fa6_9_y4) >> 1) & 0x01;
  h_u_arrmul10_and8_9_y0 = and_gate(a_8, b_9);
  h_u_arrmul10_fa8_9_y2 = (fa(h_u_arrmul10_and8_9_y0, h_u_arrmul10_fa9_8_y2, h_u_arrmul10_fa7_9_y4) >> 0) & 0x01;
  h_u_arrmul10_fa8_9_y4 = (fa(h_u_arrmul10_and8_9_y0, h_u_arrmul10_fa9_8_y2, h_u_arrmul10_fa7_9_y4) >> 1) & 0x01;
  h_u_arrmul10_and9_9_y0 = and_gate(a_9, b_9);
  h_u_arrmul10_fa9_9_y2 = (fa(h_u_arrmul10_and9_9_y0, h_u_arrmul10_fa9_8_y4, h_u_arrmul10_fa8_9_y4) >> 0) & 0x01;
  h_u_arrmul10_fa9_9_y4 = (fa(h_u_arrmul10_and9_9_y0, h_u_arrmul10_fa9_8_y4, h_u_arrmul10_fa8_9_y4) >> 1) & 0x01;

  out |= (h_u_arrmul10_and0_0_y0 & 0x01) << 0;
  out |= (h_u_arrmul10_ha0_1_y0 & 0x01) << 1;
  out |= (h_u_arrmul10_ha0_2_y0 & 0x01) << 2;
  out |= (h_u_arrmul10_ha0_3_y0 & 0x01) << 3;
  out |= (h_u_arrmul10_ha0_4_y0 & 0x01) << 4;
  out |= (h_u_arrmul10_ha0_5_y0 & 0x01) << 5;
  out |= (h_u_arrmul10_ha0_6_y0 & 0x01) << 6;
  out |= (h_u_arrmul10_ha0_7_y0 & 0x01) << 7;
  out |= (h_u_arrmul10_ha0_8_y0 & 0x01) << 8;
  out |= (h_u_arrmul10_ha0_9_y0 & 0x01) << 9;
  out |= (h_u_arrmul10_fa1_9_y2 & 0x01) << 10;
  out |= (h_u_arrmul10_fa2_9_y2 & 0x01) << 11;
  out |= (h_u_arrmul10_fa3_9_y2 & 0x01) << 12;
  out |= (h_u_arrmul10_fa4_9_y2 & 0x01) << 13;
  out |= (h_u_arrmul10_fa5_9_y2 & 0x01) << 14;
  out |= (h_u_arrmul10_fa6_9_y2 & 0x01) << 15;
  out |= (h_u_arrmul10_fa7_9_y2 & 0x01) << 16;
  out |= (h_u_arrmul10_fa8_9_y2 & 0x01) << 17;
  out |= (h_u_arrmul10_fa9_9_y2 & 0x01) << 18;
  out |= (h_u_arrmul10_fa9_9_y4 & 0x01) << 19;
  return out;
}

#include <assert.h>
int main(){
  for (int i = 0; i < 1024; i++){
    for (int j = 0; j < 1024; j++){
      assert((i * j) == h_u_arrmul10(i,j));
    }
  }
  return 0;
}