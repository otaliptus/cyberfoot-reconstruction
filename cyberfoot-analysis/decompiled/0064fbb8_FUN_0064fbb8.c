// Address: 0064fbb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064fbb8(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_0066b5b8;
  *(undefined4 *)PTR_DAT_0066ad8c = 0;
  *(undefined4 *)(PTR_DAT_0066ad8c + 4) = 0;
  *(undefined4 *)(PTR_DAT_0066ad8c + 8) = 0;
  *(undefined4 *)(PTR_DAT_0066ad8c + 0xc) = 0;
  *(undefined4 *)(PTR_DAT_0066ad8c + 0x10) = 0;
  *(undefined4 *)(PTR_DAT_0066ad8c + 0x14) = 0;
  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xa0 + param_2 * 0x2f8) = 0;
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar2);
  if (0 < iVar3) {
    iVar4 = 1;
    do {
      if (((((-1 < *(int *)(*(int *)puVar2 + 0x20 + iVar4 * 0x130)) &&
            (*(char *)(*(int *)puVar2 + 0x120 + iVar4 * 0x130) == '\0')) &&
           (*(int *)(*(int *)puVar2 + 0x20 + iVar4 * 0x130) == param_2)) &&
          ((*(int *)(*(int *)puVar2 + iVar4 * 0x130 + 0x8c + *(int *)(PTR_DAT_0066ac78 + 0x88) * 4)
            < 3 && (*(int *)(*(int *)puVar2 + iVar4 * 0x130 + 0xb8 +
                            *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) == 0)))) &&
         (*(double *)(*(int *)puVar2 + 0x68 + iVar4 * 0x130) <=
          *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10))) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0xa0 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + 1;
        *(int *)(PTR_DAT_0066ad8c + *(int *)(*(int *)puVar2 + 0x24 + iVar4 * 0x130) * 4) =
             *(int *)(PTR_DAT_0066ad8c + *(int *)(*(int *)puVar2 + 0x24 + iVar4 * 0x130) * 4) + 1;
        if ((*(int *)(*(int *)puVar2 + 0x24 + iVar4 * 0x130) == 3) &&
           (*(int *)(*(int *)puVar2 + 0x58 + iVar4 * 0x130) == 0)) {
          *(int *)(PTR_DAT_0066ad8c + 0x14) = *(int *)(PTR_DAT_0066ad8c + 0x14) + 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

