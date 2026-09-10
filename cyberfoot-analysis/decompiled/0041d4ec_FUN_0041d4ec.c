// Address: 0041d4ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041d4ec(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x41d4fd;
  FUN_0041d17c(DAT_0066c860);
  puStack_14 = &LAB_0041d532;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0041cfe0(DAT_0066c860,param_1);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041d539;
  puStack_14 = (undefined1 *)0x41d531;
  FUN_0041d234(DAT_0066c860,uStack_18,puVar1);
  return;
}

