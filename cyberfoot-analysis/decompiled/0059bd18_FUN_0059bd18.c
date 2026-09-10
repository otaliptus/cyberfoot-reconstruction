// Address: 0059bd18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0059bd18(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130);
  iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar1 * 0x2f8);
  iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    if (((iVar2 < iVar3) && (iVar2 == 1)) &&
       (0x14 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) * 0x2f8))) {
      uVar4 = 0;
    }
  }
  else if (iVar2 < iVar3) {
    if (iVar2 == 1) {
      if (iVar3 == 2) {
        if (0x13 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar1 * 0x2f8)) {
          uVar4 = 0;
        }
      }
      else if (iVar3 == 3) {
        if (0x14 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar1 * 0x2f8)) {
          uVar4 = 0;
        }
      }
      else if (iVar3 == 4) {
        uVar4 = 0;
      }
    }
    if (iVar2 == 2) {
      if (iVar3 == 3) {
        if (0x14 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar1 * 0x2f8)) {
          uVar4 = 0;
        }
      }
      else if ((iVar3 == 4) && (0x12 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar1 * 0x2f8))) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

