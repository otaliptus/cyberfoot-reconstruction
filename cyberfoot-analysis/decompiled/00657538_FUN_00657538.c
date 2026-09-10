// Address: 00657538
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00657538(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x13c);
  if ((0 < iVar2) && (0 < iVar2)) {
    piVar3 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      if (((-1 < *piVar3) && (*(char *)(*(int *)PTR_DAT_0066af70 + 0x218 + *piVar3 * 0x2f8) != '\0')
          ) && (iVar1 = FUN_0064f2d0(*(undefined4 *)
                                      (*(int *)PTR_DAT_0066af70 + 0x3c + *piVar3 * 0x2f8)),
               iVar1 == param_1)) {
        return 1;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

