// Address: 00656cac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00656cac(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x13c);
  if ((0 < iVar2) && (0 < iVar2)) {
    piVar1 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      if ((-1 < *piVar1) && (*(char *)(*(int *)PTR_DAT_0066af70 + 0x218 + *piVar1 * 0x2f8) != '\0'))
      {
        return 1;
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

