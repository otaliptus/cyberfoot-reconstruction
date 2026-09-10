// Address: 0040ef84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040ef84(LPCSTR param_1)

{
  LPSTR pCVar1;
  
  if (DAT_0066c750 != '\0') {
    pCVar1 = CharNextA(param_1);
    return (int)pCVar1 - (int)param_1;
  }
  return 1;
}

