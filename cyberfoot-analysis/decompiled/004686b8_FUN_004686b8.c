// Address: 004686b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004686b8(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = *param_2;
  uStack_10 = param_2[1];
  if (*(short *)(param_1 + 0x132) != 0) {
    (**(code **)(param_1 + 0x130))(*(undefined4 *)(param_1 + 0x134),param_1,&local_14,param_3);
  }
  return;
}

