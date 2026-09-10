// Address: 005f996c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_005f996c(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x13c);
  if (0 < iVar2) {
    piVar1 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      if ((-1 < *piVar1) &&
         (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + *piVar1 * 0x2f8) < *(int *)PTR_DAT_0066b610)) {
        return 1;
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

