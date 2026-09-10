// Address: 0040459c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040459c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1 = param_1 + 1;
  do {
    FUN_00406d44(param_1[1],*param_1);
    param_1 = param_1 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

