// Address: 00656fb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00656fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0xffffffff;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0,param_2,param_3,param_3);
  bVar1 = false;
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    iVar4 = iVar2;
    do {
      if ((*(char *)(*(int *)PTR_DAT_0066aca0 + 0x290 + iVar3 * 0x294) != '\0') ||
         (*(char *)(*(int *)PTR_DAT_0066aca0 + 0x14c + iVar3 * 0x294) != '\0')) {
        bVar1 = true;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (!bVar1) {
    if ((*(int *)(PTR_DAT_0066ac78 + 0x110) == 1) && (-1 < iVar2 + -1)) {
      iVar4 = 0;
      do {
        iVar3 = FUN_0065a250(iVar4,2,1);
        if (-1 < iVar3) break;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if ((-1 < *(int *)PTR_DAT_0066b4f8) &&
       (iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0), *(int *)PTR_DAT_0066b4f8 < iVar2)) {
      return *(undefined4 *)PTR_DAT_0066b4f8;
    }
    uVar5 = 0;
  }
  return uVar5;
}

