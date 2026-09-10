// Address: 004d3fd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d3fd0(LPCWSTR param_1,DWORD param_2,DWORD param_3,HANDLE param_4,DWORD param_5,
                 DWORD param_6,LPSECURITY_ATTRIBUTES param_7)

{
  undefined1 *puVar1;
  LPCSTR lpFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004d4054;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_00404b0c(&local_8,param_1);
    lpFileName = (LPCSTR)FUN_00404da4(local_8);
    CreateFileA(lpFileName,param_2,param_3,param_7,param_6,param_5,param_4);
  }
  else {
    puStack_18 = &stack0xfffffffc;
    CreateFileW(param_1,param_2,param_3,param_7,param_6,param_5,param_4);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d405b;
  puStack_1c = (undefined1 *)0x4d4053;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

