// Address: 0064544c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0064544c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066afa0);
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar2 * 0x48) == 10) &&
         ((param_1 == *(int *)(*(int *)PTR_DAT_0066afa0 + iVar2 * 0x48) ||
          (param_1 == *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar2 * 0x48))))) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

