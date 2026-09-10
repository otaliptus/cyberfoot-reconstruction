// Address: 0065a250
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0065a250(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if (((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar2 * 0x48) == param_2) &&
          (param_1 == *(int *)(*(int *)PTR_DAT_0066afa0 + 0x38 + iVar2 * 0x48))) &&
         (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x1c + iVar2 * 0x48) == param_3)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

