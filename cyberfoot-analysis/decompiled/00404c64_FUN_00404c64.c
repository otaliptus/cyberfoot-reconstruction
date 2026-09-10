// Address: 00404c64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404c64(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iStackY_18;
  
  iVar4 = 0;
  iVar2 = *(int *)(&stack0x00000000 + param_2 * 4);
  if ((iVar2 == 0) || (*param_1 != iVar2)) {
    iVar1 = 0;
    iVar3 = param_2;
  }
  else {
    iVar1 = *(int *)(iVar2 + -4);
    iVar3 = param_2 + -1;
    iVar4 = iVar2;
  }
  do {
    iVar2 = *(int *)(&stack0x00000000 + iVar3 * 4);
    if ((iVar2 != 0) && (iVar1 = iVar1 + *(int *)(iVar2 + -4), iVar4 == iVar2)) {
      iVar4 = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (iVar4 == 0) {
    iVar2 = FUN_00404998();
    piVar5 = (int *)0x0;
    iStackY_18 = iVar2;
  }
  else {
    iVar4 = *(int *)(iVar4 + -4);
    piVar5 = param_1;
    FUN_00404f30(param_1,iVar1,iVar2,param_1,param_2);
    param_2 = param_2 + -1;
    iVar2 = iVar4 + *piVar5;
    iStackY_18 = *piVar5;
    param_1 = piVar5;
  }
  do {
    iVar4 = *(int *)(&stack0x00000000 + param_2 * 4);
    iVar1 = iVar2;
    if (iVar4 != 0) {
      iVar1 = iVar2 + *(int *)(iVar4 + -4);
      FUN_00402a04(iVar4,iVar2);
    }
    param_2 = param_2 + -1;
    iVar2 = iVar1;
  } while (param_2 != 0);
  if (piVar5 == (int *)0x0) {
    if (iStackY_18 != 0) {
      *(int *)(iStackY_18 + -8) = *(int *)(iStackY_18 + -8) + -1;
    }
    FUN_00404928(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00404ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}

