// Address: 00579b98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00579b98(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00669ef4;
  do {
    if (*(int *)(*(int *)PTR_DAT_0066af70 + param_1 * 0x2f8 + 0x68 + iVar1 * 4) < *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 5);
  return -1;
}

