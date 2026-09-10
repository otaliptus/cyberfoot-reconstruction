// Address: 004d4244
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d4244(LPCWSTR param_1)

{
  undefined1 *puVar1;
  LPCSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004d429e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_00404b0c(&local_8,param_1);
    lpLibFileName = (LPCSTR)FUN_00404da4(local_8);
    LoadLibraryA(lpLibFileName);
  }
  else {
    puStack_10 = &stack0xfffffffc;
    LoadLibraryW(param_1);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004d42a5;
  puStack_14 = (undefined1 *)0x4d429d;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

