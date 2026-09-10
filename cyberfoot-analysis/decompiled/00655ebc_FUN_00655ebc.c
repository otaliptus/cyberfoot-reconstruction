// Address: 00655ebc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00655ebc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  if (-1 < iVar2 + -1) {
    iVar1 = 0;
    do {
      if ((((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar1 * 0x2f8) == '\0') &&
           (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar1 * 0x2f8) == param_1)) &&
          (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar1 * 0x2f8) == 0)) &&
         (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar1 * 0x2f8))) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}

