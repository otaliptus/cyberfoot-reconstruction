// Address: 00657408
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00657408(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_0066afa0;
  uVar4 = 0;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066afa0);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      if ((*(int *)(*(int *)puVar1 + 0x18 + iVar3 * 0x48) == 10) &&
         ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                    *(int *)(*(int *)puVar1 + iVar3 * 0x48) * 0x2f8) != '\0' ||
          (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                    *(int *)(*(int *)puVar1 + 4 + iVar3 * 0x48) * 0x2f8) != '\0')))) {
        uVar4 = 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar4;
}

