// Address: 00634498
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_00634498(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  char local_54 [4];
  int local_50 [4];
  int local_40;
  int local_3c;
  undefined4 local_38 [11];
  
  bVar11 = 0;
  pcVar7 = local_54;
  iVar6 = 0x1c;
  puVar3 = &DAT_006d4bb0;
  do {
    iVar5 = 0xc;
    puVar9 = puVar3;
    do {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar3 = puVar3 + 0xb;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_54[0] = '\x01';
  FUN_00633528(*(undefined4 *)(PTR_DAT_0066ac78 + 0xc0),0xffffffff);
  iVar6 = 0x12;
  puVar3 = &DAT_0066ab64;
  puVar9 = &DAT_006d4bb0;
  do {
    iVar5 = FUN_0065208c(*puVar3);
    if (iVar5 == -1) {
      FUN_0065b4bc(*puVar3,local_38);
      puVar8 = local_38;
      puVar10 = puVar9;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
    }
    else {
      iVar5 = FUN_0065208c(*puVar3);
      puVar8 = (undefined4 *)(*(int *)PTR_DAT_0066b1f0 + iVar5 * 0x2c);
      puVar10 = puVar9;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
    }
    puVar9 = puVar9 + 0xb;
    puVar3 = puVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 6;
  do {
    pcVar7 = (char *)((int)pcVar7 + 4);
    *(undefined4 *)pcVar7 = 0xffffffff;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_50[0] = FUN_006454a8(4,0x1d,*(undefined4 *)(PTR_DAT_0066ac78 + 0xc0));
  local_50[1] = FUN_006454a8(4,3,*(undefined4 *)(PTR_DAT_0066ac78 + 0xc0));
  local_50[3] = FUN_006454a8(4,1,*(undefined4 *)(PTR_DAT_0066ac78 + 0xc0));
  local_50[2] = FUN_006454a8(4,0x31,*(undefined4 *)(PTR_DAT_0066ac78 + 0xc0));
  if (local_50[2] == -1) {
    uVar1 = FUN_004032c8(100);
    if ((int)(uVar1 + 1) < 0x33) {
      if (uVar1 < 0x14) {
        local_50[2] = DAT_006d4bb0;
      }
      else if (uVar1 - 0x14 < 0x19) {
        local_50[2] = DAT_006d4bdc;
      }
      else if (uVar1 - 0x2d < 5) {
        local_50[2] = DAT_006d4c08;
      }
    }
    else if (uVar1 - 0x32 < 0x19) {
      local_50[2] = DAT_006d4c34;
    }
    else if (uVar1 - 0x4b < 10) {
      local_50[2] = DAT_006d4e44;
    }
    else if (uVar1 - 0x55 < 0xf) {
      local_50[2] = DAT_006d4e9c;
    }
  }
  if (local_50[2] == -1) {
    local_50[2] = DAT_006d4bb0;
  }
  if (local_50[2] == -1) {
    local_50[2] = DAT_006d4bdc;
  }
  if (local_50[2] == -1) {
    local_50[2] = DAT_006d4c08;
  }
  if (local_50[2] == -1) {
    local_50[2] = DAT_006d4c34;
  }
  if (local_50[2] == -1) {
    local_50[2] = DAT_006d4e44;
  }
  if (local_50[2] == -1) {
    local_50[2] = DAT_006d4e9c;
  }
  if (local_50[3] == -1) {
    uVar1 = FUN_004032c8(100);
    if ((int)(uVar1 + 1) < 0x29) {
      if (uVar1 < 0x14) {
        local_50[3] = DAT_006d4c60;
      }
      else if (uVar1 - 0x14 < 0x14) {
        local_50[3] = DAT_006d4c8c;
      }
    }
    else if (uVar1 - 0x28 < 10) {
      local_50[3] = DAT_006d4cb8;
    }
    else if (uVar1 - 0x32 < 0x1e) {
      local_50[3] = DAT_006d4e18;
    }
    else if (uVar1 - 0x50 < 0x14) {
      local_50[3] = DAT_006d4ce4;
    }
  }
  if (local_50[3] == -1) {
    local_50[3] = DAT_006d4e18;
  }
  if (local_50[3] == -1) {
    local_50[3] = DAT_006d4c60;
  }
  if (local_50[3] == -1) {
    local_50[3] = DAT_006d4c8c;
  }
  if (local_50[3] == -1) {
    local_50[3] = DAT_006d4cb8;
  }
  if (local_50[3] == -1) {
    local_50[3] = DAT_006d4ce4;
  }
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + local_50[0] * 0x2f8) == 0x83) {
    uVar1 = FUN_004032c8(100);
    if (uVar1 < 0x32) {
      local_40 = DAT_006d4d10;
    }
    else if (uVar1 - 0x32 < 5) {
      local_40 = DAT_006d4d3c;
    }
    else if (uVar1 - 0x37 < 0x2d) {
      local_40 = DAT_006d4d68;
    }
  }
  else {
    uVar1 = FUN_004032c8(100);
    if (uVar1 < 0x14) {
      local_40 = DAT_006d4d10;
    }
    else if (uVar1 - 0x14 < 5) {
      local_40 = DAT_006d4d3c;
    }
    else if (uVar1 - 0x19 < 10) {
      local_40 = DAT_006d4d68;
    }
    else if (uVar1 - 0x23 < 0x41) {
      local_40 = DAT_006d4dec;
    }
  }
  if (local_40 == -1) {
    local_40 = DAT_006d4d10;
  }
  if (local_40 == -1) {
    local_40 = DAT_006d4d3c;
  }
  if (local_40 == -1) {
    local_40 = DAT_006d4d68;
  }
  uVar1 = FUN_004032c8(100);
  if (uVar1 < 0x50) {
    local_3c = DAT_006d4dc0;
  }
  else if (uVar1 - 0x50 < 0x14) {
    local_3c = DAT_006d4e70;
  }
  if (local_3c == -1) {
    local_3c = DAT_006d4dc0;
  }
  if (local_3c == -1) {
    local_3c = DAT_006d4e70;
  }
  iVar6 = 6;
  piVar2 = local_50;
  do {
    if (*piVar2 == -1) {
      local_54[0] = '\0';
    }
    piVar2 = piVar2 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (local_54[0] == '\0') {
    FUN_00437fe8("Erro no jogo, reinstale os times");
  }
  if (local_54[0] != '\0') {
    iVar6 = FUN_004032c8(2);
    if (iVar6 == 1) {
      *(int *)PTR_DAT_0066af90 = local_50[2];
      *(int *)(PTR_DAT_0066af90 + 4) = local_50[3];
      *(int *)(PTR_DAT_0066af90 + 0x30) = local_40;
      *(int *)(PTR_DAT_0066af90 + 0x34) = local_3c;
    }
    else {
      *(int *)PTR_DAT_0066af90 = local_50[2];
      *(int *)(PTR_DAT_0066af90 + 4) = local_40;
      *(int *)(PTR_DAT_0066af90 + 0x30) = local_50[3];
      *(int *)(PTR_DAT_0066af90 + 0x34) = local_3c;
    }
    iVar6 = FUN_004032c8(2);
    if (iVar6 == 1) {
      *(int *)(PTR_DAT_0066af90 + 0x60) = local_50[0];
      *(int *)(PTR_DAT_0066af90 + 0x90) = local_50[1];
    }
    else {
      *(int *)(PTR_DAT_0066af90 + 0x60) = local_50[1];
      *(int *)(PTR_DAT_0066af90 + 0x90) = local_50[0];
    }
    iVar6 = 6;
    piVar2 = local_50;
    do {
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x21b + *piVar2 * 0x2f8) = 1;
      piVar2 = piVar2 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return local_54[0];
}

