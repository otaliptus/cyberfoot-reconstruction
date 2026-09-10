// Address: 005bde68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bde68(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 8);
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        FUN_0041e01c(*param_1,iVar2);
        FUN_00403a84();
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00403a84(*param_1);
    *param_1 = 0;
  }
  return;
}

