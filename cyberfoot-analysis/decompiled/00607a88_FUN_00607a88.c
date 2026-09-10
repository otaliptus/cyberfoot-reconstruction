// Address: 00607a88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00607a88(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00405eec(DAT_006d4298);
  if ((0 < iVar1) && (-1 < iVar1 + -1)) {
    iVar2 = 0;
    do {
      if (param_1 == *(int *)(DAT_006d4298 + iVar2 * 4)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

