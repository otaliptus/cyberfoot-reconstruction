// Address: 00631c58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00631c58(char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_140 [16];
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0 [5];
  undefined4 local_cc [4];
  undefined4 local_bc [15];
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [5];
  undefined4 local_4c [4];
  undefined4 local_3c [11];
  
  bVar11 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar14 = 0;
  local_140[0] = -1;
  iVar6 = 0x1b;
  puVar4 = &DAT_006d4bb0;
  do {
    iVar1 = 0xb;
    puVar8 = puVar4;
    do {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar4 = puVar4 + 0xb;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (param_1 == '\0') {
    iVar6 = 0xb;
    puVar8 = &DAT_0066aa58;
    puVar4 = &DAT_006d4bb0;
    do {
      iVar1 = FUN_0065208c(*puVar8);
      if (iVar1 == -1) {
        FUN_0065b4bc(*puVar8,local_3c);
        puVar10 = local_3c;
        puVar9 = puVar4;
        for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        }
      }
      else {
        iVar1 = FUN_0065208c(*puVar8);
        puVar10 = (undefined4 *)(*(int *)PTR_DAT_0066b1f0 + iVar1 * 0x2c);
        puVar9 = puVar4;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        }
      }
      puVar4 = puVar4 + 0xb;
      puVar8 = puVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    iVar6 = 0xb;
    puVar10 = &DAT_0066aa58;
    puVar4 = &DAT_006d4bb0;
    do {
      FUN_0065b4bc(*puVar10,local_3c,puVar8,param_1,uVar12,uVar13,uVar14);
      puVar8 = local_3c;
      puVar9 = puVar4;
      for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      puVar4 = puVar4 + 0xb;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + -1;
      puVar8 = (undefined4 *)0x0;
    } while (iVar6 != 0);
  }
  if (((2 < *(int *)(PTR_DAT_0066ac78 + 0xc0)) || (PTR_DAT_0066ac78[0x75d] != '\0')) &&
     (local_140[0] = FUN_006454a8(4,0x1d,*(int *)(PTR_DAT_0066ac78 + 0xc0) + -1), -1 < local_140[0])
     ) {
    iVar6 = 0;
    piVar7 = &DAT_0066aa58;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + local_140[0] * 0x2f8) == *piVar7) {
        FUN_00631bc4(iVar6,local_140[0]);
        break;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 != 0xb);
  }
  iVar6 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < iVar6 + -1) {
    iVar1 = 0;
    do {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x84 + iVar1 * 0x2f8) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x88 + iVar1 * 0x2f8) = 0;
      iVar1 = iVar1 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x194) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 400) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x198) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x1a0) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x19c) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x1a4) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x1a8) = 1;
  if ((param_1 == '\0') &&
     (iVar6 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40), -1 < iVar6 + -1
     )) {
    iVar1 = 0;
    do {
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + iVar1 * 0x2f8) = 0;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x21b + iVar1 * 0x2f8) = 0;
      iVar1 = iVar1 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = 4;
  puVar8 = &DAT_006d4bb0;
  puVar4 = local_e0;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar8;
    puVar8 = puVar8 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 4;
  puVar8 = &DAT_006d4bdc;
  puVar4 = local_cc;
  do {
    *puVar4 = *puVar8;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (PTR_DAT_0066ac78[0x172] != '\0') {
    iVar6 = 4;
    puVar8 = &DAT_006d4bc0;
    puVar4 = local_60;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar8;
      puVar8 = puVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = 4;
    puVar8 = &DAT_006d4bec;
    puVar4 = local_4c;
    do {
      *puVar4 = *puVar8;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = 8;
  puVar4 = local_e0;
  do {
    puVar4 = puVar4 + 1;
    iVar1 = FUN_004032c8(8);
    uVar12 = *puVar4;
    *puVar4 = local_e0[iVar1 + 1];
    local_e0[iVar1 + 1] = uVar12;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (PTR_DAT_0066ac78[0x172] != '\0') {
    iVar6 = 8;
    puVar4 = local_60;
    do {
      puVar4 = puVar4 + 1;
      iVar1 = FUN_004032c8(8);
      uVar12 = *puVar4;
      *puVar4 = local_60[iVar1 + 1];
      local_60[iVar1 + 1] = uVar12;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = 0;
  iVar1 = 5;
  piVar7 = &DAT_006d4c08;
  do {
    iVar2 = 3;
    piVar5 = piVar7;
    do {
      iVar6 = iVar6 + 1;
      local_140[iVar6] = *piVar5;
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar7 = piVar7 + 0xb;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_100 = DAT_006d4ce4;
  local_fc = DAT_006d4ce8;
  if (local_140[0] < 0) {
    local_f8 = DAT_006d4cec;
  }
  else {
    local_f8 = local_140[0];
  }
  local_f4 = DAT_006d4d10;
  local_f0 = DAT_006d4d14;
  local_ec = DAT_006d4d3c;
  local_e8 = DAT_006d4d40;
  local_e4 = DAT_006d4d68;
  local_e0[0] = DAT_006d4d6c;
  iVar6 = 0x18;
  piVar7 = local_140;
  do {
    piVar7 = piVar7 + 1;
    iVar2 = FUN_004032c8(0x18);
    iVar1 = *piVar7;
    *piVar7 = local_140[iVar2 + 1];
    local_140[iVar2 + 1] = iVar1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 0;
  iVar1 = 8;
  puVar4 = local_e0;
  puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x1ac);
  do {
    puVar4 = puVar4 + 1;
    *puVar8 = *puVar4;
    puVar8 = puVar8 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 8;
  piVar7 = (int *)(PTR_DAT_0066ac78 + 0x1b0);
  do {
    iVar2 = 3;
    piVar5 = piVar7;
    do {
      iVar6 = iVar6 + 1;
      *piVar5 = local_140[iVar6];
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar7 = piVar7 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (PTR_DAT_0066ac78[0x172] != '\0') {
    iVar6 = 0;
    iVar1 = 5;
    puVar4 = &DAT_006d4c14;
    do {
      iVar3 = 3;
      iVar2 = iVar6;
      puVar8 = puVar4;
      do {
        iVar6 = iVar2 + 1;
        local_cc[iVar2 + 4] = *puVar8;
        puVar8 = puVar8 + 1;
        iVar3 = iVar3 + -1;
        iVar2 = iVar6;
      } while (iVar3 != 0);
      puVar4 = puVar4 + 0xb;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (local_140[0] < 0) {
      local_80 = DAT_006d4cf0;
      local_7c = DAT_006d4cf4;
      local_78 = DAT_006d4cf8;
    }
    else {
      local_80 = DAT_006d4cec;
      local_7c = DAT_006d4cf0;
      local_78 = DAT_006d4cf4;
    }
    local_74 = DAT_006d4d18;
    local_70 = DAT_006d4d1c;
    local_6c = DAT_006d4d44;
    local_68 = DAT_006d4d48;
    local_64 = DAT_006d4d70;
    local_60[0] = DAT_006d4d74;
    iVar6 = 0x18;
    puVar4 = local_cc + 4;
    do {
      iVar1 = FUN_004032c8(0x18);
      uVar12 = *puVar4;
      *puVar4 = local_cc[iVar1 + 4];
      local_cc[iVar1 + 4] = uVar12;
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = 0;
    iVar1 = 8;
    puVar4 = local_60;
    puVar8 = (undefined4 *)(PTR_DAT_0066ac78 + 0x2ac);
    do {
      puVar4 = puVar4 + 1;
      *puVar8 = *puVar4;
      puVar8 = puVar8 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 8;
    puVar4 = (undefined4 *)(PTR_DAT_0066ac78 + 0x2b0);
    do {
      iVar3 = 3;
      iVar2 = iVar6;
      puVar8 = puVar4;
      do {
        iVar6 = iVar2 + 1;
        *puVar8 = local_cc[iVar2 + 4];
        puVar8 = puVar8 + 1;
        iVar3 = iVar3 + -1;
        iVar2 = iVar6;
      } while (iVar3 != 0);
      puVar4 = puVar4 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar6 = 1;
  piVar7 = (int *)(PTR_DAT_0066ac78 + 0x1ac);
  do {
    iVar1 = 4;
    piVar5 = piVar7;
    do {
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x84 + *piVar5 * 0x2f8) = iVar6;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + *piVar5 * 0x2f8) = 1;
      piVar5 = piVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 4;
  } while (iVar6 != 9);
  iVar6 = 0;
  iVar1 = 1;
  piVar7 = (int *)(PTR_DAT_0066ac78 + 0x2ac);
  do {
    iVar2 = 4;
    piVar5 = piVar7;
    do {
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x88 + *piVar5 * 0x2f8) = iVar1;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x218 + *piVar5 * 0x2f8) = 1;
      iVar6 = iVar6 + 1;
      *(int *)(PTR_DAT_0066ac98 + iVar6 * 4 + -4) = *piVar5;
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar1 = iVar1 + 1;
    piVar7 = piVar7 + 4;
  } while (iVar1 != 9);
  return;
}

