// Address: 00404f30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404f30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_10;
  
  iVar3 = 0;
  if (0 < param_2) {
    iStack_10 = *param_1;
    if ((iStack_10 != 0) && (*(int *)(iStack_10 + -8) == 1)) {
      iStack_10 = iStack_10 + -8;
      FUN_0040283c(&iStack_10,param_2 + 9);
      *param_1 = iStack_10 + 8;
      *(int *)(iStack_10 + 4) = param_2;
      *(undefined1 *)(param_2 + iStack_10 + 8) = 0;
      return;
    }
    iStack_10 = 0x404f6d;
    iVar3 = FUN_00404998(param_2);
    iVar1 = *param_1;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
      if (param_2 <= *(int *)(iVar1 + -4)) {
        iVar2 = param_2;
      }
      iStack_10 = 0x404f85;
      FUN_00402a04(iVar1,iVar3,iVar2);
    }
  }
  iStack_10 = 0x404f8c;
  FUN_004048d4(param_1);
  *param_1 = iVar3;
  return;
}

