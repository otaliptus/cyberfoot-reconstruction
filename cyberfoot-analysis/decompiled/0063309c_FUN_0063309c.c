// Address: 0063309c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0063309c(char param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  byte bVar12;
  int local_160;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
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
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0 [5];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_3c [11];
  
  bVar12 = 0;
  iVar6 = 0x1b;
  puVar3 = &DAT_006d4bb0;
  do {
    iVar5 = 0xb;
    puVar9 = puVar3;
    do {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar3 = puVar3 + 0xb;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (param_1 == '\0') {
    iVar6 = 10;
    puVar9 = &DAT_0066ab3c;
    puVar3 = &DAT_006d4bb0;
    do {
      iVar5 = FUN_0065208c(*puVar9);
      if (iVar5 == -1) {
        FUN_0065b4bc(*puVar9,local_3c);
        puVar8 = local_3c;
        puVar10 = puVar3;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
        }
      }
      else {
        iVar5 = FUN_0065208c(*puVar9);
        puVar8 = (undefined4 *)(*(int *)PTR_DAT_0066b1f0 + iVar5 * 0x2c);
        puVar10 = puVar3;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
        }
      }
      puVar3 = puVar3 + 0xb;
      puVar9 = puVar9 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    iVar6 = 10;
    puVar9 = &DAT_0066ab3c;
    puVar3 = &DAT_006d4bb0;
    do {
      FUN_0065b4bc(*puVar9,local_3c);
      puVar8 = local_3c;
      puVar10 = puVar3;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      puVar3 = puVar3 + 0xb;
      puVar9 = puVar9 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_e0[1] = DAT_006d4bb0;
  local_e0[2] = DAT_006d4bb4;
  local_e0[3] = DAT_006d4bdc;
  local_e0[4] = DAT_006d4be0;
  local_cc = DAT_006d4c08;
  local_c8 = DAT_006d4c0c;
  local_c4 = DAT_006d4c34;
  local_c0 = DAT_006d4c38;
  iVar6 = 8;
  puVar3 = local_e0;
  do {
    puVar3 = puVar3 + 1;
    iVar5 = FUN_004032c8(8);
    uVar1 = *puVar3;
    *puVar3 = local_e0[iVar5 + 1];
    local_e0[iVar5 + 1] = uVar1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_140[1] = (int *)DAT_006d4bb8;
  local_140[2] = (int *)DAT_006d4bbc;
  local_140[3] = (int *)DAT_006d4be4;
  local_140[4] = (int *)DAT_006d4be8;
  local_12c = DAT_006d4c10;
  local_128 = DAT_006d4c14;
  local_124 = DAT_006d4c3c;
  local_120 = DAT_006d4c40;
  local_11c = DAT_006d4c60;
  local_118 = DAT_006d4c64;
  local_114 = DAT_006d4c68;
  local_110 = DAT_006d4c6c;
  local_10c = DAT_006d4c8c;
  local_108 = DAT_006d4c90;
  local_104 = DAT_006d4c94;
  local_100 = DAT_006d4cb8;
  local_fc = DAT_006d4cbc;
  local_f8 = DAT_006d4cc0;
  local_f4 = DAT_006d4cc4;
  local_f0 = DAT_006d4ce4;
  local_ec = DAT_006d4ce8;
  local_e8 = DAT_006d4d10;
  local_e4 = DAT_006d4d14;
  local_e0[0] = DAT_006d4d3c;
  iVar6 = 0x18;
  ppiVar7 = local_140;
  do {
    ppiVar7 = ppiVar7 + 1;
    iVar5 = FUN_004032c8(0x18);
    piVar11 = *ppiVar7;
    *ppiVar7 = local_140[iVar5 + 1];
    local_140[iVar5 + 1] = piVar11;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_160 = 0;
  iVar6 = 8;
  puVar3 = local_e0;
  puVar9 = (undefined4 *)(PTR_DAT_0066ac78 + 0x42c);
  do {
    puVar3 = puVar3 + 1;
    *puVar9 = *puVar3;
    puVar9 = puVar9 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 8;
  puVar3 = (undefined4 *)(PTR_DAT_0066ac78 + 0x430);
  do {
    iVar5 = 3;
    puVar9 = puVar3;
    do {
      local_160 = local_160 + 1;
      *puVar9 = local_140[local_160];
      puVar9 = puVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar3 = puVar3 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_144 = *(int *)(PTR_DAT_0066ac78 + 0x13c);
  if (0 < local_144) {
    piVar11 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      iVar6 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar11 * 0x2f8));
      if ((iVar6 == 3) &&
         (iVar6 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar11 * 0x2f8)),
         *(char *)(*(int *)PTR_DAT_0066aca0 + 0x14c + iVar6 * 0x294) != '\0')) {
        local_150 = -1;
        local_14c = -1;
        iVar6 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar11 * 0x2f8));
        iVar6 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x150 + iVar6 * 0x294);
        local_148 = 8;
        local_140[0] = (int *)(PTR_DAT_0066ac78 + 0x42c);
        do {
          iVar5 = 4;
          piVar2 = local_140[0];
          do {
            if (iVar6 == *piVar2) {
              local_150 = 1;
            }
            piVar2 = piVar2 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          local_140[0] = local_140[0] + 4;
          local_148 = local_148 + -1;
        } while (local_148 != 0);
        if ((local_150 == -1) && (-1 < iVar6)) {
          local_148 = 1;
          local_140[0] = (int *)(PTR_DAT_0066ac78 + 0x42c);
          do {
            iVar5 = 1;
            piVar2 = local_140[0];
            do {
              if (*piVar2 == DAT_006d4cc4) {
                local_14c = local_148;
                if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar2 * 0x2f8) == '\0') {
                  *piVar2 = iVar6;
                }
                break;
              }
              iVar5 = iVar5 + 1;
              piVar2 = piVar2 + 1;
            } while (iVar5 != 5);
            local_148 = local_148 + 1;
            local_140[0] = local_140[0] + 4;
          } while (local_148 != 9);
          if (0 < local_14c) break;
        }
      }
      piVar11 = piVar11 + 1;
      local_144 = local_144 + -1;
    } while (local_144 != 0);
  }
  iVar6 = 1;
  piVar11 = (int *)(PTR_DAT_0066ac78 + 0x42c);
  do {
    iVar5 = 4;
    piVar2 = piVar11;
    do {
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x8c + *piVar2 * 0x2f8) = iVar6;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar2 * 0x2f8) = 1;
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar6 = iVar6 + 1;
    piVar11 = piVar11 + 4;
  } while (iVar6 != 9);
  return;
}

