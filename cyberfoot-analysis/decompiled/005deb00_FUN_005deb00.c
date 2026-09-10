// Address: 005deb00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005deb00(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = PTR_DAT_0066af70;
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      if (*(char *)(*(int *)puVar3 + 0x39 + iVar5 * 0x2f8) == '\0') {
        *(longlong *)(*(int *)puVar3 + 0x48 + iVar5 * 0x2f8) =
             (longlong)
             ROUND((float)(*(int *)(PTR_DAT_0066ae20 +
                                   *(int *)(*(int *)puVar3 + 0x7c + iVar5 * 0x2f8) * 4) + 12000000)
                   * _DAT_005decc8);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x2c + iVar5 * 0x38);
        *piVar1 = *piVar1 + *(int *)(PTR_DAT_0066ae20 +
                                    *(int *)(*(int *)puVar3 + 0x7c + iVar5 * 0x2f8) * 4);
      }
      else {
        iVar2 = *(int *)(*(int *)puVar3 + 0x7c + iVar5 * 0x2f8);
        if ((-1 < iVar2) && (iVar2 < 5)) {
          *(longlong *)(*(int *)puVar3 + 0x48 + iVar5 * 0x2f8) =
               (longlong)
               ROUND((float)*(longlong *)(*(int *)puVar3 + 0x48 + iVar5 * 0x2f8) +
                     (float)*(int *)(PTR_DAT_0066ae20 +
                                    *(int *)(*(int *)puVar3 + 0x7c + iVar5 * 0x2f8) * 4) *
                     _DAT_005decc8);
          piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x2c + iVar5 * 0x38);
          *piVar1 = *piVar1 + *(int *)(PTR_DAT_0066ae20 +
                                      *(int *)(*(int *)puVar3 + 0x7c + iVar5 * 0x2f8) * 4);
        }
      }
      if (*(char *)(*(int *)puVar3 + 0x217 + iVar5 * 0x2f8) != '\0') {
        *(longlong *)(*(int *)puVar3 + 0x48 + iVar5 * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)(*(int *)puVar3 + 0x48 + iVar5 * 0x2f8) +
                   (float)*(int *)PTR_DAT_0066b2d4 * _DAT_005decc8);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x2c + iVar5 * 0x38);
        *piVar1 = *piVar1 + *(int *)PTR_DAT_0066b2d4;
      }
      if (*(char *)(*(int *)puVar3 + 0x218 + iVar5 * 0x2f8) != '\0') {
        *(longlong *)(*(int *)puVar3 + 0x48 + iVar5 * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)(*(int *)puVar3 + 0x48 + iVar5 * 0x2f8) +
                   (float)*(int *)(PTR_DAT_0066b2d4 + 4) * _DAT_005decc8);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x2c + iVar5 * 0x38);
        *piVar1 = *piVar1 + *(int *)(PTR_DAT_0066b2d4 + 4);
      }
      if (*(char *)(*(int *)puVar3 + 0x214 + iVar5 * 0x2f8) != '\0') {
        *(longlong *)(*(int *)puVar3 + 0x48 + iVar5 * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)(*(int *)puVar3 + 0x48 + iVar5 * 0x2f8) +
                   (float)*(int *)(PTR_DAT_0066b2d4 + 8) * _DAT_005decc8);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x2c + iVar5 * 0x38);
        *piVar1 = *piVar1 + *(int *)(PTR_DAT_0066b2d4 + 8);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

