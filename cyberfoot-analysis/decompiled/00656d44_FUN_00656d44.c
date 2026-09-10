// Address: 00656d44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00656d44(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  piVar1 = (int *)(PTR_DAT_0066b574 + 0x10);
  do {
    if (*piVar1 == 1) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 6;
  } while (iVar2 != 0x16f);
  return -1;
}

