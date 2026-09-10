// Address: 00404e04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404e04(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + -4), iVar1 != 0)) {
    iVar2 = param_2 + -1;
    if (param_2 < 1) {
      iVar2 = 0;
    }
    else if (iVar1 <= iVar2) goto LAB_00404e36;
    if (-1 < param_3) {
      if (iVar1 - iVar2 < param_3) {
        param_3 = iVar1 - iVar2;
      }
      FUN_004049c4(param_4,iVar2 + param_1,param_3);
      return;
    }
  }
LAB_00404e36:
  FUN_004048d4(param_4);
  return;
}

