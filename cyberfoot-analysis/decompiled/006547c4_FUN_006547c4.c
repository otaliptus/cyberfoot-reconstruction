// Address: 006547c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_006547c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718,param_2,param_3,param_3);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    iVar3 = param_1;
    do {
      if (param_1 == -1) {
        iVar3 = *(int *)(*(int *)PTR_DAT_0066b718 + 0x3c + iVar2 * 0x80);
      }
      if (((*(char *)(*(int *)PTR_DAT_0066b718 + 0x40 + iVar2 * 0x80) == '\0') &&
          (*(char *)(*(int *)PTR_DAT_0066b718 + 0x31 + iVar2 * 0x80) == '\0')) &&
         (iVar3 == *(int *)(*(int *)PTR_DAT_0066b718 + 0x3c + iVar2 * 0x80))) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

