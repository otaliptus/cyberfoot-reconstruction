// Address: 004048f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004048f8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  do {
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
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

