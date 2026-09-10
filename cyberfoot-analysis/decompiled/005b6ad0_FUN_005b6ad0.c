// Address: 005b6ad0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005b6ad0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 **ppuVar7;
  undefined4 *extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  undefined4 extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  undefined4 extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  undefined4 extraout_EDX_17;
  int extraout_EDX_18;
  int extraout_EDX_19;
  undefined4 extraout_EDX_20;
  int extraout_EDX_21;
  int extraout_EDX_22;
  undefined4 extraout_EDX_23;
  int extraout_EDX_24;
  int extraout_EDX_25;
  undefined4 extraout_EDX_26;
  int extraout_EDX_27;
  int extraout_EDX_28;
  int extraout_EDX_29;
  int iVar8;
  int iVar9;
  int *in_FS_OFFSET;
  bool bVar10;
  undefined1 uVar11;
  wchar_t *pwStack_18c;
  undefined4 **ppuStack_188;
  undefined1 *puStack_184;
  undefined1 **local_180;
  undefined4 local_17c;
  undefined4 *local_178;
  undefined4 local_174;
  undefined4 ***local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 local_164;
  undefined4 *local_160;
  undefined4 local_15c;
  undefined4 **local_158;
  undefined4 local_154;
  undefined1 **local_150;
  undefined4 local_14c;
  undefined4 *local_148;
  undefined4 local_144;
  undefined4 **local_140;
  undefined4 local_13c;
  undefined4 *local_138;
  undefined4 local_134;
  undefined4 *local_130;
  undefined4 local_12c;
  undefined1 ***local_128;
  undefined4 local_124;
  undefined1 **local_120;
  undefined4 local_11c;
  undefined4 *local_118;
  undefined4 local_114;
  undefined4 **local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined4 local_104;
  undefined4 *local_100;
  undefined4 local_fc;
  undefined4 ******local_f8;
  undefined4 local_f4;
  undefined1 **local_f0;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined4 local_e4;
  undefined4 ******local_e0;
  undefined4 local_dc;
  undefined4 *local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 **local_c8;
  undefined4 local_c4;
  undefined1 **local_c0;
  undefined4 local_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 **local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined4 local_a4;
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined4 **local_98;
  undefined4 local_94;
  undefined1 **local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined1 ***local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined1 ****local_68;
  undefined4 local_64;
  undefined1 **local_60;
  int local_5c;
  undefined4 **local_58;
  undefined4 local_54;
  undefined4 *local_50;
  uint local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 **local_30;
  undefined1 *local_2c;
  byte *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0x2f;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_005b834d;
  local_28 = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  puVar13 = &stack0xfffffffc;
  local_8 = param_1;
  if (DAT_006d2b04 < 0x15) {
    local_38 = (undefined1 **)0x0;
    local_3c = 0;
    local_40 = (undefined1 **)0x0;
    local_2c = (undefined1 *)0x5b6b42;
    FUN_00466208(*(undefined4 *)(param_1 + 800),&local_50);
    local_2c = (undefined1 *)0x5b6b4d;
    FUN_004099c0(local_50,&local_30);
    local_2c = (undefined1 *)0x5b6b55;
    FUN_004048d4(&local_34);
    local_2c = (undefined1 *)0x5b6b5d;
    iVar4 = FUN_00404ba4(local_30);
    if (0 < iVar4) {
      iVar8 = 1;
      do {
        local_2c = (undefined1 *)0x5b6b77;
        FUN_00404abc(&local_54,*(undefined1 *)((int)local_30 + iVar8 + -1));
        local_2c = (undefined1 *)0x5b6b82;
        local_c = FUN_0040343c(local_54,&local_10);
        if (local_10 == 0) {
          local_2c = (undefined1 *)0x5b6b9a;
          FUN_00404abc(&local_58,*(undefined1 *)((int)local_30 + iVar8 + -1));
          local_2c = (undefined1 *)0x5b6ba5;
          FUN_00404bac(&local_34,local_58);
        }
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_2c = (undefined1 *)0x5b6bba;
    FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_5c);
    puVar13 = local_20;
    if (local_5c != 0) {
      local_2c = (undefined1 *)0x5b6bd5;
      FUN_00466208(*(undefined4 *)(local_8 + 800),&local_60);
      puVar13 = local_20;
      if (local_60 != (undefined1 **)0x0) {
        local_2c = (undefined1 *)0x5b6bf0;
        FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_64);
        local_2c = (undefined1 *)0x5b6bf8;
        iVar4 = FUN_00404ba4(local_64);
        puVar13 = local_20;
        if (4 < iVar4) {
          local_2c = (undefined1 *)0x5b6c09;
          iVar4 = FUN_00404ba4(local_34);
          puVar13 = local_20;
          if (4 < iVar4) {
            local_2c = (undefined1 *)0x5b6c1a;
            iVar4 = FUN_00404ba4(local_34);
            puVar13 = local_20;
            if (iVar4 < 0xb) {
              local_2c = (undefined1 *)0x5b6c34;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_44);
              local_30 = (undefined1 **)&LAB_005b6c5a;
              local_34 = *in_FS_OFFSET;
              *in_FS_OFFSET = (int)&local_34;
              local_38 = (undefined1 **)0x5b6c4a;
              local_2c = &stack0xfffffffc;
              local_4c = FUN_0040a06c(&LAB_005b6c5a);
              puVar14 = local_2c;
              *in_FS_OFFSET = local_34;
              local_48 = extraout_EDX;
              puVar13 = local_20;
              if (extraout_EDX == (undefined4 *)0x0) {
                if (local_4c < 1000) goto LAB_005b820d;
              }
              else if ((int)extraout_EDX < 0) goto LAB_005b820d;
              local_2c = (undefined1 *)0x5b6c99;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28,puVar14);
              uVar12 = 0;
              iVar4 = 0;
              local_2c = (undefined1 *)0x5b6caf;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  bVar1 = local_28[iVar9 + -1];
                  if (((bVar1 != 0x20) && (bVar1 != 0x41)) && (bVar1 != 0x61)) {
                    bVar10 = CARRY4(uVar12,(uint)bVar1);
                    uVar12 = uVar12 + bVar1;
                    iVar4 = iVar4 + (uint)bVar10;
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_2c = (undefined1 *)0x0;
              local_30 = (undefined1 **)0xe4;
              local_34 = 0x5b6cf2;
              uVar5 = FUN_00405c1c(uVar12,iVar4);
              local_30 = (undefined1 **)(uint)*local_28;
              local_2c = (undefined1 *)0x0;
              local_34 = 0x5b6d11;
              iVar4 = FUN_00405c1c(uVar5,extraout_EDX_00);
              local_2c = (undefined1 *)0x5b6d1f;
              iVar8 = FUN_0040a06c(local_34);
              if ((extraout_EDX_02 == extraout_EDX_01) && (iVar8 == iVar4)) {
                local_38._0_3_ = CONCAT12(1,(undefined2)local_38);
              }
              local_2c = (undefined1 *)0x5b6d3e;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28);
              uVar12 = 0;
              iVar4 = 0;
              local_2c = (undefined1 *)0x5b6d54;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  bVar1 = local_28[iVar9 + -1];
                  if ((bVar1 != 0x20) && (bVar1 != 0x41)) {
                    uVar6 = (uint)bVar1 * iVar9;
                    bVar10 = CARRY4(uVar12,uVar6);
                    uVar12 = uVar12 + uVar6;
                    iVar4 = iVar4 + ((int)uVar6 >> 0x1f) + (uint)bVar10;
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_2c = (undefined1 *)0x5b6d95;
              local_24 = (undefined1 *)uVar12;
              local_20 = (undefined1 *)iVar4;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  bVar1 = local_28[iVar9 + -1];
                  if ((bVar1 != 0x20) && (bVar1 != 0x41)) {
                    uVar6 = (uint)bVar1 * iVar9;
                    bVar10 = CARRY4((uint)local_24,uVar6);
                    local_24 = (undefined1 *)((int)local_24 + uVar6);
                    local_20 = (undefined1 *)((int)local_20 + ((int)uVar6 >> 0x1f) + (uint)bVar10);
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_30 = (undefined1 **)((uint)local_28[1] + (uint)local_28[2]);
              local_2c = (undefined1 *)0x0;
              local_34 = 0x5b6de1;
              uVar5 = FUN_00405c1c(uVar12,iVar4);
              local_2c = (undefined1 *)0x0;
              local_30 = (undefined1 **)0x1a;
              local_34 = 0x5b6df6;
              iVar4 = FUN_00405c1c(uVar5,extraout_EDX_03);
              local_2c = (undefined1 *)0x5b6e04;
              iVar8 = FUN_0040a06c(local_34);
              if ((extraout_EDX_05 == extraout_EDX_04) && (iVar8 == iVar4)) {
                local_38._0_2_ = CONCAT11(1,(undefined1)local_38);
              }
              local_2c = (undefined1 *)CONCAT31((int3)((uint)iVar8 >> 8),DAT_005b8360);
              local_30 = &local_2c;
              local_34 = 0x5b6e2b;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_34 = 0x5b6e3c;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28);
              uVar12 = 0;
              iVar4 = 0;
              local_34 = 0x5b6e52;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  bVar1 = local_28[iVar9 + -1];
                  if ((bVar1 != 0x20) && (bVar1 != 0x41)) {
                    uVar6 = (uint)bVar1 * iVar9;
                    bVar10 = CARRY4(uVar12,uVar6);
                    uVar12 = uVar12 + uVar6;
                    iVar4 = iVar4 + ((int)uVar6 >> 0x1f) + (uint)bVar10;
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_34 = 0x5b6e93;
              local_24 = (undefined1 *)uVar12;
              local_20 = (undefined1 *)iVar4;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  bVar1 = local_28[iVar9 + -1];
                  if ((bVar1 != 0x20) && (bVar1 != 0x41)) {
                    uVar6 = (uint)bVar1 * iVar9;
                    bVar10 = CARRY4((uint)local_24,uVar6);
                    local_24 = (undefined1 *)((int)local_24 + uVar6);
                    local_20 = (undefined1 *)((int)local_20 + ((int)uVar6 >> 0x1f) + (uint)bVar10);
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_38 = (undefined1 **)((uint)local_28[1] + (uint)local_28[2]);
              local_34 = 0;
              local_3c = 0x5b6edf;
              uVar5 = FUN_00405c1c(uVar12,iVar4);
              local_34 = 0;
              local_38 = (undefined1 **)0x19;
              local_3c = 0x5b6ef4;
              FUN_00405c1c(uVar5,extraout_EDX_06);
              iVar4 = local_34;
              local_34 = 0x5b6f02;
              uVar5 = FUN_0040a06c(iVar4);
              local_34 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_38 = &local_2c;
              local_3c = 0x5b6f29;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_3c = 0x5b6f3a;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28);
              uVar12 = 0;
              iVar4 = 0;
              local_3c = 0x5b6f50;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9;
                    bVar10 = CARRY4(uVar12,uVar6);
                    uVar12 = uVar12 + uVar6;
                    iVar4 = iVar4 + ((int)uVar6 >> 0x1f) + (uint)bVar10;
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_3c = 0x5b6f93;
              local_24 = (undefined1 *)uVar12;
              local_20 = (undefined1 *)iVar4;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9;
                    bVar10 = CARRY4((uint)local_24,uVar6);
                    local_24 = (undefined1 *)((int)local_24 + uVar6);
                    local_20 = (undefined1 *)((int)local_20 + ((int)uVar6 >> 0x1f) + (uint)bVar10);
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_40 = (undefined1 **)((uint)local_28[1] + (uint)local_28[2]);
              local_3c = 0;
              local_44 = 0x5b6fe1;
              uVar5 = FUN_00405c1c(uVar12,iVar4);
              local_3c = 0;
              local_40 = (undefined1 **)0x14;
              local_44 = 0x5b6ff6;
              FUN_00405c1c(uVar5,extraout_EDX_07);
              local_3c = 0x5b7004;
              uVar5 = FUN_0040a06c(local_34);
              local_3c = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_40 = &local_2c;
              local_44 = 0x5b702b;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_44 = 0x5b703c;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28);
              local_44 = 0x5b704d;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_68);
              local_44 = 0x5b7058;
              uVar5 = FUN_00409724(local_68,&local_28);
              local_44 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_48 = &local_6c;
              local_4c = 0x5b7071;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_4c = 0x5b707c;
              FUN_0040496c(&local_28,local_6c);
              local_4c = 0x5b7087;
              FUN_0064a6f4(local_28,&local_70);
              local_4c = 0x5b7092;
              uVar5 = FUN_0040496c(&local_28,local_70);
              local_4c = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_50 = &local_74;
              local_54 = 0x5b70ab;
              FUN_0040f7c8(local_28,&DAT_005b8378,0);
              local_54 = 0x5b70b6;
              uVar5 = FUN_0040496c(&local_28,local_74);
              local_54 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_58 = &local_78;
              local_5c = 0x5b70cf;
              FUN_0040f7c8(local_28,&DAT_005b8384,0);
              local_5c = 0x5b70da;
              FUN_0040496c(&local_28,local_78);
              uVar12 = 0;
              iVar4 = 0;
              local_5c = 0x5b70f0;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9;
                    bVar10 = CARRY4(uVar12,uVar6);
                    uVar12 = uVar12 + uVar6;
                    iVar4 = iVar4 + ((int)uVar6 >> 0x1f) + (uint)bVar10;
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_5c = 0x5b7133;
              local_24 = (undefined1 *)uVar12;
              local_20 = (undefined1 *)iVar4;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9;
                    bVar10 = CARRY4((uint)local_24,uVar6);
                    local_24 = (undefined1 *)((int)local_24 + uVar6);
                    local_20 = (undefined1 *)((int)local_20 + ((int)uVar6 >> 0x1f) + (uint)bVar10);
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_60 = (undefined1 **)((uint)local_28[1] + (uint)local_28[2]);
              local_5c = 0;
              local_64 = 0x5b7181;
              uVar5 = FUN_00405c1c(uVar12,iVar4);
              local_5c = 0;
              local_60 = (undefined1 **)0x15;
              local_64 = 0x5b7196;
              iVar4 = FUN_00405c1c(uVar5,extraout_EDX_08);
              local_5c = 0x5b71a4;
              iVar8 = FUN_0040a06c(local_34);
              if ((extraout_EDX_10 == extraout_EDX_09) && (iVar8 == iVar4)) {
                local_3c._0_3_ = CONCAT12(1,(undefined2)local_3c);
              }
              local_5c = CONCAT31((int3)((uint)iVar8 >> 8),DAT_005b8360);
              local_60 = &local_2c;
              local_64 = 0x5b71cb;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_64 = 0x5b71dc;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28);
              local_64 = 0x5b71ed;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_7c);
              local_64 = 0x5b71f8;
              uVar5 = FUN_00409724(local_7c,&local_28);
              local_64 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_68 = &local_80;
              local_6c = 0x5b7211;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_6c = 0x5b721c;
              uVar5 = FUN_0040496c(&local_28,local_80);
              local_6c = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_70 = &local_84;
              local_74 = 0x5b7238;
              FUN_0040f7c8(local_28,&DAT_005b836c,&DAT_005b836c);
              local_74 = 0x5b7243;
              FUN_0040496c(&local_28,local_84);
              local_74 = 0x5b7251;
              FUN_0064a6f4(local_28,&local_88);
              local_74 = 0x5b725f;
              uVar5 = FUN_0040496c(&local_28,local_88);
              local_74 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_78 = &local_8c;
              local_7c = 0x5b727b;
              FUN_0040f7c8(local_28,&DAT_005b8378,0);
              local_7c = 0x5b7289;
              uVar5 = FUN_0040496c(&local_28,local_8c);
              local_7c = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_80 = &local_90;
              local_84 = 0x5b72a5;
              FUN_0040f7c8(local_28,&DAT_005b8384,0);
              local_84 = 0x5b72b3;
              uVar5 = FUN_0040496c(&local_28,local_90);
              local_84 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_88 = &local_94;
              local_8c = 0x5b72cf;
              FUN_0040f7c8(local_28,&DAT_005b8390,0);
              local_8c = 0x5b72dd;
              FUN_0040496c(&local_28,local_94);
              local_8c = 0x5b72eb;
              FUN_00409724(local_28,&local_98);
              local_8c = 0x5b72f9;
              FUN_0040496c(&local_28,local_98);
              local_8c = 0x5b7307;
              FUN_0064a800(local_28,&local_9c);
              local_8c = 0x5b7315;
              FUN_0040496c(&local_28,local_9c);
              uVar12 = 0;
              iVar4 = 0;
              local_8c = 0x5b732b;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9 + iVar9 + 3;
                    bVar10 = CARRY4(uVar12,uVar6);
                    uVar12 = uVar12 + uVar6;
                    iVar4 = iVar4 + ((int)uVar6 >> 0x1f) + (uint)bVar10;
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_8c = 0x5b7373;
              local_24 = (undefined1 *)uVar12;
              local_20 = (undefined1 *)iVar4;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9;
                    bVar10 = CARRY4((uint)local_24,uVar6);
                    local_24 = (undefined1 *)((int)local_24 + uVar6);
                    local_20 = (undefined1 *)((int)local_20 + ((int)uVar6 >> 0x1f) + (uint)bVar10);
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_90 = (undefined1 **)((uint)local_28[1] + (uint)local_28[2] + 5);
              local_8c = 0;
              local_94 = 0x5b73c4;
              uVar5 = FUN_00405c1c(uVar12,iVar4);
              local_8c = 0;
              local_90 = (undefined1 **)0x17;
              local_94 = 0x5b73d9;
              uVar12 = FUN_00405c1c(uVar5,extraout_EDX_11);
              local_8c = 0x5b73ef;
              iVar4 = FUN_0040a06c(local_34);
              if ((extraout_EDX_13 == extraout_EDX_12 + (uint)(0xfffffa8a < uVar12)) &&
                 (iVar4 == uVar12 + 0x575)) {
                local_3c._0_2_ = CONCAT11(1,(undefined1)local_3c);
              }
              local_8c = CONCAT31((int3)((uint)iVar4 >> 8),DAT_005b8360);
              local_90 = &local_2c;
              local_94 = 0x5b741b;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_a0);
              local_94 = 0x5b742d;
              FUN_0040f7c8(local_a0,&DAT_005b836c,0);
              local_94 = 0x5b743e;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28);
              local_94 = 0x5b7452;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_a4);
              local_94 = 0x5b7460;
              uVar5 = FUN_00409724(local_a4,&local_28);
              local_94 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_98 = &local_a8;
              local_9c = 0x5b747c;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_9c = 0x5b748a;
              uVar5 = FUN_0040496c(&local_28,local_a8);
              local_9c = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_a0 = &local_ac;
              local_a4 = 0x5b74a9;
              FUN_0040f7c8(local_28,&DAT_005b836c,&DAT_005b836c);
              local_a4 = 0x5b74b7;
              FUN_0040496c(&local_28,local_ac);
              local_a4 = 0x5b74c5;
              FUN_0064a6f4(local_28,&local_b0);
              local_a4 = 0x5b74d3;
              uVar5 = FUN_0040496c(&local_28,local_b0);
              local_a4 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_a8 = &local_b4;
              local_ac = 0x5b74ef;
              FUN_0040f7c8(local_28,&DAT_005b8378,0);
              local_ac = 0x5b74fd;
              uVar5 = FUN_0040496c(&local_28,local_b4);
              local_ac = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_b0 = &local_b8;
              local_b4 = 0x5b7519;
              FUN_0040f7c8(local_28,&DAT_005b8384,0);
              local_b4 = 0x5b7527;
              uVar5 = FUN_0040496c(&local_28,local_b8);
              local_b4 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_b8 = &local_bc;
              local_bc = 0x5b7543;
              FUN_0040f7c8(local_28,&DAT_005b8390,0);
              uVar5 = local_bc;
              local_bc = 0x5b7551;
              FUN_0040496c(&local_28,uVar5);
              local_bc = 0x5b755f;
              FUN_00409724(local_28,&local_c0);
              local_bc = 0x5b756d;
              FUN_0040496c(&local_28,local_c0);
              local_bc = 0x5b757b;
              FUN_0064a800(local_28,&local_c4);
              local_bc = 0x5b7589;
              FUN_0040496c(&local_28,local_c4);
              uVar12 = 0;
              iVar4 = 0;
              local_bc = 0x5b759f;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9 + iVar9 + 3;
                    bVar10 = CARRY4(uVar12,uVar6);
                    uVar12 = uVar12 + uVar6;
                    iVar4 = iVar4 + ((int)uVar6 >> 0x1f) + (uint)bVar10;
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_bc = 0x5b75e7;
              local_24 = (undefined1 *)uVar12;
              local_20 = (undefined1 *)iVar4;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9;
                    bVar10 = CARRY4((uint)local_24,uVar6);
                    local_24 = (undefined1 *)((int)local_24 + uVar6);
                    local_20 = (undefined1 *)((int)local_20 + ((int)uVar6 >> 0x1f) + (uint)bVar10);
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_c0 = (undefined1 **)((uint)local_28[1] + (uint)local_28[2] + 5);
              local_bc = 0;
              local_c4 = 0x5b7638;
              uVar5 = FUN_00405c1c(uVar12,iVar4);
              local_bc = 0;
              local_c0 = (undefined1 **)0x11;
              local_c4 = 0x5b764d;
              uVar12 = FUN_00405c1c(uVar5,extraout_EDX_14);
              local_bc = 0x5b7663;
              iVar4 = FUN_0040a06c(local_34);
              if ((extraout_EDX_16 == extraout_EDX_15 + (uint)(0xfffffa8a < uVar12)) &&
                 (iVar4 == uVar12 + 0x575)) {
                local_3c = CONCAT31(local_3c._1_3_,1);
              }
              local_bc = CONCAT31((int3)((uint)iVar4 >> 8),DAT_005b8360);
              local_c0 = &local_2c;
              local_c4 = 0x5b768f;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_c8);
              local_c4 = 0x5b76a1;
              FUN_0040f7c8(local_c8,&DAT_005b836c,0);
              local_c4 = 0x5b76b2;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28);
              local_c4 = 0x5b76c6;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_cc);
              local_c4 = 0x5b76d4;
              uVar5 = FUN_00409724(local_cc,&local_28);
              local_c4 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_c8 = &local_d0;
              local_cc = 0x5b76f0;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_cc = 0x5b76fe;
              uVar5 = FUN_0040496c(&local_28,local_d0);
              local_cc = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_d0 = &local_d4;
              local_d4 = 0x5b771d;
              FUN_0040f7c8(local_28,&DAT_005b836c,&DAT_005b836c);
              uVar5 = local_d4;
              local_d4 = 0x5b772b;
              FUN_0040496c(&local_28,uVar5);
              local_d4 = 0x5b7739;
              FUN_0064a6f4(local_28,&local_d8);
              local_d4 = 0x5b7747;
              uVar5 = FUN_0040496c(&local_28,local_d8);
              local_d4 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_d8 = &local_dc;
              local_dc = 0x5b7763;
              FUN_0040f7c8(local_28,&DAT_005b8378,0);
              uVar5 = local_dc;
              local_dc = 0x5b7771;
              uVar5 = FUN_0040496c(&local_28,uVar5);
              local_dc = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_e0 = &local_e0;
              local_e4 = 0x5b778d;
              FUN_0040f7c8(local_28,&DAT_005b8384,0);
              local_e4 = 0x5b779b;
              uVar5 = FUN_0040496c(&local_28,local_e0);
              local_e4 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_e8 = &local_e4;
              local_ec = 0x5b77b7;
              FUN_0040f7c8(local_28,&DAT_005b8390,0);
              local_ec = 0x5b77c5;
              FUN_0040496c(&local_28,local_e4);
              local_ec = 0x5b77d3;
              FUN_00409724(local_28,&local_e8);
              local_ec = 0x5b77e1;
              FUN_0040496c(&local_28,local_e8);
              local_ec = 0x5b77ef;
              FUN_0064a800(local_28,&local_ec);
              uVar5 = local_ec;
              local_ec = 0x5b77fd;
              FUN_0040496c(&local_28,uVar5);
              uVar12 = 0;
              iVar4 = 0;
              local_ec = 0x5b7813;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9 + iVar9 + 3;
                    bVar10 = CARRY4(uVar12,uVar6);
                    uVar12 = uVar12 + uVar6;
                    iVar4 = iVar4 + ((int)uVar6 >> 0x1f) + (uint)bVar10;
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_ec = 0x5b785b;
              local_24 = (undefined1 *)uVar12;
              local_20 = (undefined1 *)iVar4;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9;
                    bVar10 = CARRY4((uint)local_24,uVar6);
                    local_24 = (undefined1 *)((int)local_24 + uVar6);
                    local_20 = (undefined1 *)((int)local_20 + ((int)uVar6 >> 0x1f) + (uint)bVar10);
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_f0 = (undefined1 **)((uint)local_28[1] + (uint)local_28[2] + 5);
              local_ec = 0;
              local_f4 = 0x5b78ac;
              uVar5 = FUN_00405c1c(uVar12,iVar4);
              local_ec = 0;
              local_f0 = (undefined1 **)0xd;
              local_f4 = 0x5b78c1;
              uVar12 = FUN_00405c1c(uVar5,extraout_EDX_17);
              local_ec = 0x5b78d7;
              iVar4 = FUN_0040a06c(local_34);
              if ((extraout_EDX_19 == extraout_EDX_18 + (uint)(0xffffeb5b < uVar12)) &&
                 (iVar4 == uVar12 + 0x14a4)) {
                local_40 = (undefined1 **)CONCAT13(1,(undefined3)local_40);
              }
              local_ec = CONCAT31((int3)((uint)iVar4 >> 8),DAT_005b8360);
              local_f0 = &local_2c;
              local_f4 = 0x5b7903;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_f0);
              local_f4 = 0x5b7915;
              FUN_0040f7c8(local_f0,&DAT_005b836c,0);
              local_f4 = 0x5b7926;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28);
              local_f4 = 0x5b793a;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_f4);
              uVar5 = local_f4;
              local_f4 = 0x5b7948;
              uVar5 = FUN_00409724(uVar5,&local_28);
              local_f4 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_f8 = &local_f8;
              local_fc = 0x5b7964;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_fc = 0x5b7972;
              uVar5 = FUN_0040496c(&local_28,local_f8);
              local_fc = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_100 = &local_fc;
              local_104 = 0x5b7991;
              FUN_0040f7c8(local_28,&DAT_005b836c,&DAT_005b836c);
              local_104 = 0x5b799f;
              FUN_0040496c(&local_28,local_fc);
              local_104 = 0x5b79ad;
              FUN_0064a6f4(local_28,&local_100);
              local_104 = 0x5b79bb;
              uVar5 = FUN_0040496c(&local_28,local_100);
              local_104 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_108 = &local_104;
              local_10c = 0x5b79d7;
              FUN_0040f7c8(local_28,&DAT_005b8378,0);
              local_10c = 0x5b79e5;
              uVar5 = FUN_0040496c(&local_28,local_104);
              local_10c = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_110 = &local_108;
              local_114 = 0x5b7a01;
              FUN_0040f7c8(local_28,&DAT_005b8384,0);
              local_114 = 0x5b7a0f;
              uVar5 = FUN_0040496c(&local_28,local_108);
              local_114 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_118 = &local_10c;
              local_11c = 0x5b7a2b;
              FUN_0040f7c8(local_28,&DAT_005b8390,0);
              local_11c = 0x5b7a39;
              FUN_0040496c(&local_28,local_10c);
              local_11c = 0x5b7a47;
              FUN_00409724(local_28,&local_110);
              local_11c = 0x5b7a55;
              FUN_0040496c(&local_28,local_110);
              local_11c = 0x5b7a63;
              FUN_0064a800(local_28,&local_114);
              local_11c = 0x5b7a71;
              FUN_0040496c(&local_28,local_114);
              uVar12 = 0;
              iVar4 = 0;
              local_11c = 0x5b7a87;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9 + iVar9 + 3;
                    bVar10 = CARRY4(uVar12,uVar6);
                    uVar12 = uVar12 + uVar6;
                    iVar4 = iVar4 + ((int)uVar6 >> 0x1f) + (uint)bVar10;
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_11c = 0x5b7acf;
              local_24 = (undefined1 *)uVar12;
              local_20 = (undefined1 *)iVar4;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9;
                    bVar10 = CARRY4((uint)local_24,uVar6);
                    local_24 = (undefined1 *)((int)local_24 + uVar6);
                    local_20 = (undefined1 *)((int)local_20 + ((int)uVar6 >> 0x1f) + (uint)bVar10);
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_120 = (undefined1 **)((uint)local_28[1] + (uint)local_28[2] + 5);
              local_11c = 0;
              local_124 = 0x5b7b20;
              uVar5 = FUN_00405c1c(uVar12,iVar4);
              local_11c = 0;
              local_120 = (undefined1 **)0xe;
              local_124 = 0x5b7b35;
              uVar12 = FUN_00405c1c(uVar5,extraout_EDX_20);
              local_11c = 0x5b7b4b;
              iVar4 = FUN_0040a06c(local_34);
              if ((extraout_EDX_22 == extraout_EDX_21 + (uint)(0xfffff588 < uVar12)) &&
                 (iVar4 == uVar12 + 0xa77)) {
                local_40._0_3_ = CONCAT12(1,(undefined2)local_40);
              }
              local_11c = CONCAT31((int3)((uint)iVar4 >> 8),DAT_005b8360);
              local_120 = &local_2c;
              local_124 = 0x5b7b77;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_118);
              local_124 = 0x5b7b89;
              FUN_0040f7c8(local_118,&DAT_005b836c,0);
              local_124 = 0x5b7b9a;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28);
              local_124 = 0x5b7bae;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_11c);
              local_124 = 0x5b7bbc;
              uVar5 = FUN_00409724(local_11c,&local_28);
              local_124 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_128 = &local_120;
              local_12c = 0x5b7bd8;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_12c = 0x5b7be6;
              uVar5 = FUN_0040496c(&local_28,local_120);
              local_12c = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_130 = &local_124;
              local_134 = 0x5b7c05;
              FUN_0040f7c8(local_28,&DAT_005b836c,&DAT_005b836c);
              local_134 = 0x5b7c13;
              FUN_0040496c(&local_28,local_124);
              local_134 = 0x5b7c21;
              FUN_0064a6f4(local_28,&local_128);
              local_134 = 0x5b7c2f;
              uVar5 = FUN_0040496c(&local_28,local_128);
              local_134 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_138 = &local_12c;
              local_13c = 0x5b7c4b;
              FUN_0040f7c8(local_28,&DAT_005b8378,0);
              local_13c = 0x5b7c59;
              uVar5 = FUN_0040496c(&local_28,local_12c);
              local_13c = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_140 = &local_130;
              local_144 = 0x5b7c75;
              FUN_0040f7c8(local_28,&DAT_005b8384,0);
              local_144 = 0x5b7c83;
              uVar5 = FUN_0040496c(&local_28,local_130);
              local_144 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_148 = &local_134;
              local_14c = 0x5b7c9f;
              FUN_0040f7c8(local_28,&DAT_005b8390,0);
              local_14c = 0x5b7cad;
              FUN_0040496c(&local_28,local_134);
              local_14c = 0x5b7cbb;
              FUN_00409724(local_28,&local_138);
              local_14c = 0x5b7cc9;
              FUN_0040496c(&local_28,local_138);
              local_14c = 0x5b7cd7;
              FUN_0064a800(local_28,&local_13c);
              local_14c = 0x5b7ce5;
              FUN_0040496c(&local_28,local_13c);
              uVar12 = 0;
              iVar4 = 0;
              local_14c = 0x5b7cfb;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9 + iVar9 + 3;
                    bVar10 = CARRY4(uVar12,uVar6);
                    uVar12 = uVar12 + uVar6;
                    iVar4 = iVar4 + ((int)uVar6 >> 0x1f) + (uint)bVar10;
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_14c = 0x5b7d43;
              local_24 = (undefined1 *)uVar12;
              local_20 = (undefined1 *)iVar4;
              iVar8 = FUN_00404ba4(local_28);
              if (0 < iVar8) {
                iVar9 = 1;
                do {
                  if ((local_28[iVar9 + -1] != 0x20) && (local_28[iVar9 + -1] != 0x41)) {
                    uVar6 = (uint)local_28[iVar9 + -1] * iVar9;
                    bVar10 = CARRY4((uint)local_24,uVar6);
                    local_24 = (undefined1 *)((int)local_24 + uVar6);
                    local_20 = (undefined1 *)((int)local_20 + ((int)uVar6 >> 0x1f) + (uint)bVar10);
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_150 = (undefined1 **)((uint)local_28[1] + (uint)local_28[2] + 5);
              local_14c = 0;
              local_154 = 0x5b7d94;
              uVar5 = FUN_00405c1c(uVar12,iVar4);
              local_14c = 0;
              local_150 = (undefined1 **)0x5;
              local_154 = 0x5b7da9;
              uVar12 = FUN_00405c1c(uVar5,extraout_EDX_23);
              local_14c = 0x5b7dbf;
              iVar4 = FUN_0040a06c(local_34);
              if ((extraout_EDX_25 == extraout_EDX_24 + (uint)(0xfff67848 < uVar12)) &&
                 (iVar4 == uVar12 + 0x987b7)) {
                local_40._0_2_ = CONCAT11(1,(char)local_40);
              }
              local_14c = CONCAT31((int3)((uint)iVar4 >> 8),DAT_005b8360);
              local_150 = &local_2c;
              local_154 = 0x5b7deb;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_140);
              local_154 = 0x5b7dfd;
              FUN_0040f7c8(local_140,&DAT_005b836c,0);
              local_154 = 0x5b7e0e;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_28);
              local_154 = 0x5b7e22;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_144);
              local_154 = 0x5b7e30;
              uVar5 = FUN_00409724(local_144,&local_28);
              local_154 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_158 = &local_148;
              local_15c = 0x5b7e4c;
              FUN_0040f7c8(local_28,&DAT_005b836c,0);
              local_15c = 0x5b7e5a;
              uVar5 = FUN_0040496c(&local_28,local_148);
              local_15c = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_160 = &local_14c;
              local_164 = 0x5b7e79;
              FUN_0040f7c8(local_28,&DAT_005b836c,&DAT_005b836c);
              local_164 = 0x5b7e87;
              FUN_0040496c(&local_28,local_14c);
              local_164 = 0x5b7e95;
              FUN_0064a6f4(local_28,&local_150);
              local_164 = 0x5b7ea3;
              uVar5 = FUN_0040496c(&local_28,local_150);
              local_164 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_168 = &local_154;
              local_16c = 0x5b7ebf;
              FUN_0040f7c8(local_28,&DAT_005b8378,0);
              local_16c = 0x5b7ecd;
              uVar5 = FUN_0040496c(&local_28,local_154);
              local_16c = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_170 = &local_158;
              local_174 = 0x5b7ee9;
              FUN_0040f7c8(local_28,&DAT_005b8384,0);
              local_174 = 0x5b7ef7;
              uVar5 = FUN_0040496c(&local_28,local_158);
              local_174 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_005b8360);
              local_178 = &local_15c;
              local_17c = 0x5b7f13;
              FUN_0040f7c8(local_28,&DAT_005b8390,0);
              local_17c = 0x5b7f21;
              FUN_0040496c(&local_28,local_15c);
              local_17c = 0x5b7f2f;
              FUN_00409724(local_28,&local_160);
              local_17c = 0x5b7f3d;
              FUN_0040496c(&local_28,local_160);
              local_17c = 0x5b7f4b;
              FUN_0064a800(local_28,&local_164);
              local_17c = 0x5b7f59;
              FUN_0040496c(&local_28,local_164);
              puVar13 = (undefined1 *)0x0;
              puVar14 = (undefined1 *)0x0;
              local_17c = 0x5b7f6f;
              iVar4 = FUN_00404ba4(local_28);
              if (0 < iVar4) {
                iVar8 = 1;
                do {
                  if ((local_28[iVar8 + -1] != 0x20) && (local_28[iVar8 + -1] != 0x41)) {
                    uVar12 = (uint)local_28[iVar8 + -1] * iVar8 + iVar8 + 3;
                    bVar10 = CARRY4((uint)puVar13,uVar12);
                    puVar13 = puVar13 + uVar12;
                    puVar14 = puVar14 + (uint)bVar10 + ((int)uVar12 >> 0x1f);
                  }
                  iVar8 = iVar8 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              local_17c = 0x5b7fb7;
              local_24 = puVar13;
              local_20 = puVar14;
              iVar4 = FUN_00404ba4(local_28);
              if (0 < iVar4) {
                iVar8 = 1;
                do {
                  if ((local_28[iVar8 + -1] != 0x20) && (local_28[iVar8 + -1] != 0x41)) {
                    uVar12 = (uint)local_28[iVar8 + -1] * iVar8;
                    bVar10 = CARRY4((uint)local_24,uVar12);
                    local_24 = local_24 + uVar12;
                    local_20 = local_20 + (uint)bVar10 + ((int)uVar12 >> 0x1f);
                  }
                  iVar8 = iVar8 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              local_180 = (undefined1 **)((uint)local_28[1] + (uint)local_28[2] + 5);
              local_17c = 0;
              puStack_184 = (undefined1 *)0x5b8008;
              uVar5 = FUN_00405c1c(puVar13,puVar14);
              local_17c = 0;
              local_180 = (undefined1 **)0x7;
              puStack_184 = (undefined1 *)0x5b801d;
              uVar12 = FUN_00405c1c(uVar5,extraout_EDX_26);
              iVar4 = extraout_EDX_27 + (uint)(0xfffd58fa < uVar12);
              local_17c = 0x5b8033;
              ppuVar7 = (undefined4 **)FUN_0040a06c(local_34);
              if ((extraout_EDX_28 == iVar4) && (ppuVar7 == (undefined4 **)(uVar12 + 0x2a705))) {
                local_40 = (undefined1 **)CONCAT31(local_40._1_3_,1);
              }
              local_17c = CONCAT31((int3)((uint)ppuVar7 >> 8),DAT_005b8360);
              local_180 = &local_2c;
              puStack_184 = (undefined1 *)0x5b805f;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_168);
              puStack_184 = (undefined1 *)0x5b8071;
              FUN_0040f7c8(local_168,&DAT_005b836c,0);
              if ((char)local_40 != '\0') {
                puStack_184 = (undefined1 *)0x5b8083;
                cVar3 = FUN_00647cec(local_2c);
                if (cVar3 == '\0') {
                  pwStack_18c = L"\xf4b8\x01\xe800눥￤\xf405\x01謀쀕暱褀栂莘[閍ﺔ\xffffڸ"
                  ;
                  ppuStack_188 = (undefined4 **)(uVar12 + 0x2a705);
                  puStack_184 = (undefined1 *)iVar4;
                  FUN_006476b4(local_44);
                  pwStack_18c = L"\xf405\x01謀쀕暱褀栂莘[閍ﺔ\xffffڸ";
                  iVar4 = FUN_004032c8(500);
                  *(int *)PTR_DAT_0066b1c0 = iVar4 + 500;
                  pwStack_18c = L"<p align=\"center\"><shad>";
                  FUN_00642c50(6,&local_170);
                  FUN_00405330(&local_16c,3);
                  puStack_184 = (undefined1 *)0x5b80f3;
                  FUN_00545088(*(undefined4 *)(PTR_DAT_0066b328 + 0xc),local_16c);
                  puStack_184 = (undefined1 *)0x5b8102;
                  FUN_00466128(*(undefined4 *)(PTR_DAT_0066b328 + 0x14),0);
                  puStack_184 = (undefined1 *)0x5b8116;
                  FUN_00466414(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x324),0);
                  puStack_184 = (undefined1 *)0x5b8120;
                  FUN_00483bc4(DAT_006d2b00);
                  if (*PTR_DAT_0066b724 != '\0') {
                    ppuStack_188 = (undefined4 **)&LAB_005b8156;
                    pwStack_18c = (wchar_t *)*in_FS_OFFSET;
                    *in_FS_OFFSET = (int)&pwStack_18c;
                    puStack_184 = &stack0xfffffffc;
                    FUN_00466128(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x380),0);
                    *in_FS_OFFSET = (int)pwStack_18c;
                  }
                }
              }
              uVar11 = true;
              iVar4 = 0;
              iVar8 = 1;
              do {
                puStack_184 = (undefined1 *)0x5b8177;
                FUN_00404abc(&local_174,iVar8);
                puStack_184 = (undefined1 *)local_174;
                ppuStack_188 = &local_178;
                pwStack_18c = L"薋ﺈ\xffffƹ";
                FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_17c);
                pwStack_18c = L"開ﺌ\xffff\xe858쬶￤͵嶉䏰ﮁā";
                FUN_00404e04(local_17c,1,1);
                puVar13 = puStack_184;
                puStack_184 = (undefined1 *)0x5b81ba;
                FUN_00404cf0(puVar13,local_178);
                if ((bool)uVar11) {
                  iVar4 = iVar8;
                }
                iVar8 = iVar8 + 1;
                uVar11 = iVar8 == 0x101;
              } while (!(bool)uVar11);
              puStack_184 = (undefined1 *)0x5b81dc;
              FUN_00466208(*(undefined4 *)(local_8 + 0x324),&local_180);
              puStack_184 = (undefined1 *)0x5b81e7;
              iVar8 = FUN_00404ba4(local_180);
              iVar4 = iVar8 * iVar4 * 0x408;
              puStack_184 = (undefined1 *)0x5b81ff;
              iVar8 = FUN_0040a06c(local_34);
              puVar13 = local_20;
              if ((extraout_EDX_29 == iVar4 >> 0x1f) && (iVar8 == iVar4)) {
                local_38 = (undefined1 **)CONCAT13(1,(undefined3)local_38);
              }
            }
          }
        }
      }
    }
  }
