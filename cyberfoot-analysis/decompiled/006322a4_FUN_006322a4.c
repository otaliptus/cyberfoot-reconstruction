// Address: 006322a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006322a4(char param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  byte bVar12;
  int local_164;
  int local_160;
  int local_14c;
  int local_148;
  undefined4 *local_144;
  int *local_140 [5];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  int local_e0 [5];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [5];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [5];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [11];
  
  bVar12 = 0;
  iVar7 = 0x1b;
  local_144 = &DAT_006d4bb0;
  do {
    iVar2 = 0xb;
    puVar4 = local_144;
    do {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_144 = local_144 + 0xb;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (param_1 == '\0') {
    iVar7 = 0x1c;
    puVar4 = &DAT_0066aa84;
    puVar9 = &DAT_006d4bb0;
    do {
      iVar2 = FUN_0065208c(*puVar4);
      if (iVar2 == -1) {
        FUN_0065b4bc(*puVar4,local_3c);
        puVar8 = local_3c;
        puVar10 = puVar9;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
        }
      }
      else {
        iVar2 = FUN_0065208c(*puVar4);
        puVar8 = (undefined4 *)(*(int *)PTR_DAT_0066b1f0 + iVar2 * 0x2c);
        puVar10 = puVar9;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
        }
      }
      puVar9 = puVar9 + 0xb;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    iVar7 = 0x1c;
    puVar4 = &DAT_0066aa84;
    puVar9 = &DAT_006d4bb0;
    do {
      FUN_0065b4bc(*puVar4,local_3c);
      puVar8 = local_3c;
      puVar10 = puVar9;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      puVar9 = puVar9 + 0xb;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_e0[1] = DAT_006d4bb0;
  local_e0[2] = DAT_006d4bb4;
  local_e0[3] = DAT_006d4bdc;
  local_e0[4] = DAT_006d4be0;
  local_cc = DAT_006d4c08;
  local_c8 = DAT_006d4c0c;
  local_c4 = DAT_006d4c34;
  local_c0[0] = DAT_006d4c38;
  if (PTR_DAT_0066ac78[0x172] != '\0') {
    local_60[1] = DAT_006d4bc0;
    local_60[2] = DAT_006d4bc4;
    local_60[3] = DAT_006d4bec;
    local_60[4] = DAT_006d4bf0;
    local_4c = DAT_006d4c18;
    local_48 = DAT_006d4c1c;
    local_44 = DAT_006d4c40;
    local_40 = DAT_006d4c44;
  }
  iVar7 = 8;
  piVar6 = local_e0;
  do {
    piVar6 = piVar6 + 1;
    iVar3 = FUN_004032c8(8);
    iVar2 = *piVar6;
    *piVar6 = local_e0[iVar3 + 1];
    local_e0[iVar3 + 1] = iVar2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (PTR_DAT_0066ac78[0x172] != '\0') {
    iVar7 = 8;
    puVar4 = local_60;
    do {
      puVar4 = puVar4 + 1;
      iVar2 = FUN_004032c8(8);
      uVar1 = *puVar4;
      *puVar4 = local_60[iVar2 + 1];
      local_60[iVar2 + 1] = uVar1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_140[1] = (int *)DAT_006d4bb8;
  local_140[2] = (int *)DAT_006d4bbc;
  local_140[3] = (int *)DAT_006d4be4;
  local_140[4] = (int *)DAT_006d4be8;
  local_12c = DAT_006d4c10;
  local_128 = DAT_006d4c14;
  local_124 = DAT_006d4c3c;
  local_120 = DAT_006d4c60;
  local_11c = DAT_006d4c64;
  local_118 = DAT_006d4c68;
  local_114 = DAT_006d4c8c;
  local_110 = DAT_006d4c90;
  local_10c = DAT_006d4cb8;
  local_108 = DAT_006d4cbc;
  local_104 = DAT_006d4ce4;
  local_100 = DAT_006d4d10;
  local_fc = DAT_006d4d3c;
  local_f8 = DAT_006d4d68;
  local_f4 = DAT_006d4d94;
  local_f0 = DAT_006d4dc0;
  local_ec = DAT_006d4e18;
  if (-1 < DAT_006d4e44) {
    iVar7 = FUN_004032c8(10);
    if (iVar7 < 7) {
      local_e8 = DAT_006d4e44;
    }
    else {
      local_e8 = DAT_006d4dec;
    }
  }
  iVar7 = 0;
  local_e4 = -1;
  if ((DAT_006d5028 < 0) ||
     (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + DAT_006d5028 * 0x2f8) == '\0')) {
    if ((DAT_006d4e70 < 0) ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + DAT_006d4e70 * 0x2f8) == '\0')) {
      if ((-1 < DAT_006d4e9c) &&
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + DAT_006d4e9c * 0x2f8) != '\0')) {
        local_e4 = DAT_006d4e9c;
      }
    }
    else {
      local_e4 = DAT_006d4e70;
    }
  }
  else {
    local_e4 = DAT_006d5028;
  }
  for (; (local_e4 == -1 && (iVar7 < 0x32)); iVar7 = iVar7 + 1) {
    iVar2 = FUN_004032c8(3);
    if (iVar2 == 0) {
      local_e4 = DAT_006d5028;
    }
    else if (iVar2 == 1) {
      local_e4 = DAT_006d4e70;
    }
    else if (iVar2 == 2) {
      local_e4 = DAT_006d4e9c;
    }
  }
  iVar7 = 0;
  local_e0[0] = -1;
  if ((DAT_006d4ec8 < 0) ||
     (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + DAT_006d4ec8 * 0x2f8) == '\0')) {
    if ((DAT_006d4ef4 < 0) ||
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + DAT_006d4ef4 * 0x2f8) == '\0')) {
      if ((DAT_006d4f20 < 0) ||
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + DAT_006d4f20 * 0x2f8) == '\0')) {
        if ((-1 < DAT_006d5054) &&
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + DAT_006d5054 * 0x2f8) != '\0')) {
          local_e0[0] = DAT_006d5054;
        }
      }
      else {
        local_e0[0] = DAT_006d4f20;
      }
    }
    else {
      local_e0[0] = DAT_006d4ef4;
    }
  }
  else {
    local_e0[0] = DAT_006d4ec8;
  }
  for (; (local_e0[0] == -1 && (iVar7 < 0x32)); iVar7 = iVar7 + 1) {
    iVar2 = FUN_004032c8(4);
    if (iVar2 == 0) {
      local_e0[0] = DAT_006d4ec8;
    }
    else if (iVar2 == 1) {
      local_e0[0] = DAT_006d4ef4;
    }
    else if (iVar2 == 2) {
      local_e0[0] = DAT_006d4f20;
    }
    else if (iVar2 == 3) {
      local_e0[0] = DAT_006d5054;
    }
  }
  iVar7 = 0x18;
  ppiVar5 = local_140;
  do {
    ppiVar5 = ppiVar5 + 1;
    iVar2 = FUN_004032c8(0x18);
    piVar6 = *ppiVar5;
    *ppiVar5 = local_140[iVar2 + 1];
    local_140[iVar2 + 1] = piVar6;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_160 = 0;
  iVar7 = 8;
  piVar6 = local_e0;
  piVar11 = (int *)(PTR_DAT_0066ac78 + 0x22c);
  do {
    piVar6 = piVar6 + 1;
    *piVar11 = *piVar6;
    piVar11 = piVar11 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 8;
  puVar4 = (undefined4 *)(PTR_DAT_0066ac78 + 0x230);
  do {
    iVar2 = 3;
    puVar9 = puVar4;
    do {
      local_160 = local_160 + 1;
      *puVar9 = local_140[local_160];
      puVar9 = puVar9 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar4 = puVar4 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (PTR_DAT_0066ac78[0x172] != '\0') {
    local_c0[1] = DAT_006d4bc8;
    local_c0[2] = DAT_006d4bf4;
    local_c0[3] = DAT_006d4c20;
    local_c0[4] = DAT_006d4c6c;
    local_ac = DAT_006d4c70;
    local_a8 = DAT_006d4c94;
    local_a4 = DAT_006d4cc0;
    local_a0 = DAT_006d4cc4;
    local_9c = DAT_006d4ce8;
    local_98 = DAT_006d4cec;
    local_94 = DAT_006d4d14;
    local_90 = DAT_006d4d40;
    local_8c = DAT_006d4d6c;
    local_88 = DAT_006d4d98;
    local_84 = DAT_006d4dc4;
    local_80 = DAT_006d4e1c;
    local_7c = DAT_006d4f4c;
    local_78 = DAT_006d4f78;
    local_74 = DAT_006d4fa4;
    local_70 = DAT_006d4fd0;
    local_6c = DAT_006d4ffc;
    local_68 = DAT_006d4c98;
    local_64 = DAT_006d4c4c;
    local_60[0] = DAT_006d4e20;
    iVar7 = 0x18;
    puVar4 = local_c0;
    do {
      puVar4 = puVar4 + 1;
      iVar2 = FUN_004032c8(0x18);
      uVar1 = *puVar4;
      *puVar4 = local_c0[iVar2 + 1];
      local_c0[iVar2 + 1] = uVar1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    local_160 = 0;
    iVar7 = 8;
    puVar4 = local_60;
    puVar9 = (undefined4 *)(PTR_DAT_0066ac78 + 0x32c);
    do {
      puVar4 = puVar4 + 1;
      *puVar9 = *puVar4;
      puVar9 = puVar9 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = 8;
    puVar4 = (undefined4 *)(PTR_DAT_0066ac78 + 0x330);
    do {
      iVar2 = 3;
      puVar9 = puVar4;
      do {
        local_160 = local_160 + 1;
        *puVar9 = local_c0[local_160];
        puVar9 = puVar9 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      puVar4 = puVar4 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_148 = *(int *)(PTR_DAT_0066ac78 + 0x13c);
  if (0 < local_148) {
    piVar6 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      iVar7 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar6 * 0x2f8));
      if ((iVar7 == 0) &&
         (iVar7 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar6 * 0x2f8)),
         *(char *)(*(int *)PTR_DAT_0066aca0 + 0x14c + iVar7 * 0x294) != '\0')) {
        iVar2 = -1;
        local_14c = -1;
        iVar7 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar6 * 0x2f8));
        iVar7 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x150 + iVar7 * 0x294);
        local_164 = 8;
        local_140[0] = (int *)(PTR_DAT_0066ac78 + 0x22c);
        do {
          iVar3 = 4;
          piVar11 = local_140[0];
          do {
            if (iVar7 == *piVar11) {
              iVar2 = 1;
            }
            piVar11 = piVar11 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          local_140[0] = local_140[0] + 4;
          local_164 = local_164 + -1;
        } while (local_164 != 0);
        if ((iVar2 == -1) && (-1 < iVar7)) {
          local_164 = 1;
          local_140[0] = (int *)(PTR_DAT_0066ac78 + 0x22c);
          do {
            iVar2 = 1;
            piVar11 = local_140[0];
            do {
              if ((*piVar11 == DAT_006d4dec) || (*piVar11 == DAT_006d4e44)) {
                local_14c = local_164;
                if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar11 * 0x2f8) == '\0') {
                  *piVar11 = iVar7;
                }
                break;
              }
              iVar2 = iVar2 + 1;
              piVar11 = piVar11 + 1;
            } while (iVar2 != 5);
            local_164 = local_164 + 1;
            local_140[0] = local_140[0] + 4;
          } while (local_164 != 9);
          if (0 < local_14c) break;
        }
      }
      piVar6 = piVar6 + 1;
      local_148 = local_148 + -1;
    } while (local_148 != 0);
  }
  iVar7 = 1;
  piVar6 = (int *)(PTR_DAT_0066ac78 + 0x22c);
  do {
    iVar2 = 4;
    piVar11 = piVar6;
    do {
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x84 + *piVar11 * 0x2f8) = iVar7;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar11 * 0x2f8) = 1;
      piVar11 = piVar11 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 4;
  } while (iVar7 != 9);
  iVar7 = 1;
  piVar6 = (int *)(PTR_DAT_0066ac78 + 0x32c);
  do {
    iVar2 = 4;
    piVar11 = piVar6;
    do {
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x88 + *piVar11 * 0x2f8) = iVar7;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x218 + *piVar11 * 0x2f8) = 1;
      piVar11 = piVar11 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 4;
  } while (iVar7 != 9);
  return;
}

