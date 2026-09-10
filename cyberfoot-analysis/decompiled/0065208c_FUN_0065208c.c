// Address: 0065208c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0065208c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if (param_1 == *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar2 * 0x294)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

