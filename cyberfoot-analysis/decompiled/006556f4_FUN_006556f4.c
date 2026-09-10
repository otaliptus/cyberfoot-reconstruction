// Address: 006556f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006556f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  uint uVar6;
  
  puVar1 = PTR_DAT_0066af70;
  *(undefined4 *)PTR_DAT_0066adf4 = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 4) = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 8) = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 0xc) = 0xffffffff;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0,param_2,param_3,param_3);
  iVar2 = FUN_004032c8();
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    uVar6 = 1;
    if (*(int *)(*(int *)puVar1 + 0x7c + param_1 * 0x2f8) == 4) {
      iVar3 = FUN_004032c8(100);
      if (iVar3 < 99) {
        iVar3 = FUN_004032c8(100);
        if (iVar3 < 0x1f) {
          uVar6 = 2;
        }
        else {
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 3;
      }
      if ((0x50 < *(int *)(*(int *)puVar1 + 0x50 + param_1 * 0x2f8)) &&
         (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 3)) {
        iVar3 = 6;
        do {
          if (*(char *)(*(int *)puVar1 + 0x39 +
                       *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + (4 - uVar6) * 0x50 + 0xfc
                               + iVar3 * 4) * 0x2f8) == '\0') {
            if (-1 < *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + (4 - uVar6) * 0x50 + 0xfc +
                             iVar3 * 4)) {
              *(undefined4 *)PTR_DAT_0066adf4 =
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + (4 - uVar6) * 0x50 + 0xfc +
                    iVar3 * 4);
            }
            break;
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    if (*(int *)(*(int *)puVar1 + 0x7c + param_1 * 0x2f8) == 3) {
      iVar3 = FUN_004032c8(100);
      if (iVar3 < 0xb) {
        uVar6 = 2;
      }
      else {
        uVar6 = 1;
      }
      if ((0x50 < *(int *)(*(int *)puVar1 + 0x50 + param_1 * 0x2f8)) &&
         (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 3)) {
        iVar3 = 6;
        do {
          if (*(char *)(*(int *)puVar1 + 0x39 +
                       *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + (3 - uVar6) * 0x50 + 0xfc
                               + iVar3 * 4) * 0x2f8) == '\0') {
            if (-1 < *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + (3 - uVar6) * 0x50 + 0xfc +
                             iVar3 * 4)) {
              *(undefined4 *)PTR_DAT_0066adf4 =
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + (3 - uVar6) * 0x50 + 0xfc +
                    iVar3 * 4);
            }
            break;
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    if (((*(int *)(*(int *)puVar1 + 0x7c + param_1 * 0x2f8) == 2) &&
        (0x50 < *(int *)(*(int *)puVar1 + 0x50 + param_1 * 0x2f8))) &&
       (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 4)) {
      if (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 2) {
        uVar6 = 3;
      }
      if (*(int *)(*(int *)puVar1 + 0x1ac + param_1 * 0x2f8) == 2) {
        uVar6 = 4;
      }
      if (*(int *)(*(int *)puVar1 + 0x1b0 + param_1 * 0x2f8) == 3) {
        uVar6 = 5;
      }
      uVar4 = uVar6;
      if (uVar6 < 0xb) {
        do {
          if (*(char *)(*(int *)puVar1 + 0x39 +
                       *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + uVar4 * 4) *
                       0x2f8) == '\0') {
            if (-1 < *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + uVar4 * 4)) {
              *(undefined4 *)PTR_DAT_0066adf4 =
                   *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + uVar4 * 4);
            }
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0xb);
      }
    }
    if (((*(int *)(*(int *)puVar1 + 0x7c + param_1 * 0x2f8) == 1) &&
        (iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0), 1 < iVar2)) &&
       ((0x50 < *(int *)(*(int *)puVar1 + 0x50 + param_1 * 0x2f8) &&
        (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 3)))) {
      do {
        FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
        iVar2 = FUN_004032c8();
        iVar3 = FUN_0065208c(*(undefined4 *)(*(int *)puVar1 + 0x3c + param_1 * 0x2f8));
      } while (iVar2 == iVar3);
      if (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 2) {
        uVar6 = 3;
      }
      if (*(int *)(*(int *)puVar1 + 0x1ac + param_1 * 0x2f8) == 2) {
        uVar6 = 4;
      }
      if (*(int *)(*(int *)puVar1 + 0x1b0 + param_1 * 0x2f8) == 3) {
        uVar6 = 5;
      }
      iVar3 = FUN_004032c8(100);
      if (0x62 < iVar3) {
        uVar6 = 2;
      }
      if (uVar6 < 0xb) {
        do {
          iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + uVar6 * 4);
          if (*(char *)(*(int *)puVar1 + 0x39 + iVar3 * 0x2f8) == '\0') {
            if (iVar3 < 0) {
              return;
            }
            *(int *)PTR_DAT_0066adf4 = iVar3;
            return;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0xb);
      }
    }
  }
  else {
    if (((*(int *)(*(int *)puVar1 + 0x7c + param_1 * 0x2f8) == 4) &&
        (0x50 < *(int *)(*(int *)puVar1 + 0x50 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8))) &&
       (*(int *)(*(int *)puVar1 + 0x1a8 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) < 4)) {
      iVar3 = 0x14;
      uVar5 = FUN_004032c8(5);
      switch(uVar5) {
      case 0:
        iVar3 = 0x13;
        break;
      case 1:
        iVar3 = 0x12;
        break;
      case 2:
        iVar3 = 0x10;
        break;
      case 3:
        iVar3 = 0xd;
        break;
      case 4:
        iVar3 = 10;
      }
      if (3 < iVar3) {
        do {
          if (*(char *)(*(int *)puVar1 + 0x39 +
                       *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x1ec + iVar3 * 4) *
                       0x2f8) == '\0') {
            *(undefined4 *)PTR_DAT_0066adf4 =
                 *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x1ec + iVar3 * 4);
            break;
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 3);
      }
    }
    if (((*(int *)(*(int *)puVar1 + 0x7c + param_1 * 0x2f8) == 3) &&
        (0x50 < *(int *)(*(int *)puVar1 + 0x50 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8))) &&
       (*(int *)(*(int *)puVar1 + 0x1a8 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) < 5)) {
      iVar3 = 0x14;
      uVar5 = FUN_004032c8(5);
      switch(uVar5) {
      case 0:
        iVar3 = 0x13;
        break;
      case 1:
        iVar3 = 0x12;
        break;
      case 2:
        iVar3 = 0x10;
        break;
      case 3:
        iVar3 = 0xd;
        break;
      case 4:
        iVar3 = 10;
      }
      if (3 < iVar3) {
        do {
          if (*(char *)(*(int *)puVar1 + 0x39 +
                       *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x19c + iVar3 * 4) *
                       0x2f8) == '\0') {
            *(undefined4 *)PTR_DAT_0066adf4 =
                 *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x19c + iVar3 * 4);
            break;
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 3);
      }
    }
    if (((*(int *)(*(int *)puVar1 + 0x7c + param_1 * 0x2f8) == 2) &&
        (0x50 < *(int *)(*(int *)puVar1 + 0x50 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8))) &&
       (*(int *)(*(int *)puVar1 + 0x1a8 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) < 5)) {
      iVar3 = FUN_004032c8(100);
      if (iVar3 < 0x51) {
        iVar3 = FUN_004032c8(6);
        iVar3 = iVar3 + 0xe;
      }
      else {
        iVar3 = FUN_004032c8(8);
        iVar3 = iVar3 + 8;
      }
      if (4 < iVar3) {
        do {
          if (*(char *)(*(int *)puVar1 + 0x39 +
                       *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + iVar3 * 4) *
                       0x2f8) == '\0') {
            *(undefined4 *)PTR_DAT_0066adf4 =
                 *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + iVar3 * 4);
            break;
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 4);
      }
    }
    if ((((*(int *)(*(int *)puVar1 + 0x7c + param_1 * 0x2f8) == 1) &&
         (iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0), 1 < iVar2)) &&
        (0x50 < *(int *)(*(int *)puVar1 + 0x50 + param_1 * 0x2f8))) &&
       (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 4)) {
      do {
        FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
        iVar2 = FUN_004032c8();
        iVar3 = FUN_0065208c(*(undefined4 *)(*(int *)puVar1 + 0x3c + param_1 * 0x2f8));
      } while (iVar2 == iVar3);
      if (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 2) {
        iVar3 = FUN_004032c8(3);
        unaff_EBP = iVar3 + 2;
      }
      if (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) == 2) {
        iVar3 = FUN_004032c8(4);
        unaff_EBP = iVar3 + 2;
      }
      if (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) == 3) {
        iVar3 = FUN_004032c8(5);
        unaff_EBP = iVar3 + 2;
      }
      if (unaff_EBP < 0xb) {
        do {
          iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + unaff_EBP * 4);
          if (*(char *)(*(int *)puVar1 + 0x39 + iVar3 * 0x2f8) == '\0') {
            *(int *)PTR_DAT_0066adf4 = iVar3;
            return;
          }
          unaff_EBP = unaff_EBP + 1;
        } while (unaff_EBP != 0xb);
      }
    }
  }
  return;
}

