// Address: 0040a4d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD FUN_0040a4d4(undefined4 param_1,uint param_2,int param_3)

{
  LPCSTR lpFileName;
  HANDLE pvVar1;
  DWORD DVar2;
  LPWIN32_FIND_DATAA lpFindFileData;
  
  *(uint *)(param_3 + 0x10) = ~param_2 & 0x1e;
  lpFindFileData = (LPWIN32_FIND_DATAA)(param_3 + 0x18);
  lpFileName = (LPCSTR)FUN_00404da4(param_1);
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  *(HANDLE *)(param_3 + 0x14) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = FUN_0040a470(param_3);
    if (DVar2 != 0) {
      FUN_0040a548(param_3);
    }
  }
  return DVar2;
}

