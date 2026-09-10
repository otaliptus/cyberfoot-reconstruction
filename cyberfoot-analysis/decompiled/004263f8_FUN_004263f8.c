// Address: 004263f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004263f8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0042643e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00404bf0(&local_8,*(undefined4 *)(param_1 + 0x2c),param_2);
  FUN_0042645c(param_1,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00426445;
  puStack_18 = (undefined1 *)0x42643d;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

