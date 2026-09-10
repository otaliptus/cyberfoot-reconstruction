// Address: 0046719c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0046719c(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_8;
  
  local_8 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0xc2) != 0) {
    (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0xc4),param_1,param_2,&local_8,param_3);
  }
  return local_8 & 0xff;
}

