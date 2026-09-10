// Address: 006380e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006380e8(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  undefined1 **ppuVar5;
  undefined4 ***pppuVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 *in_FS_OFFSET;
  undefined4 local_43c;
  undefined4 **local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined4 local_408;
  undefined1 *local_404;
  undefined1 local_400 [16];
  undefined1 local_3f0 [16];
  undefined1 local_3e0 [16];
  undefined1 local_3d0 [16];
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined4 local_398;
  undefined4 local_394;
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined4 local_370;
  undefined1 local_36c [16];
  undefined1 local_35c [16];
  undefined1 local_34c [16];
  undefined1 local_33c [16];
  undefined1 *local_32c;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined4 local_308;
  undefined4 local_304;
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined1 local_2d4 [16];
  undefined1 local_2c4 [16];
  undefined1 local_2b4 [16];
  undefined1 local_2a4 [16];
  undefined4 *local_294;
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 local_264 [16];
  undefined1 local_254 [16];
  undefined1 local_244 [16];
  undefined1 local_234 [16];
  undefined4 *local_224;
  undefined4 local_220;
  undefined1 local_21c [16];
  undefined4 local_20c [4];
  undefined4 local_1fc;
  undefined1 local_1f8 [16];
  undefined4 local_1e8 [4];
  undefined4 local_1d8;
  undefined1 local_1d4 [16];
  undefined4 local_1c4 [4];
  undefined1 local_1b4 [16];
  undefined4 local_1a4 [4];
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c [16];
  undefined1 local_17c [16];
  undefined4 local_16c;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined4 local_120;
  wchar_t *local_11c;
  undefined1 local_118 [16];
  wchar_t local_108 [8];
  undefined4 local_f8;
  undefined1 local_f4 [16];
  wchar_t local_e4 [8];
  undefined4 local_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined4 local_b0;
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined *puStack_84;
  undefined4 uStack_80;
  undefined1 *local_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_6c;
  undefined4 **local_68;
  undefined1 *local_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 *local_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  wchar_t *local_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 **ppuStack_38;
  undefined4 ***local_34;
  char *pcStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  local_1c = &stack0xfffffffc;
  iVar11 = 0x87;
  do {
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  local_20 = &LAB_0063963e;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_28 = (undefined1 *)0x63811c;
  (**(code **)(**(int **)(param_1 + 0x334) + 0x1dc))();
  puVar12 = (undefined1 *)0x0;
  puStack_28 = (undefined1 *)0x63812a;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  puStack_28 = (undefined1 *)0x638139;
  iVar11 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar11) {
    local_1c = (undefined1 *)(iVar11 + 1);
    iVar11 = 0;
    do {
      if (((-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar11 * 0x130)) &&
          (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar11 * 0x130) ==
           *(int *)(PTR_DAT_0066ac78 + 8))) &&
         (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + iVar11 * 0x130) == '\0')) {
        puVar12 = puVar12 + 1;
        puStack_2c = (undefined1 *)0x6381a5;
        puStack_28 = puVar12;
        FUN_004060a8(&DAT_006d52cc,PTR_DAT_00635c4c,1);
        *(int *)(DAT_006d52cc + -0x10 + (int)puVar12 * 0x10) = iVar11;
        puStack_28 = (undefined1 *)0x6381c0;
        uVar8 = FUN_006538b8(iVar11);
        *(undefined4 *)(DAT_006d52cc + -0xc + (int)puVar12 * 0x10) = uVar8;
        *(undefined4 *)(DAT_006d52cc + -8 + (int)puVar12 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar11 * 0x130);
        *(undefined4 *)(DAT_006d52cc + -4 + (int)puVar12 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar11 * 0x130);
      }
      iVar11 = iVar11 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != (undefined1 *)0x0);
  }
  puStack_28 = (undefined1 *)0x63820a;
  DAT_006d52d4 = FUN_00405eec(DAT_006d52cc);
  puStack_28 = (undefined1 *)(DAT_006d52d4 + -1);
  puStack_2c = &LAB_00636750;
  pcStack_30 = (char *)0x63822c;
  FUN_004bcdb0(DAT_006d52cc,0x10,0);
  if (-1 < (int)(puVar12 + -1)) {
    iVar11 = 0;
    local_1c = puVar12;
    do {
      iVar10 = *(int *)(DAT_006d52cc + iVar11 * 0x10);
      pcStack_30 = (char *)0x638267;
      (**(code **)(**(int **)(param_1 + 0x334) + 0x1d0))(*(int **)(param_1 + 0x334),1);
      pcStack_30 = (char *)0x638272;
      FUN_00409dd8(iVar10,&local_24);
      pcStack_30 = (char *)0x63827d;
      FUN_004051d4(&local_20,local_24);
      pcStack_30 = local_20;
      piVar1 = *(int **)(param_1 + 0x334);
      local_34 = (undefined4 ***)0x638294;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      local_34 = (undefined4 ***)0x6382a1;
      FUN_00416244(&local_34,iVar9 + -1,0xfc);
      local_34 = &local_34;
      ppuStack_38 = (undefined1 **)0x6382b2;
      FUN_00416478(&local_44,&DAT_00639658);
      pppuVar6 = local_34;
      local_34 = (undefined4 ***)0x6382bd;
      FUN_0050e9b8(piVar1,&local_44,pppuVar6);
      if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x85 + iVar10 * 0x130) != '\0') {
        local_34 = (undefined4 ***)&DAT_00639660;
        piVar1 = *(int **)(param_1 + 0x334);
        ppuStack_38 = (undefined1 **)0x6382ea;
        iVar9 = (**(code **)(*piVar1 + 0x11c))();
        local_34 = (undefined4 ***)0x6382f7;
        FUN_00416244(&local_54,iVar9 + -1,0xfc);
        local_34 = (undefined4 ***)&local_54;
        ppuStack_38 = (undefined1 **)0x638308;
        FUN_00416478(&local_64,"nxstatus");
        pppuVar6 = local_34;
        local_34 = (undefined4 ***)0x638313;
        FUN_0050e9b8(piVar1,&local_64,pppuVar6);
      }
      local_34 = (undefined4 ***)0x638324;
      iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
      local_34 = (undefined4 ***)0x638332;
      FUN_00648fa4(iVar10,iVar9 + -1,&local_6c);
      local_34 = (undefined4 ***)0x63833d;
      FUN_004051d4(&local_68,local_6c);
      local_34 = (undefined4 ***)local_68;
      piVar1 = *(int **)(param_1 + 0x334);
      ppuStack_38 = (undefined1 **)0x638354;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      ppuStack_38 = (undefined1 **)0x638361;
      FUN_00416244(&local_7c,iVar9 + -1,0xfc);
      ppuStack_38 = &local_7c;
      puStack_3c = (undefined1 *)0x638375;
      FUN_00416478(&local_8c,"status");
      ppuVar5 = ppuStack_38;
      ppuStack_38 = (undefined1 **)0x638383;
      FUN_0050e9b8(piVar1,&local_8c,ppuVar5);
      ppuStack_38 = *(undefined1 ***)
                     (PTR_DAT_0066b660 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar10 * 0x130) * 4);
      piVar1 = *(int **)(param_1 + 0x334);
      puStack_3c = (undefined1 *)0x6383ab;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_3c = (undefined1 *)0x6383bb;
      FUN_00416244(local_9c,iVar9 + -1,0xfc);
      puStack_3c = local_9c;
      puStack_40 = (undefined1 *)0x6383d2;
      FUN_00416478(local_ac,"posicaojog");
      puVar12 = puStack_3c;
      puStack_3c = (undefined1 *)0x6383e0;
      FUN_0050e9b8(piVar1,local_ac,puVar12);
      puStack_3c = (undefined1 *)0x6383f6;
      FUN_00405194(&local_b0,*(int *)PTR_DAT_0066b5b8 + iVar10 * 0x130);
      puStack_3c = (undefined1 *)local_b0;
      piVar1 = *(int **)(param_1 + 0x334);
      puStack_40 = (undefined1 *)0x638410;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_40 = (undefined1 *)0x638420;
      FUN_00416244(local_c0,iVar9 + -1,0xfc);
      puStack_40 = local_c0;
      local_44 = (wchar_t *)0x638437;
      FUN_00416478(local_d0,&DAT_006396a4);
      puVar12 = puStack_40;
      puStack_40 = (undefined1 *)0x638445;
      FUN_0050e9b8(piVar1,local_d0,puVar12);
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + iVar10 * 0x130) == 0) {
        puStack_40 = (undefined1 *)0x638463;
        FUN_00642c50(0x99,&local_d4);
        puStack_40 = (undefined1 *)local_d4;
        piVar1 = *(int **)(param_1 + 0x334);
        local_44 = (wchar_t *)0x63847d;
        iVar9 = (**(code **)(*piVar1 + 0x11c))();
        local_44 = (wchar_t *)0x63848d;
        FUN_00416244(local_e4,iVar9 + -1,0xfc);
        local_44 = local_e4;
        puStack_48 = (undefined1 *)0x6384a4;
        FUN_00416478(local_f4,"funcaojog");
        pwVar4 = local_44;
        local_44 = L"快閍，\xffff鮸";
        FUN_0050e9b8(piVar1,local_f4,pwVar4);
      }
      else {
        puStack_40 = (undefined1 *)0x6384c4;
        FUN_00642c50(0x9b,&local_f8);
        puStack_40 = (undefined1 *)local_f8;
        piVar1 = *(int **)(param_1 + 0x334);
        local_44 = (wchar_t *)0x6384de;
        iVar9 = (**(code **)(*piVar1 + 0x11c))();
        local_44 = (wchar_t *)0x6384ee;
        FUN_00416244(local_108,iVar9 + -1,0xfc);
        local_44 = local_108;
        puStack_48 = (undefined1 *)0x638505;
        FUN_00416478(local_118,"funcaojog");
        pwVar4 = local_44;
        local_44 = (wchar_t *)0x638513;
        FUN_0050e9b8(piVar1,local_118,pwVar4);
      }
      local_44 = (wchar_t *)0x638529;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar10 * 0x130),&local_120);
      local_44 = L"薋ﻨ\xffff譐ﱅ낋̴";
      FUN_004051d4(&local_11c,local_120);
      local_44 = local_11c;
      piVar1 = *(int **)(param_1 + 0x334);
      puStack_48 = (undefined1 *)0x638554;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_48 = (undefined1 *)0x638564;
      FUN_00416244(local_130,iVar9 + -1,0xfc);
      puStack_48 = local_130;
      puStack_4c = (undefined1 *)0x63857b;
      FUN_00416478(local_140,"forca");
      puVar12 = puStack_48;
      puStack_48 = (undefined1 *)0x638589;
      FUN_0050e9b8(piVar1,local_140,puVar12);
      puStack_48 = (undefined1 *)0x63859f;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar10 * 0x130),&local_148);
      puStack_48 = (undefined1 *)0x6385b0;
      FUN_004051d4(&local_144,local_148);
      puStack_48 = (undefined1 *)local_144;
      piVar1 = *(int **)(param_1 + 0x334);
      puStack_4c = (undefined1 *)0x6385ca;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_4c = (undefined1 *)0x6385da;
      FUN_00416244(local_158,iVar9 + -1,0xfc);
      puStack_4c = local_158;
      puStack_50 = (undefined1 *)0x6385f1;
      FUN_00416478(local_168,"energia");
      puVar12 = puStack_4c;
      puStack_4c = (undefined1 *)0x6385ff;
      FUN_0050e9b8(piVar1,local_168,puVar12);
      puStack_4c = (undefined1 *)0x638615;
      uVar8 = FUN_00402c38();
      puStack_4c = (undefined1 *)0x638620;
      FUN_00651ebc(uVar8,&local_16c);
      puStack_4c = (undefined1 *)local_16c;
      piVar1 = *(int **)(param_1 + 0x334);
      puStack_50 = (undefined1 *)0x63863a;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_50 = (undefined1 *)0x63864a;
      FUN_00416244(local_17c,iVar9 + -1,0xfc);
      puStack_50 = local_17c;
      local_54 = (undefined4 **)0x638661;
      FUN_00416478(local_18c,"salario");
      puVar12 = puStack_50;
      puStack_50 = (undefined1 *)0x63866f;
      FUN_0050e9b8(piVar1,local_18c,puVar12);
      puStack_50 = (undefined1 *)0x638685;
      local_54 = (undefined4 *)FUN_00402c38();
      puStack_58 = (undefined1 *)0x638692;
      FUN_00409fa8(&local_194);
      puStack_50 = (undefined1 *)0x6386a3;
      FUN_004051d4(&local_190,local_194);
      puStack_50 = (undefined1 *)local_190;
      piVar1 = *(int **)(param_1 + 0x334);
      local_54 = (undefined4 **)0x6386bd;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      local_54 = (undefined4 **)0x6386cd;
      FUN_00416244(local_1a4,iVar9 + -1,0xfc);
      local_54 = local_1a4;
      puStack_58 = (undefined1 *)0x6386e4;
      FUN_00416478(local_1b4,"salariot");
      puVar3 = local_54;
      local_54 = (undefined4 **)0x6386f2;
      FUN_0050e9b8(piVar1,local_1b4,puVar3);
      if (*PTR_DAT_0066b700 == '\0') {
        if (*(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <=
            *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar10 * 0x130)) {
          if ((double)_DAT_00639708 <=
              *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar10 * 0x130) -
              *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
            if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar10 * 0x130) -
                *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <
                (double)_DAT_0063970c) {
              local_54 = (undefined4 **)0x63887d;
              iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
              local_54 = (undefined4 **)0x63888d;
              FUN_00416244(local_20c,iVar9 + -1,0xfc);
              local_54 = local_20c;
              puStack_58 = (undefined1 *)0x6388a4;
              FUN_00416478(local_21c,"salario");
              puVar3 = local_54;
              local_54 = (undefined4 **)0x6388b9;
              local_54 = (undefined4 *)
                         FUN_004f77e4(*(undefined4 *)(param_1 + 0x334),local_21c,puVar3);
              puStack_58 = (undefined1 *)0x6388ca;
              FUN_00642c50(0x8c,&local_220);
              puVar3 = local_54;
              local_54 = (undefined4 **)0x6388d6;
              FUN_004f7234(puVar3,local_220);
            }
          }
          else {
            local_54 = (undefined4 **)0x6387db;
            iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
            local_54 = (undefined4 **)0x6387eb;
            FUN_00416244(local_1e8,iVar9 + -1,0xfc);
            local_54 = local_1e8;
            puStack_58 = (undefined1 *)0x638802;
            FUN_00416478(local_1f8,"salario");
            puVar3 = local_54;
            local_54 = (undefined4 **)0x638817;
            local_54 = (undefined4 *)FUN_004f77e4(*(undefined4 *)(param_1 + 0x334),local_1f8,puVar3)
            ;
            puStack_58 = (undefined1 *)0x638828;
            FUN_00642c50(0x8b,&local_1fc);
            puVar3 = local_54;
            local_54 = (undefined4 **)0x638834;
            FUN_004f7234(puVar3,local_1fc);
          }
        }
        else {
          local_54 = (undefined4 **)0x638739;
          iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
          local_54 = (undefined4 **)0x638749;
          FUN_00416244(local_1c4,iVar9 + -1,0xfc);
          local_54 = local_1c4;
          puStack_58 = (undefined1 *)0x638760;
          FUN_00416478(local_1d4,"salario");
          puVar3 = local_54;
          local_54 = (undefined4 **)0x638775;
          local_54 = (undefined4 *)FUN_004f77e4(*(undefined4 *)(param_1 + 0x334),local_1d4,puVar3);
          puStack_58 = (undefined1 *)0x638786;
          FUN_00642c50(0x38,&local_1d8);
          puVar3 = local_54;
          local_54 = (undefined4 **)0x638792;
          FUN_004f7234(puVar3,local_1d8);
        }
      }
      if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar10 * 0x130) == '\0') {
        local_54 = (undefined4 **)0x6388fe;
        uVar8 = FUN_00402c38();
        local_54 = (undefined4 **)0x638909;
        FUN_0064d948(uVar8,&local_224);
        local_54 = local_224;
        piVar1 = *(int **)(param_1 + 0x334);
        puStack_58 = (undefined1 *)0x638923;
        iVar9 = (**(code **)(*piVar1 + 0x11c))();
        puStack_58 = (undefined1 *)0x638933;
        FUN_00416244(local_234,iVar9 + -1,0xfc);
        puStack_58 = local_234;
        puStack_5c = (undefined1 *)0x63894a;
        FUN_00416478(local_244,"passe");
        puVar12 = puStack_58;
        puStack_58 = (undefined1 *)0x638958;
        FUN_0050e9b8(piVar1,local_244,puVar12);
        puStack_58 = (undefined1 *)0x638969;
        iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
        puStack_58 = (undefined1 *)0x638979;
        FUN_00416244(local_254,iVar9 + -1,0xfc);
        puStack_58 = local_254;
        puStack_5c = (undefined1 *)0x638990;
        FUN_00416478(local_264,"passe");
        puVar12 = puStack_58;
        puStack_58 = (undefined1 *)0x6389a5;
        puStack_58 = (undefined1 *)FUN_004f77e4(*(undefined4 *)(param_1 + 0x334),local_264,puVar12);
        puStack_5c = (undefined1 *)0x6389bc;
        uVar8 = FUN_00402c38();
        puStack_5c = (undefined1 *)0x6389c7;
        FUN_006468f4(uVar8,&local_268);
        puVar12 = puStack_58;
        puStack_58 = (undefined1 *)0x6389d3;
        FUN_004f7234(puVar12,local_268);
        puStack_58 = (undefined1 *)0x6389ee;
        puStack_5c = (undefined1 *)FUN_00402c38();
        puStack_60 = (undefined1 *)0x6389fb;
        FUN_00409fa8(&local_270);
        puStack_58 = (undefined1 *)0x638a0c;
        FUN_004051d4(&local_26c,local_270);
        puStack_58 = (undefined1 *)local_26c;
        puStack_5c = (undefined1 *)0x638a24;
        iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
        puStack_5c = (undefined1 *)0x638a34;
        FUN_00416244(local_280,iVar9 + -1,0xfc);
        puStack_5c = local_280;
        puStack_60 = (undefined1 *)0x638a4b;
        FUN_00416478(local_290,"passet");
        puVar12 = puStack_5c;
        puStack_5c = (undefined1 *)0x638a60;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x334),local_290,puVar12);
      }
      else {
        local_54 = (undefined4 **)0x638a7b;
        uVar8 = FUN_00402c38();
        local_54 = (undefined4 **)0x638a86;
        FUN_0064d948(uVar8,&local_294);
        local_54 = local_294;
        puStack_58 = (undefined1 *)0x638a9e;
        iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
        puStack_58 = (undefined1 *)0x638aae;
        FUN_00416244(local_2a4,iVar9 + -1,0xfc);
        puStack_58 = local_2a4;
        puStack_5c = (undefined1 *)0x638ac5;
        FUN_00416478(local_2b4,"passe");
        puVar12 = puStack_58;
        puStack_58 = (undefined1 *)0x638ada;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x334),local_2b4,puVar12);
        puStack_58 = (undefined1 *)0x638aeb;
        iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
        puStack_58 = (undefined1 *)0x638afb;
        FUN_00416244(local_2c4,iVar9 + -1,0xfc);
        puStack_58 = local_2c4;
        puStack_5c = (undefined1 *)0x638b12;
        FUN_00416478(local_2d4,"passe");
        puVar12 = puStack_58;
        puStack_58 = (undefined1 *)0x638b27;
        puStack_58 = (undefined1 *)FUN_004f77e4(*(undefined4 *)(param_1 + 0x334),local_2d4,puVar12);
        puStack_5c = (undefined1 *)0x638b3e;
        uVar8 = FUN_00402c38();
        puStack_5c = (undefined1 *)0x638b49;
        FUN_006468f4(uVar8,&local_2d8);
        puVar12 = puStack_58;
        puStack_58 = (undefined1 *)0x638b55;
        FUN_004f7234(puVar12,local_2d8);
        puStack_58 = (undefined1 *)0x638b70;
        puStack_5c = (undefined1 *)FUN_00402c38();
        puStack_60 = (undefined1 *)0x638b7d;
        FUN_00409fa8(&local_2e0);
        puStack_58 = (undefined1 *)0x638b8e;
        FUN_004051d4(&local_2dc,local_2e0);
        puStack_58 = (undefined1 *)local_2dc;
        puStack_5c = (undefined1 *)0x638ba6;
        iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
        puStack_5c = (undefined1 *)0x638bb6;
        FUN_00416244(local_2f0,iVar9 + -1,0xfc);
        puStack_5c = local_2f0;
        puStack_60 = (undefined1 *)0x638bcd;
        FUN_00416478(local_300,"passet");
        puVar12 = puStack_5c;
        puStack_5c = (undefined1 *)0x638be2;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x334),local_300,puVar12);
      }
      puStack_5c = (undefined1 *)0x638bed;
      uVar8 = FUN_0063b704(param_1,iVar10);
      puStack_5c = (undefined1 *)0x638bf8;
      FUN_00409dd8(uVar8,&local_308);
      puStack_5c = (undefined1 *)0x638c09;
      FUN_004051d4(&local_304,local_308);
      puStack_5c = (undefined1 *)local_304;
      piVar1 = *(int **)(param_1 + 0x334);
      puStack_60 = (undefined1 *)0x638c23;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_60 = (undefined1 *)0x638c33;
      FUN_00416244(local_318,iVar9 + -1,0xfc);
      puStack_60 = local_318;
      local_64 = (undefined1 *)0x638c4a;
      FUN_00416478(local_328,&DAT_00639738);
      puVar12 = puStack_60;
      puStack_60 = (undefined1 *)0x638c58;
      FUN_0050e9b8(piVar1,local_328,puVar12);
      iVar9 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar10 * 0x130);
      if ((iVar9 < 0) || (0xd < iVar9)) {
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar10 * 0x130) == 0) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar10 * 0x130) = 0;
        }
        else {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar10 * 0x130) = 0xd;
        }
      }
      iVar9 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar10 * 0x130);
      if ((iVar9 < 0) || (0xd < iVar9)) {
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar10 * 0x130) == 0) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar10 * 0x130) = 1;
        }
        else {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar10 * 0x130) = 0xb;
        }
      }
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar10 * 0x130) ==
          *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar10 * 0x130)) {
        local_64 = &LAB_00638f11;
        local_68 = (undefined4 **)*in_FS_OFFSET;
        *in_FS_OFFSET = &local_68;
        local_6c = *(undefined4 *)
                    (PTR_DAT_0066b3a4 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar10 * 0x130) * 4);
        puStack_70 = (undefined1 *)0x638ecb;
        puStack_60 = &stack0xfffffffc;
        iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
        local_7c = (undefined1 *)0x638edb;
        FUN_00416244(local_380,iVar9 + -1,0xfc);
        local_7c = local_380;
        uStack_80 = 0x638ef2;
        FUN_00416478(local_390,"habilidades");
        puVar12 = local_7c;
        local_7c = (undefined1 *)0x638f07;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x334),local_390,puVar12);
        *in_FS_OFFSET = puStack_78;
        puVar12 = puStack_70;
      }
      else {
        local_64 = &LAB_00638db4;
        local_68 = (undefined4 **)*in_FS_OFFSET;
        *in_FS_OFFSET = &local_68;
        local_6c = *(undefined4 *)
                    (PTR_DAT_0066b1c8 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar10 * 0x130) * 4);
        puStack_70 = &DAT_00639744;
        puStack_74 = *(undefined1 **)
                      (PTR_DAT_0066b1c8 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar10 * 0x130) * 4);
        puStack_78 = (undefined1 *)0x638d56;
        puStack_60 = &stack0xfffffffc;
        FUN_00405330(&local_32c,3);
        puStack_78 = local_32c;
        local_7c = (undefined1 *)0x638d6e;
        iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
        local_7c = (undefined1 *)0x638d7e;
        FUN_00416244(local_33c,iVar9 + -1,0xfc);
        local_7c = local_33c;
        uStack_80 = 0x638d95;
        FUN_00416478(local_34c,"habilidades");
        puVar12 = local_7c;
        local_7c = (undefined1 *)0x638daa;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x334),local_34c,puVar12);
        puVar12 = puStack_70;
        *in_FS_OFFSET = puStack_78;
        puStack_74 = &LAB_00638e88;
        puStack_78 = (undefined1 *)*in_FS_OFFSET;
        *in_FS_OFFSET = &puStack_78;
        puStack_70 = &stack0xfffffffc;
        if (*PTR_DAT_0066b700 == '\0') {
          iVar9 = **(int **)(param_1 + 0x334);
          local_7c = (undefined1 *)0x638deb;
          puStack_70 = &stack0xfffffffc;
          iVar9 = (**(code **)(iVar9 + 0x11c))(*(int **)(param_1 + 0x334),iVar9,puVar12);
          local_7c = (undefined1 *)0x638dfb;
          FUN_00416244(local_35c,iVar9 + -1,0xfc);
          local_7c = local_35c;
          uStack_80 = 0x638e12;
          FUN_00416478(local_36c,"habilidades");
          puVar12 = local_7c;
          local_7c = (undefined1 *)0x638e27;
          local_7c = (undefined1 *)FUN_004f77e4(*(undefined4 *)(param_1 + 0x334),local_36c,puVar12);
          uStack_80 = *(undefined4 *)
                       (PTR_DAT_0066b3a4 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar10 * 0x130) * 4);
          puStack_84 = &DAT_00639744;
          uStack_88 = *(undefined4 *)
                       (PTR_DAT_0066b3a4 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar10 * 0x130) * 4);
          local_8c = 0x638e6f;
          FUN_00405330(&local_370,3);
          puVar12 = local_7c;
          local_7c = (undefined1 *)0x638e7b;
          FUN_004f7234(puVar12,local_370);
        }
        *in_FS_OFFSET = puStack_78;
        puVar12 = puStack_70;
      }
      puStack_70 = (undefined1 *)0x638f35;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar10 * 0x130),&local_398,
                   puVar12);
      puStack_70 = (undefined1 *)0x638f46;
      FUN_004051d4(&local_394,local_398);
      puStack_70 = (undefined1 *)local_394;
      piVar1 = *(int **)(param_1 + 0x334);
      puStack_74 = (undefined1 *)0x638f60;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_74 = (undefined1 *)0x638f70;
      FUN_00416244(local_3a8,iVar9 + -1,0xfc);
      puStack_74 = local_3a8;
      puStack_78 = (undefined1 *)0x638f87;
      FUN_00416478(local_3b8,"idade");
      puVar12 = puStack_74;
      puStack_74 = (undefined1 *)0x638f95;
      FUN_0050e9b8(piVar1,local_3b8,puVar12);
      puStack_78 = &LAB_00639029;
      local_7c = (undefined1 *)*in_FS_OFFSET;
      *in_FS_OFFSET = &local_7c;
      uStack_80 = 0x638fbf;
      puStack_74 = &stack0xfffffffc;
      FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar10 * 0x130) + 7,&local_3c0);
      uStack_80 = 0x638fd0;
      FUN_004051d4(&local_3bc,local_3c0);
      uStack_80 = local_3bc;
      piVar1 = *(int **)(param_1 + 0x334);
      puStack_84 = (undefined *)0x638fea;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_84 = (undefined *)0x638ffa;
      FUN_00416244(local_3d0,iVar9 + -1,0xfc);
      puStack_84 = local_3d0;
      uStack_88 = 0x639011;
      FUN_00416478(local_3e0,"moral");
      puVar2 = puStack_84;
      puStack_84 = (undefined *)0x63901f;
      FUN_0050e9b8(piVar1,local_3e0,puVar2);
      puVar12 = puStack_78;
      *in_FS_OFFSET = uStack_80;
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + iVar10 * 0x130 + 0x8c +
                  *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 3) {
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + iVar10 * 0x130 + 0xb8 +
                    *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 1) {
          if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x68 + iVar10 * 0x130) <=
              *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
            if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar10 * 0x130) != '\0') {
              puStack_78 = &DAT_00639780;
              iVar9 = **(int **)(param_1 + 0x334);
              local_7c = (undefined1 *)0x639156;
              iVar9 = (**(code **)(iVar9 + 0x11c))(*(int **)(param_1 + 0x334),iVar9,puVar12);
              puStack_78 = (undefined1 *)0x639166;
              FUN_00416244(local_3f0,iVar9 + -1,0xfc);
              puStack_78 = local_3f0;
              local_7c = (undefined1 *)0x63917d;
              FUN_00416478(local_400,"condicao");
              puVar12 = puStack_78;
              puStack_78 = (undefined1 *)0x639192;
              FUN_0050e9b8(*(undefined4 *)(param_1 + 0x334),local_400,puVar12);
            }
          }
          else {
            puStack_78 = (undefined1 *)
                         CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),
                                  *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar10 * 0x130))
            ;
            local_7c = (undefined1 *)0x639120;
            iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
            puStack_78 = (undefined1 *)0x639130;
            FUN_006367a8(param_1,iVar9 + -1,3);
          }
        }
        else {
          puStack_78 = (undefined1 *)
                       CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),
                                *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar10 * 0x130));
          local_7c = (undefined1 *)0x6390c6;
          iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
          puStack_78 = (undefined1 *)0x6390d6;
          FUN_006367a8(param_1,iVar9 + -1,1);
        }
      }
      else {
        puStack_78 = (undefined1 *)
                     CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),
                              *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar10 * 0x130));
        local_7c = (undefined1 *)0x639074;
        iVar9 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
        puStack_78 = (undefined1 *)0x639084;
        FUN_006367a8(param_1,iVar9 + -1,4);
      }
      puStack_78 = (undefined1 *)0x6391a8;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + iVar10 * 0x130),&local_408);
      puStack_78 = (undefined1 *)0x6391b9;
      FUN_004051d4(&local_404,local_408);
      puStack_78 = local_404;
      piVar1 = *(int **)(param_1 + 0x334);
      local_7c = (undefined1 *)0x6391d3;
      iVar10 = (**(code **)(*piVar1 + 0x11c))();
      pcStack_30 = (char *)0x6391e3;
      FUN_00416244(local_418,iVar10 + -1,0xfc);
      pcStack_30 = local_418;
      local_34 = (undefined4 ***)0x6391fa;
      FUN_00416478(local_428,"status");
      pcVar7 = pcStack_30;
      pcStack_30 = (char *)0x639208;
      FUN_0050e9b8(piVar1,local_428,pcVar7);
      iVar11 = iVar11 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != (undefined1 *)0x0);
  }
  pcStack_30 = "<shad>";
  local_34 = (undefined4 ***)0x63922a;
  uVar8 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
  local_34 = (undefined4 ***)0x639235;
  FUN_00409dd8(uVar8,&local_438);
  local_34 = (undefined4 ***)local_438;
  ppuStack_38 = (undefined1 **)&DAT_006397b4;
  puStack_3c = (undefined1 *)0x639250;
  FUN_00404c64(&local_434,3);
  puStack_3c = (undefined1 *)0x639261;
  FUN_004051d4(&local_430,local_434);
  puStack_3c = (undefined1 *)local_430;
  puStack_40 = (undefined1 *)0x639277;
  FUN_00642c50(0x49,&local_43c);
  puStack_40 = (undefined1 *)local_43c;
  local_44 = L"</shad>";
  puStack_48 = (undefined1 *)0x639292;
  FUN_00405330(&local_42c,3);
  puStack_48 = (undefined1 *)0x6392a6;
  FUN_00545088(*(undefined4 *)(param_1 + 0x410),local_42c);
  puStack_48 = (undefined1 *)0x0;
  puStack_4c = (undefined1 *)0x6392bd;
  FUN_004060a8(&DAT_006d52cc,PTR_DAT_00635c4c,1);
  puStack_48 = (undefined1 *)0x6392d7;
  (**(code **)(**(int **)(param_1 + 0x334) + 0x210))(*(int **)(param_1 + 0x334),DAT_006397cc);
  puVar12 = puStack_3c;
  *in_FS_OFFSET = local_44;
  puStack_3c = &LAB_00639648;
  puStack_40 = (undefined1 *)0x6392ef;
  FUN_00404ff0(&local_43c,local_44,puVar12);
  puStack_40 = (undefined1 *)0x6392ff;
  FUN_004048f8(&local_438,2);
  puStack_40 = (undefined1 *)0x63930f;
  FUN_00405008(&local_430,2);
  puStack_40 = (undefined1 *)0x639325;
  FUN_00405744(local_428,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x639330;
  FUN_004048d4(&local_408);
  puStack_40 = (undefined1 *)0x63933b;
  FUN_00404ff0(&local_404);
  puStack_40 = (undefined1 *)0x639351;
  FUN_00405744(local_400,PTR_DAT_004010f8,4);
  puStack_40 = (undefined1 *)0x63935c;
  FUN_004048d4(&local_3c0);
  puStack_40 = (undefined1 *)0x639367;
  FUN_00404ff0(&local_3bc);
  puStack_40 = (undefined1 *)0x63937d;
  FUN_00405744(local_3b8,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x639388;
  FUN_004048d4(&local_398);
  puStack_40 = (undefined1 *)0x639393;
  FUN_00404ff0(&local_394);
  puStack_40 = (undefined1 *)0x6393a9;
  FUN_00405744(local_390,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x6393b4;
  FUN_00404ff0(&local_370);
  puStack_40 = (undefined1 *)0x6393ca;
  FUN_00405744(local_36c,PTR_DAT_004010f8,4);
  puStack_40 = (undefined1 *)0x6393d5;
  FUN_00404ff0(&local_32c);
  puStack_40 = (undefined1 *)0x6393eb;
  FUN_00405744(local_328,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x6393f6;
  FUN_004048d4(&local_308);
  puStack_40 = (undefined1 *)0x639401;
  FUN_00404ff0(&local_304);
  puStack_40 = (undefined1 *)0x639417;
  FUN_00405744(local_300,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x639422;
  FUN_004048d4(&local_2e0);
  puStack_40 = (undefined1 *)0x639432;
  FUN_00405008(&local_2dc,2);
  puStack_40 = (undefined1 *)0x639448;
  FUN_00405744(local_2d4,PTR_DAT_004010f8,4);
  puStack_40 = (undefined1 *)0x639453;
  FUN_00404ff0(&local_294);
  puStack_40 = (undefined1 *)0x639469;
  FUN_00405744(local_290,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x639474;
  FUN_004048d4(&local_270);
  puStack_40 = (undefined1 *)0x639484;
  FUN_00405008(&local_26c,2);
  puStack_40 = (undefined1 *)0x63949a;
  FUN_00405744(local_264,PTR_DAT_004010f8,4);
  puStack_40 = (undefined1 *)0x6394aa;
  FUN_00405008(&local_224,2);
  puStack_40 = (undefined1 *)0x6394c0;
  FUN_00405744(local_21c,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x6394cb;
  FUN_00404ff0(&local_1fc);
  puStack_40 = (undefined1 *)0x6394e1;
  FUN_00405744(local_1f8,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x6394ec;
  FUN_00404ff0(&local_1d8);
  puStack_40 = (undefined1 *)0x639502;
  FUN_00405744(local_1d4,PTR_DAT_004010f8,4);
  puStack_40 = (undefined1 *)0x63950d;
  FUN_004048d4(&local_194);
  puStack_40 = (undefined1 *)0x639518;
  FUN_00404ff0(&local_190);
  puStack_40 = (undefined1 *)0x63952e;
  FUN_00405744(local_18c,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x639539;
  FUN_00404ff0(&local_16c);
  puStack_40 = (undefined1 *)0x63954f;
  FUN_00405744(local_168,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x63955a;
  FUN_004048d4(&local_148);
  puStack_40 = (undefined1 *)0x639565;
  FUN_00404ff0(&local_144);
  puStack_40 = (undefined1 *)0x63957b;
  FUN_00405744(local_140,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x639586;
  FUN_004048d4(&local_120);
  puStack_40 = (undefined1 *)0x639591;
  FUN_00404ff0(&local_11c);
  puStack_40 = (undefined1 *)0x6395a7;
  FUN_00405744(local_118,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x6395b2;
  FUN_00404ff0(&local_f8);
  puStack_40 = (undefined1 *)0x6395c8;
  FUN_00405744(local_f4,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x6395d3;
  FUN_00404ff0(&local_d4);
  puStack_40 = (undefined1 *)0x6395e9;
  FUN_00405744(local_d0,PTR_DAT_004010f8,2);
  puStack_40 = (undefined1 *)0x6395f4;
  FUN_00404ff0(&local_b0);
  puStack_40 = (undefined1 *)0x63960a;
  FUN_00405744(local_ac,PTR_DAT_004010f8,4);
  puStack_40 = (undefined1 *)0x639612;
  FUN_004048d4(&local_6c);
  puStack_40 = (undefined1 *)0x63961a;
  FUN_00404ff0(&local_68);
  puStack_40 = (undefined1 *)0x63962d;
  FUN_00405744(&local_64,PTR_DAT_004010f8,4);
  puStack_40 = (undefined1 *)0x639635;
  FUN_004048d4(&local_24);
  puStack_40 = (undefined1 *)0x63963d;
  FUN_00404ff0(&local_20);
  return;
}

