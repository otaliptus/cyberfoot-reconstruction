// Address: 00404e44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404e44(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  thunk_FUN_00404db0();
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = param_2 + -1;
    if (((0 < param_2) && (iVar3 < *(int *)(iVar1 + -4))) && (0 < param_3)) {
      iVar2 = *(int *)(iVar1 + -4) - iVar3;
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      FUN_00402a04(param_3 + iVar1 + iVar3,iVar1 + iVar3,iVar2 - param_3);
      FUN_00404f30(param_1,*(int *)(*param_1 + -4) - param_3);
    }
  }
  return;
}

