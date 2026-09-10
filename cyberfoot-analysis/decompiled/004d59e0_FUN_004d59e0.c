// Address: 004d59e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d59e0(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004d5a25;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  FUN_00405250(local_8);
  FUN_004d332c();
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004d5a2c;
  puStack_14 = (undefined1 *)0x4d5a24;
  FUN_00404ff0(&local_8,uStack_18,puVar1);
  return;
}

