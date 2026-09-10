// Address: 004a8cb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a8cb0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_2;
  local_c = FUN_004a5d08(param_3);
  (**(code **)(*param_1 + 0x10))(param_1,&local_c,4);
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_00669418,4);
  local_10 = FUN_004a5c5c(0xffffffff,&DAT_00669418,4);
  (**(code **)(*param_1 + 0x10))(param_1,local_8,param_3);
  uVar1 = FUN_004a5c5c(local_10,local_8,param_3);
  local_10 = FUN_004a5d08(uVar1 ^ 0xffffffff);
  (**(code **)(*param_1 + 0x10))(param_1,&local_10,4);
  return;
}

