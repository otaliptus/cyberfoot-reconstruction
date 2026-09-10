// Address: 0064a924
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0064a924(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b154);
  if ((0 < iVar1) && (iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b154), -1 < iVar1)) {
    iVar1 = iVar1 + 1;
    iVar2 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b154 + 0x30 + iVar2 * 600) == param_1) &&
         (*(int *)(*(int *)PTR_DAT_0066b154 + 0x34 + iVar2 * 600) == param_2)) {
        if (param_3 == *(int *)(*(int *)PTR_DAT_0066b154 + iVar2 * 600)) {
          return iVar2;
        }
        if (param_3 == *(int *)(*(int *)PTR_DAT_0066b154 + 4 + iVar2 * 600)) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

