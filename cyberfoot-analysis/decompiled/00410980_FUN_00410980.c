// Address: 00410980
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

FARPROC FUN_00410980(LPCSTR param_1,FARPROC param_2,undefined4 param_3,int param_4)

{
  FARPROC pFVar1;
  
  pFVar1 = param_2;
  if (*(int *)(param_4 + -4) != 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_4 + -4),param_1);
    if (pFVar1 == (FARPROC)0x0) {
      pFVar1 = param_2;
    }
  }
  return pFVar1;
}

