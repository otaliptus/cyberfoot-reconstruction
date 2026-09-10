// Address: 005b5654
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005b5654(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 1;
  piVar2 = (int *)PTR_DAT_0066afac;
  do {
    if (param_1 == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0x15);
  return -1;
}

