// Address: 0063b704
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0063b704(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_00405ef4(DAT_006d52f4);
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = 0;
    do {
      if (param_2 == *(int *)(DAT_006d52f4 + iVar2 * 8)) {
        iVar3 = iVar3 + *(int *)(DAT_006d52f4 + 4 + iVar2 * 8);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar3;
}

