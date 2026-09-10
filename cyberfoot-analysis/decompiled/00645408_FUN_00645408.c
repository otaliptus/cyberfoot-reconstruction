// Address: 00645408
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00645408(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066afa0;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066afa0);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      if ((*(int *)(*(int *)puVar1 + 0x18 + iVar3 * 0x48) == 10) &&
         (*(char *)(*(int *)puVar1 + 0x2c + iVar3 * 0x48) == '\0')) {
        return *(undefined4 *)(*(int *)puVar1 + 0x1c + iVar3 * 0x48);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0xffffffff;
}

