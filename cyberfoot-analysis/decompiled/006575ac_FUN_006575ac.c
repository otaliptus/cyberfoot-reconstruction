// Address: 006575ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_006575ac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b560);
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b560 + iVar2 * 0x1c) == param_2) &&
         (param_1 == *(int *)(*(int *)PTR_DAT_0066b560 + 4 + iVar2 * 0x1c))) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

