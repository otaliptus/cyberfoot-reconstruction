// Address: 004096f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004096f0(undefined4 param_1,undefined4 *param_2)

{
  DWORD cchLength;
  undefined4 uVar1;
  
  cchLength = FUN_00404ba4(param_1);
  uVar1 = FUN_00404da4(param_1);
  FUN_004049c4(param_2,uVar1,cchLength);
  if (0 < (int)cchLength) {
    CharUpperBuffA((LPSTR)*param_2,cchLength);
  }
  return;
}

