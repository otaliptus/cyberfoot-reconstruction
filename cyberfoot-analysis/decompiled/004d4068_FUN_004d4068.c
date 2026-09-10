// Address: 004d4068
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d4068(LPCWSTR param_1,LPWIN32_FIND_DATAW param_2)

{
  undefined1 *puVar1;
  LPCSTR lpFileName;
  HANDLE pvVar2;
  undefined4 *in_FS_OFFSET;
  _WIN32_FIND_DATAA *lpFindFileData;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  undefined4 local_148;
  _WIN32_FIND_DATAA local_144;
  
  puStack_154 = &stack0xfffffffc;
  local_148 = 0;
  puStack_158 = &LAB_004d40f4;
  uStack_15c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_15c;
  if (*PTR_DAT_0066adfc == '\0') {
    lpFindFileData = &local_144;
    FUN_00404b0c(&local_148,param_1);
    lpFileName = (LPCSTR)FUN_00404da4(local_148);
    pvVar2 = FindFirstFileA(lpFileName,lpFindFileData);
    if (pvVar2 != (HANDLE)0xffffffff) {
      FUN_004d3bf8(param_2,&local_144);
    }
  }
  else {
    puStack_154 = &stack0xfffffffc;
    FindFirstFileW(param_1,param_2);
  }
  puVar1 = puStack_154;
  *in_FS_OFFSET = uStack_15c;
  puStack_154 = &LAB_004d40fb;
  puStack_158 = (undefined1 *)0x4d40f3;
  FUN_004048d4(&local_148,uStack_15c,puVar1);
  return;
}

