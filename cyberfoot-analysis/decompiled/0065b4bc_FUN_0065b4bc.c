// Address: 0065b4bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0065b4bc(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_38 [10];
  
  iVar8 = 0;
  FUN_004060a8(&DAT_006d5330,PTR_DAT_0065a10c,1,0);
  iVar6 = 0xb;
  do {
    *param_2 = 0xffffffff;
    param_2 = param_2 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 10;
  puVar4 = local_38;
  do {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar7 * 0x2f8) == param_1) {
        iVar8 = iVar8 + 1;
        FUN_004060a8(&DAT_006d5330,PTR_DAT_0065a10c,1,iVar8);
        *(int *)(DAT_006d5330 + -0xc + iVar8 * 0xc) = iVar7;
        if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar7 * 0x2f8) < 0x14) {
          if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar7 * 0x2f8) < 0x12) {
            if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar7 * 0x2f8) < 0x10) {
              *(undefined4 *)(DAT_006d5330 + -8 + iVar8 * 0xc) =
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar7 * 0x2f8);
            }
            else {
              *(undefined4 *)(DAT_006d5330 + -8 + iVar8 * 0xc) = 0x11;
              if (1 < *(int *)(PTR_DAT_0066ac78 + 0xc0)) {
                iVar2 = FUN_004032c8(0xc);
                if (iVar2 == 1) {
                  piVar1 = (int *)(DAT_006d5330 + -8 + iVar8 * 0xc);
                  *piVar1 = *piVar1 + -1;
                }
              }
            }
          }
          else {
            *(undefined4 *)(DAT_006d5330 + -8 + iVar8 * 0xc) = 0x12;
            if (1 < *(int *)(PTR_DAT_0066ac78 + 0xc0)) {
              iVar2 = FUN_004032c8(0xc);
              if (iVar2 == 1) {
                piVar1 = (int *)(DAT_006d5330 + -8 + iVar8 * 0xc);
                *piVar1 = *piVar1 + -2;
              }
            }
          }
        }
        else {
          *(undefined4 *)(DAT_006d5330 + -8 + iVar8 * 0xc) = 0x14;
          if (1 < *(int *)(PTR_DAT_0066ac78 + 0xc0)) {
            iVar2 = FUN_004032c8(0xc);
            if (iVar2 == 1) {
              piVar1 = (int *)(DAT_006d5330 + -8 + iVar8 * 0xc);
              *piVar1 = *piVar1 + -2;
            }
          }
        }
        uVar3 = FUN_004032c8(100);
        *(undefined4 *)(DAT_006d5330 + -4 + iVar8 * 0xc) = uVar3;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  DAT_006d532c = FUN_00405eec(DAT_006d5330);
  puVar4 = (undefined4 *)(DAT_006d532c + -1);
  FUN_004bcdb0(DAT_006d5330,0xc,0,&LAB_0065b480);
  iVar6 = FUN_00405eec(DAT_006d5330);
  if (iVar6 < 10) {
    iVar6 = FUN_00405eec(DAT_006d5330);
    iVar6 = iVar6 + -1;
  }
  else {
    iVar6 = 9;
  }
  iVar7 = 0;
  iVar8 = FUN_00405eec(DAT_006d5330);
  if ((0 < iVar8) && (-1 < iVar6)) {
    iVar6 = iVar6 + 1;
    iVar8 = 0;
    puVar5 = puVar4;
    do {
      iVar7 = iVar7 + 1;
      *puVar5 = *(undefined4 *)(DAT_006d5330 + iVar8 * 0xc);
      iVar8 = iVar8 + 1;
      puVar5 = puVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  puVar4[10] = iVar7;
  FUN_004060a8(&DAT_006d5330,PTR_DAT_0065a10c,1,0);
  return;
}

