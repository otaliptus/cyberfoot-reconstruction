// Address: 005f7c28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f7c28(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *in_FS_OFFSET;
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
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined *local_44;
  int local_40;
  undefined *local_3c;
  int local_38;
  undefined *local_34;
  int local_30;
  undefined4 *local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int iVar9;
  
  local_1c = &stack0xfffffffc;
  local_28 = (int *)&stack0xfffffffc;
  iVar5 = 0x21;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = &LAB_005f8876;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_2c = (undefined4 *)&LAB_005f7c86;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_30;
  local_34 = (undefined *)0x5f7c6c;
  FUN_0043aa68(*(undefined4 *)(param_1 + 0x360),0);
  local_34 = (undefined *)0x5f7c7c;
  FUN_0043aa68(*(undefined4 *)(param_1 + 0x364),0);
  piVar8 = local_28;
  *in_FS_OFFSET = local_30;
  local_28 = (int *)0x5f7ca6;
  FUN_00533bc0(*(undefined4 *)(*(int *)(param_1 + 0x3b8) + 0x22c),0,piVar8);
  local_28 = (int *)0x5f7cbc;
  FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + param_2 * 600),&local_30);
  if (local_30 != 0) {
    local_28 = (int *)0x5f7cd4;
    FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + param_2 * 600),&local_34);
    local_28 = (int *)0x5f7ceb;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x360) + 0x168),local_34);
  }
  local_28 = (int *)0x5f7cfe;
  FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 4 + param_2 * 600),&local_38);
  if (local_38 != 0) {
    local_28 = (int *)0x5f7d17;
    FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 4 + param_2 * 600),&local_3c);
    local_28 = (int *)0x5f7d2e;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x168),local_3c);
  }
  if ((6 < *(int *)(PTR_DAT_0066ac78 + 0x88)) && (*(int *)(PTR_DAT_0066ac78 + 0x88) < 10)) {
    local_28 = (int *)0x5f7d5f;
    FUN_00645714(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + param_2 * 600),&local_40);
    if (local_40 != 0) {
      local_28 = (int *)0x5f7d77;
      FUN_00645714(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + param_2 * 600),&local_44);
      local_28 = (int *)0x5f7d8e;
      FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x360) + 0x168),local_44);
    }
  }
  if ((6 < *(int *)(PTR_DAT_0066ac78 + 0x88)) && (*(int *)(PTR_DAT_0066ac78 + 0x88) < 10)) {
    local_28 = (int *)0x5f7dc0;
    FUN_00645714(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 4 + param_2 * 600),&local_48);
    if (local_48 != 0) {
      local_28 = (int *)0x5f7dd9;
      FUN_00645714(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 4 + param_2 * 600),&local_4c);
      local_28 = (int *)0x5f7df0;
      FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x168),local_4c);
    }
  }
  local_28 = (int *)0x5f7e13;
  FUN_00405194(&local_50,
               *(int *)PTR_DAT_0066af70 + *(int *)(*(int *)PTR_DAT_0066b154 + param_2 * 600) * 0x2f8
              );
  local_28 = (int *)0x5f7e24;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),local_50);
  local_28 = (int *)0x5f7e44;
  FUN_00405194(&local_54,
               *(int *)PTR_DAT_0066af70 +
               *(int *)(*(int *)PTR_DAT_0066b154 + 4 + param_2 * 600) * 0x2f8);
  local_28 = (int *)0x5f7e55;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x3ac),local_54);
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 5) {
    local_28 = (int *)0x5f7eac;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),L"Japan");
  }
  else {
    local_28 = (int *)0x5f7e86;
    FUN_00405194(&local_58,
                 *(int *)PTR_DAT_0066af70 + 0x1d0 +
                 *(int *)(*(int *)PTR_DAT_0066b154 + param_2 * 600) * 0x2f8);
    local_28 = (int *)0x5f7e97;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_58);
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) < 7) && (*(int *)(PTR_DAT_0066ac78 + 0x88) != 5)) {
    local_28 = (int *)0x5f7ede;
    FUN_00651ebc(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x14 + param_2 * 600),&local_5c);
    local_28 = (int *)0x5f7eef;
    FUN_004e1414(*(undefined4 *)(param_1 + 800),local_5c);
    local_28 = (int *)0x5f7f02;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x10 + param_2 * 600),&local_64);
    local_28 = (int *)0x5f7f12;
    FUN_004052cc(&local_60,&DAT_005f889c,local_64);
    local_28 = (int *)0x5f7f23;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_60);
  }
  else {
    local_28 = (int *)0x5f7f35;
    FUN_00466128(*(undefined4 *)(param_1 + 800),0);
    local_28 = (int *)0x5f7f45;
    FUN_00466128(*(undefined4 *)(param_1 + 0x31c),0);
  }
  local_24 = *(int *)(*(int *)PTR_DAT_0066b154 + param_2 * 600);
  local_20 = *(undefined1 **)(*(int *)PTR_DAT_0066b154 + 4 + param_2 * 600);
  local_2c = (undefined4 *)&LAB_005f7fc2;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_30;
  iVar5 = *(int *)(*(int *)PTR_DAT_0066b154 + 0x20c + param_2 * 600) +
          *(int *)(*(int *)PTR_DAT_0066b154 + 0x224 + param_2 * 600);
  iVar2 = *(int *)(*(int *)PTR_DAT_0066b154 + 0x20c + param_2 * 600) * 100;
  local_68 = iVar2 / iVar5;
  local_34 = (undefined *)0x5f7fb5;
  local_28 = (int *)&stack0xfffffffc;
  local_1c = (undefined1 *)FUN_00402c38(local_68,iVar2 % iVar5);
  piVar8 = local_28;
  *in_FS_OFFSET = local_30;
  local_28 = (int *)0x5f7fd7;
  FUN_00409dd8(local_1c,&local_70,piVar8);
  local_28 = (int *)0x5f7fe4;
  FUN_00404bac(&local_70,&DAT_005f88a8);
  local_28 = (int *)0x5f7fef;
  FUN_004051d4(&local_6c,local_70);
  local_28 = (int *)0x5f8000;
  FUN_004e1414(*(undefined4 *)(param_1 + 900),local_6c);
  local_1c = (undefined1 *)(100 - (int)local_1c);
  local_28 = (int *)0x5f8016;
  FUN_00409dd8(local_1c,&local_78);
  local_28 = (int *)0x5f8023;
  FUN_00404bac(&local_78,&DAT_005f88a8);
  local_28 = (int *)0x5f802e;
  FUN_004051d4(&local_74,local_78);
  local_28 = (int *)0x5f803f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x380),local_74);
  local_28 = (int *)0x5f8056;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + param_2 * 600),&local_84);
  local_28 = (int *)local_84;
  local_2c = (undefined4 *)&DAT_005f88b4;
  local_30 = 0x5f8074;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + param_2 * 600),&local_88);
  local_30 = local_88;
  local_34 = (undefined *)0x5f8087;
  FUN_00404c64(&local_80,3);
  local_34 = (undefined *)0x5f8092;
  FUN_004051d4(&local_7c,local_80);
  local_34 = (undefined *)0x5f80a3;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),local_7c);
  if (*(char *)(*(int *)PTR_DAT_0066b154 + 0x48 + param_2 * 600) == '\0') {
    local_34 = (undefined *)0x5f813f;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x3c0),0);
  }
  else {
    local_34 = &DAT_005f88c0;
    local_38 = 0x5f80cc;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x4c + param_2 * 600),&local_94);
    local_38 = local_94;
    local_3c = &DAT_005f88cc;
    local_40 = 0x5f80ed;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x50 + param_2 * 600),&local_98);
    local_40 = local_98;
    local_44 = &DAT_005f88d8;
    local_48 = 0x5f8108;
    FUN_00404c64(&local_90,5);
    local_34 = (undefined *)0x5f8119;
    FUN_004051d4(&local_8c,local_90);
    local_34 = (undefined *)0x5f812d;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x3c0),local_8c);
  }
  local_34 = (undefined *)0x5f8158;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x210 + param_2 * 600),&local_a0);
  local_34 = (undefined *)0x5f8169;
  FUN_004051d4(&local_9c,local_a0);
  local_34 = (undefined *)0x5f817d;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x3a4),local_9c);
  local_34 = (undefined *)0x5f8196;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x228 + param_2 * 600),&local_a4);
  local_34 = (undefined *)0x5f81aa;
  FUN_00466238(*(undefined4 *)(param_1 + 0x3a0),local_a4);
  local_34 = (undefined *)0x5f81c3;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x214 + param_2 * 600),&local_ac);
  local_34 = (undefined *)0x5f81d4;
  FUN_004051d4(&local_a8,local_ac);
  local_34 = (undefined *)0x5f81e8;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x39c),local_a8);
  local_34 = (undefined *)0x5f8201;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x22c + param_2 * 600),&local_b0);
  local_34 = (undefined *)0x5f8215;
  FUN_00466238(*(undefined4 *)(param_1 + 0x398),local_b0);
  local_34 = (undefined *)0x5f822e;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x218 + param_2 * 600),&local_b8);
  local_34 = (undefined *)0x5f823f;
  FUN_004051d4(&local_b4,local_b8);
  local_34 = (undefined *)0x5f8253;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x394),local_b4);
  local_34 = (undefined *)0x5f826c;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x230 + param_2 * 600),&local_bc);
  local_34 = (undefined *)0x5f8280;
  FUN_00466238(*(undefined4 *)(param_1 + 0x390),local_bc);
  local_34 = (undefined *)0x5f8299;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x21c + param_2 * 600),&local_c4);
  local_34 = (undefined *)0x5f82aa;
  FUN_004051d4(&local_c0,local_c4);
  local_34 = (undefined *)0x5f82be;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x38c),local_c0);
  local_34 = (undefined *)0x5f82d7;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x234 + param_2 * 600),&local_cc);
  local_34 = (undefined *)0x5f82e8;
  FUN_004051d4(&local_c8,local_cc);
  local_34 = (undefined *)0x5f82fc;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x388),local_c8);
  iVar5 = *(int *)(*(int *)PTR_DAT_0066b154 + 0x23c + param_2 * 600);
  if (iVar5 == 0) {
    local_34 = (undefined *)0x5f8326;
    FUN_00642c50(0x122,&local_d0);
    local_34 = (undefined *)0x5f833a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_d0);
  }
  else if (iVar5 == 1) {
    local_34 = (undefined *)0x5f834c;
    FUN_00642c50(0x123,&local_d4);
    local_34 = (undefined *)0x5f8360;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_d4);
  }
  else if (iVar5 == 2) {
    local_34 = (undefined *)0x5f8372;
    FUN_00642c50(0x124,&local_d8);
    local_34 = (undefined *)0x5f8386;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_d8);
  }
  iVar5 = *(int *)(*(int *)PTR_DAT_0066b154 + 0x240 + param_2 * 600);
  if (iVar5 == 0) {
    local_34 = (undefined *)0x5f83b0;
    FUN_00642c50(0x122,&local_dc);
    local_34 = (undefined *)0x5f83c4;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x334),local_dc);
  }
  else if (iVar5 == 1) {
    local_34 = (undefined *)0x5f83d6;
    FUN_00642c50(0x123,&local_e0);
    local_34 = (undefined *)0x5f83ea;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x334),local_e0);
  }
  else if (iVar5 == 2) {
    local_34 = (undefined *)0x5f83fc;
    FUN_00642c50(0x124,&local_e4);
    local_34 = (undefined *)0x5f8410;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x334),local_e4);
  }
  iVar5 = *(int *)(*(int *)PTR_DAT_0066b154 + 0x244 + param_2 * 600);
  if (iVar5 == 0) {
    local_34 = (undefined *)0x5f8437;
    FUN_00642c50(0x128,&local_e8);
    local_34 = (undefined *)0x5f844b;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x338),local_e8);
  }
  else if (iVar5 == 1) {
    local_34 = (undefined *)0x5f845d;
    FUN_00642c50(0x129,&local_ec);
    local_34 = (undefined *)0x5f8471;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x338),local_ec);
  }
  iVar5 = *(int *)(*(int *)PTR_DAT_0066b154 + 0x248 + param_2 * 600);
  if (iVar5 == 0) {
    local_34 = (undefined *)0x5f8498;
    FUN_00642c50(0x128,&local_f0);
    local_34 = (undefined *)0x5f84ac;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x33c),local_f0);
  }
  else if (iVar5 == 1) {
    local_34 = (undefined *)0x5f84be;
    FUN_00642c50(0x129,&local_f4);
    local_34 = (undefined *)0x5f84d2;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x33c),local_f4);
  }
  iVar5 = *(int *)(*(int *)PTR_DAT_0066b154 + 0x24c + param_2 * 600);
  if (iVar5 == 0) {
    local_34 = (undefined *)0x5f84fc;
    FUN_00642c50(0x125,&local_f8);
    local_34 = (undefined *)0x5f8510;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x340),local_f8);
  }
  else if (iVar5 == 1) {
    local_34 = (undefined *)0x5f8522;
    FUN_00642c50(0x126,&local_fc);
    local_34 = (undefined *)0x5f8536;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x340),local_fc);
  }
  else if (iVar5 == 2) {
    local_34 = (undefined *)0x5f8548;
    FUN_00642c50(0x127,&local_100);
    local_34 = (undefined *)0x5f855c;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x340),local_100);
  }
  iVar5 = *(int *)(*(int *)PTR_DAT_0066b154 + 0x250 + param_2 * 600);
  if (iVar5 == 0) {
    local_34 = (undefined *)0x5f8586;
    FUN_00642c50(0x125,&local_104);
    local_34 = (undefined *)0x5f859a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x344),local_104);
  }
  else if (iVar5 == 1) {
    local_34 = (undefined *)0x5f85ac;
    FUN_00642c50(0x126,&local_108);
    local_34 = (undefined *)0x5f85c0;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x344),local_108);
  }
  else if (iVar5 == 2) {
    local_34 = (undefined *)0x5f85d2;
    FUN_00642c50(0x127,&local_10c);
    local_34 = (undefined *)0x5f85e6;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x344),local_10c);
  }
  local_34 = (undefined *)0x5f85f6;
  FUN_00545088(*(undefined4 *)(param_1 + 0x3e0),0);
  local_34 = (undefined *)0x5f8606;
  FUN_00545088(*(undefined4 *)(param_1 + 0x3e4),0);
  local_34 = (undefined *)0x5f861c;
  FUN_00533bc0(*(undefined4 *)(*(int *)(param_1 + 1000) + 0x22c),0);
  local_34 = (undefined *)0x5f8632;
  FUN_00533bc0(*(undefined4 *)(*(int *)(param_1 + 0x3ec) + 0x22c),0);
  iVar5 = 2;
  puVar3 = &DAT_006d3f94;
  do {
    iVar2 = 0xb;
    puVar6 = puVar3;
    do {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = puVar3 + 0xb;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 1;
  local_28 = &local_24;
  local_2c = &DAT_006d3fc0;
  do {
    local_1c = (undefined1 *)0x0;
    local_34 = (undefined *)0x5f8682;
    iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b128);
    if (-1 < iVar2) {
      iVar2 = iVar2 + 1;
      iVar9 = 0;
      do {
        puVar1 = local_1c;
        if (((*(int *)(*(int *)PTR_DAT_0066b128 + iVar9 * 0x20) == param_2) &&
            (*(int *)(*(int *)PTR_DAT_0066b128 + 0x14 + iVar9 * 0x20) == *local_28)) &&
           (puVar1 = (undefined1 *)((int)local_1c + 1), (int)puVar1 < 0xc)) {
          local_2c[(int)local_1c + -0xb] = iVar9;
        }
        local_1c = puVar1;
        iVar9 = iVar9 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = 0x19;
    piVar8 = (int *)PTR_DAT_0066ad68;
    do {
      iVar9 = 0xb;
      piVar7 = local_2c + -0xb;
      do {
        if (-1 < *piVar7) {
          local_34 = (undefined *)0x5f86fc;
          iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b128);
          if ((*piVar7 < iVar4) &&
             (*(int *)(*(int *)PTR_DAT_0066b128 + 8 + *piVar7 * 0x20) == *piVar8)) {
            local_34 = (undefined *)0x5f8724;
            TForm67_addnaescalacao(param_1,iVar5,*piVar7);
          }
        }
        piVar7 = piVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      piVar8 = piVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar5 = iVar5 + 1;
    local_2c = local_2c + 0xb;
    local_28 = local_28 + 1;
  } while (iVar5 != 3);
  local_34 = *(undefined **)(*(int *)PTR_DAT_0066b154 + 4 + param_2 * 600);
  local_38 = 0x5f876e;
  FUN_005f2b70(param_1,param_2,*(undefined4 *)(*(int *)PTR_DAT_0066b154 + param_2 * 600));
  puVar3 = local_2c;
  *in_FS_OFFSET = (int)local_34;
  local_2c = (undefined4 *)&LAB_005f8880;
  local_30 = 0x5f878b;
  FUN_00405008(&local_10c,0x10,puVar3);
  local_30 = 0x5f8796;
  FUN_004048d4(&local_cc);
  local_30 = 0x5f87a1;
  FUN_00404ff0(&local_c8);
  local_30 = 0x5f87ac;
  FUN_004048d4(&local_c4);
  local_30 = 0x5f87b7;
  FUN_00404ff0(&local_c0);
  local_30 = 0x5f87c7;
  FUN_004048f8(&local_bc,2);
  local_30 = 0x5f87d2;
  FUN_00404ff0(&local_b4);
  local_30 = 0x5f87e2;
  FUN_004048f8(&local_b0,2);
  local_30 = 0x5f87ed;
  FUN_00404ff0(&local_a8);
  local_30 = 0x5f87fd;
  FUN_004048f8(&local_a4,2);
  local_30 = 0x5f8808;
  FUN_00404ff0(&local_9c);
  local_30 = 0x5f8818;
  FUN_004048f8(&local_98,3);
  local_30 = 0x5f8823;
  FUN_00404ff0(&local_8c);
  local_30 = 0x5f8833;
  FUN_004048f8(&local_88,3);
  local_30 = 0x5f883b;
  FUN_00404ff0(&local_7c);
  local_30 = 0x5f8843;
  FUN_004048d4(&local_78);
  local_30 = 0x5f884b;
  FUN_00404ff0(&local_74);
  local_30 = 0x5f8853;
  FUN_004048d4(&local_70);
  local_30 = 0x5f885b;
  FUN_00404ff0(&local_6c);
  local_30 = 0x5f8868;
  FUN_00405008(&local_64,6);
  local_30 = 0x5f8875;
  FUN_004048f8(&local_4c,8);
  return;
}

