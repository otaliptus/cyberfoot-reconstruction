// Address: 0043bf24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043bf24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x210) + 8);
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    do {
      iVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x210),iVar2);
      if (param_2 == iVar1) {
        FUN_0043bf7c(param_1,iVar2);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0046c738(param_1,param_2);
  return;
}

