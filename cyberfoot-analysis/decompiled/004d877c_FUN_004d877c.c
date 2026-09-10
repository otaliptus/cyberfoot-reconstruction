// Address: 004d877c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d877c(HDC param_1,undefined4 param_2,LPSIZE param_3)

{
  int c;
  LPCWSTR lpString;
  
  param_3->cx = 0;
  param_3->cy = 0;
  c = FUN_00405260(param_2);
  lpString = (LPCWSTR)FUN_00405250(param_2);
  GetTextExtentPoint32W(param_1,lpString,c,param_3);
  return;
}

