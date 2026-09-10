// Address: 005d2d70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005d2d70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b0d4);
  if ((0 < iVar1) && (-1 < iVar1 + -1)) {
    iVar2 = 0;
    do {
      if ((*(double *)(*(int *)PTR_DAT_0066b0d4 + 0x10 + iVar2 * 0x18) ==
           *(double *)(PTR_DAT_0066b574 + param_2 * 0x18 + -0x10)) &&
         ((param_1 == *(int *)(*(int *)PTR_DAT_0066b0d4 + iVar2 * 0x18) ||
          (param_1 == *(int *)(*(int *)PTR_DAT_0066b0d4 + 4 + iVar2 * 0x18))))) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

