#include <stdio.h>
#include <stdint.h>

int64_t f_s_pg_rca4(int64_t a, int64_t b){
  uint8_t out = 0;
  uint8_t a_0 = 0;
  uint8_t a_1 = 0;
  uint8_t a_2 = 0;
  uint8_t a_3 = 0;
  uint8_t b_0 = 0;
  uint8_t b_1 = 0;
  uint8_t b_2 = 0;
  uint8_t b_3 = 0;
  uint8_t constant_wire_value_0_a_0 = 0;
  uint8_t constant_wire_value_0_b_0 = 0;
  uint8_t constant_wire_value_0_y0 = 0;
  uint8_t constant_wire_value_0_y1 = 0;
  uint8_t constant_wire_0 = 0;
  uint8_t f_s_pg_rca4_fa0_a_0 = 0;
  uint8_t f_s_pg_rca4_fa0_b_0 = 0;
  uint8_t f_s_pg_rca4_fa0_y0 = 0;
  uint8_t f_s_pg_rca4_fa0_y1 = 0;
  uint8_t f_s_pg_rca4_fa0_constant_wire_0 = 0;
  uint8_t f_s_pg_rca4_fa0_y2 = 0;
  uint8_t f_s_pg_rca4_and0_constant_wire_0 = 0;
  uint8_t f_s_pg_rca4_and0_f_s_pg_rca4_fa0_y0 = 0;
  uint8_t f_s_pg_rca4_and0_y0 = 0;
  uint8_t f_s_pg_rca4_or0_f_s_pg_rca4_and0_y0 = 0;
  uint8_t f_s_pg_rca4_or0_f_s_pg_rca4_fa0_y1 = 0;
  uint8_t f_s_pg_rca4_or0_y0 = 0;
  uint8_t f_s_pg_rca4_fa1_a_1 = 0;
  uint8_t f_s_pg_rca4_fa1_b_1 = 0;
  uint8_t f_s_pg_rca4_fa1_y0 = 0;
  uint8_t f_s_pg_rca4_fa1_y1 = 0;
  uint8_t f_s_pg_rca4_fa1_f_s_pg_rca4_or0_y0 = 0;
  uint8_t f_s_pg_rca4_fa1_y2 = 0;
  uint8_t f_s_pg_rca4_and1_f_s_pg_rca4_or0_y0 = 0;
  uint8_t f_s_pg_rca4_and1_f_s_pg_rca4_fa1_y0 = 0;
  uint8_t f_s_pg_rca4_and1_y0 = 0;
  uint8_t f_s_pg_rca4_or1_f_s_pg_rca4_and1_y0 = 0;
  uint8_t f_s_pg_rca4_or1_f_s_pg_rca4_fa1_y1 = 0;
  uint8_t f_s_pg_rca4_or1_y0 = 0;
  uint8_t f_s_pg_rca4_fa2_a_2 = 0;
  uint8_t f_s_pg_rca4_fa2_b_2 = 0;
  uint8_t f_s_pg_rca4_fa2_y0 = 0;
  uint8_t f_s_pg_rca4_fa2_y1 = 0;
  uint8_t f_s_pg_rca4_fa2_f_s_pg_rca4_or1_y0 = 0;
  uint8_t f_s_pg_rca4_fa2_y2 = 0;
  uint8_t f_s_pg_rca4_and2_f_s_pg_rca4_or1_y0 = 0;
  uint8_t f_s_pg_rca4_and2_f_s_pg_rca4_fa2_y0 = 0;
  uint8_t f_s_pg_rca4_and2_y0 = 0;
  uint8_t f_s_pg_rca4_or2_f_s_pg_rca4_and2_y0 = 0;
  uint8_t f_s_pg_rca4_or2_f_s_pg_rca4_fa2_y1 = 0;
  uint8_t f_s_pg_rca4_or2_y0 = 0;
  uint8_t f_s_pg_rca4_fa3_a_3 = 0;
  uint8_t f_s_pg_rca4_fa3_b_3 = 0;
  uint8_t f_s_pg_rca4_fa3_y0 = 0;
  uint8_t f_s_pg_rca4_fa3_y1 = 0;
  uint8_t f_s_pg_rca4_fa3_f_s_pg_rca4_or2_y0 = 0;
  uint8_t f_s_pg_rca4_fa3_y2 = 0;
  uint8_t f_s_pg_rca4_and3_f_s_pg_rca4_or2_y0 = 0;
  uint8_t f_s_pg_rca4_and3_f_s_pg_rca4_fa3_y0 = 0;
  uint8_t f_s_pg_rca4_and3_y0 = 0;
  uint8_t f_s_pg_rca4_or3_f_s_pg_rca4_and3_y0 = 0;
  uint8_t f_s_pg_rca4_or3_f_s_pg_rca4_fa3_y1 = 0;
  uint8_t f_s_pg_rca4_or3_y0 = 0;
  uint8_t f_s_pg_rca4_xor0_a_3 = 0;
  uint8_t f_s_pg_rca4_xor0_b_3 = 0;
  uint8_t f_s_pg_rca4_xor0_y0 = 0;
  uint8_t f_s_pg_rca4_xor1_f_s_pg_rca4_xor0_y0 = 0;
  uint8_t f_s_pg_rca4_xor1_f_s_pg_rca4_or3_y0 = 0;
  uint8_t f_s_pg_rca4_xor1_y0 = 0;

  a_0 = ((a >> 0) & 0x01);
  a_1 = ((a >> 1) & 0x01);
  a_2 = ((a >> 2) & 0x01);
  a_3 = ((a >> 3) & 0x01);
  b_0 = ((b >> 0) & 0x01);
  b_1 = ((b >> 1) & 0x01);
  b_2 = ((b >> 2) & 0x01);
  b_3 = ((b >> 3) & 0x01);
  constant_wire_value_0_a_0 = ((a_0 >> 0) & 0x01);
  constant_wire_value_0_b_0 = ((b_0 >> 0) & 0x01);
  constant_wire_value_0_y0 = constant_wire_value_0_a_0 ^ constant_wire_value_0_b_0;
  constant_wire_value_0_y1 = ~(constant_wire_value_0_a_0 ^ constant_wire_value_0_b_0);
  constant_wire_0 = ~(constant_wire_value_0_y0 | constant_wire_value_0_y1);
  f_s_pg_rca4_fa0_a_0 = ((a_0 >> 0) & 0x01);
  f_s_pg_rca4_fa0_b_0 = ((b_0 >> 0) & 0x01);
  f_s_pg_rca4_fa0_constant_wire_0 = ((constant_wire_0 >> 0) & 0x01);
  f_s_pg_rca4_fa0_y0 = f_s_pg_rca4_fa0_a_0 ^ f_s_pg_rca4_fa0_b_0;
  f_s_pg_rca4_fa0_y1 = f_s_pg_rca4_fa0_a_0 & f_s_pg_rca4_fa0_b_0;
  f_s_pg_rca4_fa0_y2 = f_s_pg_rca4_fa0_y0 ^ f_s_pg_rca4_fa0_constant_wire_0;
  f_s_pg_rca4_and0_constant_wire_0 = constant_wire_0;
  f_s_pg_rca4_and0_f_s_pg_rca4_fa0_y0 = f_s_pg_rca4_fa0_y0;
  f_s_pg_rca4_and0_y0 = f_s_pg_rca4_and0_constant_wire_0 & f_s_pg_rca4_and0_f_s_pg_rca4_fa0_y0;
  f_s_pg_rca4_or0_f_s_pg_rca4_and0_y0 = f_s_pg_rca4_and0_y0;
  f_s_pg_rca4_or0_f_s_pg_rca4_fa0_y1 = f_s_pg_rca4_fa0_y1;
  f_s_pg_rca4_or0_y0 = f_s_pg_rca4_or0_f_s_pg_rca4_and0_y0 | f_s_pg_rca4_or0_f_s_pg_rca4_fa0_y1;
  f_s_pg_rca4_fa1_a_1 = ((a_1 >> 0) & 0x01);
  f_s_pg_rca4_fa1_b_1 = ((b_1 >> 0) & 0x01);
  f_s_pg_rca4_fa1_f_s_pg_rca4_or0_y0 = ((f_s_pg_rca4_or0_y0 >> 0) & 0x01);
  f_s_pg_rca4_fa1_y0 = f_s_pg_rca4_fa1_a_1 ^ f_s_pg_rca4_fa1_b_1;
  f_s_pg_rca4_fa1_y1 = f_s_pg_rca4_fa1_a_1 & f_s_pg_rca4_fa1_b_1;
  f_s_pg_rca4_fa1_y2 = f_s_pg_rca4_fa1_y0 ^ f_s_pg_rca4_fa1_f_s_pg_rca4_or0_y0;
  f_s_pg_rca4_and1_f_s_pg_rca4_or0_y0 = f_s_pg_rca4_or0_y0;
  f_s_pg_rca4_and1_f_s_pg_rca4_fa1_y0 = f_s_pg_rca4_fa1_y0;
  f_s_pg_rca4_and1_y0 = f_s_pg_rca4_and1_f_s_pg_rca4_or0_y0 & f_s_pg_rca4_and1_f_s_pg_rca4_fa1_y0;
  f_s_pg_rca4_or1_f_s_pg_rca4_and1_y0 = f_s_pg_rca4_and1_y0;
  f_s_pg_rca4_or1_f_s_pg_rca4_fa1_y1 = f_s_pg_rca4_fa1_y1;
  f_s_pg_rca4_or1_y0 = f_s_pg_rca4_or1_f_s_pg_rca4_and1_y0 | f_s_pg_rca4_or1_f_s_pg_rca4_fa1_y1;
  f_s_pg_rca4_fa2_a_2 = ((a_2 >> 0) & 0x01);
  f_s_pg_rca4_fa2_b_2 = ((b_2 >> 0) & 0x01);
  f_s_pg_rca4_fa2_f_s_pg_rca4_or1_y0 = ((f_s_pg_rca4_or1_y0 >> 0) & 0x01);
  f_s_pg_rca4_fa2_y0 = f_s_pg_rca4_fa2_a_2 ^ f_s_pg_rca4_fa2_b_2;
  f_s_pg_rca4_fa2_y1 = f_s_pg_rca4_fa2_a_2 & f_s_pg_rca4_fa2_b_2;
  f_s_pg_rca4_fa2_y2 = f_s_pg_rca4_fa2_y0 ^ f_s_pg_rca4_fa2_f_s_pg_rca4_or1_y0;
  f_s_pg_rca4_and2_f_s_pg_rca4_or1_y0 = f_s_pg_rca4_or1_y0;
  f_s_pg_rca4_and2_f_s_pg_rca4_fa2_y0 = f_s_pg_rca4_fa2_y0;
  f_s_pg_rca4_and2_y0 = f_s_pg_rca4_and2_f_s_pg_rca4_or1_y0 & f_s_pg_rca4_and2_f_s_pg_rca4_fa2_y0;
  f_s_pg_rca4_or2_f_s_pg_rca4_and2_y0 = f_s_pg_rca4_and2_y0;
  f_s_pg_rca4_or2_f_s_pg_rca4_fa2_y1 = f_s_pg_rca4_fa2_y1;
  f_s_pg_rca4_or2_y0 = f_s_pg_rca4_or2_f_s_pg_rca4_and2_y0 | f_s_pg_rca4_or2_f_s_pg_rca4_fa2_y1;
  f_s_pg_rca4_fa3_a_3 = ((a_3 >> 0) & 0x01);
  f_s_pg_rca4_fa3_b_3 = ((b_3 >> 0) & 0x01);
  f_s_pg_rca4_fa3_f_s_pg_rca4_or2_y0 = ((f_s_pg_rca4_or2_y0 >> 0) & 0x01);
  f_s_pg_rca4_fa3_y0 = f_s_pg_rca4_fa3_a_3 ^ f_s_pg_rca4_fa3_b_3;
  f_s_pg_rca4_fa3_y1 = f_s_pg_rca4_fa3_a_3 & f_s_pg_rca4_fa3_b_3;
  f_s_pg_rca4_fa3_y2 = f_s_pg_rca4_fa3_y0 ^ f_s_pg_rca4_fa3_f_s_pg_rca4_or2_y0;
  f_s_pg_rca4_and3_f_s_pg_rca4_or2_y0 = f_s_pg_rca4_or2_y0;
  f_s_pg_rca4_and3_f_s_pg_rca4_fa3_y0 = f_s_pg_rca4_fa3_y0;
  f_s_pg_rca4_and3_y0 = f_s_pg_rca4_and3_f_s_pg_rca4_or2_y0 & f_s_pg_rca4_and3_f_s_pg_rca4_fa3_y0;
  f_s_pg_rca4_or3_f_s_pg_rca4_and3_y0 = f_s_pg_rca4_and3_y0;
  f_s_pg_rca4_or3_f_s_pg_rca4_fa3_y1 = f_s_pg_rca4_fa3_y1;
  f_s_pg_rca4_or3_y0 = f_s_pg_rca4_or3_f_s_pg_rca4_and3_y0 | f_s_pg_rca4_or3_f_s_pg_rca4_fa3_y1;
  f_s_pg_rca4_xor0_a_3 = a_3;
  f_s_pg_rca4_xor0_b_3 = b_3;
  f_s_pg_rca4_xor0_y0 = f_s_pg_rca4_xor0_a_3 ^ f_s_pg_rca4_xor0_b_3;
  f_s_pg_rca4_xor1_f_s_pg_rca4_xor0_y0 = f_s_pg_rca4_xor0_y0;
  f_s_pg_rca4_xor1_f_s_pg_rca4_or3_y0 = f_s_pg_rca4_or3_y0;
  f_s_pg_rca4_xor1_y0 = f_s_pg_rca4_xor1_f_s_pg_rca4_xor0_y0 ^ f_s_pg_rca4_xor1_f_s_pg_rca4_or3_y0;

  out |= (f_s_pg_rca4_fa0_y2 & 0x01) << 0;
  out |= (f_s_pg_rca4_fa1_y2 & 0x01) << 1;
  out |= (f_s_pg_rca4_fa2_y2 & 0x01) << 2;
  out |= (f_s_pg_rca4_fa3_y2 & 0x01) << 3;
  out |= (f_s_pg_rca4_xor1_y0 & 0x01) << 4;
  return out;
}