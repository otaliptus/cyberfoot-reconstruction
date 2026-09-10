// Address: 005d4774
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d4774(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  char cVar12;
  char cVar13;
  undefined4 *local_18;
  undefined4 *local_14;
  
  FUN_005d4614();
  iVar7 = 8;
  puVar1 = &DAT_006d3348;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 8;
  local_18 = &DAT_006d3388;
  do {
    iVar8 = 3;
    puVar1 = local_18;
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    local_18 = local_18 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 0xe;
  puVar1 = &DAT_006d32b0;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 5;
  puVar1 = &DAT_006d32e8;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 5;
  puVar1 = &DAT_006d32fc;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 5;
  puVar1 = &DAT_006d3310;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 3;
  puVar1 = &DAT_006d3324;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 1;
  local_14 = &DAT_006d3330;
  do {
    *local_14 = 0xffffffff;
    local_14 = local_14 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 6;
  puVar1 = &DAT_006d3280;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = FUN_005d4614();
  iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
  if (-1 < iVar8) {
    iVar8 = iVar8 + 1;
    iVar9 = 0;
    do {
      (&DAT_006d3280)[*(int *)(*(int *)PTR_DAT_0066b4b4 + 4 + iVar9 * 0x30)] =
           (&DAT_006d3280)[*(int *)(*(int *)PTR_DAT_0066b4b4 + 4 + iVar9 * 0x30)] + 1;
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (PTR_DAT_0066ac78[0x709] == '\0') {
    _DAT_006d3298 = 0xd;
    DAT_006d329c = 4;
    DAT_006d32a0 = 5;
    DAT_006d32a4 = 5;
    DAT_006d32a8 = 3;
    DAT_006d32ac = 1;
    iVar8 = FUN_004032c8(100);
    if (iVar8 < 0x32) {
      DAT_006d329c = DAT_006d329c + 1;
      DAT_006d32ac = DAT_006d32ac + -1;
    }
    if (DAT_006d327c == '\0') {
      _DAT_006d3298 = _DAT_006d3298 + 1;
    }
    iVar9 = 0;
    FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
    iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
    if (-1 < iVar8) {
      iVar8 = iVar8 + 1;
      iVar10 = 0;
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066b4b4 + 4 + iVar10 * 0x30) == 0) &&
           (*(int *)(*(int *)PTR_DAT_0066b4b4 + iVar10 * 0x30) != iVar7)) {
          iVar9 = iVar9 + 1;
          FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar9);
          *(undefined4 *)(DAT_006d3344 + -0xc + iVar9 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x2c + iVar10 * 0x30);
          *(undefined4 *)(DAT_006d3344 + -8 + iVar9 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x28 + iVar10 * 0x30);
          uVar2 = FUN_004032c8(100);
          *(undefined4 *)(DAT_006d3344 + -4 + iVar9 * 0xc) = uVar2;
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    DAT_006d3278 = FUN_00405eec(DAT_006d3344);
    iVar7 = DAT_006d3278 + -1;
    FUN_004bcdb0(DAT_006d3344,0xc,0,&LAB_005d3b1c);
    FUN_004060a8(&DAT_006d3338,PTR_DAT_005d3ad4,1,iVar9);
    if (-1 < iVar9 + -1) {
      iVar8 = 0;
      do {
        DAT_006d3338[iVar8] = *(undefined4 *)(DAT_006d3344 + iVar8 * 0xc);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar8 = 5;
    do {
      iVar9 = FUN_004032c8(6);
      iVar9 = iVar9 + 5;
      if ((-1 < (int)DAT_006d3338[iVar8]) && (-1 < (int)DAT_006d3338[iVar9])) {
        uVar2 = DAT_006d3338[iVar8];
        DAT_006d3338[iVar8] = DAT_006d3338[iVar9];
        DAT_006d3338[iVar9] = uVar2;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0xb);
    iVar8 = FUN_00405ef4(DAT_006d3338);
    if (0 < iVar8) {
      iVar9 = 1;
      do {
        FUN_00405ef4(DAT_006d3338);
        iVar10 = FUN_004032c8();
        if ((-1 < (int)DAT_006d3338[iVar9]) && (-1 < (int)DAT_006d3338[iVar10])) {
          uVar2 = DAT_006d3338[iVar9];
          DAT_006d3338[iVar9] = DAT_006d3338[iVar10];
          DAT_006d3338[iVar10] = uVar2;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = 1;
    puVar1 = &DAT_006d32b0;
    do {
      *puVar1 = DAT_006d3338[iVar8 + -1];
      iVar8 = iVar8 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar8 != 0xf);
    iVar9 = 0;
    FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
    iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
    if (-1 < iVar8) {
      iVar8 = iVar8 + 1;
      iVar10 = 0;
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066b4b4 + 4 + iVar10 * 0x30) == 1) &&
           (*(int *)(*(int *)PTR_DAT_0066b4b4 + iVar10 * 0x30) != iVar7)) {
          iVar9 = iVar9 + 1;
          FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar9);
          *(undefined4 *)(DAT_006d3344 + -0xc + iVar9 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x2c + iVar10 * 0x30);
          *(undefined4 *)(DAT_006d3344 + -8 + iVar9 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x28 + iVar10 * 0x30);
          uVar2 = FUN_004032c8(100);
          *(undefined4 *)(DAT_006d3344 + -4 + iVar9 * 0xc) = uVar2;
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    DAT_006d3278 = FUN_00405eec(DAT_006d3344);
    iVar7 = DAT_006d3278 + -1;
    FUN_004bcdb0(DAT_006d3344,0xc,0,&LAB_005d3b1c);
    FUN_004060a8(&DAT_006d3338,PTR_DAT_005d3ad4,1,iVar9);
    if (-1 < iVar9 + -1) {
      iVar8 = 0;
      do {
        DAT_006d3338[iVar8] = *(undefined4 *)(DAT_006d3344 + iVar8 * 0xc);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar8 = FUN_00405ef4(DAT_006d3338);
    if (0 < iVar8) {
      iVar9 = 1;
      do {
        FUN_00405ef4(DAT_006d3338);
        iVar10 = FUN_004032c8();
        if ((-1 < (int)DAT_006d3338[iVar9]) && (-1 < (int)DAT_006d3338[iVar10])) {
          uVar2 = DAT_006d3338[iVar9];
          DAT_006d3338[iVar9] = DAT_006d3338[iVar10];
          DAT_006d3338[iVar10] = uVar2;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (0 < DAT_006d329c) {
      iVar9 = 1;
      puVar1 = &DAT_006d32e8;
      iVar8 = DAT_006d329c;
      do {
        *puVar1 = DAT_006d3338[iVar9 + -1];
        iVar9 = iVar9 + 1;
        puVar1 = puVar1 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar9 = 0;
    FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
    iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
    if (-1 < iVar8) {
      iVar8 = iVar8 + 1;
      iVar10 = 0;
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066b4b4 + 4 + iVar10 * 0x30) == 2) &&
           (*(int *)(*(int *)PTR_DAT_0066b4b4 + iVar10 * 0x30) != iVar7)) {
          iVar9 = iVar9 + 1;
          FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar9);
          *(undefined4 *)(DAT_006d3344 + -0xc + iVar9 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x2c + iVar10 * 0x30);
          *(undefined4 *)(DAT_006d3344 + -8 + iVar9 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x28 + iVar10 * 0x30);
          uVar2 = FUN_004032c8(100);
          *(undefined4 *)(DAT_006d3344 + -4 + iVar9 * 0xc) = uVar2;
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    DAT_006d3278 = FUN_00405eec(DAT_006d3344);
    iVar7 = DAT_006d3278 + -1;
    FUN_004bcdb0(DAT_006d3344,0xc,0,&LAB_005d3b1c);
    FUN_004060a8(&DAT_006d3338,PTR_DAT_005d3ad4,1,iVar9);
    if (-1 < iVar9 + -1) {
      iVar8 = 0;
      do {
        DAT_006d3338[iVar8] = *(undefined4 *)(DAT_006d3344 + iVar8 * 0xc);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar8 = FUN_00405ef4(DAT_006d3338);
    if (0 < iVar8) {
      iVar9 = 1;
      do {
        FUN_00405ef4(DAT_006d3338);
        iVar10 = FUN_004032c8();
        if ((-1 < (int)DAT_006d3338[iVar9]) && (-1 < (int)DAT_006d3338[iVar10])) {
          uVar2 = DAT_006d3338[iVar9];
          DAT_006d3338[iVar9] = DAT_006d3338[iVar10];
          DAT_006d3338[iVar10] = uVar2;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (0 < DAT_006d32a0) {
      iVar9 = 1;
      puVar1 = &DAT_006d32fc;
      iVar8 = DAT_006d32a0;
      do {
        *puVar1 = DAT_006d3338[iVar9 + -1];
        iVar9 = iVar9 + 1;
        puVar1 = puVar1 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar9 = 0;
    FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
    iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
    if (-1 < iVar8) {
      iVar8 = iVar8 + 1;
      iVar10 = 0;
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066b4b4 + 4 + iVar10 * 0x30) == 3) &&
           (*(int *)(*(int *)PTR_DAT_0066b4b4 + iVar10 * 0x30) != iVar7)) {
          iVar9 = iVar9 + 1;
          FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar9);
          *(undefined4 *)(DAT_006d3344 + -0xc + iVar9 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x2c + iVar10 * 0x30);
          *(undefined4 *)(DAT_006d3344 + -8 + iVar9 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x28 + iVar10 * 0x30);
          uVar2 = FUN_004032c8(100);
          *(undefined4 *)(DAT_006d3344 + -4 + iVar9 * 0xc) = uVar2;
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    DAT_006d3278 = FUN_00405eec(DAT_006d3344);
    iVar7 = DAT_006d3278 + -1;
    FUN_004bcdb0(DAT_006d3344,0xc,0,&LAB_005d3b1c);
    FUN_004060a8(&DAT_006d3338,PTR_DAT_005d3ad4,1,iVar9);
    if (-1 < iVar9 + -1) {
      iVar8 = 0;
      do {
        DAT_006d3338[iVar8] = *(undefined4 *)(DAT_006d3344 + iVar8 * 0xc);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar8 = FUN_00405ef4(DAT_006d3338);
    if (0 < iVar8) {
      iVar9 = 1;
      do {
        FUN_00405ef4(DAT_006d3338);
        iVar10 = FUN_004032c8();
        if ((-1 < (int)DAT_006d3338[iVar9]) && (-1 < (int)DAT_006d3338[iVar10])) {
          uVar2 = DAT_006d3338[iVar9];
          DAT_006d3338[iVar9] = DAT_006d3338[iVar10];
          DAT_006d3338[iVar10] = uVar2;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (0 < DAT_006d32a4) {
      iVar9 = 1;
      puVar1 = &DAT_006d3310;
      iVar8 = DAT_006d32a4;
      do {
        *puVar1 = DAT_006d3338[iVar9 + -1];
        iVar9 = iVar9 + 1;
        puVar1 = puVar1 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar9 = 0;
    FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
    iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
    if (-1 < iVar8) {
      iVar8 = iVar8 + 1;
      iVar10 = 0;
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066b4b4 + 4 + iVar10 * 0x30) == 4) &&
           (*(int *)(*(int *)PTR_DAT_0066b4b4 + iVar10 * 0x30) != iVar7)) {
          iVar9 = iVar9 + 1;
          FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar9);
          *(undefined4 *)(DAT_006d3344 + -0xc + iVar9 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x2c + iVar10 * 0x30);
          *(undefined4 *)(DAT_006d3344 + -8 + iVar9 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x28 + iVar10 * 0x30);
          uVar2 = FUN_004032c8(100);
          *(undefined4 *)(DAT_006d3344 + -4 + iVar9 * 0xc) = uVar2;
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    DAT_006d3278 = FUN_00405eec(DAT_006d3344);
    iVar7 = DAT_006d3278 + -1;
    FUN_004bcdb0(DAT_006d3344,0xc,0,&LAB_005d3b1c);
    FUN_004060a8(&DAT_006d3338,PTR_DAT_005d3ad4,1,iVar9);
    if (-1 < iVar9 + -1) {
      iVar8 = 0;
      do {
        DAT_006d3338[iVar8] = *(undefined4 *)(DAT_006d3344 + iVar8 * 0xc);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = 0x5d516a;
    iVar8 = FUN_00405ef4(DAT_006d3338);
    if (0 < iVar8) {
      iVar10 = 1;
      do {
        FUN_00405ef4(DAT_006d3338);
        iVar9 = 0x5d5184;
        iVar3 = FUN_004032c8();
        if ((-1 < (int)DAT_006d3338[iVar10]) && (-1 < (int)DAT_006d3338[iVar3])) {
          uVar2 = DAT_006d3338[iVar10];
          DAT_006d3338[iVar10] = DAT_006d3338[iVar3];
          DAT_006d3338[iVar3] = uVar2;
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (0 < DAT_006d32a8) {
      iVar10 = 1;
      puVar1 = &DAT_006d3324;
      iVar8 = DAT_006d32a8;
      do {
        *puVar1 = DAT_006d3338[iVar10 + -1];
        iVar10 = iVar10 + 1;
        puVar1 = puVar1 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (DAT_006d32ac == 1) {
      iVar10 = 0;
      FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
      iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4);
      if (-1 < iVar8) {
        iVar8 = iVar8 + 1;
        iVar9 = 0;
        do {
          if ((*(int *)(*(int *)PTR_DAT_0066b4b4 + 4 + iVar9 * 0x30) == 5) &&
             (*(int *)(*(int *)PTR_DAT_0066b4b4 + iVar9 * 0x30) != iVar7)) {
            iVar10 = iVar10 + 1;
            FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar10);
            *(undefined4 *)(DAT_006d3344 + -0xc + iVar10 * 0xc) =
                 *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x2c + iVar9 * 0x30);
            *(undefined4 *)(DAT_006d3344 + -8 + iVar10 * 0xc) =
                 *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x28 + iVar9 * 0x30);
            uVar2 = FUN_004032c8(100);
            *(undefined4 *)(DAT_006d3344 + -4 + iVar10 * 0xc) = uVar2;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      DAT_006d3278 = FUN_00405eec(DAT_006d3344);
      iVar9 = DAT_006d3278 + -1;
      FUN_004bcdb0(DAT_006d3344,0xc,0,&LAB_005d3b1c);
      FUN_004060a8(&DAT_006d3338,PTR_DAT_005d3ad4,1,iVar10);
      if (-1 < iVar10 + -1) {
        iVar7 = 0;
        do {
          DAT_006d3338[iVar7] = *(undefined4 *)(DAT_006d3344 + iVar7 * 0xc);
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      DAT_006d3330 = *DAT_006d3338;
    }
    if ((DAT_006d327c != '\0') &&
       (iVar7 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4), -1 < iVar7)) {
      iVar7 = iVar7 + 1;
      iVar8 = 0;
      do {
        if (*(int *)(*(int *)PTR_DAT_0066b4b4 + iVar8 * 0x30) == iVar9) {
          DAT_006d3334 = *(undefined4 *)(*(int *)PTR_DAT_0066b4b4 + 0x2c + iVar8 * 0x30);
          break;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    DAT_006d3348 = DAT_006d32b0;
    DAT_006d334c = DAT_006d32b4;
    _DAT_006d3350 = DAT_006d32b8;
    _DAT_006d3354 = DAT_006d32bc;
    _DAT_006d3358 = DAT_006d32c0;
    _DAT_006d335c = DAT_006d32e8;
    _DAT_006d3360 = DAT_006d32ec;
    DAT_006d3388 = DAT_006d32e4;
    _DAT_006d3364 = DAT_006d32c4;
    if (DAT_006d327c != '\0') {
      DAT_006d3388 = DAT_006d32c4;
      _DAT_006d3364 = DAT_006d3334;
    }
    _DAT_006d33a4 = DAT_006d32f8;
    if (DAT_006d32ac == 1) {
      _DAT_006d33a4 = DAT_006d3330;
    }
    DAT_006d338c = DAT_006d32f0;
    _DAT_006d3390 = DAT_006d3310;
    DAT_006d3394 = DAT_006d32c8;
    _DAT_006d3398 = DAT_006d32f4;
    _DAT_006d339c = DAT_006d3314;
    _DAT_006d33a0 = DAT_006d32cc;
    _DAT_006d33a8 = DAT_006d3324;
    _DAT_006d33ac = DAT_006d32d0;
    _DAT_006d33b0 = DAT_006d32fc;
    _DAT_006d33b4 = DAT_006d3318;
    _DAT_006d33b8 = DAT_006d32d4;
    _DAT_006d33bc = DAT_006d3300;
    _DAT_006d33c0 = DAT_006d331c;
    _DAT_006d33c4 = DAT_006d32d8;
    _DAT_006d33c8 = DAT_006d3304;
    _DAT_006d33cc = DAT_006d3320;
    _DAT_006d33d0 = DAT_006d32dc;
    _DAT_006d33d4 = DAT_006d3308;
    _DAT_006d33d8 = DAT_006d3328;
    _DAT_006d33dc = DAT_006d32e0;
    _DAT_006d33e0 = DAT_006d330c;
    _DAT_006d33e4 = DAT_006d332c;
    iVar7 = 1;
    piVar11 = &DAT_006d3368;
    do {
      *piVar11 = iVar7;
      iVar7 = iVar7 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar7 != 9);
    iVar7 = 8;
    puVar1 = &DAT_006d3368;
    do {
      iVar8 = FUN_004032c8(8);
      uVar2 = *puVar1;
      *puVar1 = *(undefined4 *)(&DAT_006d3364 + (iVar8 + 1) * 4);
      *(undefined4 *)(&DAT_006d3364 + (iVar8 + 1) * 4) = uVar2;
      puVar1 = puVar1 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = 8;
    piVar11 = &DAT_006d3368;
    puVar1 = (undefined4 *)(PTR_DAT_0066ac78 + 0x4bc);
    do {
      *puVar1 = (&DAT_006d3344)[*piVar11];
      iVar8 = 3;
      puVar4 = &DAT_006d338c;
      puVar6 = puVar1;
      do {
        puVar6 = puVar6 + 1;
        *puVar6 = puVar4[*piVar11 * 3 + -4];
        puVar4 = puVar4 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      puVar1 = puVar1 + 4;
      piVar11 = piVar11 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    cVar12 = '\0';
    iVar7 = 8;
    piVar11 = (int *)(PTR_DAT_0066ac78 + 0x4bc);
    do {
      iVar8 = 4;
      piVar5 = piVar11;
      do {
        if (*piVar5 == -1) {
          cVar12 = '\x01';
          break;
        }
        piVar5 = piVar5 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      piVar11 = piVar11 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    cVar13 = '\0';
    if ((cVar12 != '\0') &&
       (cVar13 = '\0', iVar7 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4), -1 < iVar7)) {
      iVar7 = iVar7 + 1;
      iVar8 = 0;
      do {
        if (*(int *)(*(int *)PTR_DAT_0066b4b4 + iVar8 * 0x30) == -1) {
          cVar13 = '\x01';
          break;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if ((cVar12 == '\0') || (cVar13 != '\0')) {
      iVar7 = 1;
      piVar11 = (int *)(PTR_DAT_0066ac78 + 0x4bc);
      do {
        iVar8 = 1;
        piVar5 = piVar11;
        do {
          *(int *)(*(int *)PTR_DAT_0066af70 + 0x5c + *piVar5 * 0x2f8) = iVar8;
          *(int *)(*(int *)PTR_DAT_0066af70 + 0x94 + *piVar5 * 0x2f8) = iVar7;
          *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x215 + *piVar5 * 0x2f8) = 1;
          iVar8 = iVar8 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar8 != 5);
        iVar7 = iVar7 + 1;
        piVar11 = piVar11 + 4;
      } while (iVar7 != 9);
    }
    else {
      PTR_DAT_0066ac78[0x17f] = 0;
    }
  }
  else {
    FUN_005d5868();
  }
  iVar8 = 0;
  FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
  iVar7 = 8;
  piVar11 = (int *)(PTR_DAT_0066ac78 + 0x4bc);
  do {
    iVar9 = 4;
    piVar5 = piVar11;
    do {
      iVar8 = iVar8 + 1;
      FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar8);
      *(int *)(DAT_006d3344 + -0xc + iVar8 * 0xc) = *piVar11;
      *(undefined4 *)(DAT_006d3344 + -8 + iVar8 * 0xc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x98 + *piVar11 * 0x2f8);
      uVar2 = FUN_004032c8(100);
      *(undefined4 *)(DAT_006d3344 + -4 + iVar8 * 0xc) = uVar2;
      piVar11 = piVar11 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    piVar11 = piVar5 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  DAT_006d3278 = FUN_00405eec(DAT_006d3344);
  FUN_004bcdb0(DAT_006d3344,0xc,0,&LAB_005d3b1c,DAT_006d3278 + -1);
  iVar7 = 0;
  puVar1 = (undefined4 *)(PTR_DAT_0066ac78 + 0x648);
  do {
    *puVar1 = *(undefined4 *)(DAT_006d3344 + iVar7 * 0xc);
    iVar7 = iVar7 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar7 != 8);
  iVar7 = 8;
  puVar1 = (undefined4 *)(PTR_DAT_0066ac78 + 0x668);
  do {
    *puVar1 = *(undefined4 *)(DAT_006d3344 + iVar7 * 0xc);
    iVar7 = iVar7 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar7 != 0x10);
  iVar7 = 0x10;
  puVar1 = (undefined4 *)(PTR_DAT_0066ac78 + 0x688);
  do {
    *puVar1 = *(undefined4 *)(DAT_006d3344 + iVar7 * 0xc);
    iVar7 = iVar7 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar7 != 0x18);
  iVar7 = 0x18;
  puVar1 = (undefined4 *)(PTR_DAT_0066ac78 + 0x6a8);
  do {
    *puVar1 = *(undefined4 *)(DAT_006d3344 + iVar7 * 0xc);
    iVar7 = iVar7 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar7 != 0x20);
  return;
}

