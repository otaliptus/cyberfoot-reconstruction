// Address: 00627434
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00627434(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined4 local_20 [4];
  
  bVar1 = false;
  bVar2 = false;
  if (*PTR_DAT_0066b244 != '\0') {
    iVar4 = 0x20;
    piVar10 = local_90;
    do {
      *piVar10 = -1;
      piVar10 = piVar10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    bVar1 = true;
    iVar4 = 0x20;
    piVar10 = local_90;
    piVar7 = (int *)PTR_DAT_0066b758;
    do {
      iVar5 = FUN_00405ef4(DAT_006d4940);
      if (-1 < iVar5) {
        iVar5 = iVar5 + 1;
        iVar6 = 0;
        do {
          if (*(int *)(DAT_006d4940 + 0xbc + iVar6 * 200) == *piVar7) {
            *piVar10 = iVar6;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      piVar10 = piVar10 + 1;
      piVar7 = piVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    piVar10 = local_90;
    piVar7 = (int *)(PTR_DAT_0066ac78 + 0x1ac);
    do {
      *piVar7 = *piVar10;
      piVar7 = piVar7 + 1;
      piVar10 = piVar10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_80;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x1bc);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_70;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x1cc);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_60;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x1dc);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_50;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x1ec);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_40;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x1fc);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_30;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x20c);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_20;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x21c);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 8;
    piVar10 = (int *)(PTR_DAT_0066ac78 + 0x1ac);
    do {
      iVar5 = 4;
      piVar7 = piVar10;
      do {
        if (*piVar7 == -1) {
          bVar1 = false;
          break;
        }
        piVar7 = piVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      piVar10 = piVar10 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (bVar1) {
      iVar4 = 1;
      piVar10 = (int *)(PTR_DAT_0066ac78 + 0x1ac);
      do {
        iVar5 = 4;
        piVar7 = piVar10;
        do {
          *(int *)(*(int *)PTR_DAT_0066af70 + 0x84 + *piVar7 * 0x2f8) = iVar4;
          *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar7 * 0x2f8) = 1;
          piVar7 = piVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar4 = iVar4 + 1;
        piVar10 = piVar10 + 4;
      } while (iVar4 != 9);
    }
  }
  if (*PTR_DAT_0066b598 != '\0') {
    iVar4 = 0x20;
    piVar10 = local_90;
    do {
      *piVar10 = -1;
      piVar10 = piVar10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    bVar2 = true;
    iVar4 = 0x20;
    piVar10 = local_90;
    piVar7 = (int *)PTR_DAT_0066b3fc;
    do {
      iVar5 = FUN_00405ef4(DAT_006d4940);
      if (-1 < iVar5) {
        iVar5 = iVar5 + 1;
        iVar6 = 0;
        do {
          if (*(int *)(DAT_006d4940 + 0xbc + iVar6 * 200) == *piVar7) {
            *piVar10 = iVar6;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      piVar10 = piVar10 + 1;
      piVar7 = piVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    piVar10 = local_90;
    piVar7 = (int *)(PTR_DAT_0066ac78 + 0x22c);
    do {
      *piVar7 = *piVar10;
      piVar7 = piVar7 + 1;
      piVar10 = piVar10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_80;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x23c);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_70;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x24c);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_60;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x25c);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_50;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x26c);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_40;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x27c);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_30;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x28c);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar9 = local_20;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x29c);
    do {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (bVar1) {
      iVar4 = 8;
      piVar10 = (int *)(PTR_DAT_0066ac78 + 0x22c);
      do {
        iVar5 = 4;
        piVar7 = piVar10;
        do {
          if (*piVar7 == -1) {
            bVar2 = false;
            break;
          }
          piVar7 = piVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        piVar10 = piVar10 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (bVar2) {
      iVar4 = 1;
      piVar10 = (int *)(PTR_DAT_0066ac78 + 0x22c);
      do {
        iVar5 = 4;
        piVar7 = piVar10;
        do {
          *(int *)(*(int *)PTR_DAT_0066af70 + 0x84 + *piVar7 * 0x2f8) = iVar4;
          *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar7 * 0x2f8) = 1;
          piVar7 = piVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar4 = iVar4 + 1;
        piVar10 = piVar10 + 4;
      } while (iVar4 != 9);
    }
  }
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x194) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 400) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x198) = 1;
  puVar3 = PTR_DAT_0066ac78;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x1a8) = 1;
  if (!bVar1) {
    FUN_00631c58(CONCAT31((int3)((uint)puVar3 >> 8),1));
  }
  if (!bVar2) {
    FUN_006322a4(1);
  }
  PTR_DAT_0066ac78[0x75d] = 1;
  return;
}

