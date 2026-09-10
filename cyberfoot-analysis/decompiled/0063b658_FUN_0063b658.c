// Address: 0063b658
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0063b658(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = PTR_DAT_0066b108;
  iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b108);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      if (((*(double *)(*(int *)puVar3 + 8 + iVar5 * 0x28) <=
            *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) &&
          (*(int *)(*(int *)puVar3 + iVar5 * 0x28) == *(int *)(PTR_DAT_0066ac78 + 8))) &&
         (*(char *)(*(int *)puVar3 + 0x20 + iVar5 * 0x28) != '\0')) {
        *(undefined1 *)(*(int *)puVar3 + 0x20 + iVar5 * 0x28) = 0;
        iVar4 = 1;
        do {
          iVar2 = *(int *)(*(int *)puVar3 + iVar5 * 0x28 + 0xc + iVar4 * 4);
          if (0 < iVar2) {
            piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8 +
                             0x200 + iVar4 * 4);
            *piVar1 = *piVar1 + iVar2;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 5);
        return;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

