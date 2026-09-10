// Address: 00404e8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404e8c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = *param_2;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + -4);
    }
    iVar4 = param_3 + -1;
    if (param_3 < 1) {
      iVar4 = 0;
    }
    if (iVar3 < iVar4) {
      iVar4 = iVar3;
    }
    iVar2 = *(int *)(param_1 + -4);
    FUN_00404f30(param_2,iVar3 + iVar2);
    if (iVar1 == param_1) {
      param_1 = *param_2;
    }
    iVar1 = *param_2;
    FUN_00402a04(iVar1 + iVar4,iVar4 + iVar2 + iVar1,*(int *)(iVar1 + -4) - (iVar4 + iVar2));
    FUN_00402a04(param_1,*param_2 + iVar4,iVar2);
  }
  return;
}

