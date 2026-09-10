// Address: 004e2ec8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e2ec8(undefined4 param_1,undefined4 param_2,LPSIZE param_3)

{
  int c;
  LPCWSTR lpString;
  HDC hdc;
  
  param_3->cx = 0;
  param_3->cy = 0;
  c = FUN_00405260(param_2);
  lpString = (LPCWSTR)FUN_00405250(param_2);
  hdc = (HDC)FUN_0042b5a8(param_1);
  GetTextExtentPoint32W(hdc,lpString,c,param_3);
  return;
}

