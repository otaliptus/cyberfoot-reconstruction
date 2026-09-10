// Address: 0041d650
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041d650(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  
  puStack_c = (undefined1 *)0x41d660;
  FUN_0041d17c(DAT_0066c860);
  puStack_10 = &LAB_0041d692;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  FUN_0041d1e4(DAT_0066c860,param_1);
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0041d699;
  puStack_10 = (undefined1 *)0x41d691;
  FUN_0041d234(DAT_0066c860,uStack_14,puVar1);
  return;
}

