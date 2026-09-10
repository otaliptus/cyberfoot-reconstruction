// Address: 004517a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004517a4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = *param_3;
  uStack_10 = param_3[1];
  if (*(short *)(param_1 + 0x2e2) != 0) {
    (**(code **)(param_1 + 0x2e0))(*(undefined4 *)(param_1 + 0x2e4),param_1,param_2,&local_14);
  }
  return;
}

