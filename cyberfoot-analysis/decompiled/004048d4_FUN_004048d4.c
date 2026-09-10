// Address: 004048d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004048d4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    *param_1 = 0;
    if (0 < *(int *)(iVar2 + -8)) {
      LOCK();
      piVar1 = (int *)(iVar2 + -8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_0040281c(iVar2 + -8);
      }
    }
  }
  return param_1;
}

