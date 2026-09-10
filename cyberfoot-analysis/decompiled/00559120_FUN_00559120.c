// Address: 00559120
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00559120(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  local_18 = *param_5;
  uStack_14 = param_5[1];
  uStack_10 = param_5[2];
  uStack_c = param_5[3];
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  local_8 = param_3;
  FUN_005593f8(param_1,&local_18,local_28);
  FUN_00558df4(param_1,param_2,uVar1,param_4,param_6,local_8,1,
               *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x14),local_28);
  return;
}

