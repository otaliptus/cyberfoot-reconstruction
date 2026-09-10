// Address: 00535e1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00535e1c(undefined4 param_1)

{
  LPCSTR lpFileName;
  DWORD DVar1;
  
  lpFileName = (LPCSTR)FUN_00404da4(param_1);
  DVar1 = GetFileAttributesA(lpFileName);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    return 1;
  }
  return 0;
}

