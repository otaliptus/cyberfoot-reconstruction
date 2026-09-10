// Address: 00404c12
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404c12(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00404998(*(int *)(param_2 + -4) + *(int *)(param_3 + -4));
  FUN_00402a04(param_2,iVar1,*(undefined4 *)(param_2 + -4));
  FUN_00402a04(param_3,iVar1 + *(int *)(param_2 + -4),*(undefined4 *)(param_3 + -4));
  if (iVar1 != 0) {
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + -1;
  }
  FUN_00404928(param_1,iVar1);
  return;
}

