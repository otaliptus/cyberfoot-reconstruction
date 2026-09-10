// Address: 004d3cb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d3cb8(HWND param_1,LPCWSTR param_2)

{
  undefined1 *puVar1;
  LPCSTR lpString;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004d3d17;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_00404b0c(&local_8,param_2);
    lpString = (LPCSTR)FUN_00404da4(local_8);
    SetWindowTextA(param_1,lpString);
  }
  else {
    puStack_14 = &stack0xfffffffc;
    SetWindowTextW(param_1,param_2);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004d3d1e;
  puStack_18 = (undefined1 *)0x4d3d16;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

