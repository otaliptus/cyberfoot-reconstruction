// Address: 004f4d90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f4d90(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  double local_c;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = &LAB_004f4dee;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  (**(code **)(*param_1 + 0x18))(param_1,&local_14);
  FUN_00404b6c(&local_10,local_14);
  FUN_0040da6c(local_10);
  puVar1 = puStack_1c;
  local_c = (double)in_ST0;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004f4df5;
  puStack_20 = (undefined1 *)0x4f4de5;
  FUN_00404ff0(&local_14,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x4f4ded;
  FUN_004048d4(&local_10);
  return;
}

