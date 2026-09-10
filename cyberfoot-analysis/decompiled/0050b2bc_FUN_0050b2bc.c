// Address: 0050b2bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050b2bc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x3c) + 8);
  if ((0 < iVar3) && (-1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      uVar5 = *(int *)(param_2 + 8) == 0;
      if (!(bool)uVar5) {
        iVar1 = FUN_0050b02c(param_1,iVar4);
        FUN_00404cf0(*(undefined4 *)(param_2 + 8),*(undefined4 *)(iVar1 + 8));
        if ((bool)uVar5) {
          piVar2 = (int *)FUN_0050b02c(param_1,iVar4);
          (**(code **)(*piVar2 + 8))(piVar2,param_2);
          return;
        }
      }
      iVar1 = FUN_0050b02c(param_1,iVar4);
      if (*(int *)(param_2 + 0x88) < *(int *)(iVar1 + 0x88)) {
        FUN_0041e098(*(undefined4 *)(param_1 + 0x3c),iVar4,param_2);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0041dec0(*(undefined4 *)(param_1 + 0x3c),param_2);
  return;
}

