// Address: 0041f6e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041f6e4(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0041f729;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  FUN_00404da4(local_8);
  FUN_0040a9a8();
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041f730;
  puStack_14 = (undefined1 *)0x41f728;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

