// Address: 006563e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_006563e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if ((param_1 == *(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + iVar1 * 0x2f8)) &&
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar1 * 0x2f8) != '\0')) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x1b);
  return iVar2;
}

