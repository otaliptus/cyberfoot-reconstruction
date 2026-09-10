// Address: 00404bac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404bac(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + -4);
    iVar4 = *(int *)(param_2 + -4) + iVar2;
    if (param_2 == iVar3) {
      FUN_00404f30(param_1,iVar4);
      param_2 = *param_1;
      iVar3 = iVar2;
    }
    else {
      FUN_00404f30(param_1,iVar4);
      iVar3 = *(int *)(param_2 + -4);
    }
    FUN_00402a04(param_2,*param_1 + iVar2,iVar3);
    return;
  }
  if (param_2 != 0) {
    if (*(uint *)(param_2 + -8) < 0x80000000) {
      LOCK();
      *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
      UNLOCK();
    }
    else {
      iVar3 = FUN_00404998(*(undefined4 *)(param_2 + -4));
      FUN_00402a04(param_2,iVar3,*(undefined4 *)(param_2 + -4));
      param_2 = iVar3;
    }
  }
  LOCK();
  iVar3 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  if ((iVar3 != 0) && (0 < *(int *)(iVar3 + -8))) {
    LOCK();
    piVar1 = (int *)(iVar3 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_0040281c(iVar3 + -8);
    }
  }
  return;
}

