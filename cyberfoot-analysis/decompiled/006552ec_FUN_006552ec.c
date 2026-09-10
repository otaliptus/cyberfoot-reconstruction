// Address: 006552ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006552ec(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  
  puVar1 = PTR_DAT_0066af70;
  *(undefined4 *)PTR_DAT_0066adf4 = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 4) = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 8) = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 0xc) = 0xffffffff;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  FUN_004032c8();
  iVar5 = 1;
  iVar2 = FUN_004032c8(100);
  if ((((10 < iVar2) && (*(int *)(*(int *)puVar1 + 0x7c + param_1 * 0x2f8) == 1)) &&
      (iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0), 1 < iVar2)) &&
     ((0x50 < *(int *)(*(int *)puVar1 + 0x50 + param_1 * 0x2f8) &&
      (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 5)))) {
    do {
      FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
      iVar2 = FUN_004032c8();
      iVar3 = FUN_0065208c(*(undefined4 *)(*(int *)puVar1 + 0x3c + param_1 * 0x2f8));
    } while (iVar2 == iVar3);
    if (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 2) {
      local_18 = 3;
    }
    if (*(int *)(*(int *)puVar1 + 0x1ac + param_1 * 0x2f8) == 2) {
      local_18 = 4;
    }
    if (*(int *)(*(int *)puVar1 + 0x1b0 + param_1 * 0x2f8) == 3) {
      local_18 = 5;
    }
    if (*(int *)(*(int *)puVar1 + 0x1b0 + param_1 * 0x2f8) < 4) {
      local_18 = 6;
    }
    iVar3 = FUN_004032c8(100);
    if (0x62 < iVar3) {
      local_18 = 2;
    }
    iVar3 = FUN_004032c8(local_18);
    iVar3 = iVar3 + 1;
    if (iVar3 < 0xb) {
      do {
        if (*(char *)(*(int *)puVar1 + 0x39 +
                     *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + iVar3 * 4) * 0x2f8)
            == '\0') {
          if (-1 < *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + iVar3 * 4)) {
            *(undefined4 *)PTR_DAT_0066adf4 =
                 *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + iVar3 * 4);
            iVar5 = 2;
          }
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0xb);
    }
  }
  iVar2 = FUN_0065208c(*(undefined4 *)(*(int *)puVar1 + 0x3c + param_1 * 0x2f8));
  if (((*(int *)(*(int *)puVar1 + 0x3c + param_1 * 0x2f8) == 0x1d) &&
      (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar2 * 0x294) == 4)) &&
     ((*(int *)(*(int *)puVar1 + 0x7c + param_1 * 0x2f8) == 1 &&
      (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) < 0xb)))) {
    iVar3 = FUN_004032c8(5);
    iVar3 = iVar3 + 10;
    if ((PTR_DAT_0066ac78[0x170] != '\0') && (iVar4 = iVar3, 3 < iVar3)) {
      do {
        if ((*(char *)(*(int *)puVar1 + 0x39 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x23c + iVar4 * 4) * 0x2f8
                      ) == '\0') &&
           (0 < *(int *)(*(int *)puVar1 + 0x80 +
                        *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x23c + iVar4 * 4) *
                        0x2f8))) {
          *(undefined4 *)(PTR_DAT_0066adf4 + iVar5 * 4 + -4) =
               *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x23c + iVar4 * 4);
          iVar5 = iVar5 + 1;
          break;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 3);
    }
    if ((PTR_DAT_0066ac78[0x170] == '\0') && (3 < iVar3)) {
      do {
        if (*(char *)(*(int *)puVar1 + 0x39 +
                     *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x23c + iVar3 * 4) * 0x2f8)
            == '\0') {
          *(undefined4 *)(PTR_DAT_0066adf4 + iVar5 * 4 + -4) =
               *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x23c + iVar3 * 4);
          iVar5 = iVar5 + 1;
          break;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 3);
    }
    iVar4 = FUN_004032c8(4);
    iVar4 = iVar4 + 2;
    iVar3 = FUN_004032c8(100);
    if (((0x1e < iVar3) && (*(int *)(*(int *)puVar1 + 0x1a8 + param_1 * 0x2f8) == 1)) &&
       (iVar4 < 0x15)) {
      do {
        iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + iVar4 * 4);
        if (*(char *)(*(int *)puVar1 + 0x39 + iVar3 * 0x2f8) == '\0') {
          *(int *)(PTR_DAT_0066adf4 + iVar5 * 4 + -4) = iVar3;
          iVar5 = iVar5 + 1;
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x15);
    }
    iVar4 = FUN_004032c8(7);
    iVar4 = iVar4 + 0xc;
    iVar3 = FUN_004032c8(100);
    if ((0x1e < iVar3) && (iVar4 < 0x15)) {
      do {
        iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + iVar2 * 0x294 + 0x14c + iVar4 * 4);
        if (*(char *)(*(int *)puVar1 + 0x39 + iVar3 * 0x2f8) == '\0') {
          *(int *)(PTR_DAT_0066adf4 + iVar5 * 4 + -4) = iVar3;
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x15);
    }
  }
  return;
}

