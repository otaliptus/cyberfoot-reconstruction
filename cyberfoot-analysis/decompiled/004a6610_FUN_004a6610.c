// Address: 004a6610
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a6610(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = FUN_004a5d08(*(undefined4 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x10))(param_2,&local_8,4);
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x10,4);
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8));
  }
  local_c = FUN_004a5c5c(0xffffffff,param_1 + 0x10,4);
  uVar1 = FUN_004a5c5c(local_c,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  local_c = FUN_004a5d08(uVar1 ^ 0xffffffff);
  (**(code **)(*param_2 + 0x10))(param_2,&local_c,4);
  return 1;
}

