#include <stdio.h>
#include <stdint.h>

uint8_t xor_gate(uint8_t _a, uint8_t _b){
  return ((_a >> 0) & 0x01) ^ ((_b >> 0) & 0x01);
}

#include <assert.h>
int main(){
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
      assert((i ^ j) == xor_gate(i,j));
    }
  }
  return 0;
}