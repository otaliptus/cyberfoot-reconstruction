// Address: 006233cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_006233cc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3b8);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar3 * 0x1bc);
      if (param_2 == iVar1) {
        return iVar3;
      }
      if (iVar1 == param_3) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

