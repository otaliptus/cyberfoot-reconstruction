// Address: 005b570c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x005b6058) */

void FUN_005b570c(char param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  char *pcVar14;
  int iVar15;
  undefined4 uVar16;
  int local_70;
  int local_6c;
  int local_54;
  int local_48;
  int local_30;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int *local_1c;
  int *piStack_18;
  
  local_70 = 0x14;
  puVar13 = (undefined4 *)PTR_DAT_0066afac;
  do {
    *puVar13 = 0xffffffff;
    puVar13 = puVar13 + 1;
    local_70 = local_70 + -1;
  } while (local_70 != 0);
  local_30 = 0;
  local_30._0_1_ = '\0';
  local_48 = 0;
  local_70 = 4;
  puVar13 = (undefined4 *)PTR_DAT_0066b6d0;
  do {
    iVar15 = 5;
    puVar11 = puVar13;
    do {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    puVar13 = puVar13 + 4;
    local_70 = local_70 + -1;
  } while (local_70 != 0);
  if (param_1 == '\0') {
    local_70 = 0x1b;
    puVar11 = (undefined4 *)(PTR_DAT_0066ae98 + 0x530);
    puVar13 = (undefined4 *)PTR_DAT_0066b674;
    do {
      *puVar11 = *puVar13;
      puVar11 = puVar11 + 0x15a;
      puVar13 = puVar13 + 1;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
    local_70 = 0x1b;
    puVar11 = (undefined4 *)(PTR_DAT_0066ae98 + 0x564);
    puVar13 = (undefined4 *)PTR_DAT_0066b41c;
    do {
      *puVar11 = *puVar13;
      puVar11 = puVar11 + 0x15a;
      puVar13 = puVar13 + 1;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
    FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
    local_28 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
    if (-1 < local_28) {
      local_28 = local_28 + 1;
      local_70 = 0;
      do {
        if (((*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + local_70 * 0x2f8) == 0x1d) &&
            (-1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + local_70 * 0x2f8))) &&
           (*(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + local_70 * 0x2f8) < 0x1b)) {
          (&DAT_006d2a88)[*(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + local_70 * 0x2f8)] =
               (&DAT_006d2a88)[*(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + local_70 * 0x2f8)] + 1;
        }
        local_70 = local_70 + 1;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    local_70 = 0x1b;
    piVar3 = &DAT_006d2a88;
    piVar12 = (int *)(PTR_DAT_0066ae98 + 0x530);
    do {
      if (*piVar3 < *(int *)(PTR_DAT_0066b50c + *piVar12 * 0x30 + -0x30)) {
        *piVar12 = 1;
      }
      piVar12 = piVar12 + 0x15a;
      piVar3 = piVar3 + 1;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
    if (((*PTR_DAT_0066b144 != '\0') && (*(int *)(PTR_DAT_0066ae98 + 0x8c58) == 2)) &&
       (cVar2 = FUN_005b5678(), cVar2 != '\0')) {
      local_30 = 1;
    }
    local_70 = 0x1b;
    piVar12 = (int *)(PTR_DAT_0066ae98 + 0x530);
    piVar3 = &DAT_006d2a88;
    do {
      if (*piVar12 == 1) {
        iVar15 = *piVar3;
        if (iVar15 - 6U < 6) {
          piVar12[-8] = 1;
        }
        else if (iVar15 - 0xcU < 6) {
          piVar12[-8] = 2;
        }
        else if (iVar15 - 0x12U < 6) {
          piVar12[-8] = 3;
        }
        else if (iVar15 - 0x18U < 0x26f9) {
          piVar12[-8] = 4;
        }
      }
      piVar3 = piVar3 + 1;
      piVar12 = piVar12 + 0x15a;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
    local_70 = 0x1b;
    piVar3 = (int *)(PTR_DAT_0066ae98 + 0x530);
    piVar12 = &DAT_006d2a88;
    do {
      if (1 < *piVar3) {
        piVar3[-8] = 1;
        local_48 = *piVar12 - *(int *)(PTR_DAT_0066b50c + *piVar3 * 0x30 + -0x30);
        if (local_48 - 6U < 6) {
          piVar3[-8] = 2;
        }
        else if (local_48 - 0xcU < 6) {
          piVar3[-8] = 3;
        }
        else if (local_48 - 0x12U < 0x26ff) {
          piVar3[-8] = 4;
        }
      }
      piVar12 = piVar12 + 1;
      piVar3 = piVar3 + 0x15a;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
    local_70 = 0x1b;
    puVar13 = (undefined4 *)PTR_DAT_0066ae98;
    do {
      iVar15 = 5;
      local_24 = puVar13;
      do {
        local_6c = 0x14;
        puVar11 = local_24;
        do {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
          local_6c = local_6c + -1;
        } while (local_6c != 0);
        local_24 = local_24 + 0x14;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      puVar13 = puVar13 + 0x15a;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
    local_70 = 0x1b;
    puVar13 = (undefined4 *)(PTR_DAT_0066ae98 + 400);
    do {
      iVar15 = 4;
      local_20 = puVar13;
      do {
        local_6c = 5;
        puVar11 = local_20;
        do {
          iVar8 = 10;
          puVar4 = puVar11;
          do {
            *puVar4 = 0xffffffff;
            puVar4 = puVar4 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          puVar11 = puVar11 + 10;
          local_6c = local_6c + -1;
        } while (local_6c != 0);
        local_20 = local_20 + 0x32;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      puVar13 = puVar13 + 0x15a;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
    local_70 = 0;
    piVar3 = (int *)(PTR_DAT_0066ae98 + 0x510);
    do {
      if (0 < *piVar3) {
        *(undefined1 *)((int)piVar3 + 0x1d) = 1;
        uVar16 = 0x5b5acb;
        FUN_004060a8(&DAT_006d2af4,PTR_DAT_005b55dc,1,0);
        local_54 = 0;
        local_28 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
        if (-1 < local_28) {
          local_28 = local_28 + 1;
          iVar15 = 0;
          do {
            if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar15 * 0x2f8) == 0x1d) &&
               (*(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + iVar15 * 0x2f8) == local_70)) {
              local_54 = local_54 + 1;
              uVar16 = 0x5b5b3c;
              FUN_004060a8(&DAT_006d2af4,PTR_DAT_005b55dc,1,local_54);
              *(int *)(DAT_006d2af4 + -0x10 + local_54 * 0x10) = iVar15;
              *(undefined4 *)(DAT_006d2af4 + -0xc + local_54 * 0x10) =
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar15 * 0x2f8);
              uVar5 = FUN_004032c8(100);
              *(undefined4 *)(DAT_006d2af4 + -8 + local_54 * 0x10) = uVar5;
              *(undefined4 *)(DAT_006d2af4 + -4 + local_54 * 0x10) = 0;
              if (((char)local_30 != '\0') && (iVar8 = FUN_005b5654(iVar15), 0 < iVar8)) {
                *(int *)(DAT_006d2af4 + -4 + local_54 * 0x10) = iVar8;
              }
            }
            iVar15 = iVar15 + 1;
            local_28 = local_28 + -1;
          } while (local_28 != 0);
        }
        DAT_006d2af8 = FUN_00405eec(DAT_006d2af4);
        FUN_004bcdb0(DAT_006d2af4,0x10,0,uVar16,DAT_006d2af8 + -1,&LAB_005b55fc);
        if (-1 < local_48 + -1) {
          local_30 = local_48;
          iVar15 = 0;
          piVar12 = piVar3 + -0x144;
          do {
            *piVar12 = *(int *)(DAT_006d2af4 + iVar15 * 0x10);
            iVar15 = iVar15 + 1;
            piVar12 = piVar12 + 1;
            local_30 = local_30 + -1;
          } while (local_30 != 0);
        }
        iVar15 = local_48;
        if (1 < *piVar3) {
          if (local_48 <= local_48 + 5) {
            local_30 = ((local_48 + 5) - local_48) + 1;
            do {
              piVar3[(iVar15 - local_48) + -0x130] = *(int *)(DAT_006d2af4 + iVar15 * 0x10);
              iVar15 = iVar15 + 1;
              local_30 = local_30 + -1;
            } while (local_30 != 0);
          }
          iVar15 = local_48 + 6;
        }
        if (2 < *piVar3) {
          if (iVar15 <= iVar15 + 5) {
            local_30 = ((iVar15 + 5) - iVar15) + 1;
            iVar8 = iVar15;
            do {
              piVar3[(iVar8 - iVar15) + -0x11c] = *(int *)(DAT_006d2af4 + iVar8 * 0x10);
              iVar8 = iVar8 + 1;
              local_30 = local_30 + -1;
            } while (local_30 != 0);
          }
          iVar15 = iVar15 + 6;
        }
        if (3 < *piVar3) {
          if (iVar15 <= iVar15 + 5) {
            local_30 = ((iVar15 + 5) - iVar15) + 1;
            iVar8 = iVar15;
            do {
              piVar3[(iVar8 - iVar15) + -0x108] = *(int *)(DAT_006d2af4 + iVar8 * 0x10);
              iVar8 = iVar8 + 1;
              local_30 = local_30 + -1;
            } while (local_30 != 0);
          }
          iVar15 = iVar15 + 6;
        }
        if (iVar15 <= iVar15 + 5) {
          local_30 = ((iVar15 + 5) - iVar15) + 1;
          iVar8 = iVar15;
          do {
            iVar6 = FUN_00405eec(DAT_006d2af4);
            if (iVar8 < iVar6) {
              piVar3[*piVar3 * 0x14 + (iVar8 - iVar15) + -0x144] =
                   *(int *)(DAT_006d2af4 + iVar8 * 0x10);
            }
            iVar8 = iVar8 + 1;
            local_30 = local_30 + -1;
          } while (local_30 != 0);
        }
        FUN_004060a8(&DAT_006d2af4,PTR_DAT_005b55dc,1,0);
      }
      local_70 = local_70 + 1;
      piVar3 = piVar3 + 0x15a;
    } while (local_70 != 0x1b);
  }
  local_70 = 0;
  piVar3 = (int *)(PTR_DAT_0066ae98 + 0x530);
  do {
    if (1 < *(int *)(PTR_DAT_0066b50c + *piVar3 * 0x30 + -0x2c)) {
      local_6c = 4;
      puVar13 = (undefined4 *)PTR_DAT_0066b6d0;
      do {
        iVar15 = 5;
        puVar11 = puVar13;
        do {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        puVar13 = puVar13 + 4;
        local_6c = local_6c + -1;
      } while (local_6c != 0);
      FUN_00402c38();
      iVar15 = 4;
      piVar12 = piVar3 + -0x14c;
      piVar7 = (int *)PTR_DAT_0066b6d0;
      do {
        *piVar7 = *piVar12;
        piVar7 = piVar7 + 1;
        piVar12 = piVar12 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      iVar15 = 4;
      piVar12 = piVar3 + -0x148;
      piVar7 = (int *)(PTR_DAT_0066b6d0 + 0x10);
      do {
        *piVar7 = *piVar12;
        piVar7 = piVar7 + 1;
        piVar12 = piVar12 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      iVar15 = 4;
      piVar12 = piVar3 + -0x144;
      piVar7 = (int *)(PTR_DAT_0066b6d0 + 0x20);
      do {
        *piVar7 = *piVar12;
        piVar7 = piVar7 + 1;
        piVar12 = piVar12 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      iVar15 = 4;
      piVar12 = piVar3 + -0x140;
      piVar7 = (int *)(PTR_DAT_0066b6d0 + 0x30);
      do {
        *piVar7 = *piVar12;
        piVar7 = piVar7 + 1;
        piVar12 = piVar12 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      iVar15 = 4;
      piVar12 = piVar3 + -0x13c;
      piVar7 = (int *)(PTR_DAT_0066b6d0 + 0x40);
      do {
        *piVar7 = *piVar12;
        piVar7 = piVar7 + 1;
        piVar12 = piVar12 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      if (*piVar3 == -8) {
        local_6c = 5;
        piVar12 = (int *)(PTR_DAT_0066b6d0 + 0xc);
        do {
          if (-1 < *piVar12) {
            iVar15 = 4;
            piVar7 = piVar12 + -3;
            do {
              iVar8 = FUN_004032c8(4);
              if (-1 < piVar12[iVar8 + -3]) {
                iVar6 = *piVar7;
                *piVar7 = piVar12[iVar8 + -3];
                piVar12[iVar8 + -3] = iVar6;
              }
              piVar7 = piVar7 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          piVar12 = piVar12 + 4;
          local_6c = local_6c + -1;
        } while (local_6c != 0);
      }
      if (*piVar3 == 2) {
        iVar15 = 4;
        piVar12 = piVar3 + -0xe8;
        piVar7 = (int *)PTR_DAT_0066b6d0;
        do {
          local_6c = 5;
          piVar9 = piVar7;
          local_1c = piVar12;
          do {
            *local_1c = *piVar9;
            local_1c = local_1c + 1;
            piVar9 = piVar9 + 4;
            local_6c = local_6c + -1;
          } while (local_6c != 0);
          piVar12 = piVar12 + 10;
          piVar7 = piVar7 + 1;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      if ((local_70 == 0x19) && ((char)local_30 != '\0')) {
        iVar15 = 1;
        iVar8 = 4;
        piVar12 = piVar3 + -0xe8;
        do {
          local_6c = 5;
          piVar7 = piVar12;
          do {
            *piVar7 = *(int *)(PTR_DAT_0066afac + iVar15 * 4 + -4);
            iVar15 = iVar15 + 1;
            piVar7 = piVar7 + 1;
            local_6c = local_6c + -1;
          } while (local_6c != 0);
          piVar12 = piVar12 + 10;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (*piVar3 == 7) {
        piVar3[-0xe8] = *(int *)PTR_DAT_0066b6d0;
        piVar3[-0xe7] = *(int *)(PTR_DAT_0066b6d0 + 8);
        piVar3[-0xe6] = *(int *)(PTR_DAT_0066b6d0 + 0x10);
        piVar3[-0xe5] = *(int *)(PTR_DAT_0066b6d0 + 0x18);
        piVar3[-0xe4] = *(int *)(PTR_DAT_0066b6d0 + 0x20);
        piVar3[-0xe3] = *(int *)(PTR_DAT_0066b6d0 + 0x28);
        piVar3[-0xde] = *(int *)(PTR_DAT_0066b6d0 + 4);
        piVar3[-0xdd] = *(int *)(PTR_DAT_0066b6d0 + 0xc);
        piVar3[-0xdc] = *(int *)(PTR_DAT_0066b6d0 + 0x14);
        piVar3[-0xdb] = *(int *)(PTR_DAT_0066b6d0 + 0x1c);
        piVar3[-0xda] = *(int *)(PTR_DAT_0066b6d0 + 0x24);
        piVar3[-0xd9] = *(int *)(PTR_DAT_0066b6d0 + 0x2c);
      }
    }
    local_70 = local_70 + 1;
    piVar3 = piVar3 + 0x15a;
  } while (local_70 != 0x1b);
  local_70 = 0x1b;
  pcVar14 = PTR_DAT_0066ae98 + 0x52d;
  do {
    if ((*pcVar14 != '\0') && (local_28 = *(int *)(pcVar14 + -0x1d) + 1, 0 < local_28)) {
      pcVar10 = pcVar14 + -0x4dd;
      do {
        iVar15 = 6;
        piVar3 = (int *)(pcVar10 + -0x50);
        do {
          iVar8 = FUN_004032c8(6);
          iVar8 = iVar8 + 1;
          if ((-1 < *(int *)(pcVar10 + iVar8 * 4 + -0x54)) && (-1 < *piVar3)) {
            iVar6 = *piVar3;
            *piVar3 = *(int *)(pcVar10 + iVar8 * 4 + -0x54);
            *(int *)(pcVar10 + iVar8 * 4 + -0x54) = iVar6;
          }
          piVar3 = piVar3 + 1;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        pcVar10 = pcVar10 + 0x50;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    pcVar14 = pcVar14 + 0x568;
    local_70 = local_70 + -1;
  } while (local_70 != 0);
  local_28 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < local_28) {
    local_28 = local_28 + 1;
    local_70 = 0;
    do {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x80 + local_70 * 0x2f8) = 0;
      local_70 = local_70 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  local_70 = 0x1b;
  piVar3 = (int *)(PTR_DAT_0066ae98 + 0x510);
  do {
    local_28 = *piVar3 + 1;
    if (0 < local_28) {
      local_6c = 1;
      piStack_18 = piVar3 + -0x144;
      do {
        if (0 < *piVar3) {
          iVar15 = 0x14;
          piVar12 = piStack_18;
          do {
            if (-1 < *piVar12) {
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x80 + *piVar12 * 0x2f8) = local_6c;
            }
            if ((-1 < *piVar12) &&
               (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar12 * 0x2f8) != '\0')) {
              *(undefined1 *)(piVar3 + 7) = 1;
            }
            if (-1 < *piVar12) {
              *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x216 + *piVar12 * 0x2f8) = 1;
            }
            piVar12 = piVar12 + 1;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        local_6c = local_6c + 1;
        piStack_18 = piStack_18 + 0x14;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    piVar3 = piVar3 + 0x15a;
    local_70 = local_70 + -1;
  } while (local_70 != 0);
  bVar1 = false;
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    local_70 = 0x1b;
    pcVar14 = PTR_DAT_0066ae98 + 0x52d;
    do {
      if (*pcVar14 != '\0') {
        bVar1 = true;
        break;
      }
      pcVar14 = pcVar14 + 0x568;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
    if (!bVar1) {
      PTR_DAT_0066ac78[0x170] = 0;
    }
  }
  return;
}

