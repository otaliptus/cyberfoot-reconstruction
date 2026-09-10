// Address: 00409470
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409470(undefined4 param_1,LPCLSID param_2)

{
  undefined1 *puVar1;
  LPCOLESTR lpsz;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_004094dd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004051d4(&local_8,param_1);
  lpsz = (LPCOLESTR)FUN_00405250(local_8);
  CLSIDFromString(lpsz,param_2);
  iVar2 = FUN_00408088();
  if (iVar2 == 0) {
    local_c = 0xb;
    local_10 = param_1;
    FUN_00409434(PTR_PTR_0066b524,&local_10,0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004094e4;
  puStack_20 = (undefined1 *)0x4094dc;
  FUN_00404ff0(&local_8,uStack_24,puVar1);
  return;
}

