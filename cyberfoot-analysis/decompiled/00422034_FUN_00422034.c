// Address: 00422034
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00422034(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0042207f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00423834(param_1,&local_8);
  iVar2 = FUN_00404ba4(local_8);
  if (1 < iVar2) {
    FUN_00421a70();
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00422086;
  puStack_14 = (undefined1 *)0x42207e;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

