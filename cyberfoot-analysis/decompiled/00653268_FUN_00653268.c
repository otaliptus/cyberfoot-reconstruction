// Address: 00653268
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00653268(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_208;
  int local_204;
  int local_200;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1e0;
  
  puVar1 = PTR_DAT_0066af70;
  local_204 = 0;
  local_1f4 = -1;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  local_1f8 = 0;
  local_208 = param_1;
  if ((-1 < param_1) && (iVar2 = FUN_0065208c(param_1), iVar2 == -1)) {
    local_208 = -1;
  }
  iVar2 = local_204;
  if (local_208 < 0) {
    iVar9 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    if (iVar9 < 2) {
      local_204 = 0;
      iVar2 = local_204;
    }
    else {
      FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
      iVar9 = FUN_004032c8();
      local_1e0 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
      if (-1 < local_1e0 + -1) {
        iVar10 = 0;
        do {
          iVar2 = iVar10;
          if (*(int *)(*(int *)puVar1 + 0x3c + iVar10 * 0x2f8) ==
              *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar9 * 0x294)) break;
          iVar10 = iVar10 + 1;
          local_1e0 = local_1e0 + -1;
          iVar2 = local_204;
        } while (local_1e0 != 0);
      }
    }
  }
  else {
    local_1e0 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
    if (-1 < local_1e0 + -1) {
      iVar9 = 0;
      do {
        if (*(int *)(*(int *)puVar1 + 0x3c + iVar9 * 0x2f8) == local_208) {
          iVar2 = FUN_0065208c(local_208);
          local_1f8 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x148 + iVar2 * 0x294) + iVar9;
          iVar2 = iVar9;
          break;
        }
        iVar9 = iVar9 + 1;
        local_1e0 = local_1e0 + -1;
      } while (local_1e0 != 0);
    }
  }
  local_204 = iVar2;
  iVar9 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40) + -1;
  iVar2 = local_1f4;
  if (local_204 <= iVar9) {
    local_1e0 = (iVar9 - local_204) + 1;
    iVar10 = local_204;
    do {
      if ((((*(char *)(*(int *)puVar1 + 0x39 + iVar10 * 0x2f8) == '\0') &&
           (0x19 < *(int *)(*(int *)puVar1 + 100 + iVar10 * 0x2f8))) &&
          (0xb < *(int *)(*(int *)puVar1 + 0xa0 + iVar10 * 0x2f8))) &&
         (iVar2 = iVar10, 0 < *(int *)(*(int *)puVar1 + 0x7c + iVar10 * 0x2f8))) break;
      iVar10 = iVar10 + 1;
      local_1e0 = local_1e0 + -1;
      iVar2 = local_1f4;
    } while (local_1e0 != 0);
  }
  local_1f4 = iVar2;
  iVar10 = 0;
  iVar2 = -1;
  if (-1 < local_208) {
    local_1f4 = -1;
  }
  if (local_1f4 == -1) {
    while ((local_1f4 == -1 && (iVar10 < 500))) {
      iVar10 = iVar10 + 1;
      if ((local_208 == -1) || (local_1f8 <= local_204)) {
        iVar2 = FUN_004032c8(iVar9 - local_204);
        iVar2 = iVar2 + local_204;
      }
      else if (local_204 < local_1f8) {
        iVar2 = FUN_004032c8(local_1f8 - local_204);
        iVar2 = iVar2 + local_204;
      }
      if (((*(char *)(*(int *)puVar1 + 0x39 + iVar2 * 0x2f8) == '\0') &&
          (0x10 < *(int *)(*(int *)puVar1 + 0xa0 + iVar2 * 0x2f8))) &&
         ((6 < *(int *)(*(int *)puVar1 + 0x98 + iVar2 * 0x2f8) &&
          (0 < *(int *)(*(int *)puVar1 + 0x7c + iVar2 * 0x2f8))))) {
        local_1f4 = iVar2;
      }
    }
  }
  if (local_1f4 != -1) {
    iVar2 = 0x1e;
    puVar8 = (undefined4 *)PTR_DAT_0066ad98;
    do {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_200 = 0;
    local_1e0 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
    if (0 < local_1e0) {
      iVar2 = 1;
      do {
        if ((((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar2 * 0x130) == local_1f4) &&
             (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + iVar2 * 0x130) == '\0')) &&
            (*(int *)(PTR_DAT_0066b6e4 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar2 * 0x130) * 4) <
             *(int *)(*(int *)puVar1 + local_1f4 * 0x2f8 + 0x68 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar2 * 0x130) * 4))) &&
           (local_200 = local_200 + 1, local_200 < 0x1f)) {
          *(int *)(PTR_DAT_0066ad98 + local_200 * 4 + -4) = iVar2;
        }
        iVar2 = iVar2 + 1;
        local_1e0 = local_1e0 + -1;
      } while (local_1e0 != 0);
    }
    iVar2 = 0;
    do {
      iVar9 = -1;
      if (0xf9 < iVar2) break;
      iVar9 = FUN_004032c8(0x1e);
      iVar2 = iVar2 + 1;
      iVar9 = *(int *)(PTR_DAT_0066ad98 + (iVar9 + 1) * 4 + -4);
    } while ((iVar9 < 1) || (1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar9 * 0x130)));
    if (0 < iVar9) {
      iVar3 = FUN_0064f2d0(*(undefined4 *)
                            (*(int *)puVar1 + 0x3c +
                            *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130) * 0x2f8));
      iVar11 = 0;
      iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
      iVar10 = *(int *)(PTR_DAT_0066ac78 + 0x40);
      local_1f0 = -1;
      iVar6 = local_1f0;
      while ((local_1f0 = iVar6, local_1f0 == -1 && (iVar11 < 500))) {
        iVar11 = iVar11 + 1;
        iVar4 = FUN_004032c8((iVar2 + iVar10 + -1) - local_204);
        iVar4 = iVar4 + local_204;
        iVar6 = local_1f0;
        if ((iVar4 != *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130)) &&
           (((((*(char *)(*(int *)puVar1 + 0x39 + iVar4 * 0x2f8) == '\0' &&
               (*(int *)(*(int *)puVar1 + 0xa0 + iVar4 * 0x2f8) < *(int *)PTR_DAT_0066b610 + -3)) &&
              (0 < *(int *)(*(int *)puVar1 + 0x7c + iVar4 * 0x2f8))) &&
             ((*(int *)(*(int *)puVar1 + 0x58 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130) * 0x2f8) + -1 <=
               *(int *)(*(int *)puVar1 + 0x58 + iVar4 * 0x2f8) &&
              (*(int *)(*(int *)puVar1 + 0x58 + iVar4 * 0x2f8) <=
               *(int *)(*(int *)puVar1 + 0x58 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130) * 0x2f8) + 1)))) &&
            (*(int *)(*(int *)puVar1 + iVar4 * 0x2f8 + 0x68 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar9 * 0x130) * 4) <=
             *(int *)(&DAT_0066abc4 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar9 * 0x130) * 4)
            )))) {
          if (iVar3 == 0) {
            iVar6 = iVar4;
            if ((*(int *)(*(int *)puVar1 + 0x3c + iVar4 * 0x2f8) !=
                 *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + iVar9 * 0x130)) &&
               (iVar5 = FUN_0064f2d0(*(undefined4 *)(*(int *)puVar1 + 0x3c + iVar4 * 0x2f8)),
               iVar6 = local_1f0, iVar5 == 0)) {
              iVar6 = iVar4;
            }
            local_1f0 = iVar6;
            iVar6 = local_1f0;
            if ((*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar9 * 0x130) != '\0') &&
               ((iVar5 = FUN_0064f2d0(*(undefined4 *)(*(int *)puVar1 + 0x3c + iVar4 * 0x2f8)),
                iVar5 != 0 || (*(int *)(*(int *)puVar1 + 0x98 + iVar4 * 0x2f8) < 0x13)))) {
              local_1f0 = -1;
              iVar6 = local_1f0;
            }
          }
          else {
            iVar6 = iVar4;
            if (((iVar3 == 1) &&
                (*(int *)(*(int *)puVar1 + 0x3c + iVar4 * 0x2f8) !=
                 *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + iVar9 * 0x130))) &&
               (iVar5 = FUN_0064f2d0(*(undefined4 *)(*(int *)puVar1 + 0x3c + iVar4 * 0x2f8)),
               iVar5 != 0)) {
              iVar6 = FUN_0064f2d0(*(undefined4 *)(*(int *)puVar1 + 0x3c + iVar4 * 0x2f8));
              if (iVar6 == 3) {
                iVar5 = *(int *)(*(int *)puVar1 + 0x3c + iVar4 * 0x2f8);
                if ((((iVar5 == 0x2b) || (iVar5 == 0x31)) || (iVar5 == 0x6b)) ||
                   (((iVar5 == 0x3b || (iVar5 == 9)) || (iVar6 = local_1f0, iVar5 == 0x27)))) {
                  iVar6 = iVar4;
                }
              }
              else {
                iVar5 = FUN_0064f2d0(*(undefined4 *)(*(int *)puVar1 + 0x3c + iVar4 * 0x2f8));
                iVar6 = local_1f0;
                if ((iVar5 == 3) && (*(int *)(*(int *)puVar1 + 0x3c + iVar4 * 0x2f8) == 0x44)) {
                  iVar6 = iVar4;
                }
              }
            }
          }
        }
      }
      if (((-1 < local_1f0) && (0 < iVar9)) && (-1 < local_1f4)) {
        uVar7 = FUN_00402c38();
        FUN_00650ec4(iVar9,local_1f0,uVar7);
      }
    }
  }
  return;
}

