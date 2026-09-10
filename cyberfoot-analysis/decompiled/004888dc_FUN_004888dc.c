// Address: 004888dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004888dc(int param_1,undefined4 param_2,uint param_3)

{
  uint local_8;
  
  local_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0xca) != 0) {
    (**(code **)(param_1 + 200))(*(undefined4 *)(param_1 + 0xcc),param_2,&local_8);
  }
  return local_8 & 0xff;
}

