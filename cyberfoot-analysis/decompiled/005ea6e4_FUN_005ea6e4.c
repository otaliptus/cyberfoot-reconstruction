// Address: 005ea6e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005ea6e4(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  piVar1 = &DAT_006d3684;
  do {
    if (param_2 == *piVar1) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (iVar2 != 0x13);
  return -1;
}

