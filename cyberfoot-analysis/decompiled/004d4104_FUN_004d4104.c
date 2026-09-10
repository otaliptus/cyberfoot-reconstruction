// Address: 004d4104
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d4104(HDC param_1,LPCWSTR param_2,int param_3,UINT param_4,LPRECT param_5)

{
  undefined1 *puVar1;
  LPCSTR lpchText;
  undefined4 *in_FS_OFFSET;
  int cchText;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004d4190;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*PTR_DAT_0066adfc == '\0') {
    cchText = -1;
    FUN_004d3b8c(param_2,param_3,&local_c);
    FUN_00404b6c(&local_8,local_c);
    lpchText = (LPCSTR)FUN_00404da4(local_8);
    DrawTextA(param_1,lpchText,cchText,param_5,param_4);
  }
  else {
    puStack_1c = &stack0xfffffffc;
    DrawTextW(param_1,param_2,param_3,param_5,param_4);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004d4197;
  puStack_20 = (undefined1 *)0x4d4187;
  FUN_00404ff0(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x4d418f;
  FUN_004048d4(&local_8);
  return;
}

