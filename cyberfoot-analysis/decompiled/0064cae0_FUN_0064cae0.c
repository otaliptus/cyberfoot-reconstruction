// Address: 0064cae0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064cae0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar5 = 1;
  puVar4 = (undefined4 *)(PTR_DAT_0066b4dc + 4);
  do {
    iVar3 = iVar3 + 1;
    FUN_004060a8(&DAT_006d5310,PTR_DAT_0064265c,1,iVar3);
    *(int *)(DAT_006d5310 + -0xc + iVar3 * 0xc) = iVar5;
    *(undefined4 *)(DAT_006d5310 + -4 + iVar3 * 0xc) = *puVar4;
    uVar2 = FUN_004032c8(0x32);
    *(undefined4 *)(DAT_006d5310 + -8 + iVar3 * 0xc) = uVar2;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 4;
  } while (iVar5 != 0x2b);
  DAT_006d5314 = FUN_00405eec(DAT_006d5310);
  FUN_004bcdb0(DAT_006d5310,0xc,0,&LAB_006436c8,DAT_006d5314 + -1);
  iVar5 = 0;
  iVar3 = FUN_00405ef4(DAT_006d5310);
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar6 = 0;
    do {
      iVar1 = *(int *)(DAT_006d5310 + iVar6 * 0xc);
      if (*(int *)(PTR_DAT_0066b4dc + iVar1 * 0x10 + -4) == 0x1d) {
        iVar5 = iVar5 + 1;
        if (6 < iVar5) break;
        *(int *)(PTR_DAT_0066ac78 + iVar5 * 4 + 0x708) = iVar1;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar5 = 6;
  iVar3 = FUN_00405ef4(DAT_006d5310);
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar6 = 0;
    do {
      iVar1 = *(int *)(DAT_006d5310 + iVar6 * 0xc);
      if (*(int *)(PTR_DAT_0066b4dc + iVar1 * 0x10 + -4) == 1) {
        iVar5 = iVar5 + 1;
        if (0xc < iVar5) {
          return;
        }
        *(int *)(PTR_DAT_0066ac78 + iVar5 * 4 + 0x708) = iVar1;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