LAB_005b820d:
  local_20 = puVar13;
  puVar2 = local_178;
  *in_FS_OFFSET = (int)local_180;
  local_178 = (undefined4 *)&LAB_005b8357;
  local_17c = 0x5b822a;
  FUN_004048f8(&local_180,3,puVar2);
  local_17c = 0x5b8235;
  FUN_004048d4(&local_174);
  local_17c = 0x5b8245;
  FUN_00405008(&local_170,2);
  local_17c = 0x5b8250;
  FUN_004048d4(&local_168);
  local_17c = 0x5b8260;
  FUN_004048f8(&local_164,8);
  local_17c = 0x5b8270;
  FUN_004048f8(&local_144,2);
  local_17c = 0x5b8280;
  FUN_004048f8(&local_13c,8);
  local_17c = 0x5b8290;
  FUN_004048f8(&local_11c,2);
  local_17c = 0x5b82a0;
  FUN_004048f8(&local_114,8);
  local_17c = 0x5b82b0;
  FUN_004048f8(&local_f4,2);
  local_17c = 0x5b82c0;
  FUN_004048f8(&local_ec,8);
  local_17c = 0x5b82d0;
  FUN_004048f8(&local_cc,2);
  local_17c = 0x5b82e0;
  FUN_004048f8(&local_c4,8);
  local_17c = 0x5b82f0;
  FUN_004048f8(&local_a4,2);
  local_17c = 0x5b8300;
  FUN_004048f8(&local_9c,8);
  local_17c = 0x5b8308;
  FUN_004048d4(&local_7c);
  local_17c = 0x5b8315;
  FUN_004048f8(&local_78,4);
  local_17c = 0x5b8322;
  FUN_004048f8(&local_68,4);
  local_17c = 0x5b832f;
  FUN_004048f8(&local_58,2);
  local_17c = 0x5b8337;
  FUN_004048d4(&local_50);
  local_17c = 0x5b833f;
  FUN_004048d4(&local_44);
  local_17c = 0x5b834c;
  FUN_004048f8(&local_34,4);
  return;
}

