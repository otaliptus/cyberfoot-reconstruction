// Address: 0054108c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054108c(undefined4 param_1,undefined4 *param_2)

{
  DWORD cchLength;
  undefined4 uVar1;
  
  cchLength = FUN_00405260(param_1);
  uVar1 = FUN_00405250(param_1);
  FUN_004050e4(param_2,uVar1,cchLength);
  if (0 < (int)cchLength) {
    CharUpperBuffW((LPWSTR)*param_2,cchLength);
  }
  return;
}

