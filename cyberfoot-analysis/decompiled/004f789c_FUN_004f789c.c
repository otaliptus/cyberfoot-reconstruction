// Address: 004f789c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f789c(int param_1,int *param_2,int *param_3,char param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_3 = param_1;
  iVar1 = FUN_004f5b28(*(undefined4 *)(*(int *)(param_5 + -4) + 0x598),param_1);
  iVar1 = *(int *)(iVar1 + 4);
  if (0 < iVar1) {
    do {
      *param_3 = *param_3 + 1;
      **(int **)(param_5 + -8) = **(int **)(param_5 + -8) + 1;
      if (param_4 != '\0') {
        iVar2 = (**(code **)(**(int **)(param_5 + -4) + 0x120))(*(int **)(param_5 + -4),*param_3);
        iVar3 = FUN_0050f404(*(undefined4 *)(param_5 + -4),4);
        *param_2 = *param_2 + iVar2 + iVar3;
      }
      iVar2 = FUN_004f5b28(*(undefined4 *)(*(int *)(param_5 + -4) + 0x598),*param_3);
      if (0 < *(int *)(iVar2 + 4)) {
        if ((param_4 == '\0') ||
           (iVar2 = FUN_004f5b28(*(undefined4 *)(*(int *)(param_5 + -4) + 0x598),*param_3),
           *(char *)(iVar2 + 0xc) == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        FUN_004f789c(*param_3,param_2,param_3,uVar4);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

