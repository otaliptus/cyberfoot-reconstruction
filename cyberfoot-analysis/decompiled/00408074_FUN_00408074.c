// Address: 00408074
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00408074(LPCVOID param_1)

{
  HGLOBAL hMem;
  
  hMem = GlobalHandle(param_1);
  GlobalUnlock(hMem);
  GlobalFree(hMem);
  return;
}

