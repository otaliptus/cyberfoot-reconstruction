// Address: 00561f68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm4_Edit6Change(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00561fb6;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00466208(*(undefined4 *)(param_1 + 0x328),&local_8);
  FUN_00404928(&DAT_0067b484,local_8);
  puVar1 = puStack_10;
  DAT_0067b454 = 1;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00561fbd;
  puStack_14 = (undefined1 *)0x561fb5;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

