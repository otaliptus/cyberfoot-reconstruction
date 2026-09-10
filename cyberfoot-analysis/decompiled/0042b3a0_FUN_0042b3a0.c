// Address: 0042b3a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b3a0(int param_1,undefined4 param_2,LPSIZE param_3)

{
  int c;
  LPCSTR lpString;
  
  FUN_0042b67c(param_1,DAT_0042b3e0);
  param_3->cx = 0;
  param_3->cy = 0;
  c = FUN_00404ba4(param_2);
  lpString = (LPCSTR)FUN_00404da4(param_2);
  GetTextExtentPoint32A(*(HDC *)(param_1 + 4),lpString,c,param_3);
  return;
}

