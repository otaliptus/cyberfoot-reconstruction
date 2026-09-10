// Address: 00645280
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00645280(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0064dee4(1,param_1,1,0xffffffff,0xffffffff);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b058);
  if (-1 < iVar2) {
    do {
      if ((iVar1 == *(int *)(*(int *)PTR_DAT_0066b058 + 4 + iVar2 * 0x14)) &&
         (*(int *)(*(int *)PTR_DAT_0066b058 + 0xc + iVar2 * 0x14) == 1)) {
        return *(undefined4 *)(*(int *)PTR_DAT_0066b058 + 8 + iVar2 * 0x14);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return 0xffffffff;
}

