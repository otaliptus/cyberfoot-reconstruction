// Address: 0065387c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0065387c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
  if (-1 < iVar2 + -1) {
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar1 * 0x2f8)) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar3;
}

