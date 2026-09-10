// Address: 004f6590
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6590(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14;
  
  local_14 = *(int *)(param_1 + 0x1008);
  if (-1 < local_14 + -1) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x1028);
      if (-1 < iVar1 + -1) {
        iVar2 = 0;
        do {
          FUN_0041e01c(*(undefined4 *)(param_1 + 4 + iVar3 * 4),iVar2);
          FUN_00403a84();
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      (**(code **)(**(int **)(param_1 + 4 + iVar3 * 4) + 8))();
      iVar3 = iVar3 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  local_14 = *(int *)(param_1 + 0x1028);
  if (-1 < local_14 + -1) {
    iVar3 = 0;
    do {
      FUN_0041e01c(*(undefined4 *)(param_1 + 0x1034),iVar3);
      FUN_00403a84();
      iVar3 = iVar3 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  (**(code **)(**(int **)(param_1 + 0x1034) + 8))();
  *(undefined4 *)(param_1 + 0x1028) = 0;
  *(undefined4 *)(param_1 + 0x1044) = 0;
  *(undefined1 *)(param_1 + 0x1038) = 0;
  return;
}

