// Address: 0064e694
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064e694(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8) < 1) {
    iVar1 = FUN_004032c8(5);
    iVar1 = iVar1 + 1;
  }
  else {
    iVar1 = 8;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x3c) < param_1) {
    iVar1 = FUN_004032c8(6);
    iVar1 = iVar1 + 2;
  }
  if (0x12 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x2ec + param_1 * 0x2f8) + iVar1) {
    iVar1 = 0x12 - *(int *)(*(int *)PTR_DAT_0066af70 + 0x2ec + param_1 * 0x2f8);
  }
  if (0 < iVar1) {
    iVar2 = 1;
    do {
      if (iVar2 == 1) {
        FUN_0064e824(param_1,0,0xffffffff,0,0xffffd8f0,0xffffffff);
      }
      else {
        FUN_0064e824(param_1,0xffffffff,0xffffffff,0,0xffffd8f0,0xffffffff);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00652988(param_1);
  return;
}

