// Address: 0051d29c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0051d29c(int param_1)

{
  char cVar1;
  int iVar2;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x24))(), iVar2 != 0)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x24))();
    return iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    cVar1 = FUN_00524238(*(undefined4 *)(param_1 + 4));
    if (cVar1 == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x20) + 8) < 1) {
        iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x24))();
      }
      else {
        iVar2 = FUN_0051a3cc(*(int *)(param_1 + 0x20));
        *(int *)(param_1 + 0x14) = iVar2;
      }
    }
    else {
      iVar2 = FUN_0051678c();
      *(int *)(param_1 + 0x14) = iVar2;
    }
  }
  return iVar2;
}

