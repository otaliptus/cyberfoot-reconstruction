// Address: 005020bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005020bc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_0041c968(param_3,param_4,local_24);
  FUN_00465d20(param_1,local_24,&local_c);
  uVar1 = FUN_00465c0c(param_1);
  local_1c = (int)uVar1 >> 1;
  if (local_1c < 0) {
    local_1c = local_1c + (uint)((uVar1 & 1) != 0);
  }
  local_1c = local_c - local_1c;
  iVar2 = FUN_00465c50(param_1);
  local_18 = (local_8 - iVar2) + 4;
  local_14 = local_c;
  local_10 = local_8;
  FUN_00403c80(param_1,local_c,local_8);
  uVar3 = FUN_00465c0c(param_1);
  uVar4 = FUN_00465c50(param_1);
  (**(code **)(*param_1 + 0x84))(param_1,local_1c,local_18,uVar4,uVar3);
  return;
}

