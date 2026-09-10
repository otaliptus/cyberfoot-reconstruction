// Address: 00612a00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00612a00(int param_1,int param_2)

{
  longlong lVar1;
  undefined *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *in_FS_OFFSET;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  int local_198;
  undefined4 local_194;
  int local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined *local_180;
  undefined4 local_17c;
  undefined *local_178;
  undefined4 local_174;
  undefined *local_170;
  undefined4 local_16c;
  undefined *local_168;
  undefined4 local_164;
  undefined *local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined *local_14c;
  undefined4 local_148;
  undefined *local_144;
  undefined4 local_140;
  undefined *local_13c;
  undefined4 local_138;
  undefined *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  int *local_124;
  undefined4 local_120;
  int local_11c;
  undefined *local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined *local_104;
  undefined4 local_100;
  undefined *local_fc;
  undefined4 local_f8;
  undefined *local_f4;
  undefined4 local_f0;
  undefined *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  int *local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined *local_bc;
  undefined *local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined *local_ac;
  undefined4 local_a8;
  undefined *local_a4;
  undefined *local_a0;
  undefined4 local_9c;
  undefined *local_98;
  undefined *local_94;
  undefined4 local_90;
  undefined *local_8c;
  undefined *local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int *local_6c;
  undefined4 local_68;
  int local_64;
  undefined *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined *local_44;
  int *local_40;
  wchar_t *local_3c;
  int local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  int *piStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puVar2 = PTR_DAT_0066afa0;
  puStack_1c = &stack0xfffffffc;
  iVar11 = 0x37;
  do {
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  puStack_20 = &LAB_00614076;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  DAT_006d4794 = 0;
  iVar11 = 10;
  local_3c = (wchar_t *)&DAT_006d4494;
  do {
    local_3c[0] = L'\0';
    local_3c[1] = L'\0';
    local_3c = local_3c + 2;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  piStack_28 = (int *)0x612a67;
  FUN_0043b244(*(undefined4 *)(param_1 + 0x300),*(undefined4 *)(PTR_DAT_0066ac78 + 200));
  piStack_28 = (int *)0x612a7d;
  FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
  if (*PTR_DAT_0066b6c8 == '\0') {
    piStack_28 = (int *)0x612a94;
    FUN_0064d5d4(1,&local_54);
    piStack_28 = (int *)0x612aa5;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_54);
  }
  if (param_2 == 1) {
    piStack_28 = (int *)0x612ab0;
    cVar5 = FUN_0065735c();
    if (cVar5 == '\0') {
      piStack_28 = (int *)0x612ae2;
      FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
    }
    else {
      piStack_28 = (int *)0x612aca;
      FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
    }
  }
  if (param_2 == 2) {
    piStack_28 = (int *)0x612aed;
    cVar5 = FUN_00657070();
    if (cVar5 == '\0') {
      piStack_28 = (int *)0x612b1f;
      FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
    }
    else {
      piStack_28 = (int *)0x612b07;
      FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
    }
  }
  if (param_2 == 4) {
    if (*(int *)PTR_DAT_0066b484 == 1) {
      piStack_28 = (int *)0x612b3d;
      cVar5 = FUN_006574c4(1);
      if (cVar5 == '\0') {
        piStack_28 = (int *)0x612b6f;
        FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
      }
      else {
        piStack_28 = (int *)0x612b57;
        FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
      }
    }
    if (*(int *)PTR_DAT_0066b484 == 2) {
      piStack_28 = (int *)0x612b80;
      cVar5 = FUN_006574c4(0);
      if (cVar5 == '\0') {
        piStack_28 = (int *)0x612bb2;
        FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
      }
      else {
        piStack_28 = (int *)0x612b9a;
        FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
      }
    }
  }
  if (param_2 == 6) {
    if (*(int *)PTR_DAT_0066b484 == 1) {
      piStack_28 = (int *)0x612bd0;
      cVar5 = FUN_00657538(1);
      if (cVar5 == '\0') {
        piStack_28 = (int *)0x612c02;
        FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
      }
      else {
        piStack_28 = (int *)0x612bea;
        FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
      }
    }
    if (*(int *)PTR_DAT_0066b484 == 2) {
      piStack_28 = (int *)0x612c13;
      cVar5 = FUN_00657538(0);
      if (cVar5 == '\0') {
        piStack_28 = (int *)0x612c45;
        FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
      }
      else {
        piStack_28 = (int *)0x612c2d;
        FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
      }
    }
  }
  if ((*PTR_DAT_0066b6c8 == '\0') && (param_2 == 1)) {
    piStack_28 = (int *)0x612c7f;
    FUN_00645c68(*(undefined4 *)
                  (*(int *)PTR_DAT_0066aca0 + 0x140 + *(int *)PTR_DAT_0066b484 * 0x294),&local_5c);
    piStack_28 = (int *)local_5c;
    local_2c = &DAT_0061408c;
    local_30 = (undefined *)0x612c94;
    FUN_00642c50(0xd1,&local_60);
    local_30 = local_60;
    local_34 = &DAT_00614098;
    local_38 = 0x612cb2;
    uVar6 = FUN_0064d61c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x4c),
                         *(undefined4 *)(PTR_DAT_0066ac78 + 0x50));
    local_38 = 0x612cba;
    FUN_00409dd8(uVar6,&local_68);
    local_38 = 0x612cc5;
    FUN_004051d4(&local_64,local_68);
    local_38 = local_64;
    local_3c = L"喋讬ﱅ肋̤";
    FUN_00405330(&local_58,5);
    local_3c = L"豨慀贀顕톸";
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_58);
    local_3c = L" - ";
    local_40 = (int *)0x612cf8;
    FUN_00642c50(0xd1,&local_6c);
    local_40 = local_6c;
    local_44 = &DAT_00614098;
    local_48 = 0x612d16;
    uVar6 = FUN_0064d61c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x4c),
                         *(undefined4 *)(PTR_DAT_0066ac78 + 0x50));
    local_48 = 0x612d1e;
    FUN_00409dd8(uVar6,&local_74);
    local_48 = 0x612d29;
    FUN_004051d4(&local_70,local_74);
    local_48 = local_70;
    local_4c = 0x612d3b;
    FUN_00405330(PTR_DAT_0066aee8,4);
  }
  if ((*PTR_DAT_0066b6c8 == '\0') && (param_2 == 2)) {
    switch(*(undefined4 *)(PTR_DAT_0066ac78 + 0x110)) {
    case 0:
      piStack_28 = (int *)&DAT_0061408c;
      local_2c = (undefined *)0x612d98;
      FUN_00642c50(0xd5,&local_7c);
      local_2c = local_7c;
      local_30 = &DAT_0061408c;
      local_34 = (undefined *)0x612db3;
      FUN_0064d5f8(*(undefined4 *)(PTR_DAT_0066ac78 + 0x118),&local_80);
      local_34 = local_80;
      local_38 = 0x612dc3;
      FUN_00405330(&local_78,4);
      piStack_28 = (int *)0x612dd4;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_78);
      break;
    case 1:
      piStack_28 = (int *)&DAT_0061408c;
      local_2c = (undefined *)0x612dee;
      FUN_00642c50(0xd5,&local_88);
      local_2c = local_88;
      local_30 = &DAT_0061408c;
      local_34 = (undefined *)0x612e0f;
      FUN_0064d5f8(*(undefined4 *)(PTR_DAT_0066ac78 + 0x118),&local_8c);
      local_34 = local_8c;
      local_38 = 0x612e22;
      FUN_00405330(&local_84,4);
      piStack_28 = (int *)0x612e33;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_84);
      break;
    case 2:
      piStack_28 = (int *)&DAT_0061408c;
      local_2c = (undefined *)0x612e4d;
      FUN_00642c50(0xd6,&local_94);
      local_2c = local_94;
      local_30 = &DAT_0061408c;
      local_34 = (undefined *)0x612e6e;
      FUN_0064d5f8(*(undefined4 *)(PTR_DAT_0066ac78 + 0x118),&local_98);
      local_34 = local_98;
      local_38 = 0x612e84;
      FUN_00405330(&local_90,4);
      piStack_28 = (int *)0x612e98;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_90);
      break;
    case 3:
      piStack_28 = (int *)&DAT_0061408c;
      local_2c = (undefined *)0x612eb2;
      FUN_00642c50(0xd7,&local_a0);
      local_2c = local_a0;
      local_30 = &DAT_0061408c;
      local_34 = (undefined *)0x612ed3;
      FUN_0064d5f8(*(undefined4 *)(PTR_DAT_0066ac78 + 0x118),&local_a4);
      local_34 = local_a4;
      local_38 = 0x612ee9;
      FUN_00405330(&local_9c,4);
      piStack_28 = (int *)0x612efd;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_9c);
      break;
    case 4:
      piStack_28 = (int *)&DAT_0061408c;
      local_2c = (undefined *)0x612f17;
      FUN_00642c50(0xd8,&local_ac);
      local_2c = local_ac;
      local_30 = &DAT_0061408c;
      local_34 = (undefined *)0x612f38;
      FUN_0064d5f8(*(undefined4 *)(PTR_DAT_0066ac78 + 0x118),&local_b0);
      local_34 = local_b0;
      local_38 = 0x612f4e;
      FUN_00405330(&local_a8,4);
      piStack_28 = (int *)0x612f62;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_a8);
      break;
    case 5:
      piStack_28 = (int *)&DAT_0061408c;
      local_2c = (undefined *)0x612f79;
      FUN_00642c50(0xd9,&local_b8);
      local_2c = local_b8;
      local_30 = &DAT_0061408c;
      local_34 = (undefined *)0x612f9a;
      FUN_0064d5f8(*(undefined4 *)(PTR_DAT_0066ac78 + 0x118),&local_bc);
      local_34 = local_bc;
      local_38 = 0x612fb0;
      FUN_00405330(&local_b4,4);
      piStack_28 = (int *)0x612fc4;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_b4);
    }
    piStack_28 = (int *)0x612fd8;
    FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_c0);
    piStack_28 = (int *)0x612fe8;
    FUN_0040502c(PTR_DAT_0066aee8,local_c0);
    piStack_28 = (int *)0x61300d;
    FUN_006458c8(*(undefined4 *)
                  (*(int *)PTR_DAT_0066aca0 + 0x140 + *(int *)PTR_DAT_0066b484 * 0x294),&local_c4);
    piStack_28 = &local_c4;
    local_2c = (undefined *)0x613028;
    FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_c8);
    piVar3 = piStack_28;
    piStack_28 = (int *)0x613034;
    FUN_0040526c(piVar3,local_c8);
    piStack_28 = (int *)0x613048;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_c4);
  }
  if ((*PTR_DAT_0066b6c8 == '\0') && (param_2 == 4)) {
    piStack_28 = (int *)0x613087;
    FUN_0064d5f8(*(undefined4 *)(PTR_DAT_0066ac78 + 0x198),&local_30);
    if (*(int *)PTR_DAT_0066b484 == 1) {
      piStack_28 = (int *)0x61309e;
      FUN_00642c50(0xde,&local_34);
    }
    else if (*(int *)PTR_DAT_0066b484 == 2) {
      piStack_28 = (int *)0x6130b7;
      FUN_00642c50(0xdc,&local_34);
    }
    else if (*(int *)PTR_DAT_0066b484 == 3) {
      piStack_28 = (int *)0x6130d0;
      FUN_00642c50(0x3e2,&local_34);
    }
    else if (*(int *)PTR_DAT_0066b484 == 4) {
      piStack_28 = (int *)0x6130e9;
      FUN_00642c50(0x3e3,&local_34);
    }
    iVar11 = *(int *)(PTR_DAT_0066ac78 + 0x194);
    if (iVar11 < 4) {
      piStack_28 = (int *)local_34;
      local_2c = &DAT_0061408c;
      local_30 = (undefined *)0x613115;
      FUN_00642c50(0xd1,&local_d0);
      local_30 = local_d0;
      local_34 = &DAT_00614098;
      local_38 = 0x61313c;
      uVar6 = FUN_0064d63c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x194),
                           *(undefined4 *)(PTR_DAT_0066ac78 + 400));
      local_38 = 0x613147;
      FUN_00409dd8(uVar6,&local_d8);
      local_38 = 0x613158;
      FUN_004051d4(&local_d4,local_d8);
      local_38 = local_d4;
      local_3c = L"開Ｘ\xffff䖋诼⒀\x03\xe800\xe292￬ꁨ慀贀⢕\xffff룿Ñ";
      FUN_00405330(&local_cc,5);
      local_3c = L"ꁨ慀贀⢕\xffff룿Ñ";
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_cc);
      local_3c = L" -  - ";
      local_40 = (int *)0x613197;
      FUN_00642c50(0xd1,&local_dc);
      local_40 = local_dc;
      local_44 = &DAT_00614098;
      local_48 = 0x6131be;
      uVar6 = FUN_0064d63c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x194),
                           *(undefined4 *)(PTR_DAT_0066ac78 + 400));
      local_48 = 0x6131c9;
      FUN_00409dd8(uVar6,&local_e4);
      local_48 = 0x6131da;
      FUN_004051d4(&local_e0,local_e4);
      local_48 = local_e0;
      local_4c = 0x6131ef;
      FUN_00405330(PTR_DAT_0066aee8,4);
    }
    else {
      if (iVar11 == 4) {
        piStack_28 = (int *)&DAT_0061408c;
        local_2c = (undefined *)0x61322a;
        FUN_00642c50(0xd6,&local_ec);
        local_2c = local_ec;
        local_30 = &DAT_0061408c;
        local_34 = &DAT_0061408c;
        local_38 = 0x613248;
        FUN_00405330(&local_e8,4);
        piStack_28 = (int *)0x61325c;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_e8);
      }
      else if (iVar11 == 5) {
        piStack_28 = (int *)&DAT_0061408c;
        local_2c = (undefined *)0x613276;
        FUN_00642c50(0xd7,&local_f4);
        local_2c = local_f4;
        local_30 = &DAT_0061408c;
        local_34 = &DAT_0061408c;
        local_38 = 0x613294;
        FUN_00405330(&local_f0,4);
        piStack_28 = (int *)0x6132a8;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_f0);
      }
      else if (iVar11 == 6) {
        piStack_28 = (int *)&DAT_0061408c;
        local_2c = (undefined *)0x6132c2;
        FUN_00642c50(0xd8,&local_fc);
        local_2c = local_fc;
        local_30 = &DAT_0061408c;
        local_34 = &DAT_0061408c;
        local_38 = 0x6132e0;
        FUN_00405330(&local_f8,4);
        piStack_28 = (int *)0x6132f4;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_f8);
      }
      else if (iVar11 == 7) {
        piStack_28 = (int *)&DAT_0061408c;
        local_2c = (undefined *)0x61330b;
        FUN_00642c50(0xd9,&local_104);
        local_2c = local_104;
        local_30 = &DAT_0061408c;
        local_34 = &DAT_0061408c;
        local_38 = 0x613329;
        FUN_00405330(&local_100,4);
        piStack_28 = (int *)0x61333d;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_100);
      }
      piStack_28 = (int *)0x613351;
      FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_108);
      piStack_28 = (int *)0x613361;
      FUN_0040502c(PTR_DAT_0066aee8,local_108);
      uVar6 = *(undefined4 *)(param_1 + 0x324);
      piStack_28 = (int *)0x613377;
      FUN_004e1400(uVar6,&local_110);
      piStack_28 = (int *)0x61338b;
      FUN_004052cc(&local_10c,local_34,local_110);
      piStack_28 = (int *)0x613398;
      FUN_004e1414(uVar6,local_10c);
    }
  }
  piStack_28 = (int *)0x6133b1;
  FUN_00405eec(*(undefined4 *)puVar2);
  local_2c = (undefined *)0x0;
  if ((param_2 == 1) || (param_2 == 2)) {
    piStack_28 = (int *)0x6133cd;
    iVar11 = FUN_00405ef4(*(undefined4 *)puVar2);
    if (-1 < iVar11) {
      local_38 = iVar11 + 1;
      iVar11 = 0;
      do {
        if ((((*(int *)(*(int *)puVar2 + 0x38 + iVar11 * 0x48) == *(int *)PTR_DAT_0066b484) &&
             (*(int *)(*(int *)puVar2 + 0x18 + iVar11 * 0x48) == param_2)) &&
            (*(double *)(*(int *)puVar2 + 0x30 + iVar11 * 0x48) ==
             *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10))) &&
           (*(char *)(*(int *)puVar2 + 0x2c + iVar11 * 0x48) == '\0')) {
          piStack_28 = *(int **)(*(int *)puVar2 + iVar11 * 0x48);
          local_2c = *(undefined **)(*(int *)puVar2 + 4 + iVar11 * 0x48);
          local_34 = (undefined *)0x61344c;
          iStack_24 = iVar11;
          FUN_006104c0(param_1,local_2c,param_2);
          if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                        *(int *)(*(int *)puVar2 + iVar11 * 0x48) * 0x2f8) != '\0') ||
             (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                       *(int *)(*(int *)puVar2 + 4 + iVar11 * 0x48) * 0x2f8) != '\0')) {
            DAT_006d4794 = DAT_006d4794 + 1;
            (&DAT_006d4490)[DAT_006d4794] = local_2c;
          }
        }
        iVar11 = iVar11 + 1;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
    }
  }
  DAT_006d4920 = 1;
  if ((param_2 == 4) || (param_2 == 6)) {
    piStack_28 = (int *)0x6134ba;
    iVar11 = FUN_00405ef4(*(undefined4 *)puVar2);
    if (-1 < iVar11) {
      local_38 = iVar11 + 1;
      iVar11 = 0;
      do {
        if ((((*(int *)(*(int *)puVar2 + 0x38 + iVar11 * 0x48) == *(int *)PTR_DAT_0066b484) &&
             (*(int *)(*(int *)puVar2 + 0x18 + iVar11 * 0x48) == param_2)) &&
            (*(double *)(*(int *)puVar2 + 0x30 + iVar11 * 0x48) ==
             *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10))) &&
           (*(char *)(*(int *)puVar2 + 0x2c + iVar11 * 0x48) == '\0')) {
          piStack_28 = *(int **)(*(int *)puVar2 + iVar11 * 0x48);
          local_2c = *(undefined **)(*(int *)puVar2 + 4 + iVar11 * 0x48);
          local_34 = (undefined *)0x61353d;
          iStack_24 = iVar11;
          FUN_006104c0(param_1,local_2c,param_2);
          if (*(int *)PTR_DAT_0066b484 == 1) {
            DAT_006d4920 = *(undefined4 *)(*(int *)puVar2 + 0x1c + iVar11 * 0x48);
          }
          if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                        *(int *)(*(int *)puVar2 + iVar11 * 0x48) * 0x2f8) != '\0') ||
             (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                       *(int *)(*(int *)puVar2 + 4 + iVar11 * 0x48) * 0x2f8) != '\0')) {
            DAT_006d4794 = DAT_006d4794 + 1;
            (&DAT_006d4490)[DAT_006d4794] = local_2c;
          }
        }
        iVar11 = iVar11 + 1;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
    }
  }
  *(undefined **)PTR_DAT_0066aea4 = local_2c;
  if ((*PTR_DAT_0066b6c8 == '\0') && (param_2 == 6)) {
    piStack_28 = (int *)0x6135d4;
    FUN_0064d5f8(*(undefined4 *)(PTR_DAT_0066ac78 + 0x1a4),&local_30);
    if (*(int *)PTR_DAT_0066b484 == 1) {
      piStack_28 = (int *)0x6135eb;
      FUN_00642c50(0xdf,&local_34);
    }
    else {
      piStack_28 = (int *)0x6135fa;
      FUN_00642c50(0xdd,&local_34);
    }
    if (*(int *)PTR_DAT_0066b484 == 2) {
      if (*(int *)(PTR_DAT_0066ac78 + 0x1a0) < 4) {
        piStack_28 = (int *)local_34;
        local_2c = &DAT_0061408c;
        local_30 = (undefined *)0x613632;
        FUN_00642c50(0xd1,&local_118);
        local_30 = local_118;
        local_34 = &DAT_00614098;
        local_38 = 0x613659;
        uVar6 = FUN_0064d63c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x1a0),
                             *(undefined4 *)(PTR_DAT_0066ac78 + 0x19c));
        local_38 = 0x613664;
        FUN_00409dd8(uVar6,&local_120);
        local_38 = 0x613675;
        FUN_004051d4(&local_11c,local_120);
        local_38 = local_11c;
        local_3c = (wchar_t *)0x61368b;
        FUN_00405330(&local_114,5);
        local_3c = L"ꁨ慀贀\xe095\xfffe룿Ñ";
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_114);
        local_3c = L" -  - ";
        local_40 = (int *)0x6136b4;
        FUN_00642c50(0xd1,&local_124);
        local_40 = local_124;
        local_44 = &DAT_00614098;
        local_48 = 0x6136db;
        uVar6 = FUN_0064d63c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x1a0),
                             *(undefined4 *)(PTR_DAT_0066ac78 + 0x19c));
        local_48 = 0x6136e6;
        FUN_00409dd8(uVar6,&local_12c);
        local_48 = 0x6136f7;
        FUN_004051d4(&local_128,local_12c);
        local_48 = local_128;
        local_4c = 0x61370c;
        FUN_00405330(PTR_DAT_0066aee8,4);
      }
      else {
        iVar11 = *(int *)(PTR_DAT_0066ac78 + 0x1a0);
        if (iVar11 == 4) {
          piStack_28 = (int *)&DAT_0061408c;
          local_2c = (undefined *)0x61374c;
          FUN_00642c50(0xd6,&local_134);
          local_2c = local_134;
          local_30 = &DAT_0061408c;
          local_34 = &DAT_0061408c;
          local_38 = 0x61376a;
          FUN_00405330(&local_130,4);
          piStack_28 = (int *)0x61377e;
          FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_130);
        }
        else if (iVar11 == 5) {
          piStack_28 = (int *)&DAT_0061408c;
          local_2c = (undefined *)0x613798;
          FUN_00642c50(0xd7,&local_13c);
          local_2c = local_13c;
          local_30 = &DAT_0061408c;
          local_34 = &DAT_0061408c;
          local_38 = 0x6137b6;
          FUN_00405330(&local_138,4);
          piStack_28 = (int *)0x6137ca;
          FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_138);
        }
        else if (iVar11 == 6) {
          piStack_28 = (int *)&DAT_0061408c;
          local_2c = (undefined *)0x6137e4;
          FUN_00642c50(0xd8,&local_144);
          local_2c = local_144;
          local_30 = &DAT_0061408c;
          local_34 = &DAT_0061408c;
          local_38 = 0x613802;
          FUN_00405330(&local_140,4);
          piStack_28 = (int *)0x613816;
          FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_140);
        }
        else if (iVar11 == 7) {
          piStack_28 = (int *)&DAT_0061408c;
          local_2c = (undefined *)0x61382d;
          FUN_00642c50(0xd9,&local_14c);
          local_2c = local_14c;
          local_30 = &DAT_0061408c;
          local_34 = &DAT_0061408c;
          local_38 = 0x61384b;
          FUN_00405330(&local_148,4);
          piStack_28 = (int *)0x61385f;
          FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_148);
        }
        piStack_28 = (int *)0x613873;
        FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_150);
        piStack_28 = (int *)0x613883;
        FUN_0040502c(PTR_DAT_0066aee8,local_150);
        piStack_28 = (int *)0x613897;
        FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_158);
        piStack_28 = (int *)0x6138ab;
        FUN_004052cc(&local_154,local_34,local_158);
        piStack_28 = (int *)0x6138bf;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_154);
      }
    }
    else {
      switch(DAT_006d4920) {
      case 1:
      case 2:
      case 3:
        piStack_28 = (int *)&DAT_0061408c;
        local_2c = (undefined *)0x61390e;
        FUN_00642c50(0xd5,&local_160);
        local_2c = local_160;
        local_30 = &DAT_0061408c;
        local_34 = &DAT_0061408c;
        local_38 = 0x61392c;
        FUN_00405330(&local_15c,4);
        piStack_28 = (int *)0x613940;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_15c);
        break;
      case 4:
        piStack_28 = (int *)&DAT_0061408c;
        local_2c = (undefined *)0x61395a;
        FUN_00642c50(0xd6,&local_168);
        local_2c = local_168;
        local_30 = &DAT_0061408c;
        local_34 = &DAT_0061408c;
        local_38 = 0x613978;
        FUN_00405330(&local_164,4);
        piStack_28 = (int *)0x61398c;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_164);
        break;
      case 5:
        piStack_28 = (int *)&DAT_0061408c;
        local_2c = (undefined *)0x6139a6;
        FUN_00642c50(0xd7,&local_170);
        local_2c = local_170;
        local_30 = &DAT_0061408c;
        local_34 = &DAT_0061408c;
        local_38 = 0x6139c4;
        FUN_00405330(&local_16c,4);
        piStack_28 = (int *)0x6139d8;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_16c);
        break;
      case 6:
        piStack_28 = (int *)&DAT_0061408c;
        local_2c = (undefined *)0x6139f2;
        FUN_00642c50(0xd8,&local_178);
        local_2c = local_178;
        local_30 = &DAT_0061408c;
        local_34 = &DAT_0061408c;
        local_38 = 0x613a10;
        FUN_00405330(&local_174,4);
        piStack_28 = (int *)0x613a24;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_174);
        break;
      case 7:
        piStack_28 = (int *)&DAT_0061408c;
        local_2c = (undefined *)0x613a3b;
        FUN_00642c50(0xd9,&local_180);
        local_2c = local_180;
        local_30 = &DAT_0061408c;
        local_34 = &DAT_0061408c;
        local_38 = 0x613a59;
        FUN_00405330(&local_17c,4);
        piStack_28 = (int *)0x613a6d;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_17c);
      }
      piStack_28 = (int *)0x613a81;
      FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_184);
      piStack_28 = (int *)0x613a91;
      FUN_0040502c(PTR_DAT_0066aee8,local_184);
      piStack_28 = (int *)0x613aa5;
      FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_18c);
      piStack_28 = (int *)0x613ab9;
      FUN_004052cc(&local_188,local_34,local_18c);
      piStack_28 = (int *)0x613acd;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_188);
    }
  }
  if (0 < *(int *)PTR_DAT_0066aea4) {
    iVar11 = 1;
    local_3c = (wchar_t *)&DAT_006d47b0;
    local_40 = &DAT_006d4850;
    local_38 = *(int *)PTR_DAT_0066aea4;
    do {
      if (*PTR_DAT_0066b6c8 == '\0') {
        piStack_28 = (int *)0x613b19;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc),&local_190);
        if (local_190 != 0) {
          piStack_28 = (int *)0x613b38;
          FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc),&local_194);
          piStack_28 = (int *)0x613b4e;
          FUN_0042d6c0(*(undefined4 *)(*(int *)local_3c + 0x168),local_194);
        }
        piStack_28 = (int *)0x613b64;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar11 * 0x1bc),&local_198);
        if (local_198 != 0) {
          piStack_28 = (int *)0x613b83;
          FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar11 * 0x1bc),&local_19c);
          piStack_28 = (int *)0x613b99;
          FUN_0042d6c0(*(undefined4 *)(*local_40 + 0x168),local_19c);
        }
        piStack_28 = (int *)0x613bc0;
        FUN_00404b48(&local_1a0,
                     *(int *)PTR_DAT_0066af70 + 0x1d0 +
                     *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
        piStack_28 = (int *)0x613bd3;
        FUN_00466238(*(undefined4 *)(DAT_006d4760 + iVar11 * 4),local_1a0);
      }
      piStack_28 = (int *)0x613c02;
      FUN_00404b48(*(int *)PTR_DAT_0066b3b8 + 0x3c + iVar11 * 0x1bc,
                   *(int *)PTR_DAT_0066af70 + 0x1d0 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x40 + iVar11 * 0x1bc) = 0;
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x41 + iVar11 * 0x1bc) = 0;
      if (param_2 == 1) {
        piStack_28 = &local_50;
        local_2c = (undefined *)0x613c42;
        FUN_00616014(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar11 * 0x1bc));
      }
      if (param_2 == 2) {
        piStack_28 = &local_50;
        local_2c = (undefined *)0x613c6a;
        FUN_00616628(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar11 * 0x1bc));
      }
      if (param_2 == 4) {
        piStack_28 = &local_50;
        local_2c = (undefined *)0x613c92;
        FUN_0061794c(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar11 * 0x1bc));
      }
      if (param_2 == 6) {
        piStack_28 = &local_50;
        local_2c = (undefined *)0x613cba;
        FUN_00617e08(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar11 * 0x1bc));
      }
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + iVar11 * 0x1bc) = local_50;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + iVar11 * 0x1bc) = local_4c;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + iVar11 * 0x1bc) = local_48;
      *(undefined **)(*(int *)PTR_DAT_0066b3b8 + 0x38 + iVar11 * 0x1bc) = local_44;
      *(undefined **)(*(int *)PTR_DAT_0066b3b8 + 0x28 + iVar11 * 0x1bc) =
           local_44 + local_50 + local_4c + local_48;
      if (*PTR_DAT_0066b6c8 == '\0') {
        piStack_28 = (int *)0x613d2e;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x28 + iVar11 * 0x1bc),&local_1a8);
        piStack_28 = (int *)0x613d44;
        FUN_00404bf0(&local_1a4,&DAT_006140b8,local_1a8);
        piStack_28 = (int *)0x613d57;
        FUN_00466238(*(undefined4 *)(DAT_006d4788 + iVar11 * 4),local_1a4);
      }
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + iVar11 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x1f8 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
      local_1ac = (undefined4)lVar1;
      piStack_28 = (int *)0x613d8f;
      iVar7 = FUN_00402c38(local_1ac,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + iVar11 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x1fc +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
      local_1b0 = (undefined4)lVar1;
      piStack_28 = (int *)0x613dcc;
      iVar8 = FUN_00402c38(local_1b0,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + iVar11 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 500 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
      local_1b4 = (undefined4)lVar1;
      piStack_28 = (int *)0x613e09;
      iVar9 = FUN_00402c38(local_1b4,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x38 + iVar11 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x200 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
      local_1b8 = (undefined4)lVar1;
      piStack_28 = (int *)0x613e46;
      iVar10 = FUN_00402c38(local_1b8,(int)((ulonglong)lVar1 >> 0x20));
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + iVar11 * 0x1bc) = iVar7 + iVar8 + iVar9 + iVar10;
      iVar11 = iVar11 + 1;
      local_40 = local_40 + 1;
      local_3c = local_3c + 2;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  if ((*PTR_DAT_0066b6c8 == '\0') && (0 < *(int *)PTR_DAT_0066aea4)) {
    iVar11 = 1;
    local_38 = *(int *)PTR_DAT_0066aea4;
    do {
      piStack_28 = (int *)0x613e91;
      FUN_00466238(*(undefined4 *)(DAT_006d4780 + iVar11 * 4),0);
      piStack_28 = (int *)0x613ea0;
      FUN_00545088(*(undefined4 *)(DAT_006d4784 + iVar11 * 4),0);
      iVar7 = *(int *)(DAT_006d492c + iVar11 * 4);
      if (*(int *)(iVar7 + 0x168) != 0) {
        piStack_28 = (int *)0x613eb8;
        FUN_0043aa68(iVar7,0);
      }
      iVar11 = iVar11 + 1;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  piStack_28 = (int *)0x613ed2;
  FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_1bc);
  piStack_28 = (int *)0x613ee6;
  FUN_00545088(*(undefined4 *)(param_1 + 0x310),local_1bc);
  puVar4 = puStack_1c;
  *in_FS_OFFSET = iStack_24;
  puStack_1c = &LAB_00614080;
  puStack_20 = (undefined1 *)0x613efe;
  FUN_00404ff0(&local_1bc,iStack_24,puVar4);
  puStack_20 = (undefined1 *)0x613f0e;
  FUN_004048f8(&local_1a8,7);
  puStack_20 = (undefined1 *)0x613f19;
  FUN_00404ff0(&local_18c);
  puStack_20 = (undefined1 *)0x613f24;
  FUN_00404ff0(&local_188);
  puStack_20 = (undefined1 *)0x613f2f;
  FUN_00404ff0(&local_184);
  puStack_20 = (undefined1 *)0x613f3f;
  FUN_00405008(&local_180,10);
  puStack_20 = (undefined1 *)0x613f4a;
  FUN_00404ff0(&local_158);
  puStack_20 = (undefined1 *)0x613f55;
  FUN_00404ff0(&local_154);
  puStack_20 = (undefined1 *)0x613f60;
  FUN_00404ff0(&local_150);
  puStack_20 = (undefined1 *)0x613f70;
  FUN_00405008(&local_14c,8);
  puStack_20 = (undefined1 *)0x613f7b;
  FUN_004048d4(&local_12c);
  puStack_20 = (undefined1 *)0x613f8b;
  FUN_00405008(&local_128,2);
  puStack_20 = (undefined1 *)0x613f96;
  FUN_004048d4(&local_120);
  puStack_20 = (undefined1 *)0x613fa6;
  FUN_00405008(&local_11c,3);
  puStack_20 = (undefined1 *)0x613fb1;
  FUN_00404ff0(&local_110);
  puStack_20 = (undefined1 *)0x613fbc;
  FUN_00404ff0(&local_10c);
  puStack_20 = (undefined1 *)0x613fc7;
  FUN_00404ff0(&local_108);
  puStack_20 = (undefined1 *)0x613fd7;
  FUN_00405008(&local_104,8);
  puStack_20 = (undefined1 *)0x613fe2;
  FUN_004048d4(&local_e4);
  puStack_20 = (undefined1 *)0x613ff2;
  FUN_00405008(&local_e0,2);
  puStack_20 = (undefined1 *)0x613ffd;
  FUN_004048d4(&local_d8);
  puStack_20 = (undefined1 *)0x61400d;
  FUN_00405008(&local_d4,3);
  puStack_20 = (undefined1 *)0x614018;
  FUN_00404ff0(&local_c8);
  puStack_20 = (undefined1 *)0x614023;
  FUN_00404ff0(&local_c4);
  puStack_20 = (undefined1 *)0x61402e;
  FUN_00404ff0(&local_c0);
  puStack_20 = (undefined1 *)0x61403e;
  FUN_00405008(&local_bc,0x12);
  puStack_20 = (undefined1 *)0x614046;
  FUN_004048d4(&local_74);
  puStack_20 = (undefined1 *)0x614053;
  FUN_00405008(&local_70,2);
  puStack_20 = (undefined1 *)0x61405b;
  FUN_004048d4(&local_68);
  puStack_20 = (undefined1 *)0x614068;
  FUN_00405008(&local_64,5);
  puStack_20 = (undefined1 *)0x614075;
  FUN_00405008(&local_34,2);
  return;
}

