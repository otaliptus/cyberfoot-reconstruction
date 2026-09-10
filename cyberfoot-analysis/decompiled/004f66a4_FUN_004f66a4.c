// Address: 004f66a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f66a4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1008);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_0041e01c(*(undefined4 *)(param_1 + 4 + iVar2 * 4),param_2);
      FUN_00403a84();
      FUN_0041df0c(*(undefined4 *)(param_1 + 4 + iVar2 * 4),param_2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(int *)(param_1 + 0x1028) = *(int *)(param_1 + 0x1028) + -1;
  iVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x1034),param_2);
  if (*(char *)(iVar1 + 0x22) != '\0') {
    *(int *)(param_1 + 0x1044) = *(int *)(param_1 + 0x1044) + -1;
  }
  FUN_0041e01c(*(undefined4 *)(param_1 + 0x1034),param_2);
  FUN_00403a84();
  FUN_0041df0c(*(undefined4 *)(param_1 + 0x1034),param_2);
  return;
}

