// Address: 0056ab34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_listjogselecao(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  undefined1 uVar10;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined1 local_378 [16];
  undefined4 local_368 [4];
  undefined1 local_358 [16];
  undefined4 local_348 [4];
  undefined4 local_338;
  undefined1 local_334 [16];
  undefined1 local_324 [16];
  undefined4 local_314;
  undefined4 local_310;
  undefined1 local_30c [16];
  undefined1 local_2fc [16];
  undefined1 local_2ec [16];
  undefined1 local_2dc [16];
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined1 local_2c4 [16];
  undefined1 local_2b4 [16];
  undefined1 local_2a4 [16];
  undefined1 local_294 [16];
  undefined1 local_284 [16];
  undefined1 local_274 [16];
  undefined1 local_264 [16];
  undefined1 local_254 [16];
  undefined4 local_244;
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined4 local_220;
  undefined1 local_21c [16];
  undefined1 local_20c [16];
  undefined4 local_1fc;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined4 local_1b0;
  undefined1 local_1ac [16];
  undefined1 local_19c [16];
  undefined4 local_18c;
  undefined4 *local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_170 [52];
  undefined1 local_13c [48];
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104 [56];
  undefined1 local_cc [52];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [48];
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined *puVar11;
  int local_10;
  int local_c;
  
  local_20 = &stack0xfffffffc;
  iVar6 = 0x71;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_24 = &LAB_0056ba4c;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (undefined4 *)0x56ab70;
  DAT_006d1ee8 = param_2;
  (**(code **)(**(int **)(param_1 + 0x33c) + 0x1dc))();
  local_2c = (undefined4 *)0x56ab92;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),
               *(undefined4 *)(PTR_DAT_0066b294 + *(int *)(&DAT_0067b4cc + param_2 * 0x6d4) * 4));
  local_2c = (undefined4 *)0x56aba1;
  FUN_00405194(&local_20,&DAT_0067b4f3 + param_2 * 0x6d4);
  local_2c = (undefined4 *)0x56abaf;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_20);
  local_2c = (undefined4 *)0x56abbe;
  FUN_00409dd8((&DAT_0067b514)[param_2 * 0x1b5],&local_28);
  local_2c = (undefined4 *)0x56abc9;
  FUN_004051d4(&local_24,local_28);
  local_2c = (undefined4 *)0x56abd7;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x334),local_24);
  local_2c = (undefined4 *)0x56abec;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x68),
               *(undefined4 *)(&DAT_0067b51c + param_2 * 0x6d4));
  local_2c = (undefined4 *)0x56ac01;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x3b8) + 0x68),
               *(undefined4 *)(&DAT_0067b51c + param_2 * 0x6d4));
  local_2c = (undefined4 *)0x56ac16;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x68),
               *(undefined4 *)(&DAT_0067b51c + param_2 * 0x6d4));
  local_2c = (undefined4 *)0x56ac2b;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x68),
               *(undefined4 *)(&DAT_0067b51c + param_2 * 0x6d4));
  local_2c = (undefined4 *)0x56ac40;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x334) + 0x68),
               *(undefined4 *)(&DAT_0067b51c + param_2 * 0x6d4));
  local_2c = (undefined4 *)0x56ac52;
  FUN_004663a8(*(undefined4 *)(param_1 + 0x30c),*(undefined4 *)(&DAT_0067b520 + param_2 * 0x6d4));
  local_2c = (undefined4 *)0x56ac64;
  FUN_0043aa68(*(undefined4 *)(DAT_0067b4b4 + 0x3bc),0);
  local_2c = (undefined4 *)0x56ac76;
  FUN_0043aa68(*(undefined4 *)(DAT_0067b4b4 + 0x3c0),0);
  local_2c = (undefined4 *)0x56ac88;
  FUN_0043aa68(*(undefined4 *)(DAT_0067b4b4 + 0x410),0);
  local_2c = (undefined4 *)0x56ac95;
  FUN_004030d4(&local_5c,&DAT_0056ba60);
  local_2c = (undefined4 *)0x56aca6;
  FUN_004030a4(&local_5c,&DAT_0067b4d4 + param_2 * 0x6d4,0x2f);
  local_2c = (undefined4 *)0x56acb4;
  FUN_004030d4(local_90,&local_5c);
  local_2c = (undefined4 *)0x56acc6;
  FUN_004030a4(local_90,&DAT_0056ba74,0x33);
  local_2c = (undefined4 *)0x56acd4;
  FUN_00404b48(&local_2c,local_90);
  puVar2 = local_2c;
  local_2c = (undefined4 *)0x56acdc;
  cVar3 = FUN_0040a43c(puVar2);
  if (cVar3 != '\0') {
    local_2c = (undefined4 *)0x56aced;
    FUN_004030d4(&local_5c,&DAT_0056ba60);
    local_2c = (undefined4 *)0x56acfe;
    FUN_004030a4(&local_5c,&DAT_0067b4d4 + param_2 * 0x6d4,0x2f);
    local_2c = (undefined4 *)0x56ad0c;
    FUN_004030d4(local_90,&local_5c);
    local_2c = (undefined4 *)0x56ad1e;
    FUN_004030a4(local_90,&DAT_0056ba74,0x33);
    local_2c = (undefined4 *)0x56ad2f;
    FUN_00404b48(&local_94,local_90);
    local_2c = (undefined4 *)0x56ad4b;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(DAT_0067b4b4 + 0x3bc) + 0x168),local_94);
  }
  local_2c = (undefined4 *)0x56ad5b;
  FUN_004030d4(local_cc,&DAT_0056ba7c);
  local_2c = (undefined4 *)0x56ad6f;
  FUN_004030a4(local_cc,&DAT_0067b4d4 + param_2 * 0x6d4,0x30);
  local_2c = (undefined4 *)0x56ad80;
  FUN_004030d4(local_104,local_cc);
  local_2c = (undefined4 *)0x56ad92;
  FUN_004030a4(local_104,&DAT_0056ba74,0x34);
  local_2c = (undefined4 *)0x56ada3;
  FUN_00404b48(&local_98,local_104);
  local_2c = (undefined4 *)0x56adae;
  cVar3 = FUN_0040a43c(local_98);
  if (cVar3 != '\0') {
    local_2c = (undefined4 *)0x56adc2;
    FUN_004030d4(local_cc,&DAT_0056ba7c);
    local_2c = (undefined4 *)0x56add6;
    FUN_004030a4(local_cc,&DAT_0067b4d4 + param_2 * 0x6d4,0x30);
    local_2c = (undefined4 *)0x56ade7;
    FUN_004030d4(local_104,local_cc);
    local_2c = (undefined4 *)0x56adf9;
    FUN_004030a4(local_104,&DAT_0056ba74,0x34);
    local_2c = (undefined4 *)0x56ae0a;
    FUN_00404b48(&local_108,local_104);
    local_2c = (undefined4 *)0x56ae26;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(DAT_0067b4b4 + 0x3bc) + 0x168),local_108);
  }
  local_2c = (undefined4 *)0x56ae36;
  FUN_004030d4(local_13c,&DAT_0056ba90);
  local_2c = (undefined4 *)0x56ae4a;
  FUN_004030a4(local_13c,&DAT_0067b4d4 + param_2 * 0x6d4,0x2d);
  local_2c = (undefined4 *)0x56ae5b;
  FUN_004030d4(local_170,local_13c);
  local_2c = (undefined4 *)0x56ae6d;
  FUN_004030a4(local_170,&DAT_0056ba74,0x31);
  local_2c = (undefined4 *)0x56ae7e;
  FUN_00404b48(&local_10c,local_170);
  local_2c = (undefined4 *)0x56ae89;
  cVar3 = FUN_0040a43c(local_10c);
  if (cVar3 == '\0') {
    local_2c = (undefined4 *)0x56af16;
    FUN_004030d4(local_13c,&DAT_0056ba90);
    local_2c = (undefined4 *)0x56af2a;
    FUN_004030a4(local_13c,&DAT_0067b4d4 + param_2 * 0x6d4,0x2d);
    local_2c = (undefined4 *)0x56af3b;
    FUN_004030d4(local_170,local_13c);
    local_2c = (undefined4 *)0x56af4d;
    FUN_004030a4(local_170,&DAT_0056baa0,0x31);
    local_2c = (undefined4 *)0x56af5e;
    FUN_00404b48(&local_178,local_170);
    local_2c = (undefined4 *)0x56af69;
    cVar3 = FUN_0040a43c(local_178);
    if (cVar3 == '\0') {
      local_2c = (undefined4 *)0x56aff6;
      FUN_004030d4(local_13c,&DAT_0056ba90);
      local_2c = (undefined4 *)0x56b00a;
      FUN_004030a4(local_13c,&DAT_0067b4d4 + param_2 * 0x6d4,0x2d);
      local_2c = (undefined4 *)0x56b01b;
      FUN_004030d4(local_170,local_13c);
      local_2c = (undefined4 *)0x56b02d;
      FUN_004030a4(local_170,&DAT_0056baa8,0x31);
      local_2c = (undefined4 *)0x56b03e;
      FUN_00404b48(&local_180,local_170);
      local_2c = (undefined4 *)0x56b049;
      cVar3 = FUN_0040a43c(local_180);
      if (cVar3 == '\0') {
        local_2c = (undefined4 *)0x56b0cd;
        cVar3 = FUN_0040a43c("teams\\escudos\\nullescudo.gif");
        if (cVar3 == '\0') {
          local_2c = (undefined4 *)0x56b100;
          FUN_0043aa68(*(undefined4 *)(DAT_0067b4b4 + 0x328),0);
        }
        else {
          local_2c = (undefined4 *)0x56b0ec;
          FUN_0042d6c0(*(undefined4 *)(*(int *)(DAT_0067b4b4 + 0x328) + 0x168),
                       "teams\\escudos\\nullescudo.gif");
        }
      }
      else {
        local_2c = (undefined4 *)0x56b05d;
        FUN_004030d4(local_13c,&DAT_0056ba90);
        local_2c = (undefined4 *)0x56b071;
        FUN_004030a4(local_13c,&DAT_0067b4d4 + param_2 * 0x6d4,0x2d);
        local_2c = (undefined4 *)0x56b082;
        FUN_004030d4(local_170,local_13c);
        local_2c = (undefined4 *)0x56b094;
        FUN_004030a4(local_170,&DAT_0056baa8,0x31);
        local_2c = (undefined4 *)0x56b0a5;
        FUN_00404b48(&local_184,local_170);
        local_2c = (undefined4 *)0x56b0c1;
        FUN_0042d6c0(*(undefined4 *)(*(int *)(DAT_0067b4b4 + 0x328) + 0x168),local_184);
      }
    }
    else {
      local_2c = (undefined4 *)0x56af7d;
      FUN_004030d4(local_13c,&DAT_0056ba90);
      local_2c = (undefined4 *)0x56af91;
      FUN_004030a4(local_13c,&DAT_0067b4d4 + param_2 * 0x6d4,0x2d);
      local_2c = (undefined4 *)0x56afa2;
      FUN_004030d4(local_170,local_13c);
      local_2c = (undefined4 *)0x56afb4;
      FUN_004030a4(local_170,&DAT_0056baa0,0x31);
      local_2c = (undefined4 *)0x56afc5;
      FUN_00404b48(&local_17c,local_170);
      local_2c = (undefined4 *)0x56afe1;
      FUN_0042d6c0(*(undefined4 *)(*(int *)(DAT_0067b4b4 + 0x328) + 0x168),local_17c);
    }
  }
  else {
    local_2c = (undefined4 *)0x56ae9d;
    FUN_004030d4(local_13c,&DAT_0056ba90);
    local_2c = (undefined4 *)0x56aeb1;
    FUN_004030a4(local_13c,&DAT_0067b4d4 + param_2 * 0x6d4,0x2d);
    local_2c = (undefined4 *)0x56aec2;
    FUN_004030d4(local_170,local_13c);
    local_2c = (undefined4 *)0x56aed4;
    FUN_004030a4(local_170,&DAT_0056ba74,0x31);
    local_2c = (undefined4 *)0x56aee5;
    FUN_00404b48(&local_174,local_170);
    local_2c = (undefined4 *)0x56af01;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(DAT_0067b4b4 + 0x328) + 0x168),local_174);
  }
  iVar6 = 0;
  local_10 = 0;
  do {
    local_c = 1;
    puVar8 = &DAT_0067b4f0;
    puVar7 = &DAT_0067b4d0;
    puVar11 = &DAT_0067b4cd;
    do {
      if (puVar8[param_2 * 0x6d4 + 0x38] != '\0') {
        bVar9 = (byte)puVar8[param_2 * 0x6d4 + 0x38] == 0xffffffff;
        local_2c = (undefined4 *)0x56b14e;
        FUN_00403180(puVar8 + param_2 * 0x6d4 + 0x38,&DAT_0056bad8);
        if ((!bVar9) && (*(int *)(puVar7 + param_2 * 0x6d4 + 0x4b8) == local_10)) {
          iVar6 = iVar6 + 1;
          local_2c = (undefined4 *)0x56b181;
          (**(code **)(**(int **)(param_1 + 0x33c) + 0x1d0))(*(int **)(param_1 + 0x33c),1);
          local_2c = (undefined4 *)0x56b18f;
          FUN_00409dd8(local_c,&local_18c);
          local_2c = (undefined4 *)0x56b1a0;
          FUN_004051d4(&local_188,local_18c);
          local_2c = local_188;
          puStack_30 = (undefined1 *)0x56b1b5;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          puStack_30 = (undefined1 *)0x56b1c5;
          FUN_00416244(local_19c,iVar4 + -1,0xfc);
          puStack_30 = local_19c;
          puStack_34 = (undefined1 *)0x56b1dc;
          FUN_00416478(local_1ac,"idjog");
          puVar1 = puStack_30;
          puStack_30 = (undefined1 *)0x56b1ee;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_1ac,puVar1);
          puStack_30 = (undefined1 *)0x56b204;
          FUN_00405194(&local_1b0,puVar8 + param_2 * 0x6d4 + 0x38);
          puStack_30 = (undefined1 *)local_1b0;
          puStack_34 = (undefined1 *)0x56b219;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          puStack_34 = (undefined1 *)0x56b229;
          FUN_00416244(local_1c0,iVar4 + -1,0xfc);
          puStack_34 = local_1c0;
          puStack_38 = (undefined1 *)0x56b240;
          FUN_00416478(local_1d0,&DAT_0056baf8);
          puVar1 = puStack_34;
          puStack_34 = (undefined1 *)0x56b252;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_1d0,puVar1);
          puStack_34 = (undefined1 *)0x56b26b;
          FUN_00409dd8(*(undefined4 *)(puVar7 + param_2 * 0x6d4 + 0x528),&local_1d8);
          puStack_34 = (undefined1 *)0x56b27c;
          FUN_004051d4(&local_1d4,local_1d8);
          puStack_34 = (undefined1 *)local_1d4;
          puStack_38 = (undefined1 *)0x56b291;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          puStack_38 = (undefined1 *)0x56b2a1;
          FUN_00416244(local_1e8,iVar4 + -1,0xfc);
          puStack_38 = local_1e8;
          puStack_3c = (undefined1 *)0x56b2b8;
          FUN_00416478(local_1f8,"status");
          puVar1 = puStack_38;
          puStack_38 = (undefined1 *)0x56b2ca;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_1f8,puVar1);
          puStack_38 = (undefined1 *)0x56b2e0;
          FUN_00405194(&local_1fc,puVar8 + param_2 * 0x6d4 + 0x38);
          puStack_38 = (undefined1 *)local_1fc;
          puStack_3c = (undefined1 *)0x56b2f5;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          puStack_3c = (undefined1 *)0x56b305;
          FUN_00416244(local_20c,iVar4 + -1,0xfc);
          puStack_3c = local_20c;
          puStack_40 = (undefined1 *)0x56b31c;
          FUN_00416478(local_21c,&DAT_0056baf8);
          puVar1 = puStack_3c;
          puStack_3c = (undefined1 *)0x56b32e;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_21c,puVar1);
          if (puVar11[param_2 * 0x6d4 + 0x698] == '\0') {
            puStack_3c = (undefined1 *)0x56b352;
            FUN_00642c50(0x99,&local_220);
            puStack_3c = (undefined1 *)local_220;
            puStack_40 = (undefined1 *)0x56b367;
            iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            puStack_40 = (undefined1 *)0x56b377;
            FUN_00416244(local_230,iVar4 + -1,0xfc);
            puStack_40 = local_230;
            puStack_44 = (undefined1 *)0x56b38e;
            FUN_00416478(local_240,"nxlado");
            puVar1 = puStack_40;
            puStack_40 = (undefined1 *)0x56b3a0;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_240,puVar1);
          }
          else {
            puStack_3c = (undefined1 *)0x56b3b2;
            FUN_00642c50(0x9b,&local_244);
            puStack_3c = (undefined1 *)local_244;
            puStack_40 = (undefined1 *)0x56b3c7;
            iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            puStack_40 = (undefined1 *)0x56b3d7;
            FUN_00416244(local_254,iVar4 + -1,0xfc);
            puStack_40 = local_254;
            puStack_44 = (undefined1 *)0x56b3ee;
            FUN_00416478(local_264,"nxlado");
            puVar1 = puStack_40;
            puStack_40 = (undefined1 *)0x56b400;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_264,puVar1);
          }
          if (puVar11[param_2 * 0x6d4 + 0x67b] == '\0') {
            puStack_40 = &DAT_0056bb3c;
            puStack_44 = (undefined1 *)0x56b475;
            iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            puStack_44 = (undefined1 *)0x56b485;
            FUN_00416244(local_294,iVar4 + -1,0xfc);
            puStack_44 = local_294;
            puStack_48 = (undefined1 *)0x56b49c;
            FUN_00416478(local_2a4,"estrela");
            puVar1 = puStack_44;
            puStack_44 = (undefined1 *)0x56b4ae;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_2a4,puVar1);
          }
          else {
            puStack_40 = &DAT_0056bb24;
            puStack_44 = (undefined1 *)0x56b427;
            iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            puStack_44 = (undefined1 *)0x56b437;
            FUN_00416244(local_274,iVar4 + -1,0xfc);
            puStack_44 = local_274;
            puStack_48 = (undefined1 *)0x56b44e;
            FUN_00416478(local_284,"estrela");
            puVar1 = puStack_44;
            puStack_44 = (undefined1 *)0x56b460;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_284,puVar1);
          }
          puStack_44 = *(undefined1 **)
                        (PTR_DAT_0066b084 + *(int *)(puVar7 + param_2 * 0x6d4 + 0x4b8) * 4);
          puStack_48 = (undefined1 *)0x56b4d4;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          puStack_48 = (undefined1 *)0x56b4e4;
          FUN_00416244(local_2b4,iVar4 + -1,0xfc);
          puStack_48 = local_2b4;
          puStack_4c = (undefined1 *)0x56b4fb;
          FUN_00416478(local_2c4,"posicaojog");
          puVar1 = puStack_48;
          puStack_48 = (undefined1 *)0x56b50d;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_2c4,puVar1);
          puStack_48 = (undefined1 *)0x56b51b;
          FUN_00409dd8(param_2,&local_2cc);
          puStack_48 = (undefined1 *)0x56b52c;
          FUN_004051d4(&local_2c8,local_2cc);
          puStack_48 = (undefined1 *)local_2c8;
          puStack_4c = (undefined1 *)0x56b541;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          puStack_4c = (undefined1 *)0x56b551;
          FUN_00416244(local_2dc,iVar4 + -1,0xfc);
          puStack_4c = local_2dc;
          puStack_50 = (undefined1 *)0x56b568;
          FUN_00416478(local_2ec,"paisjog");
          puVar1 = puStack_4c;
          puStack_4c = (undefined1 *)0x56b57a;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_2ec,puVar1);
          puStack_4c = (undefined1 *)0x56b588;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          puStack_4c = (undefined1 *)0x56b598;
          FUN_00416244(local_2fc,iVar4 + -1,0xfc);
          puStack_4c = local_2fc;
          puStack_50 = (undefined1 *)0x56b5af;
          FUN_00416478(local_30c,"paisjog");
          puVar1 = puStack_4c;
          puStack_4c = (undefined1 *)0x56b5c1;
          uVar5 = FUN_004f77e4(*(undefined4 *)(param_1 + 0x33c),local_30c,puVar1);
          puStack_4c = (undefined1 *)0x56b5d2;
          FUN_004f7234(uVar5,*(undefined4 *)(PTR_DAT_0066b294 + param_2 * 4));
          puStack_4c = (undefined1 *)0x56b5eb;
          FUN_00409dd8(*(undefined4 *)(puVar7 + param_2 * 0x6d4 + 0x448),&local_314);
          puStack_4c = (undefined1 *)0x56b5fc;
          FUN_004051d4(&local_310,local_314);
          puStack_4c = (undefined1 *)local_310;
          puStack_50 = (undefined1 *)0x56b611;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
          puStack_50 = (undefined1 *)0x56b621;
          FUN_00416244(local_324,iVar4 + -1,0xfc);
          puStack_50 = local_324;
          puStack_54 = (undefined *)0x56b638;
          FUN_00416478(local_334,"idade");
          puVar1 = puStack_50;
          puStack_50 = (undefined1 *)0x56b64a;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_334,puVar1);
          if (*(int *)(puVar7 + param_2 * 0x6d4 + 0x598) ==
              *(int *)(puVar7 + param_2 * 0x6d4 + 0x608)) {
            puStack_50 = *(undefined1 **)
                          (PTR_DAT_0066b3a4 + *(int *)(puVar7 + param_2 * 0x6d4 + 0x598) * 4);
            puStack_54 = (undefined *)0x56b725;
            iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            local_2c = (undefined4 *)0x56b735;
            FUN_00416244(local_368,iVar4 + -1,0xfc);
            local_2c = local_368;
            puStack_30 = (undefined1 *)0x56b74c;
            FUN_00416478(local_378,"habilidadejog");
            puVar2 = local_2c;
            local_2c = (undefined4 *)0x56b75e;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_378,puVar2);
          }
          else {
            puStack_50 = *(undefined1 **)
                          (PTR_DAT_0066b1c8 + *(int *)(puVar7 + param_2 * 0x6d4 + 0x598) * 4);
            puStack_54 = &DAT_0056bb78;
            uStack_58 = *(undefined4 *)
                         (PTR_DAT_0066b1c8 + *(int *)(puVar7 + param_2 * 0x6d4 + 0x608) * 4);
            local_5c = 0x56b6af;
            FUN_00405330(&local_338,3);
            local_5c = local_338;
            uStack_60 = 0x56b6c4;
            iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
            local_2c = (undefined4 *)0x56b6d4;
            FUN_00416244(local_348,iVar4 + -1,0xfc);
            local_2c = local_348;
            puStack_30 = (undefined1 *)0x56b6eb;
            FUN_00416478(local_358,"habilidadejog");
            puVar2 = local_2c;
            local_2c = (undefined4 *)0x56b6fd;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x33c),local_358,puVar2);
          }
        }
      }
      local_c = local_c + 1;
      puVar11 = puVar11 + 1;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 0x24;
    } while (local_c != 0x1d);
    local_10 = local_10 + 1;
  } while (local_10 != 5);
  local_2c = (undefined4 *)0x56b78f;
  FUN_00409dd8(iVar6,&local_380);
  local_2c = (undefined4 *)0x56b79f;
  FUN_00404bac(&local_380,&DAT_0056bb9c);
  local_2c = (undefined4 *)0x56b7b0;
  FUN_004051d4(&local_37c,local_380);
  local_2c = &local_37c;
  puStack_30 = (undefined1 *)0x56b7c7;
  FUN_00642c50(0x2ef,&local_384);
  puVar2 = local_2c;
  local_2c = (undefined4 *)0x56b7d3;
  FUN_0040526c(puVar2,local_384);
  local_2c = (undefined4 *)0x56b7e4;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x364),local_37c);
  iVar6 = 0;
  local_2c = (undefined4 *)0x56b7f7;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
  if (-1 < iVar4 + -1) {
    uVar10 = iVar4 == 0;
    local_c = 0;
    do {
      local_2c = &local_388;
      puStack_30 = (undefined1 *)0x56b823;
      (**(code **)(**(int **)(param_1 + 0x33c) + 0x100))(*(int **)(param_1 + 0x33c),1,local_c);
      local_2c = (undefined4 *)0x56b833;
      FUN_00405378(local_388,&LAB_0056bba4);
      if ((bool)uVar10) {
        iVar6 = iVar6 + 1;
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
      uVar10 = iVar4 == 0;
    } while (!(bool)uVar10);
  }
  local_2c = (undefined4 *)0x56b84c;
  FUN_00409dd8(iVar6,&local_390);
  local_2c = (undefined4 *)0x56b85d;
  FUN_004051d4(&local_38c,local_390);
  local_2c = (undefined4 *)0x56b86e;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_38c);
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0056ba56;
  local_24 = (undefined1 *)0x56b886;
  FUN_004048d4(&local_390,local_28,puVar1);
  local_24 = (undefined1 *)0x56b896;
  FUN_00405008(&local_38c,3);
  local_24 = (undefined1 *)0x56b8a1;
  FUN_004048d4(&local_380);
  local_24 = (undefined1 *)0x56b8ac;
  FUN_00404ff0(&local_37c);
  local_24 = (undefined1 *)0x56b8c2;
  FUN_00405744(local_378,PTR_DAT_004010f8,4);
  local_24 = (undefined1 *)0x56b8cd;
  FUN_00404ff0(&local_338);
  local_24 = (undefined1 *)0x56b8e3;
  FUN_00405744(local_334,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x56b8ee;
  FUN_004048d4(&local_314);
  local_24 = (undefined1 *)0x56b8f9;
  FUN_00404ff0(&local_310);
  local_24 = (undefined1 *)0x56b90f;
  FUN_00405744(local_30c,PTR_DAT_004010f8,4);
  local_24 = (undefined1 *)0x56b91a;
  FUN_004048d4(&local_2cc);
  local_24 = (undefined1 *)0x56b925;
  FUN_00404ff0(&local_2c8);
  local_24 = (undefined1 *)0x56b93b;
  FUN_00405744(local_2c4,PTR_DAT_004010f8,8);
  local_24 = (undefined1 *)0x56b946;
  FUN_00404ff0(&local_244);
  local_24 = (undefined1 *)0x56b95c;
  FUN_00405744(local_240,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x56b967;
  FUN_00404ff0(&local_220);
  local_24 = (undefined1 *)0x56b97d;
  FUN_00405744(local_21c,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x56b988;
  FUN_00404ff0(&local_1fc);
  local_24 = (undefined1 *)0x56b99e;
  FUN_00405744(local_1f8,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x56b9a9;
  FUN_004048d4(&local_1d8);
  local_24 = (undefined1 *)0x56b9b4;
  FUN_00404ff0(&local_1d4);
  local_24 = (undefined1 *)0x56b9ca;
  FUN_00405744(local_1d0,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x56b9d5;
  FUN_00404ff0(&local_1b0);
  local_24 = (undefined1 *)0x56b9eb;
  FUN_00405744(local_1ac,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x56b9f6;
  FUN_004048d4(&local_18c);
  local_24 = (undefined1 *)0x56ba01;
  FUN_00404ff0(&local_188);
  local_24 = (undefined1 *)0x56ba11;
  FUN_004048f8(&local_184,5);
  local_24 = (undefined1 *)0x56ba21;
  FUN_004048f8(&local_10c,2);
  local_24 = (undefined1 *)0x56ba31;
  FUN_004048f8(&local_98,2);
  local_24 = (undefined1 *)0x56ba3e;
  FUN_004048f8(&local_2c,2);
  local_24 = (undefined1 *)0x56ba4b;
  FUN_00405008(&local_24,2);
  return;
}

