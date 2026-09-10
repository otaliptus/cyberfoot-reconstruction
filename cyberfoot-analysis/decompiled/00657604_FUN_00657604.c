// Address: 00657604
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00657604(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b154,param_2,param_3,param_3);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if ((*(double *)(*(int *)PTR_DAT_0066b154 + 0x40 + iVar2 * 600) ==
           *(double *)(*(int *)PTR_DAT_0066afa0 + 0x30 + param_1 * 0x48)) &&
         (*(int *)(*(int *)PTR_DAT_0066b154 + iVar2 * 600) ==
          *(int *)(*(int *)PTR_DAT_0066afa0 + param_1 * 0x48))) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

