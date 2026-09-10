// Address: 00404bf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404bf0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_00404928(param_1,param_3);
    return;
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      if (*(uint *)(param_2 + -8) < 0x80000000) {
        LOCK();
        *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
        UNLOCK();
      }
      else {
        iVar2 = FUN_00404998(*(undefined4 *)(param_2 + -4));
        FUN_00402a04(param_2,iVar2,*(undefined4 *)(param_2 + -4));
        param_2 = iVar2;
      }
    }
    LOCK();
    iVar2 = *param_1;
    *param_1 = param_2;
    UNLOCK();
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
      LOCK();
      piVar1 = (int *)(iVar2 + -8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_0040281c(iVar2 + -8);
      }
    }
    return;
  }
  if (param_2 == *param_1) {
    FUN_00404bac(param_1,param_3);
    return;
  }
  if (param_3 != *param_1) {
    FUN_00404928();
    FUN_00404bac(param_1,param_3);
    return;
  }
  iVar2 = FUN_00404998(*(int *)(param_2 + -4) + *(int *)(param_3 + -4));
  FUN_00402a04(param_2,iVar2,*(undefined4 *)(param_2 + -4));
  FUN_00402a04(param_3,iVar2 + *(int *)(param_2 + -4),*(undefined4 *)(param_3 + -4));
  if (iVar2 != 0) {
    *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + -1;
  }
  FUN_00404928(param_1,iVar2);
  return;
}

