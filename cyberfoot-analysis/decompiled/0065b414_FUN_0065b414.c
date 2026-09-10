// Address: 0065b414
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0065b414(int param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if (*(double *)(*(int *)PTR_DAT_0066afa0 + 0x30 + iVar2 * 0x48) == param_4) {
        if (param_1 == *(int *)(*(int *)PTR_DAT_0066afa0 + iVar2 * 0x48)) {
          return iVar2;
        }
        if (param_1 == *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar2 * 0x48)) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

