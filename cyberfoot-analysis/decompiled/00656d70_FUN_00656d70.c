// Address: 00656d70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00656d70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      if ((*(char *)(*(int *)PTR_DAT_0066aca0 + 0x14c + iVar3 * 0x294) != '\0') &&
         (iVar2 = FUN_0065a250(iVar3,2,1), -1 < iVar2)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

