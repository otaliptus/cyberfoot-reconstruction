// Address: 00621e48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00621e48(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  iVar2 = iVar2 + -1;
  if (0 < iVar2) {
    iVar3 = 1;
    do {
      if (-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar3 * 0x130)) {
        iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar3 * 0x130);
        if ((iVar1 == *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + (param_2 & 0xff) * 0x1bc)) ||
           (iVar1 == *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + (param_2 & 0xff) * 0x1bc))) {
          FUN_0061dc50(iVar3);
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

