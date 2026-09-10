// Address: 00404df4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int thunk_FUN_00404db0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((iVar3 != 0) && (*(int *)(iVar3 + -8) != 1)) {
    iVar2 = FUN_00404998(*(undefined4 *)(iVar3 + -4));
    iVar3 = *param_1;
    *param_1 = iVar2;
    FUN_00402a04(iVar3,iVar2,*(undefined4 *)(iVar3 + -4));
    if (0 < *(int *)(iVar3 + -8)) {
      LOCK();
      piVar1 = (int *)(iVar3 + -8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_0040281c(iVar3 + -8);
      }
    }
    iVar3 = *param_1;
  }
  return iVar3;
}

