// Address: 0048d6fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048d6fc(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (0 < param_2) {
    for (; iVar2 = piVar1[1], iVar2 < param_2; param_2 = param_2 - iVar2) {
      FUN_0048d68c(param_1);
    }
    *piVar1 = *piVar1 + param_2;
    piVar1[1] = piVar1[1] - param_2;
  }
  return;
}

