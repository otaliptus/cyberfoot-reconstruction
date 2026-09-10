// Address: 004f662c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f662c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1028);
  if (-1 < iVar2 + -1) {
    iVar1 = 0;
    do {
      FUN_0041e01c(*(undefined4 *)(param_1 + 4 + param_2 * 4),iVar1);
      FUN_00403a84();
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(int **)(param_1 + 4 + param_2 * 4) + 8))();
  FUN_00403a84(*(undefined4 *)(param_1 + 4 + param_2 * 4));
  *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  param_2 = param_2 + 1;
  iVar2 = *(int *)(param_1 + 0x1008) + -1;
  if (param_2 <= iVar2) {
    iVar2 = (iVar2 - param_2) + 1;
    do {
      *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + 4 + param_2 * 4);
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(param_1 + 0x1008) = *(int *)(param_1 + 0x1008) + -1;
  if (*(int *)(param_1 + 0x1008) == 0) {
    *(undefined4 *)(param_1 + 0x1028) = 0;
  }
  return;
}

