// Address: 004f6544
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6544(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1008);
  if (-1 < iVar2 + -1) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)(param_1 + 4 + iVar1 * 4) + 8))();
      FUN_00403a84(*(undefined4 *)(param_1 + 4 + iVar1 * 4));
      *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x1008) = 0;
  *(undefined4 *)(param_1 + 0x1028) = 0;
  *(undefined4 *)(param_1 + 0x1044) = 0;
  return;
}

