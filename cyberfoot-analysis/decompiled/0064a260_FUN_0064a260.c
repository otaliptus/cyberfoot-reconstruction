// Address: 0064a260
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0064a260(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 10;
  piVar1 = (int *)(PTR_DAT_0066ac78 + 0x14);
  do {
    if (-1 < *piVar1) {
      iVar2 = iVar2 + 1;
    }
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}

