// Address: 004045e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004045e8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1 = param_1 + 1;
  do {
    *(int *)*param_1 = *(int *)param_1[1] + param_1[2];
    param_1 = param_1 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

