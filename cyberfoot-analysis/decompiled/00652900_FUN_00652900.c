// Address: 00652900
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00652900(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(*(int *)PTR_DAT_0066afec + 4 + param_1 * 0x38) = 0;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar4 = 0;
    do {
      iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar4 * 0x130);
      if ((-1 < iVar3) && (param_1 == iVar3)) {
        iVar3 = FUN_00402c38();
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 4 + param_1 * 0x38);
        *piVar1 = *piVar1 + iVar3;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

