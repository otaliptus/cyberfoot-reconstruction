// Address: 00567bb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_listtime(int param_1,int param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined1 local_26c [16];
  undefined4 local_25c [4];
  undefined1 local_24c [16];
  undefined4 local_23c [4];
  undefined4 local_22c;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 *local_208;
  undefined1 local_204 [16];
  undefined1 local_1f4 [16];
  undefined1 *local_1e4;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined4 local_1c0;
  undefined1 *local_1bc;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined1 *local_174;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 *local_130;
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  undefined4 local_10c;
  undefined **local_108;
  undefined1 local_104 [16];
  undefined1 local_f4 [16];
  undefined4 local_e4;
  undefined **local_e0;
  undefined1 local_dc [16];
  undefined4 local_cc [4];
  undefined1 local_bc [16];
  undefined4 local_ac [4];
  undefined1 local_9c [16];
  undefined1 local_8c [12];
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined *local_74;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined **local_58;
  undefined1 *local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined **local_44;
  undefined **local_40;
  undefined *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  uint uVar10;
  uint uVar11;
  int local_10;
  uint local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  iVar7 = 0x4f;
  do {
    local_8 = 0;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_24 = &LAB_00568a4c;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  if (DAT_006d1f04 == '\0') {
    uVar11 = 1;
    uVar10 = 0x19;
  }
  else {
    uVar11 = 0x1a;
    uVar10 = 0x28;
  }
  local_2c = 0x567c18;
  FUN_00405194(&local_20,DAT_0067b4b8 + 0x1e + param_2 * 200);
  local_2c = 0x567c26;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_20);
  local_2c = 0x567c38;
  FUN_00405194(&local_24,DAT_0067b4b8 + 4 + param_2 * 200);
  local_2c = 0x567c46;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_24);
  local_2c = 0x567c58;
  FUN_00409dd8(*(undefined1 *)(DAT_0067b4b8 + 3 + param_2 * 200),&local_2c);
  uVar5 = local_2c;
  local_2c = 0x567c63;
  FUN_004051d4(&local_28,uVar5);
  local_2c = 0x567c71;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x334),local_28);
  local_2c = 0x567c8b;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567ca5;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567cbf;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 800) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567cd9;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x318) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567cf3;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567d0d;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567d27;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x334) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567d41;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567d5b;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567d75;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x41c) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567d8f;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x3b8) + 0x68),
               *(undefined4 *)(DAT_0067b4b8 + 0xac + param_2 * 200));
  local_2c = 0x567dac;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),
               *(undefined4 *)(PTR_DAT_0066b294 + (uint)*(byte *)(DAT_0067b4b8 + param_2 * 200) * 4)
              );
  local_2c = 0x567db9;
  FUN_00642c50(0x2ed,&local_34);
  local_2c = local_34;
  local_30 = &DAT_00568a64;
  local_34 = (undefined4 *)0x567dd6;
  FUN_00405194(&local_38,DAT_0067b4b8 + 0x8b + param_2 * 200);
  local_34 = local_38;
  local_38 = (undefined4 *)0x567de6;
  FUN_00405330(&local_30,3);
  local_38 = (undefined4 *)0x567df4;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_30);
  local_38 = (undefined4 *)0x567e01;
  FUN_00642c50(0x2ee,&local_40);
  local_38 = local_40;
  local_3c = &DAT_00568a64;
  local_40 = (undefined **)0x567e1b;
  FUN_00405194(&local_44,DAT_0067b4b8 + 0x38 + param_2 * 200);
  local_40 = local_44;
  local_44 = (undefined **)0x567e2b;
  FUN_00405330(&local_3c,3);
  local_44 = (undefined **)0x567e39;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_3c);
  local_44 = (undefined **)0x567e4d;
  FUN_00409dd8(*(undefined4 *)(DAT_0067b4b8 + 0xc4 + param_2 * 200),&local_4c);
  local_44 = (undefined **)0x567e5a;
  FUN_00404bac(&local_4c,&DAT_00568a70);
  local_44 = (undefined **)0x567e65;
  FUN_004051d4(&local_48,local_4c);
  local_44 = &local_48;
  local_48 = (undefined *)0x567e76;
  FUN_00642c50(0x2d5,&local_50);
  ppuVar3 = local_44;
  local_44 = (undefined **)0x567e7f;
  FUN_0040526c(ppuVar3,local_50);
  local_44 = (undefined **)0x567e8d;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x41c),local_48);
  local_44 = (undefined **)0x567e9a;
  FUN_00642c50(0x3f6,&local_58);
  local_44 = local_58;
  local_48 = &DAT_00568a64;
  local_4c = *(undefined4 *)(PTR_DAT_0066ad58 + *(int *)(DAT_0067b4b8 + 0xb4 + param_2 * 200) * 4);
  local_50 = (undefined4 *)0x567ec4;
  FUN_00405330(&local_54,3);
  local_50 = (undefined4 *)0x567ed2;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x3b8),local_54);
  local_50 = (undefined4 *)0x567ee9;
  FUN_004663a8(*(undefined4 *)(param_1 + 0x30c),*(undefined4 *)(DAT_0067b4b8 + 0xa8 + param_2 * 200)
              );
  local_50 = (undefined4 *)0x567ef6;
  FUN_0043aa68(*(undefined4 *)(param_1 + 0x328),0);
  local_50 = (undefined4 *)0x567f03;
  FUN_0043aa68(*(undefined4 *)(param_1 + 0x32c),0);
  local_50 = (undefined4 *)0x567f10;
  FUN_0043aa68(*(undefined4 *)(param_1 + 0x3bc),0);
  local_50 = (undefined4 *)0x567f1d;
  FUN_0043aa68(*(undefined4 *)(param_1 + 0x3c0),0);
  local_50 = (undefined4 *)0x567f2a;
  FUN_0043aa68(*(undefined4 *)(param_1 + 0x410),0);
  local_50 = (undefined4 *)0x567f4f;
  FUN_0042d610(*(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x168),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066b3e0 + (uint)*(byte *)(DAT_0067b4b8 + param_2 * 200) * 4));
  if (*(char *)(DAT_0067b4b8 + param_2 * 200) == '\x1d') {
    local_50 = (undefined4 *)0x567f6b;
    FUN_0043aa68(*(undefined4 *)(param_1 + 0x324),0);
    local_50 = (undefined4 *)0x567f78;
    FUN_00466128(*(undefined4 *)(param_1 + 0x324),1);
    local_50 = (undefined4 *)0x567f85;
    FUN_00466128(*(undefined4 *)(param_1 + 800),1);
    local_50 = (undefined4 *)0x567f96;
    uVar5 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x168));
    local_50 = (undefined4 *)0x567fb8;
    FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2f8),
                 *(undefined1 *)(DAT_0067b4b8 + 0xb0 + param_2 * 200),uVar5);
    local_50 = (undefined4 *)0x567fd7;
    FUN_004051d4(&local_5c,
                 *(undefined4 *)
                  (PTR_PTR_0066b348 + (uint)*(byte *)(DAT_0067b4b8 + 0xb0 + param_2 * 200) * 4));
    local_50 = (undefined4 *)0x567fe5;
    FUN_004e1414(*(undefined4 *)(param_1 + 800),local_5c);
  }
  else {
    local_50 = (undefined4 *)0x567ff4;
    FUN_00466128(*(undefined4 *)(param_1 + 0x324),0);
    local_50 = (undefined4 *)0x568001;
    FUN_00466128(*(undefined4 *)(param_1 + 800),0);
  }
  local_50 = (undefined4 *)0x568009;
  FUN_004048d4(&local_8);
  local_50 = (undefined4 *)0x568015;
  TForm3_getescudo(param_1,param_2,&local_8);
  if (local_8 != 0) {
    local_50 = (undefined4 *)0x56802f;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x168),local_8);
  }
  local_50 = (undefined4 *)0x56803b;
  TForm3_getcamisa(param_1,param_2,&local_60);
  if (local_60 != (undefined1 *)0x0) {
    local_50 = (undefined4 *)0x56804d;
    TForm3_getcamisa(param_1,param_2,&local_64);
    local_50 = (undefined4 *)0x568061;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0x168),local_64);
  }
  local_50 = (undefined4 *)0x56806d;
  TForm3_getcamisa2(param_1,param_2,&local_68);
  if (local_68 != (undefined1 *)0x0) {
    local_50 = (undefined4 *)0x56807f;
    TForm3_getcamisa2(param_1,param_2,&local_6c);
    local_50 = (undefined4 *)0x568093;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x3c0) + 0x168),local_6c);
  }
  local_50 = (undefined4 *)0x56809f;
  TForm3_getcamisa3(param_1,param_2,&local_70);
  if (local_70 != (undefined1 *)0x0) {
    local_50 = (undefined4 *)0x5680b1;
    TForm3_getcamisa3(param_1,param_2,&local_74);
    local_50 = (undefined4 *)0x5680c5;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x410) + 0x168),local_74);
  }
  local_50 = (undefined4 *)0x5680d3;
  (**(code **)(**(int **)(param_1 + 0x33c) + 0x1dc))();
  local_10 = 0;
  local_c = 0;
  do {
    if (uVar11 <= uVar10) {
      iVar7 = (uVar10 - uVar11) + 1;
      uVar8 = uVar11;
      do {
        pbVar1 = (byte *)(DAT_0067b4bc + param_2 * 0x708 + -0x24 + uVar8 * 0x24);
        bVar9 = *pbVar1 == 0xffffffff;
        local_50 = (undefined4 *)0x568114;
        FUN_00403180(pbVar1,&DAT_00568a74);
        if ((!bVar9) && (*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x617 + uVar8) == local_c)) {
          local_10 = local_10 + 1;
          local_50 = (undefined4 *)0x568150;
          (**(code **)(**(int **)(param_1 + 0x33c) + 0x1d0))(*(int **)(param_1 + 0x33c),1);
          local_50 = (undefined4 *)0x56815a;
          FUN_00409dd8(uVar8,&local_7c);
          local_50 = (undefined4 *)0x568165;
          FUN_004051d4(&local_78,local_7c);
          local_50 = local_78;
          local_54 = (undefined1 *)0x568177;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          local_54 = (undefined1 *)0x568187;
          FUN_00416244(local_8c,iVar6 + -1,0xfc);
          local_54 = local_8c;
          local_58 = (undefined **)0x56819e;
          FUN_00416478(local_9c,"idjog");
          puVar2 = local_54;
          local_54 = (undefined1 *)0x5681b0;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_9c,puVar2);
          if (*(char *)(DAT_0067b4bc + param_2 * 0x708 + 0x63f + uVar8) == '\0') {
            local_54 = &DAT_00568aa8;
            local_58 = (undefined **)0x56822a;
            iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            local_58 = (undefined **)0x56823a;
            FUN_00416244(local_cc,iVar6 + -1,0xfc);
            local_58 = (undefined **)local_cc;
            local_5c = (undefined1 *)0x568251;
            FUN_00416478(local_dc,"status");
            ppuVar3 = local_58;
            local_58 = (undefined **)0x568263;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_dc,ppuVar3);
          }
          else {
            local_54 = &DAT_00568a90;
            local_58 = (undefined **)0x5681dc;
            iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            local_58 = (undefined **)0x5681ec;
            FUN_00416244(local_ac,iVar6 + -1,0xfc);
            local_58 = (undefined **)local_ac;
            local_5c = (undefined1 *)0x568203;
            FUN_00416478(local_bc,"status");
            ppuVar3 = local_58;
            local_58 = (undefined **)0x568215;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_bc,ppuVar3);
          }
          if (*(char *)(DAT_0067b4bc + param_2 * 0x708 + 0x59f + uVar8) == '\0') {
            local_58 = (undefined **)0x5682fd;
            FUN_00409dd8(4,&local_10c);
            local_58 = (undefined **)0x56830e;
            FUN_004051d4(&local_108,local_10c);
            local_58 = local_108;
            local_5c = (undefined1 *)0x568323;
            iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            local_5c = (undefined1 *)0x568333;
            FUN_00416244(local_11c,iVar6 + -1,0xfc);
            local_5c = local_11c;
            local_60 = (undefined1 *)0x56834a;
            FUN_00416478(local_12c,"estrela");
            puVar2 = local_5c;
            local_5c = (undefined1 *)0x56835c;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_12c,puVar2);
          }
          else {
            local_58 = (undefined **)0x56828c;
            FUN_00409dd8(3,&local_e4);
            local_58 = (undefined **)0x56829d;
            FUN_004051d4(&local_e0,local_e4);
            local_58 = local_e0;
            local_5c = (undefined1 *)0x5682b2;
            iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            local_5c = (undefined1 *)0x5682c2;
            FUN_00416244(local_f4,iVar6 + -1,0xfc);
            local_5c = local_f4;
            local_60 = (undefined1 *)0x5682d9;
            FUN_00416478(local_104,"estrela");
            puVar2 = local_5c;
            local_5c = (undefined1 *)0x5682eb;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_104,puVar2);
          }
          local_5c = (undefined1 *)0x56837f;
          FUN_00405194(&local_130,DAT_0067b4bc + param_2 * 0x708 + -0x24 + uVar8 * 0x24);
          local_5c = local_130;
          local_60 = (undefined1 *)0x568394;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          local_60 = (undefined1 *)0x5683a4;
          FUN_00416244(local_140,iVar6 + -1,0xfc);
          local_60 = local_140;
          local_64 = (undefined1 *)0x5683bb;
          FUN_00416478(local_150,&DAT_00568ac4);
          puVar2 = local_60;
          local_60 = (undefined1 *)0x5683cd;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_150,puVar2);
          local_60 = *(undefined1 **)
                      (PTR_DAT_0066b084 +
                      (uint)*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x617 + uVar8) * 4);
          local_64 = (undefined1 *)0x5683fc;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          local_64 = (undefined1 *)0x56840c;
          FUN_00416244(local_160,iVar6 + -1,0xfc);
          local_64 = local_160;
          local_68 = (undefined1 *)0x568423;
          FUN_00416478(local_170,"posicaojog");
          puVar2 = local_64;
          local_64 = (undefined1 *)0x568435;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_170,puVar2);
          local_64 = (undefined1 *)0x568457;
          FUN_00409dd8(*(undefined1 *)(DAT_0067b4bc + param_2 * 0x708 + 0x5c7 + uVar8),&local_178);
          local_64 = (undefined1 *)0x568468;
          FUN_004051d4(&local_174,local_178);
          local_64 = local_174;
          local_68 = (undefined1 *)0x56847d;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          local_68 = (undefined1 *)0x56848d;
          FUN_00416244(local_188,iVar6 + -1,0xfc);
          local_68 = local_188;
          local_6c = (undefined1 *)0x5684a4;
          FUN_00416478(local_198,"paisjog");
          puVar2 = local_68;
          local_68 = (undefined1 *)0x5684b6;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_198,puVar2);
          local_68 = (undefined1 *)0x5684c4;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          local_68 = (undefined1 *)0x5684d4;
          FUN_00416244(local_1a8,iVar6 + -1,0xfc);
          local_68 = local_1a8;
          local_6c = (undefined1 *)0x5684eb;
          FUN_00416478(local_1b8,"paisjog");
          puVar2 = local_68;
          local_68 = (undefined1 *)0x5684fd;
          uVar5 = FUN_004f77e4(*(undefined4 *)(param_1 + 0x33c),local_1b8,puVar2);
          local_68 = (undefined1 *)0x568522;
          FUN_004f7234(uVar5,*(undefined4 *)
                              (PTR_DAT_0066b294 +
                              (uint)*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x5c7 + uVar8) * 4));
          local_68 = (undefined1 *)0x568544;
          FUN_00409dd8(*(undefined1 *)(DAT_0067b4bc + param_2 * 0x708 + 0x5ef + uVar8),&local_1c0);
          local_68 = (undefined1 *)0x568555;
          FUN_004051d4(&local_1bc,local_1c0);
          local_68 = local_1bc;
          local_6c = (undefined1 *)0x56856a;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          local_6c = (undefined1 *)0x56857a;
          FUN_00416244(local_1d0,iVar6 + -1,0xfc);
          local_6c = local_1d0;
          local_70 = (undefined1 *)0x568591;
          FUN_00416478(local_1e0,"idade");
          puVar2 = local_6c;
          local_6c = (undefined1 *)0x5685a3;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_1e0,puVar2);
          if (*(char *)(DAT_0067b4bc + param_2 * 0x708 + 0x6b7 + uVar8) == '\0') {
            local_6c = (undefined1 *)0x5685cc;
            FUN_00642c50(0x99,&local_1e4);
            local_6c = local_1e4;
            local_70 = (undefined1 *)0x5685e1;
            iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            local_70 = (undefined1 *)0x5685f1;
            FUN_00416244(local_1f4,iVar6 + -1,0xfc);
            local_70 = local_1f4;
            local_74 = (undefined *)0x568608;
            FUN_00416478(local_204,"nxlado");
            puVar2 = local_70;
            local_70 = (undefined1 *)0x56861a;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_204,puVar2);
          }
          else {
            local_6c = (undefined1 *)0x56862c;
            FUN_00642c50(0x9b,&local_208);
            local_6c = local_208;
            local_70 = (undefined1 *)0x568641;
            iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            local_70 = (undefined1 *)0x568651;
            FUN_00416244(local_218,iVar6 + -1,0xfc);
            local_70 = local_218;
            local_74 = (undefined *)0x568668;
            FUN_00416478(local_228,"nxlado");
            puVar2 = local_70;
            local_70 = (undefined1 *)0x56867a;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_228,puVar2);
          }
          if (*(char *)(DAT_0067b4bc + param_2 * 0x708 + 0x667 + uVar8) ==
              *(char *)(DAT_0067b4bc + param_2 * 0x708 + 0x68f + uVar8)) {
            local_70 = *(undefined1 **)
                        (PTR_DAT_0066b3a4 +
                        (uint)*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x667 + uVar8) * 4);
            local_74 = (undefined *)0x568780;
            iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            local_50 = (undefined4 *)0x568790;
            FUN_00416244(local_25c,iVar6 + -1,0xfc);
            local_50 = local_25c;
            local_54 = (undefined1 *)0x5687a7;
            FUN_00416478(local_26c,"habilidadejog");
            puVar4 = local_50;
            local_50 = (undefined4 *)0x5687b9;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_26c,puVar4);
          }
          else {
            local_70 = *(undefined1 **)
                        (PTR_DAT_0066b1c8 +
                        (uint)*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x667 + uVar8) * 4);
            local_74 = &DAT_00568b14;
            local_78 = *(undefined4 **)
                        (PTR_DAT_0066b1c8 +
                        (uint)*(byte *)(DAT_0067b4bc + param_2 * 0x708 + 0x68f + uVar8) * 4);
            local_7c = 0x568701;
            FUN_00405330(&local_22c,3);
            local_7c = local_22c;
            uStack_80 = 0x568716;
            iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            local_50 = (undefined4 *)0x568726;
            FUN_00416244(local_23c,iVar6 + -1,0xfc);
            local_50 = local_23c;
            local_54 = (undefined1 *)0x56873d;
            FUN_00416478(local_24c,"habilidadejog");
            puVar4 = local_50;
            local_50 = (undefined4 *)0x56874f;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_24c,puVar4);
          }
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    local_c = local_c + 1;
  } while (local_c != 5);
  local_50 = (undefined4 *)0x5687de;
  FUN_00409dd8(local_10,&local_274);
  local_50 = (undefined4 *)0x5687ee;
  FUN_00404bac(&local_274,&DAT_00568a70);
  local_50 = (undefined4 *)0x5687ff;
  FUN_004051d4(&local_270,local_274);
  local_50 = &local_270;
  local_54 = (undefined1 *)0x568816;
  FUN_00642c50(0x2ef,&local_278);
  puVar4 = local_50;
  local_50 = (undefined4 *)0x568822;
  FUN_0040526c(puVar4,local_278);
  local_50 = (undefined4 *)0x568833;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x364),local_270);
  local_50 = (undefined4 *)0x56883a;
  uVar5 = TForm3_contatitulares(param_1);
  local_50 = (undefined4 *)0x568845;
  FUN_00409dd8(uVar5,&local_280);
  local_50 = (undefined4 *)0x568856;
  FUN_004051d4(&local_27c,local_280);
  local_50 = (undefined4 *)0x568867;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_27c);
  ppuVar3 = local_44;
  *in_FS_OFFSET = local_4c;
  local_44 = (undefined **)&LAB_00568a56;
  local_48 = (undefined *)0x56887f;
  FUN_004048d4(&local_280,local_4c,ppuVar3);
  local_48 = (undefined *)0x56888f;
  FUN_00405008(&local_27c,2);
  local_48 = (undefined *)0x56889a;
  FUN_004048d4(&local_274);
  local_48 = (undefined *)0x5688a5;
  FUN_00404ff0(&local_270);
  local_48 = (undefined *)0x5688bb;
  FUN_00405744(local_26c,PTR_DAT_004010f8,4);
  local_48 = (undefined *)0x5688c6;
  FUN_00404ff0(&local_22c);
  local_48 = (undefined *)0x5688dc;
  FUN_00405744(local_228,PTR_DAT_004010f8,2);
  local_48 = (undefined *)0x5688e7;
  FUN_00404ff0(&local_208);
  local_48 = (undefined *)0x5688fd;
  FUN_00405744(local_204,PTR_DAT_004010f8,2);
  local_48 = (undefined *)0x568908;
  FUN_00404ff0(&local_1e4);
  local_48 = (undefined *)0x56891e;
  FUN_00405744(local_1e0,PTR_DAT_004010f8,2);
  local_48 = (undefined *)0x568929;
  FUN_004048d4(&local_1c0);
  local_48 = (undefined *)0x568934;
  FUN_00404ff0(&local_1bc);
  local_48 = (undefined *)0x56894a;
  FUN_00405744(local_1b8,PTR_DAT_004010f8,4);
  local_48 = (undefined *)0x568955;
  FUN_004048d4(&local_178);
  local_48 = (undefined *)0x568960;
  FUN_00404ff0(&local_174);
  local_48 = (undefined *)0x568976;
  FUN_00405744(local_170,PTR_DAT_004010f8,4);
  local_48 = (undefined *)0x568981;
  FUN_00404ff0(&local_130);
  local_48 = (undefined *)0x568997;
  FUN_00405744(local_12c,PTR_DAT_004010f8,2);
  local_48 = (undefined *)0x5689a2;
  FUN_004048d4(&local_10c);
  local_48 = (undefined *)0x5689ad;
  FUN_00404ff0(&local_108);
  local_48 = (undefined *)0x5689c3;
  FUN_00405744(local_104,PTR_DAT_004010f8,2);
  local_48 = (undefined *)0x5689ce;
  FUN_004048d4(&local_e4);
  local_48 = (undefined *)0x5689d9;
  FUN_00404ff0(&local_e0);
  local_48 = (undefined *)0x5689ef;
  FUN_00405744(local_dc,PTR_DAT_004010f8,6);
  local_48 = (undefined *)0x5689f7;
  FUN_004048d4(&local_7c);
  local_48 = (undefined *)0x5689ff;
  FUN_00404ff0(&local_78);
  local_48 = (undefined *)0x568a0c;
  FUN_004048f8(&local_74,6);
  local_48 = (undefined *)0x568a19;
  FUN_00405008(&local_5c,4);
  local_48 = (undefined *)0x568a21;
  FUN_004048d4(&local_4c);
  local_48 = (undefined *)0x568a2e;
  FUN_00405008(&local_48,7);
  local_48 = (undefined *)0x568a36;
  FUN_004048d4(&local_2c);
  local_48 = (undefined *)0x568a43;
  FUN_00405008(&local_28,3);
  local_48 = (undefined *)0x568a4b;
  FUN_004048d4(&local_8);
  return;
}

