// Address: 00578de8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 * FUN_00578de8(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  int local_24;
  
  puVar5 = PTR_DAT_0066b5b8;
  DAT_006d217c = 0;
  DAT_006d2180 = 0;
  DAT_006d2174 = FUN_004032c8(5);
  iVar10 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  iVar6 = iVar10 + *(int *)(PTR_DAT_0066ac78 + 0x40);
  FUN_004060a8(&DAT_006d215c,PTR_DAT_005786ec,1,0);
  FUN_004060a8(&DAT_006d2160,PTR_DAT_005786ec,1,0);
  FUN_004060a8(&DAT_006d2168,PTR_DAT_00578714,1,0);
  FUN_004060a8(&DAT_006d215c,PTR_DAT_005786ec,1,iVar6);
  FUN_004060a8(&DAT_006d2160,PTR_DAT_005786ec,1,iVar6);
  FUN_004060a8(&DAT_006d2164,PTR_DAT_005786ec,1,iVar6);
  FUN_004060a8(&DAT_006d216c,PTR_DAT_0057873c,1,0);
  iVar7 = FUN_00405ef4(*(undefined4 *)puVar5);
  if (-1 < iVar7) {
    iVar7 = iVar7 + 1;
    iVar11 = 0;
    do {
      iVar9 = *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130);
      if ((-1 < iVar9) && (iVar9 <= iVar6 + -1)) {
        *(undefined1 *)(*(int *)puVar5 + 0x110 + iVar11 * 0x130) = 0;
        piVar1 = (int *)(DAT_006d215c + *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 4);
        *piVar1 = *piVar1 + *(int *)(*(int *)puVar5 + 0x28 + iVar11 * 0x130);
        piVar1 = (int *)(DAT_006d2160 + *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 4);
        *piVar1 = *piVar1 + 1;
      }
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = FUN_00405ef4(DAT_006d2160);
  if (-1 < iVar7) {
    iVar7 = iVar7 + 1;
    iVar11 = 0;
    do {
      iVar9 = *(int *)(DAT_006d2160 + iVar11 * 4);
      if (0 < iVar9) {
        iVar2 = *(int *)(DAT_006d215c + iVar11 * 4);
        uVar8 = FUN_00402c38(iVar2 / iVar9,iVar2 % iVar9);
        *(undefined4 *)(DAT_006d2160 + iVar11 * 4) = uVar8;
      }
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = FUN_00405ef4(*(undefined4 *)puVar5);
  if (-1 < iVar7) {
    iVar7 = iVar7 + 1;
    iVar11 = 0;
    do {
      bVar4 = false;
      bVar3 = false;
      iVar9 = *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130);
      if (((-1 < iVar9) && (iVar9 < iVar10)) &&
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar9 * 0x2f8) == '\0')) {
        bVar3 = true;
      }
      if ((((!bVar3) && (iVar9 = *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130), -1 < iVar9)) &&
          ((iVar10 <= iVar9 &&
           ((iVar9 <= iVar6 + -1 &&
            (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar9 * 0x2f8) == '\0')))))) &&
         ((2 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 +
                       *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 0x2f8) &&
          (iVar9 = FUN_0064f2d0(*(undefined4 *)
                                 (*(int *)PTR_DAT_0066af70 + 0x3c +
                                 *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 0x2f8)),
          iVar9 < 2)))) {
        bVar3 = true;
      }
      if (*(int *)(*(int *)puVar5 + 0x114 + iVar11 * 0x130) == 1) {
        bVar3 = false;
      }
      if (bVar3) {
        if ((*(int *)(DAT_006d2160 + *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 4) + 10 <=
             *(int *)(*(int *)puVar5 + 0x28 + iVar11 * 0x130)) ||
           (*(int *)(*(int *)puVar5 + 0x28 + iVar11 * 0x130) <=
            *(int *)(DAT_006d2160 + *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 4) + -10)) {
          bVar4 = true;
        }
        if (((!bVar4) &&
            (iVar9 = FUN_00579bd0(*(undefined4 *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130)),
            iVar9 == *(int *)(*(int *)puVar5 + 0x24 + iVar11 * 0x130))) &&
           (*(char *)(*(int *)puVar5 + 0x15 + iVar11 * 0x130) == '\0')) {
          bVar4 = true;
        }
        if ((!bVar4) && (*(char *)(*(int *)puVar5 + 0x7d + iVar11 * 0x130) != '\0')) {
          bVar4 = true;
        }
        if (((bVar4) && (*(char *)(*(int *)puVar5 + 0x15 + iVar11 * 0x130) != '\0')) &&
           (iVar9 = FUN_004032c8(3), iVar9 != 1)) {
          bVar4 = false;
        }
        if (*(int *)(*(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 0x2f8 + 0x68 +
                    *(int *)(*(int *)puVar5 + 0x24 + iVar11 * 0x130) * 4) <
            *(int *)(&DAT_00669f1c + *(int *)(*(int *)puVar5 + 0x24 + iVar11 * 0x130) * 4)) {
          bVar4 = false;
        }
        if ((bVar4) && (*(int *)(*(int *)puVar5 + 0x100 + iVar11 * 0x130) == 2)) {
          bVar4 = false;
        }
        if (bVar4) {
          iVar9 = FUN_00405eec(DAT_006d2168);
          FUN_004060a8(&DAT_006d2168,PTR_DAT_00578714,1,iVar9 + 1);
          iVar9 = FUN_00405ef4(DAT_006d2168);
          *(int *)(DAT_006d2168 + iVar9 * 0x2c) = iVar11;
          iVar9 = FUN_00405ef4(DAT_006d2168);
          *(undefined4 *)(DAT_006d2168 + 4 + iVar9 * 0x2c) =
               *(undefined4 *)(*(int *)puVar5 + 0x28 + iVar11 * 0x130);
          iVar9 = FUN_00405ef4(DAT_006d2168);
          *(undefined4 *)(DAT_006d2168 + 8 + iVar9 * 0x2c) =
               *(undefined4 *)(*(int *)puVar5 + 0x1c + iVar11 * 0x130);
          iVar9 = FUN_00405ef4(DAT_006d2168);
          *(undefined4 *)(DAT_006d2168 + 0xc + iVar9 * 0x2c) =
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x58 +
                *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 0x2f8);
          iVar9 = FUN_00405ef4(DAT_006d2168);
          *(undefined4 *)(DAT_006d2168 + 0x10 + iVar9 * 0x2c) =
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x7c +
                *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 0x2f8);
          iVar9 = FUN_00405ef4(DAT_006d2168);
          *(undefined4 *)(DAT_006d2168 + 0x1c + iVar9 * 0x2c) =
               *(undefined4 *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130);
          iVar9 = FUN_00405ef4(DAT_006d2168);
          *(undefined4 *)(DAT_006d2168 + 0x14 + iVar9 * 0x2c) =
               *(undefined4 *)(DAT_006d2160 + *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 4);
          iVar9 = FUN_00405ef4(DAT_006d2168);
          *(undefined4 *)(DAT_006d2168 + 0x18 + iVar9 * 0x2c) =
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x3c +
                *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 0x2f8);
          uVar8 = FUN_0064f2d0(*(undefined4 *)
                                (*(int *)PTR_DAT_0066af70 + 0x3c +
                                *(int *)(*(int *)puVar5 + 0x20 + iVar11 * 0x130) * 0x2f8));
          iVar9 = FUN_00405ef4(DAT_006d2168);
          *(undefined4 *)(DAT_006d2168 + 0x20 + iVar9 * 0x2c) = uVar8;
          iVar9 = FUN_00405ef4(DAT_006d2168);
          puVar13 = (undefined4 *)(DAT_006d2168 + 0x24 + iVar9 * 0x2c);
          uVar8 = FUN_004032c8(5000);
          *puVar13 = uVar8;
          iVar9 = FUN_00405ef4(DAT_006d2168);
          *(undefined1 *)(DAT_006d2168 + 0x28 + iVar9 * 0x2c) = 1;
        }
      }
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  DAT_006d2170 = FUN_00405eec(DAT_006d2168);
  iVar10 = DAT_006d2170 + -1;
  FUN_004bcdb0(DAT_006d2168,0x2c,0,&LAB_0057878c);
  iVar6 = FUN_00405ef4(*(undefined4 *)puVar5);
  if (-1 < iVar6) {
    iVar6 = iVar6 + 1;
    iVar7 = 0;
    do {
      *(undefined4 *)(*(int *)puVar5 + 0x114 + iVar7 * 0x130) = 0;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = FUN_00405ef4(DAT_006d2160);
  if (-1 < iVar6) {
    iVar6 = iVar6 + 1;
    iVar7 = 0;
    do {
      bVar3 = false;
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar7 * 0x2f8) == '\0') && (iVar7 < iVar10))
      {
        bVar3 = true;
      }
      if (((((!bVar3) && (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar7 * 0x2f8) == '\0')) &&
           (iVar10 <= iVar7)) &&
          ((iVar7 <= local_24 && (3 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + iVar7 * 0x2f8)))))
         && (iVar11 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar7 * 0x2f8))
            , iVar11 < 2)) {
        bVar3 = true;
      }
      if (bVar3) {
        iVar11 = FUN_00405eec(DAT_006d216c);
        FUN_004060a8(&DAT_006d216c,PTR_DAT_0057873c,1,iVar11 + 1);
        iVar11 = FUN_00405ef4(DAT_006d216c);
        *(int *)(DAT_006d216c + iVar11 * 0x20) = iVar7;
        iVar11 = FUN_00405ef4(DAT_006d216c);
        *(undefined4 *)(DAT_006d216c + 0x10 + iVar11 * 0x20) =
             *(undefined4 *)(DAT_006d2160 + iVar7 * 4);
        iVar11 = FUN_00405ef4(DAT_006d216c);
        *(undefined4 *)(DAT_006d216c + 8 + iVar11 * 0x20) =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x58 + iVar7 * 0x2f8);
        iVar11 = FUN_00405ef4(DAT_006d216c);
        *(undefined4 *)(DAT_006d216c + 4 + iVar11 * 0x20) =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar7 * 0x2f8);
        iVar11 = FUN_00405ef4(DAT_006d216c);
        *(undefined4 *)(DAT_006d216c + 0xc + iVar11 * 0x20) =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar7 * 0x2f8);
        uVar8 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar7 * 0x2f8));
        iVar11 = FUN_00405ef4(DAT_006d216c);
        *(undefined4 *)(DAT_006d216c + 0x18 + iVar11 * 0x20) = uVar8;
        iVar11 = FUN_00405ef4(DAT_006d216c);
        puVar13 = (undefined4 *)(DAT_006d216c + 0x1c + iVar11 * 0x20);
        uVar8 = FUN_004032c8(5000);
        *puVar13 = uVar8;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  DAT_006d2170 = FUN_00405eec(DAT_006d216c);
  puVar12 = &LAB_005787c8;
  FUN_004bcdb0(DAT_006d216c,0x20,0,&LAB_005787c8,DAT_006d2170 + -1);
  FUN_0057955c();
  return puVar12;
}

