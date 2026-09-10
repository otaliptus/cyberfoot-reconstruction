// Address: 0040a6b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040a6b0(undefined4 param_1,undefined4 param_2)

{
  LPCSTR lpFileName;
  DWORD DVar1;
  CHAR *lpBuffer;
  LPSTR *lpFilePart;
  LPSTR pCStack_110;
  CHAR local_10c [260];
  
  lpFilePart = &pCStack_110;
  lpBuffer = local_10c;
  DVar1 = 0x104;
  lpFileName = (LPCSTR)FUN_00404da4(param_1);
  DVar1 = GetFullPathNameA(lpFileName,DVar1,lpBuffer,lpFilePart);
  FUN_004049c4(param_2,local_10c,DVar1);
  return;
}

