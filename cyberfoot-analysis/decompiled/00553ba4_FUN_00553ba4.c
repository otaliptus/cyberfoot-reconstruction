// Address: 00553ba4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00553ba4(byte *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte *local_8;
  
  puStack_10 = (undefined1 *)0x553bb4;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_14 = &LAB_00553c30;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00404ba4(local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00553c37;
  puStack_14 = (undefined1 *)0x553c2f;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

