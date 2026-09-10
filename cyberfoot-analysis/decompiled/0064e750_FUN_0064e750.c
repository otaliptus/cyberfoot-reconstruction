// Address: 0064e750
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064e750(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_0066af70;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar4 = 0;
    do {
      if (*(int *)(*(int *)puVar1 + 0x2ec + iVar4 * 0x2f8) < *(int *)PTR_DAT_0066aee0 + -2) {
        if (*(int *)(PTR_DAT_0066ac78 + 0x3c) + -1 < iVar4) {
          iVar3 = FUN_004032c8(3);
          if (0x13 < *(int *)(*(int *)puVar1 + 0x98 + iVar4 * 0x2f8)) {
            iVar3 = iVar3 + 1;
          }
        }
        else {
          iVar3 = FUN_004032c8(6);
          iVar3 = iVar3 + 3;
        }
        if (*(int *)PTR_DAT_0066aee0 < *(int *)(*(int *)puVar1 + 0x2ec + iVar4 * 0x2f8) + iVar3) {
          iVar3 = (*(int *)PTR_DAT_0066aee0 - *(int *)(*(int *)puVar1 + 0x2ec + iVar4 * 0x2f8)) + -1
          ;
        }
        if ((0 < iVar3) && (0 < iVar3)) {
          do {
            FUN_0064e824(iVar4,0xffffffff,0xffffffff);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

