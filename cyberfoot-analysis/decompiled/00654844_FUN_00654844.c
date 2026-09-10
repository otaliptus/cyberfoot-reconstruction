// Address: 00654844
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00654844(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_0066b718;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b718);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    iVar4 = param_1;
    do {
      if (param_1 == -1) {
        iVar4 = *(int *)(*(int *)puVar1 + 0x3c + iVar3 * 0x80);
      }
      if ((((*(char *)(*(int *)puVar1 + 0x40 + iVar3 * 0x80) == '\0') &&
           (*(char *)(*(int *)puVar1 + 0x31 + iVar3 * 0x80) == '\0')) &&
          (iVar4 == *(int *)(*(int *)puVar1 + 0x3c + iVar3 * 0x80))) &&
         (*(int *)(*(int *)puVar1 + 0x24 + iVar3 * 0x80) == param_2)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}

