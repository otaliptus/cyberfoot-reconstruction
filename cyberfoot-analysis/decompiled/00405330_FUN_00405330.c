// Address: 00405330
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00405330(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = 0;
  iVar4 = param_2;
  do {
    if (*(int *)(&stack0x00000000 + iVar4 * 4) != 0) {
      uVar2 = uVar2 + *(int *)(*(int *)(&stack0x00000000 + iVar4 * 4) + -4);
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar3 = FUN_00404fc8(uVar2 >> 1);
  iVar4 = iVar3;
  do {
    iVar1 = *(int *)(&stack0x00000000 + param_2 * 4);
    iVar5 = iVar4;
    if (iVar1 != 0) {
      iVar5 = iVar4 + *(int *)(iVar1 + -4);
      FUN_00402a04(iVar1,iVar4);
    }
    param_2 = param_2 + -1;
    iVar4 = iVar5;
  } while (param_2 != 0);
  FUN_00404fe0(param_1,iVar3);
                    /* WARNING: Could not recover jumptable at 0x00405375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}

