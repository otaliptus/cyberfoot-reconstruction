// Address: 0055cf4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055cf4c(MCIERROR param_1)

{
  undefined1 *puVar1;
  LPSTR pszText;
  undefined4 *in_FS_OFFSET;
  UINT cchText;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_0055cfb3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00404f30(&local_8,0x80);
  cchText = 0x7f;
  pszText = (LPSTR)FUN_00404da4(local_8);
  mciGetErrorStringA(param_1,pszText,cchText);
  FUN_004099c0(local_8,&local_c);
  FUN_0040496c(&local_8,local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0055cfba;
  puStack_18 = (undefined1 *)0x55cfb2;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

