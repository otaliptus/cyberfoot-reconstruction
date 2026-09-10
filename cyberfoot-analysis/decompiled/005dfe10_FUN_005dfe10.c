// Address: 005dfe10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005dfe10(undefined4 param_1)

{
  int *piVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_EDX;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int local_20;
  
  puVar3 = PTR_DAT_0066afec;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x704) = 0;
  local_20 = FUN_00405eec(*(undefined4 *)puVar3);
  if (-1 < local_20 + -1) {
    iVar9 = 0;
    do {
      *(undefined4 *)(*(int *)puVar3 + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 8 + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 4 + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0xc + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0x10 + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0x14 + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0x18 + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0x1c + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0x24 + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0x28 + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0x2c + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0x30 + iVar9 * 0x38) = 0;
      *(undefined4 *)(*(int *)puVar3 + 0x34 + iVar9 * 0x38) = 0;
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x50 + iVar9 * 0x2f8) < 0x50) {
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x50 + iVar9 * 0x2f8) = 0x50;
      }
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x54 + iVar9 * 0x2f8) < 0x50) {
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x54 + iVar9 * 0x2f8) = 0x50;
      }
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  local_20 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718);
  if (-1 < local_20 + -1) {
    iVar9 = 0;
    do {
      *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x30 + iVar9 * 0x80) = 1;
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  _DAT_006d3488 =
       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1a8 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  local_20 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (-1 < local_20 + -1) {
    iVar9 = 0;
    do {
      FUN_005deccc(param_1,iVar9);
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x114) = 1;
  local_20 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b154);
  if (-1 < local_20) {
    local_20 = local_20 + 1;
    iVar9 = 0;
    do {
      *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x10 + iVar9 * 600) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x30 + iVar9 * 600) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x34 + iVar9 * 600) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x38 + iVar9 * 600) = 0;
      iVar5 = 1;
      do {
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + -4 + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + 4 + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + 0x24 + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + 0x238 + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + 0x248 + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + 0x240 + iVar5 * 4) = 0;
        iVar7 = 1;
        do {
          *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + iVar5 * 0x2c + 0x24 + iVar7 * 4)
               = 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + iVar5 * 0x2c + 300 + iVar7 * 4) =
               0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + iVar5 * 0x58 + 0x4c + iVar7 * 8)
               = 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + iVar5 * 0x58 + 0x50 + iVar7 * 8)
               = 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + iVar5 * 0x2c + 0x184 + iVar7 * 4)
               = 0;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0xc);
        iVar5 = iVar5 + 1;
      } while (iVar5 != 3);
      iVar5 = 1;
      do {
        iVar7 = 1;
        do {
          *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + iVar5 * 0x18 + 0x1f0 + iVar7 * 4)
               = 0;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 7);
        iVar5 = iVar5 + 1;
      } while (iVar5 != 3);
      iVar5 = 0;
      do {
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar9 * 600 + 0x14 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 5);
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  FUN_004060a8(PTR_DAT_0066b154,PTR_DAT_00488c80,1,0);
  FUN_004060a8(PTR_DAT_0066b6b4,PTR_DAT_00488f20,1,0);
  FUN_004060a8(PTR_DAT_0066ae58,PTR_DAT_00488f40,1,0);
  FUN_004060a8(PTR_DAT_0066b128,PTR_DAT_00488ea0,1,0);
  FUN_004060a8(PTR_DAT_0066ae14,PTR_DAT_00488ec0,1,0);
  FUN_004060a8(PTR_DAT_0066b238,PTR_DAT_00488c00,1,0);
  FUN_004060a8(PTR_DAT_0066b3b8,PTR_DAT_00488ca0,1,0);
  FUN_004060a8(PTR_DAT_0066afa0,PTR_DAT_00488d20,1,0);
  local_20 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (0 < local_20) {
    iVar9 = 1;
    do {
      if (-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130)) {
        iVar5 = 1;
        do {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + iVar9 * 0x130 + 0x8c + iVar5 * 4) = 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + iVar9 * 0x130 + 0xb8 + iVar5 * 4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 != 10);
        *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar9 * 0x130) = 100;
        iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x11c + iVar9 * 0x130);
        if ((iVar5 == 0) || (iVar5 != *(int *)(PTR_DAT_0066ac78 + 0xc0))) {
          iVar5 = FUN_00652134(iVar9);
          *(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar9 * 0x130) =
               (longlong)ROUND((float)iVar5 * _DAT_005e0bd0);
        }
        else {
          uVar6 = FUN_00402c38();
          *(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar9 * 0x130) =
               (longlong)ROUND((float)CONCAT44(extraout_EDX,uVar6) * _DAT_005e0bd0);
        }
        if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130) * 0x2f8) == '\0') {
          iVar5 = FUN_00652590(iVar9);
          *(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x38 + iVar9 * 0x130) =
               (longlong)ROUND((float)iVar5 * _DAT_005e0bd0);
        }
        else if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar9 * 0x130) <
                 *(double *)(PTR_DAT_0066b574 + 0x2240)) {
          iVar5 = FUN_00652590(iVar9);
          *(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x38 + iVar9 * 0x130) =
               (longlong)ROUND((float)iVar5 * _DAT_005e0bd0);
        }
      }
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  local_20 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
  if (-1 < local_20 + -1) {
    iVar9 = 0;
    do {
      FUN_00652900(iVar9);
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if (PTR_DAT_0066ac78[0x171] != '\0') {
    iVar9 = 6;
    puVar10 = (undefined4 *)PTR_DAT_0066af90;
    do {
      *puVar10 = 0xffffffff;
      puVar10[1] = 0xffffffff;
      puVar10[6] = 0xffffffff;
      puVar10 = puVar10 + 0xc;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    FUN_005e0cc4(param_1);
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x188) = 1;
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x184) = 1;
    local_20 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
    if (-1 < local_20 + -1) {
      iVar9 = 0;
      do {
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + iVar9 * 0x2f8) = 0;
        iVar9 = iVar9 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  cVar4 = FUN_006500c8();
  if (cVar4 == '\0') {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x110) = 1;
  }
  else {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x110) = 0;
  }
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x118) = 1;
  local_20 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < local_20) {
    local_20 = local_20 + 1;
    iVar9 = 0;
    do {
      iVar5 = 0;
      do {
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar9 * 0x2f8 + 0xb4 + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar9 * 0x2f8 + 0xdc + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar9 * 0x2f8 + 0x104 + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar9 * 0x2f8 + 300 + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar9 * 0x2f8 + 0x154 + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar9 * 0x2f8 + 0x17c + iVar5 * 4) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar9 * 0x2f8 + 0x1a4 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 10);
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *PTR_DAT_0066ace0 = 0;
  local_20 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (0 < local_20) {
    iVar9 = 1;
    do {
      if (-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130)) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar9 * 0x130);
        *piVar1 = *piVar1 + 1;
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130) * 0x2f8) == '\0') &&
           (*(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar9 * 0x130) = 0,
           *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar9 * 0x130) != 2)) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar9 * 0x130) = 0;
        }
        if (((-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130)) &&
            (0x1f < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar9 * 0x130))) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar9 * 0x130) * 0x2f8) == '\0')) {
          bVar2 = false;
          if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar9 * 0x130) != 0) {
            iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar9 * 0x130);
            if (iVar5 < 0x27) {
              switch(iVar5) {
              case 0x1f:
              case 0x20:
                iVar5 = FUN_004032c8(100);
                if (0x62 < iVar5) {
                  bVar2 = true;
                }
                break;
              case 0x21:
              case 0x22:
                iVar5 = FUN_004032c8(100);
                if (0x55 < iVar5) {
                  bVar2 = true;
                }
                break;
              case 0x23:
                iVar5 = FUN_004032c8(100);
                if (0x32 < iVar5) {
                  bVar2 = true;
                }
                break;
              case 0x24:
                iVar5 = FUN_004032c8(100);
                if (0x1e < iVar5) {
                  bVar2 = true;
                }
                break;
              case 0x25:
              case 0x26:
                iVar5 = FUN_004032c8(100);
                if (0xf < iVar5) {
                  bVar2 = true;
                }
              }
            }
            else if (iVar5 < 0x2d) {
              if (iVar5 - 0x27U < 2) {
                iVar5 = FUN_004032c8(100);
                if (5 < iVar5) {
                  bVar2 = true;
                }
              }
              else if (iVar5 - 0x29U < 2) {
                iVar5 = FUN_004032c8(100);
                if (3 < iVar5) {
                  bVar2 = true;
                }
              }
              else if ((iVar5 - 0x2bU < 2) && (iVar5 = FUN_004032c8(100), 2 < iVar5)) {
                bVar2 = true;
              }
            }
            else if (iVar5 - 0x2dU < 2) {
              iVar5 = FUN_004032c8(100);
              if (1 < iVar5) {
                bVar2 = true;
              }
            }
            else if (iVar5 - 0x2fU < 2) {
              iVar5 = FUN_004032c8(100);
              if (1 < iVar5) {
                bVar2 = true;
              }
            }
            else if (iVar5 - 0x31U < 0x98) {
              bVar2 = true;
            }
          }
          if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar9 * 0x130) == 0) {
            iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar9 * 0x130);
            if (iVar5 < 0x29) {
              if (iVar5 - 0x1fU < 2) {
                iVar5 = FUN_004032c8(100);
                if (0x62 < iVar5) {
                  bVar2 = true;
                }
              }
              else if (iVar5 - 0x21U < 4) {
                iVar5 = FUN_004032c8(100);
                if (0x50 < iVar5) {
                  bVar2 = true;
                }
              }
              else if (iVar5 - 0x25U < 2) {
                iVar5 = FUN_004032c8(100);
                if (0x28 < iVar5) {
                  bVar2 = true;
                }
              }
              else if ((iVar5 - 0x27U < 2) && (iVar5 = FUN_004032c8(100), 0x1e < iVar5)) {
                bVar2 = true;
              }
            }
            else if (iVar5 < 0x2d) {
              if (iVar5 - 0x29U < 2) {
                iVar5 = FUN_004032c8(100);
                if (10 < iVar5) {
                  bVar2 = true;
                }
              }
              else if ((iVar5 - 0x2bU < 2) && (iVar5 = FUN_004032c8(100), 3 < iVar5)) {
                bVar2 = true;
              }
            }
            else if (iVar5 - 0x2dU < 2) {
              iVar5 = FUN_004032c8(100);
              if (1 < iVar5) {
                bVar2 = true;
              }
            }
            else if (iVar5 - 0x2fU < 2) {
              iVar5 = FUN_004032c8(100);
              if (1 < iVar5) {
                bVar2 = true;
              }
            }
            else if (iVar5 - 0x31U < 0x1c4) {
              bVar2 = true;
            }
          }
          if (bVar2) {
            FUN_00647f98(iVar9,0,*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar9 * 0x130));
          }
        }
      }
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  local_20 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < local_20) {
    local_20 = local_20 + 1;
    iVar9 = 0;
    do {
      FUN_00652988(iVar9);
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  FUN_005df914(param_1);
  local_20 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
  if (-1 < local_20 + -1) {
    iVar9 = 0;
    do {
      FUN_00652be0(iVar9);
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  FUN_00652ab8();
  FUN_00578de8();
  *(int *)(PTR_DAT_0066ac78 + 0xc0) = *(int *)(PTR_DAT_0066ac78 + 0xc0) + 1;
  iVar9 = 4;
  puVar10 = (undefined4 *)(PTR_DAT_0066ac78 + 0x648);
  do {
    iVar5 = 8;
    puVar8 = puVar10;
    do {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar10 = puVar10 + 8;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_20 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b718);
  if (-1 < local_20) {
    local_20 = local_20 + 1;
    iVar9 = 0;
    do {
      *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x38 + iVar9 * 0x80) = 0;
      *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x39 + iVar9 * 0x80) = 0;
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if ((PTR_DAT_0066ac78[0x17f] != '\0') && (cVar4 = FUN_0064fd04(), cVar4 != '\0')) {
    PTR_DAT_0066ac78[0x708] = 0;
    FUN_005d45c4();
  }
  if ((PTR_DAT_0066ac78[0x181] != '\0') && (cVar4 = FUN_0064fd30(), cVar4 != '\0')) {
    PTR_DAT_0066ac78[0x708] = 0;
    FUN_005d3ba4();
  }
  if ((PTR_DAT_0066ac78[0x180] != '\0') && (cVar4 = FUN_0064fd5c(), cVar4 != '\0')) {
    PTR_DAT_0066ac78[0x708] = 0;
    FUN_005d3f80();
  }
  FUN_00656abc();
  iVar9 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (-1 < iVar9 + -1) {
    iVar5 = 0;
    local_20 = iVar9;
    do {
      FUN_0065a2bc(1,iVar5);
      iVar5 = iVar5 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    iVar5 = 0;
    pcVar11 = PTR_DAT_0066ae98 + 0x52d;
    do {
      if (*pcVar11 != '\0') {
        FUN_0065a2bc(3,iVar5);
      }
      iVar5 = iVar5 + 1;
      pcVar11 = pcVar11 + 0x568;
    } while (iVar5 != 0x1b);
  }
  if ((PTR_DAT_0066ac78[0x10e] != '\0') && (-1 < iVar9 + -1)) {
    iVar5 = 0;
    local_20 = iVar9;
    do {
      FUN_0065a2bc(2,iVar5);
      iVar5 = iVar5 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if (PTR_DAT_0066ac78[0x171] != '\0') {
    FUN_00633528(DAT_006d34b8,1);
  }
  if ((PTR_DAT_0066ac78[0x10e] != '\0') &&
     (local_20 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066aca0), -1 < local_20)) {
    local_20 = local_20 + 1;
    iVar9 = 0;
    do {
      if (((*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar9 * 0x294) == 0x1d) &&
          (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2)) &&
         (0x50 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x148 + iVar9 * 0x294))) {
        FUN_006341d8(iVar9);
      }
      else {
        FUN_00633910(iVar9);
      }
      iVar9 = iVar9 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  FUN_005deb00(param_1);
  return;
}

