// Address: 00657370
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00657370(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x13c);
  if ((0 < iVar3) && (0 < iVar3)) {
    piVar2 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      if ((((-1 < *piVar2) &&
           (iVar1 = *piVar2, *(char *)(*(int *)PTR_DAT_0066af70 + 0x216 + iVar1 * 0x2f8) != '\0'))
          && (PTR_DAT_0066ae98
              [*(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + iVar1 * 0x2f8) * 0x568 + 0x52d] != '\0'))
         && (PTR_DAT_0066ae98
             [*(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + iVar1 * 0x2f8) * 0x568 + 0x52f] == '\0')) {
        return 1;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

