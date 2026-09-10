// Address: 00653218
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00653218(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x5fc);
  if ((0 < iVar2) && (0 < iVar2)) {
    piVar1 = (int *)(PTR_DAT_0066ac78 + 0x604);
    do {
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x215 + *piVar1 * 0x2f8) != '\0') {
        return 1;
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

