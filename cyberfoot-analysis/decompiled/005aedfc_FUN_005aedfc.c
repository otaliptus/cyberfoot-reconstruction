// Address: 005aedfc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005aedfc(int param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *in_FS_OFFSET;
  undefined4 uVar10;
  int iStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
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
  undefined *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60 [15];
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined **local_18;
  undefined **local_14;
  char local_d;
  int local_c;
  int local_8;
  
  local_a4 = 0;
  local_a8 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_94 = 0;
  local_98 = 0;
  local_8c = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  puStack_b8 = (undefined1 *)0x5aee59;
  local_8 = param_1;
  FUN_00405658(&local_70,PTR_DAT_004010dc,4);
  puStack_b8 = (undefined1 *)0x5aee6c;
  FUN_00405658(&local_80,PTR_DAT_004010dc,4);
  puStack_bc = &LAB_005afe7d;
  iStack_c0 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_c0;
  if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) == 7) {
    iVar8 = 4;
    ppuVar2 = &PTR_DAT_0066a054;
    ppuVar3 = &local_70;
    puStack_b8 = &stack0xfffffffc;
    do {
      FUN_00404928(ppuVar3,*ppuVar2);
      ppuVar3 = ppuVar3 + 1;
      ppuVar2 = ppuVar2 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 4;
    ppuVar2 = &PTR_DAT_0066a064;
    ppuVar3 = &local_80;
    do {
      FUN_00404928(ppuVar3,*ppuVar2);
      ppuVar3 = ppuVar3 + 1;
      ppuVar2 = ppuVar2 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  else {
    iVar8 = 4;
    ppuVar2 = &PTR_DAT_0066a014;
    ppuVar3 = &local_70;
    puStack_b8 = &stack0xfffffffc;
    do {
      FUN_00404928(ppuVar3,*ppuVar2);
      ppuVar3 = ppuVar3 + 1;
      ppuVar2 = ppuVar2 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 4;
    ppuVar3 = &PTR_DAT_0066a024;
    local_14 = &local_80;
    do {
      FUN_00404928(local_14,*ppuVar3);
      local_14 = local_14 + 1;
      ppuVar3 = ppuVar3 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00466128(*(undefined4 *)(local_8 + 0x338),0);
  FUN_00466128(*(undefined4 *)(local_8 + 0x348),0);
  FUN_00466128(*(undefined4 *)(local_8 + 0x340),0);
  local_d = 1 < *(int *)(PTR_DAT_0066b50c +
                        *(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0x30 + -0x2c);
  iVar8 = 3;
  piVar5 = local_60 + 0xc;
  do {
    *piVar5 = -1;
    piVar5 = piVar5 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 3;
  local_18 = (undefined **)(local_60 + 9);
  do {
    *local_18 = (undefined *)0xffffffff;
    local_18 = local_18 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 3;
  local_18 = (undefined **)(local_60 + 6);
  do {
    *local_18 = (undefined *)0xffffffff;
    local_18 = local_18 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 3;
  local_18 = (undefined **)(local_60 + 3);
  do {
    *local_18 = (undefined *)0xffffffff;
    local_18 = local_18 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 3;
  local_18 = (undefined **)local_60;
  do {
    *local_18 = (undefined *)0xffffffff;
    local_18 = local_18 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 3;
  local_18 = (undefined **)&DAT_006d2768;
  do {
    iVar7 = 8;
    local_1c = local_18;
    do {
      iVar4 = 1;
      local_20 = local_1c;
      do {
        if (iVar4 != 5) {
          FUN_00466238(*local_20,0);
        }
        iVar4 = iVar4 + 1;
        local_20 = local_20 + 1;
      } while (iVar4 != 9);
      local_1c = local_1c + 8;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    local_18 = local_18 + 0x40;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 3;
  local_18 = (undefined **)(PTR_DAT_0066b50c + 4);
  piVar5 = local_60 + 0xc;
  do {
    *piVar5 = (int)local_18[*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) * 0xc + -6];
    piVar5 = piVar5 + 1;
    local_18 = local_18 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (local_d != '\0') {
    if (local_60[0xc] == 1) {
      iVar8 = 4;
      puVar6 = &DAT_006d2770;
      local_18 = &local_70;
      local_14 = &local_80;
      do {
        FUN_00466238(*puVar6,*local_18);
        FUN_00466238(puVar6[4],*local_14);
        FUN_00466238(puVar6[0x20],*local_14);
        FUN_00466238(puVar6[0x24],*local_18);
        local_14 = local_14 + 1;
        local_18 = local_18 + 1;
        puVar6 = puVar6 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    else {
      FUN_00466238(DAT_006d2770,local_70);
      FUN_00466238(DAT_006d2780,local_80);
      FUN_00466238(DAT_006d27a0,local_70);
      FUN_00466238(DAT_006d2790,local_80);
      FUN_00466238(DAT_006d27b0,local_6c);
      FUN_00466238(DAT_006d27c0,local_7c);
      FUN_00466238(DAT_006d27e0,local_6c);
      FUN_00466238(DAT_006d27d0,local_7c);
      FUN_00466238(DAT_006d27f0,local_68);
      FUN_00466238(DAT_006d2800,local_78);
      FUN_00466238(DAT_006d2820,local_68);
      FUN_00466238(DAT_006d2810,local_78);
      FUN_00466238(DAT_006d2830,local_64);
      FUN_00466238(DAT_006d2840,local_74);
      FUN_00466238(DAT_006d2860,local_64);
      FUN_00466238(DAT_006d2850,local_74);
    }
  }
  if (local_d == '\0') {
    if (local_60[0xc] == 1) {
      iVar8 = 4;
      local_14 = (undefined **)&DAT_006d2770;
      local_18 = &PTR_DAT_0066a0a4;
      do {
        FUN_00466238(*local_14,*local_18);
        FUN_00466238(local_14[4],local_18[-4]);
        FUN_00466238(local_14[0x20],local_18[-4]);
        FUN_00466238(local_14[0x24],*local_18);
        local_18 = local_18 + 1;
        local_14 = local_14 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (1 < local_60[0xc]) {
      iVar8 = 8;
      local_18 = (undefined **)&DAT_006d2770;
      local_14 = &PTR_DAT_0066a0b4;
      do {
        FUN_00404bf0(&local_84,*local_14,&DAT_005afe94);
        FUN_00466238(*local_18,local_84);
        FUN_00404bf0(&local_88,local_14[1],&DAT_005afe94);
        FUN_00466238(local_18[4],local_88);
        local_14 = local_14 + 2;
        local_18 = local_18 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  if (local_60[0xd] == 1) {
    FUN_00466238(DAT_006d2870,PTR_s_Vencedor_Q4_0066a074);
    FUN_00466238(DAT_006d2880,PTR_s_Vencedor_Q1_0066a078);
    FUN_00466238(DAT_006d2890,PTR_s_Vencedor_Q2_0066a07c);
    FUN_00466238(DAT_006d28a0,PTR_s_Vencedor_Q3_0066a080);
  }
  else {
    FUN_00466238(DAT_006d2870,PTR_s_Vencedor_Q4_0066a074);
    FUN_00466238(DAT_006d2880,PTR_s_Vencedor_Q1_0066a078);
    FUN_00466238(DAT_006d2890,PTR_s_Vencedor_Q1_0066a078);
    FUN_00466238(DAT_006d28a0,PTR_s_Vencedor_Q4_0066a074);
    FUN_00466238(DAT_006d28b0,PTR_s_Vencedor_Q2_0066a07c);
    FUN_00466238(DAT_006d28c0,PTR_s_Vencedor_Q3_0066a080);
    FUN_00466238(DAT_006d28d0,PTR_s_Vencedor_Q3_0066a080);
    FUN_00466238(DAT_006d28e0,PTR_s_Vencedor_Q2_0066a07c);
  }
  FUN_00466238(DAT_006d2970,PTR_s_Vencedor_S1_0066a084);
  FUN_00466238(DAT_006d2980,PTR_s_Vencedor_S2_0066a088);
  FUN_00466238(DAT_006d29a0,PTR_s_Vencedor_S1_0066a084);
  FUN_00466238(DAT_006d2990,PTR_s_Vencedor_S2_0066a088);
  if (local_60[0xc] == 1) {
    FUN_00466238(DAT_006d276c,&DAT_005afea0);
    FUN_00466238(DAT_006d278c,&DAT_005afeac);
    FUN_00466238(DAT_006d27ac,&DAT_005afeb8);
    FUN_00466238(DAT_006d27cc,&DAT_005afec4);
  }
  else if (local_60[0xc] == 2) {
    FUN_00466238(DAT_006d276c,&DAT_005afea0);
    FUN_00466238(DAT_006d27ac,&DAT_005afeac);
    FUN_00466238(DAT_006d27ec,&DAT_005afeb8);
    FUN_00466238(DAT_006d282c,&DAT_005afec4);
  }
  if (local_60[0xd] == 1) {
    FUN_00466238(DAT_006d286c,&DAT_005afed0);
    FUN_00466238(DAT_006d288c,&DAT_005afedc);
  }
  if (local_60[0xd] == 2) {
    FUN_00466238(DAT_006d286c,&DAT_005afed0);
    FUN_00466238(DAT_006d28ac,&DAT_005afedc);
  }
  if (local_60[0xc] < 1) {
    FUN_00466238(DAT_006d2870,&DAT_005afee8);
    FUN_00466238(DAT_006d2880,&DAT_005afefc);
    FUN_00466238(DAT_006d2890,&DAT_005afefc);
    FUN_00466238(DAT_006d28a0,&DAT_005afee8);
    FUN_00466238(DAT_006d28b0,&DAT_005aff10);
    FUN_00466238(DAT_006d28c0,&DAT_005aff24);
    FUN_00466238(DAT_006d28d0,&DAT_005aff24);
    FUN_00466238(DAT_006d28e0,&DAT_005aff10);
    FUN_00466238(DAT_006d286c,&DAT_005afed0);
    FUN_00466238(DAT_006d28ac,&DAT_005afedc);
  }
  if (local_60[0xd] < 1) {
    FUN_00466238(DAT_006d2970,&DAT_005aff24);
    FUN_00466238(DAT_006d2980,&DAT_005afefc);
    FUN_00466238(DAT_006d2990,&DAT_005afefc);
    FUN_00466238(DAT_006d29a0,&DAT_005aff24);
  }
  local_c = 3;
  local_14 = (undefined **)&DAT_006d2768;
  do {
    iVar8 = 8;
    local_24 = local_14;
    do {
      iVar7 = 8;
      puVar6 = local_24;
      do {
        FUN_00466128(*puVar6,0);
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      local_24 = local_24 + 8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    local_14 = local_14 + 0x40;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (0 < local_60[0xc]) {
    FUN_00466128(*(undefined4 *)(local_8 + 0x338),1);
    if (local_60[0xc] == 2) {
      iVar8 = 8;
      local_14 = (undefined **)&DAT_006d2768;
      do {
        iVar7 = 8;
        ppuVar3 = local_14;
        do {
          FUN_00466128(*ppuVar3,1);
          ppuVar3 = ppuVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_14 = local_14 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      piVar5 = *(int **)(*(int *)(local_8 + 0x33c) + 0x198);
      (**(code **)(*piVar5 + 0x2c))
                (piVar5,"<P align=\"center\"><B>Quartas de Final - 2 jogos</B></P>");
    }
    else {
      iVar8 = 4;
      local_14 = (undefined **)&DAT_006d2768;
      do {
        iVar7 = 8;
        ppuVar3 = local_14;
        do {
          FUN_00466128(*ppuVar3,1);
          ppuVar3 = ppuVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_14 = local_14 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      piVar5 = *(int **)(*(int *)(local_8 + 0x33c) + 0x198);
      (**(code **)(*piVar5 + 0x2c))(piVar5,&DAT_005aff78);
    }
  }
  if (0 < local_60[0xd]) {
    FUN_00466128(*(undefined4 *)(local_8 + 0x348),1);
    if (local_60[0xd] == 2) {
      iVar8 = 4;
      local_14 = (undefined **)&DAT_006d2868;
      do {
        iVar7 = 8;
        ppuVar3 = local_14;
        do {
          FUN_00466128(*ppuVar3,1);
          ppuVar3 = ppuVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_14 = local_14 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      piVar5 = *(int **)(*(int *)(local_8 + 0x34c) + 0x198);
      (**(code **)(*piVar5 + 0x2c))(piVar5,"<P align=\"center\"><B>Semi-Final - 2 jogos</B></P>");
    }
    else {
      iVar8 = 2;
      local_14 = (undefined **)&DAT_006d2868;
      do {
        iVar7 = 8;
        ppuVar3 = local_14;
        do {
          FUN_00466128(*ppuVar3,1);
          ppuVar3 = ppuVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_14 = local_14 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      piVar5 = *(int **)(*(int *)(local_8 + 0x34c) + 0x198);
      (**(code **)(*piVar5 + 0x2c))(piVar5,&DAT_005afff8);
    }
  }
  if (0 < local_60[0xe]) {
    FUN_00466128(*(undefined4 *)(local_8 + 0x340),1);
    if (local_60[0xe] == 2) {
      iVar8 = 2;
      local_14 = (undefined **)&DAT_006d2968;
      do {
        iVar7 = 8;
        ppuVar3 = local_14;
        do {
          FUN_00466128(*ppuVar3,1);
          ppuVar3 = ppuVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_14 = local_14 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      piVar5 = *(int **)(*(int *)(local_8 + 0x344) + 0x198);
      (**(code **)(*piVar5 + 0x2c))(piVar5,"<P align=\"center\"><B>Final - 2 jogos</B></P>");
    }
    else {
      iVar8 = 1;
      local_14 = (undefined **)&DAT_006d2968;
      do {
        iVar7 = 8;
        ppuVar3 = local_14;
        do {
          FUN_00466128(*ppuVar3,0);
          ppuVar3 = ppuVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_14 = local_14 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      piVar5 = *(int **)(*(int *)(local_8 + 0x344) + 0x198);
      (**(code **)(*piVar5 + 0x2c))(piVar5,&DAT_005b0070);
    }
  }
  iVar8 = FUN_0065a250(DAT_006d25e4,3,0x191);
  if (-1 < iVar8) {
    if (local_60[0xc] == 1) {
      iVar7 = 1;
      local_14 = (undefined **)&DAT_006d276c;
      do {
        FUN_00409dd8(iVar7,&local_90);
        FUN_00404bf0(&local_8c,&DAT_005b00a8,local_90);
        uVar10 = 0x5af815;
        FUN_00466238(*local_14,local_8c);
        iStack_c0 = iVar7 + -1 + iVar8;
        FUN_005ae860(local_8,1,iVar7,uVar10);
        iVar7 = iVar7 + 1;
        local_14 = local_14 + 8;
      } while (iVar7 != 5);
    }
    if (local_60[0xc] == 2) {
      iVar7 = 1;
      uVar9 = 1;
      local_14 = (undefined **)&DAT_006d276c;
      do {
        if ((uVar9 & 1) == 0) {
          iStack_c0 = 0x5af898;
          FUN_00466238(*local_14,0);
        }
        else {
          iStack_c0 = 0x5af864;
          FUN_00409dd8(iVar7,&local_98);
          iStack_c0 = 0x5af87a;
          FUN_00404bf0(&local_94,&DAT_005b00a8,local_98);
          iStack_c0 = 0x5af88a;
          FUN_00466238(*local_14,local_94);
        }
        iStack_c0 = (uVar9 - 1) + iVar8;
        FUN_005ae860(local_8,1,uVar9);
        if ((uVar9 & 1) != 0) {
          iVar7 = iVar7 + 1;
        }
        uVar9 = uVar9 + 1;
        local_14 = local_14 + 8;
      } while (uVar9 != 9);
    }
  }
  iVar8 = FUN_0065a250(DAT_006d25e4,3,0xc9);
  if (-1 < iVar8) {
    if (local_60[0xd] == 1) {
      iVar7 = 1;
      local_14 = (undefined **)&DAT_006d286c;
      do {
        FUN_00409dd8(iVar7,&local_a0);
        FUN_00404bf0(&local_9c,&DAT_005b00b4,local_a0);
        uVar10 = 0x5af924;
        FUN_00466238(*local_14,local_9c);
        iStack_c0 = iVar7 + -1 + iVar8;
        FUN_005ae860(local_8,2,iVar7,uVar10);
        iVar7 = iVar7 + 1;
        local_14 = local_14 + 8;
      } while (iVar7 != 3);
    }
    if (local_60[0xd] == 2) {
      iVar7 = 1;
      uVar9 = 1;
      local_14 = (undefined **)&DAT_006d286c;
      do {
        if ((uVar9 & 1) == 0) {
          iStack_c0 = 0x5af9a7;
          FUN_00466238(*local_14,0);
        }
        else {
          iStack_c0 = 0x5af973;
          FUN_00409dd8(iVar7,&local_a8);
          iStack_c0 = 0x5af989;
          FUN_00404bf0(&local_a4,&DAT_005b00b4,local_a8);
          iStack_c0 = 0x5af999;
          FUN_00466238(*local_14,local_a4);
        }
        iStack_c0 = (uVar9 - 1) + iVar8;
        FUN_005ae860(local_8,2,uVar9);
        if ((uVar9 & 1) != 0) {
          iVar7 = iVar7 + 1;
        }
        uVar9 = uVar9 + 1;
        local_14 = local_14 + 8;
      } while (uVar9 != 5);
    }
  }
  iVar8 = FUN_0065a250(DAT_006d25e4,3,0x65);
  if (-1 < iVar8) {
    if (local_60[0xe] == 1) {
      iVar7 = 1;
      local_14 = (undefined **)&DAT_006d296c;
      do {
        uVar10 = 0x5afa08;
        FUN_00466238(*local_14,0);
        iStack_c0 = iVar7 + -1 + iVar8;
        FUN_005ae860(local_8,3,iVar7,uVar10);
        iVar7 = iVar7 + 1;
        local_14 = local_14 + 8;
      } while (iVar7 != 2);
    }
    if (local_60[0xe] == 2) {
      iVar7 = 1;
      local_14 = (undefined **)&DAT_006d296c;
      do {
        iStack_c0 = 0x5afa45;
        FUN_00466238(*local_14,0);
        iStack_c0 = iVar7 + -1 + iVar8;
        FUN_005ae860(local_8,3,iVar7);
        iVar7 = iVar7 + 1;
        local_14 = local_14 + 8;
      } while (iVar7 != 3);
    }
  }
  if (local_60[0xc] == 1) {
    FUN_004659e8(*(undefined4 *)(local_8 + 0x338),0x8c);
  }
  else {
    FUN_004659e8(*(undefined4 *)(local_8 + 0x338),0xaa);
  }
  if (local_60[0xd] == 1) {
    FUN_004659e8(*(undefined4 *)(local_8 + 0x348),0x3c);
  }
  else {
    FUN_004659e8(*(undefined4 *)(local_8 + 0x348),0x62);
  }
  if (local_60[0xe] == 1) {
    FUN_004659e8(*(undefined4 *)(local_8 + 0x340),0x42);
  }
  else {
    FUN_004659e8(*(undefined4 *)(local_8 + 0x340),0x52);
  }
  iVar8 = 3;
  local_14 = (undefined **)(local_60 + 3);
  do {
    *local_14 = (undefined *)0x163;
    local_14 = local_14 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (local_60[0xc] < 1) {
    local_60[9] = 0x16;
    local_60[0xb] = 0x16;
    if ((*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510) < 2) ||
       (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) == 1)) {
      local_60[0xb] = DAT_00669fb0;
    }
    if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) < 2) {
      if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x510) < 3) {
        local_60[6] = 0xb4;
        local_60[7] = 0xfa;
        local_60[8] = *(int *)(*(int *)(local_8 + 0x348) + 0x4c) + 0xfa;
        if (local_60[0xd] < 1) {
          local_60[8] = 0x118;
        }
      }
      else {
        local_60[6] = 0x1a4;
        local_60[7] = 0x186;
        local_60[8] = *(int *)(*(int *)(local_8 + 0x348) + 0x4c) + 0x186;
        if (local_60[0xd] < 1) {
          local_60[8] = 400;
        }
      }
    }
    else {
      local_60[6] = 0x172;
      local_60[7] = 0x172;
      local_60[8] = *(int *)(*(int *)(local_8 + 0x348) + 0x4c) + 0x172;
    }
    local_60[10] = local_60[0xb];
    if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) == 3) {
      local_60[7] = 0x19a;
      local_60[8] = *(int *)(*(int *)(local_8 + 0x348) + 0x4c) + 0x195;
      FUN_004659e8(*(undefined4 *)(local_8 + 0x340),0x3e);
    }
  }
  else {
    local_60[9] = 0x16;
    local_60[10] = 0x191;
    local_60[0xb] = 0x191;
    iVar8 = 3;
    local_14 = (undefined **)(local_60 + 3);
    do {
      *local_14 = (undefined *)0x17c;
      local_14 = local_14 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    local_60[6] = 0x186;
    local_60[7] = 0x186;
    local_60[8] = *(int *)(*(int *)(local_8 + 0x348) + 0x4c) + 0x186;
    if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) == 2) {
      local_60[6] = 0x17c;
      local_60[7] = 0x17c;
      local_60[8] = *(int *)(*(int *)(local_8 + 0x348) + 0x4c) + 0x17c;
    }
    if (*(int *)(PTR_DAT_0066ae98 + DAT_006d25e4 * 0x568 + 0x530) == 4) {
      local_60[6] = 0x19a;
      local_60[7] = 0x19a;
      FUN_004659e8(*(undefined4 *)(local_8 + 0x338),0x9b);
      FUN_004659e8(*(undefined4 *)(local_8 + 0x340),0x3e);
      local_60[8] = *(int *)(*(int *)(local_8 + 0x348) + 0x4c) + 0x195;
    }
    if (1 < local_60[0xc]) {
      FUN_004659e8(*(undefined4 *)(local_8 + 0x340),0x48);
    }
  }
  FUN_00465978(*(undefined4 *)(local_8 + 0x338),local_60[9]);
  FUN_00465978(*(undefined4 *)(local_8 + 0x348),local_60[10]);
  FUN_00465978(*(undefined4 *)(local_8 + 0x340),local_60[0xb]);
  FUN_0046599c(*(undefined4 *)(local_8 + 0x338),local_60[6]);
  FUN_0046599c(*(undefined4 *)(local_8 + 0x348),local_60[7]);
  FUN_0046599c(*(undefined4 *)(local_8 + 0x340),local_60[8]);
  FUN_004659c4(*(undefined4 *)(local_8 + 0x338),local_60[3]);
  FUN_004659c4(*(undefined4 *)(local_8 + 0x348),local_60[4]);
  FUN_004659c4(*(undefined4 *)(local_8 + 0x340),local_60[5]);
  puVar1 = puStack_b8;
  *in_FS_OFFSET = iStack_c0;
  puStack_b8 = &LAB_005afe84;
  puStack_bc = (undefined1 *)0x5afe56;
  FUN_004048f8(&local_a8,10,puVar1);
  puStack_bc = (undefined1 *)0x5afe69;
  FUN_00405744(&local_80,PTR_DAT_004010dc,4);
  puStack_bc = (undefined1 *)0x5afe7c;
  FUN_00405744(&local_70,PTR_DAT_004010dc,4);
  return;
}

