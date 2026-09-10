// Address: 00632c10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00632c10(char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
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
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0 [5];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_3c [11];
  
  bVar11 = 0;
  iVar4 = 0x1b;
  puVar2 = &DAT_006d4bb0;
  do {
    iVar3 = 0xb;
    puVar7 = puVar2;
    do {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar2 = puVar2 + 0xb;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (param_1 == '\0') {
    iVar4 = 0x12;
    puVar7 = &DAT_0066aaf4;
    puVar2 = &DAT_006d4bb0;
    do {
      iVar3 = FUN_0065208c(*puVar7);
      if (iVar3 == -1) {
        FUN_0065b4bc(*puVar7,local_3c);
        puVar6 = local_3c;
        puVar8 = puVar2;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        }
      }
      else {
        iVar3 = FUN_0065208c(*puVar7);
        puVar6 = (undefined4 *)(*(int *)PTR_DAT_0066b1f0 + iVar3 * 0x2c);
        puVar8 = puVar2;
        for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        }
      }
      puVar2 = puVar2 + 0xb;
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else {
    iVar4 = 0x12;
    puVar7 = &DAT_0066aaf4;
    puVar2 = &DAT_006d4bb0;
    do {
      FUN_0065b4bc(*puVar7,local_3c);
      puVar6 = local_3c;
      puVar8 = puVar2;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      }
      puVar2 = puVar2 + 0xb;
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_e0[1] = DAT_006d4bb0;
  local_e0[2] = DAT_006d4bb4;
  local_e0[3] = DAT_006d4bb8;
  local_e0[4] = DAT_006d4bdc;
  local_cc = DAT_006d4be0;
  local_c8 = DAT_006d4be4;
  local_c4 = DAT_006d4c08;
  local_c0 = DAT_006d4c0c;
  iVar4 = 8;
  piVar10 = local_e0;
  do {
    piVar10 = piVar10 + 1;
    iVar1 = FUN_004032c8(8);
    iVar3 = *piVar10;
    *piVar10 = local_e0[iVar1 + 1];
    local_e0[iVar1 + 1] = iVar3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_140[1] = (int *)DAT_006d4c10;
  local_140[2] = (int *)DAT_006d4c34;
  local_140[3] = (int *)DAT_006d4c38;
  local_140[4] = (int *)DAT_006d4c3c;
  local_12c = DAT_006d4c60;
  local_128 = DAT_006d4c8c;
  local_124 = DAT_006d4cb8;
  local_120 = DAT_006d4ce4;
  local_11c = DAT_006d4ce8;
  local_118 = DAT_006d4cec;
  local_114 = DAT_006d4d10;
  local_110 = DAT_006d4d14;
  local_10c = DAT_006d4d3c;
  local_108 = DAT_006d4d68;
  local_104 = DAT_006d4d94;
  local_100 = DAT_006d4d98;
  local_fc = DAT_006d4dc0;
  local_f8 = DAT_006d4dc4;
  local_f4 = DAT_006d4dec;
  local_f0 = DAT_006d4e18;
  local_ec = DAT_006d4e1c;
  local_e8 = DAT_006d4e44;
  local_e4 = DAT_006d4e70;
  local_e0[0] = DAT_006d4e9c;
  iVar4 = 0x18;
  ppiVar5 = local_140;
  do {
    ppiVar5 = ppiVar5 + 1;
    iVar3 = FUN_004032c8(0x18);
    piVar10 = *ppiVar5;
    *ppiVar5 = local_140[iVar3 + 1];
    local_140[iVar3 + 1] = piVar10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_160 = 0;
  iVar4 = 8;
  piVar10 = local_e0;
  piVar9 = (int *)(PTR_DAT_0066ac78 + 0x3ac);
  do {
    piVar10 = piVar10 + 1;
    *piVar9 = *piVar10;
    piVar9 = piVar9 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 8;
  puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x3b0);
  do {
    iVar3 = 3;
    puVar7 = puVar2;
    do {
      local_160 = local_160 + 1;
      *puVar7 = local_140[local_160];
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar2 = puVar2 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_144 = *(int *)(PTR_DAT_0066ac78 + 0x13c);
  if (0 < local_144) {
    piVar10 = (int *)(PTR_DAT_0066ac78 + 0x140);
    do {
      iVar4 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar10 * 0x2f8));
      if ((iVar4 == 2) &&
         (iVar4 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar10 * 0x2f8)),
         *(char *)(*(int *)PTR_DAT_0066aca0 + 0x14c + iVar4 * 0x294) != '\0')) {
        local_150 = -1;
        local_14c = -1;
        iVar4 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *piVar10 * 0x2f8));
        iVar4 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x150 + iVar4 * 0x294);
        local_148 = 8;
        local_140[0] = (int *)(PTR_DAT_0066ac78 + 0x3ac);
        do {
          iVar3 = 4;
          piVar9 = local_140[0];
          do {
            if (iVar4 == *piVar9) {
              local_150 = 1;
            }
            piVar9 = piVar9 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          local_140[0] = local_140[0] + 4;
          local_148 = local_148 + -1;
        } while (local_148 != 0);
        if ((local_150 == -1) && (-1 < iVar4)) {
          local_148 = 1;
          local_140[0] = (int *)(PTR_DAT_0066ac78 + 0x3ac);
          do {
            iVar3 = 1;
            piVar9 = local_140[0];
            do {
              if (*piVar9 == DAT_006d4e9c) {
                local_14c = local_148;
                if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar9 * 0x2f8) == '\0') {
                  *piVar9 = iVar4;
                }
                break;
              }
              iVar3 = iVar3 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar3 != 5);
            local_148 = local_148 + 1;
            local_140[0] = local_140[0] + 4;
          } while (local_148 != 9);
          if (0 < local_14c) break;
        }
      }
      piVar10 = piVar10 + 1;
      local_144 = local_144 + -1;
    } while (local_144 != 0);
  }
  iVar4 = 1;
  piVar10 = (int *)(PTR_DAT_0066ac78 + 0x3ac);
  do {
    iVar3 = 4;
    piVar9 = piVar10;
    do {
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x90 + *piVar9 * 0x2f8) = iVar4;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar9 * 0x2f8) = 1;
      piVar9 = piVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar4 = iVar4 + 1;
    piVar10 = piVar10 + 4;
  } while (iVar4 != 9);
  return;
}

