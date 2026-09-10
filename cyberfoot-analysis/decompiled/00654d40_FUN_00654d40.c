// Address: 00654d40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00654d40(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 4;
  piVar2 = (int *)PTR_DAT_0066adf4;
  do {
    if (param_1 == *piVar2) {
      return 1;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

