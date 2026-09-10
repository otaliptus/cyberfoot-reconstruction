// Address: 0051699c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0051699c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 1;
  iVar2 = 2;
  if (2 < param_1) {
    do {
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_1);
  }
  return iVar1;
}

