// Address: 0065639c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0065639c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if ((param_1 == *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar2 * 0x2f8)) &&
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar2 * 0x2f8) != '\0')) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar3;
}

