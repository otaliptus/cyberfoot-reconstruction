// Address: 00656830
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00656830(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b0d4);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if ((*(double *)(*(int *)PTR_DAT_0066b0d4 + 0x10 + iVar2 * 0x18) ==
           *(double *)(PTR_DAT_0066b574 + param_1 * 0x18 + -0x10)) &&
         (*(char *)(*(int *)PTR_DAT_0066b0d4 + 8 + iVar2 * 0x18) == '\0')) {
        uVar3 = 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar3;
}

