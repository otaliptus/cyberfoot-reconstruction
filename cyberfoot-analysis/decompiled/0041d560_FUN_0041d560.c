// Address: 0041d560
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041d560(undefined *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  
  puStack_c = (undefined1 *)0x41d570;
  FUN_0041d17c(DAT_0066c860);
  puStack_10 = &LAB_0041d5c5;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  while( true ) {
    cVar2 = FUN_0041d1a0(DAT_0066c860,param_1);
    if (cVar2 != '\0') break;
    FUN_0041d188(DAT_0066c860,param_1);
    if (param_1 == PTR_PTR_0041b84c) break;
    param_1 = (undefined *)FUN_00403a10(param_1);
  }
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0041d5cc;
  puStack_10 = (undefined1 *)0x41d5c4;
  FUN_0041d234(DAT_0066c860,uStack_14,puVar1);
  return;
}

