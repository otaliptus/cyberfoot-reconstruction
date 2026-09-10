// Address: 004c3b98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004c3b98(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00404ba4(param_1);
  if (0 < iVar2) {
    iVar3 = 1;
    do {
      cVar1 = *(char *)(param_1 + -1 + iVar3);
      if ((cVar1 != '.') && (cVar1 != '0')) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}

