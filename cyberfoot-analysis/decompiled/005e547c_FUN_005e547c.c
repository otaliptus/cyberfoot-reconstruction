// Address: 005e547c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e547c(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 ***pppuVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *in_FS_OFFSET;
  undefined1 local_454 [16];
  undefined1 auStack_444 [16];
  undefined4 local_434;
  undefined1 local_430 [16];
  undefined1 auStack_420 [16];
  undefined4 local_410;
  undefined1 local_40c [16];
  undefined1 auStack_3fc [16];
  undefined4 local_3ec;
  undefined1 local_3e8 [16];
  undefined1 auStack_3d8 [16];
  undefined4 local_3c8;
  undefined1 local_3c4 [16];
  undefined1 auStack_3b4 [16];
  undefined1 auStack_3a4 [16];
  undefined1 auStack_394 [16];
  undefined1 auStack_384 [16];
  undefined1 auStack_374 [16];
  undefined4 local_364;
  undefined4 local_360;
  undefined1 local_35c [16];
  undefined1 auStack_34c [16];
  undefined4 local_33c;
  undefined4 local_338;
  undefined1 local_334 [16];
  undefined1 auStack_324 [16];
  undefined4 local_314;
  undefined1 local_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined4 *local_2d0;
  undefined1 local_2cc [16];
  undefined1 local_2bc [16];
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined1 local_2a4 [16];
  undefined1 local_294 [16];
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined4 *local_238;
  undefined1 local_234 [16];
  undefined1 local_224 [16];
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined4 *local_1c8;
  undefined1 local_1c4 [16];
  undefined4 local_1b4 [4];
  undefined4 local_1a4;
  undefined1 local_1a0 [16];
  undefined4 local_190 [4];
  undefined4 local_180;
  undefined1 local_17c [16];
  undefined1 local_16c [16];
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  undefined1 local_10c [16];
  undefined1 local_fc [16];
  undefined4 local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 *local_88;
  undefined4 local_84;
  undefined *puStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined4 *local_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 *local_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *local_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 ***local_34;
  undefined *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int iVar11;
  
  local_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  iVar9 = 0x8a;
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_20 = &LAB_005e6a19;
  local_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_2c = &LAB_005e54c8;
  puStack_30 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_30;
  local_34 = (undefined4 ***)0x5e54be;
  (**(code **)(**(int **)(param_1 + 0x304) + 0x1dc))();
  puVar6 = puStack_28;
  *in_FS_OFFSET = puStack_30;
  puVar10 = (undefined1 *)0x0;
  iVar9 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  puStack_28 = (undefined1 *)0x5e54f8;
  puVar6 = (undefined1 *)FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8,puStack_30,puVar6);
  if (0 < (int)puVar6) {
    iVar11 = 1;
    local_1c = puVar6;
    do {
      iVar8 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar11 * 0x130);
      if (((-1 < iVar8) && (iVar8 == *(int *)(PTR_DAT_0066ac78 + 8))) &&
         ((cVar1 = *(char *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + iVar11 * 0x130), cVar1 == '\0' ||
          ((bool)cVar1 == (iVar9 == 0))))) {
        puVar10 = puVar10 + 1;
        puStack_2c = (undefined1 *)0x5e5570;
        puStack_28 = puVar10;
        FUN_004060a8(&DAT_006d34ec,PTR_DAT_005e5170,1);
        *(int *)(DAT_006d34ec + -0x10 + (int)puVar10 * 0x10) = iVar11;
        puStack_28 = (undefined1 *)0x5e558b;
        uVar7 = FUN_006538b8(iVar11);
        *(undefined4 *)(DAT_006d34ec + -0xc + (int)puVar10 * 0x10) = uVar7;
        *(undefined4 *)(DAT_006d34ec + -8 + (int)puVar10 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar11 * 0x130);
        *(undefined4 *)(DAT_006d34ec + -4 + (int)puVar10 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar11 * 0x130);
      }
      iVar11 = iVar11 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != (undefined1 *)0x0);
  }
  puStack_28 = (undefined1 *)0x5e55df;
  DAT_006d34f4 = FUN_00405eec(DAT_006d34ec);
  puStack_28 = (undefined1 *)(DAT_006d34f4 + -1);
  puStack_2c = &LAB_005e52bc;
  puStack_30 = (undefined *)0x5e5601;
  FUN_004bcdb0(DAT_006d34ec,0x10,0);
  if (-1 < (int)(puVar10 + -1)) {
    iVar9 = 0;
    local_1c = puVar10;
    do {
      iVar11 = *(int *)(DAT_006d34ec + iVar9 * 0x10);
      puStack_30 = (undefined *)0x5e563c;
      (**(code **)(**(int **)(param_1 + 0x304) + 0x1d0))(*(int **)(param_1 + 0x304),1);
      puStack_30 = (undefined *)0x5e5647;
      FUN_00409dd8(iVar11,&local_24);
      puStack_30 = (undefined *)0x5e5652;
      FUN_004051d4(&local_20,local_24);
      puStack_30 = local_20;
      piVar2 = *(int **)(param_1 + 0x304);
      local_34 = (undefined4 ***)0x5e5669;
      iVar8 = (**(code **)(*piVar2 + 0x11c))();
      local_34 = (undefined4 ***)0x5e5676;
      FUN_00416244(&local_34,iVar8 + -1,0xfc);
      local_34 = &local_34;
      puStack_38 = (undefined4 *)0x5e5687;
      FUN_00416478(&local_44,&DAT_005e6a34);
      pppuVar4 = local_34;
      local_34 = (undefined4 ***)0x5e5692;
      FUN_0050e9b8(piVar2,&local_44,pppuVar4);
      if (*PTR_DAT_0066ae3c == '\0') {
        if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x85 + iVar11 * 0x130) != '\0') {
          local_34 = (undefined4 ***)&DAT_005e6a3c;
          puStack_38 = (undefined4 *)0x5e56cb;
          iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          local_34 = (undefined4 ***)0x5e56d8;
          FUN_00416244(&local_54,iVar8 + -1,0xfc);
          local_34 = (undefined4 ***)&local_54;
          puStack_38 = (undefined4 *)0x5e56e9;
          FUN_00416478(&local_64,"nxstatus");
          pppuVar4 = local_34;
          local_34 = (undefined4 ***)0x5e56fb;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),&local_64,pppuVar4);
        }
        if ((*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + iVar11 * 0x130) == '\0') &&
           (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar11 * 0x130) <
            *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10))) {
          local_34 = (undefined4 ***)&DAT_005e6a3c;
          puStack_38 = (undefined4 *)0x5e574a;
          iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          local_34 = (undefined4 ***)0x5e5757;
          FUN_00416244(&local_74,iVar8 + -1,0xfc);
          local_34 = (undefined4 ***)&local_74;
          puStack_38 = (undefined4 *)0x5e5768;
          FUN_00416478(&local_84,"nxstatus");
          pppuVar4 = local_34;
          local_34 = (undefined4 ***)0x5e577a;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),&local_84,pppuVar4);
        }
      }
      if (*PTR_DAT_0066ae3c == '\0') {
        local_34 = (undefined4 ***)&local_88;
        puStack_38 = (undefined4 *)0x5e579c;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_38 = (undefined4 *)0x5e57aa;
        FUN_005e9de8(param_1,iVar11,iVar8 + -1);
        puStack_38 = local_88;
        piVar2 = *(int **)(param_1 + 0x304);
        puStack_3c = (undefined1 *)0x5e57c4;
        iVar8 = (**(code **)(*piVar2 + 0x11c))();
        puStack_3c = (undefined1 *)0x5e57d4;
        FUN_00416244(local_98,iVar8 + -1,0xfc);
        puStack_3c = local_98;
        puStack_40 = (undefined1 *)0x5e57eb;
        FUN_00416478(local_a8,"status");
        puVar6 = puStack_3c;
        puStack_3c = (undefined1 *)0x5e57f9;
        FUN_0050e9b8(piVar2,local_a8,puVar6);
      }
      else {
        local_34 = (undefined4 ***)&DAT_005e6a68;
        piVar2 = *(int **)(param_1 + 0x304);
        puStack_38 = (undefined4 **)0x5e5813;
        iVar8 = (**(code **)(*piVar2 + 0x11c))();
        puStack_3c = (undefined1 *)0x5e5823;
        FUN_00416244(local_b8,iVar8 + -1,0xfc);
        puStack_3c = local_b8;
        puStack_40 = (undefined1 *)0x5e583a;
        FUN_00416478(local_c8,"status");
        puVar6 = puStack_3c;
        puStack_3c = (undefined1 *)0x5e5848;
        FUN_0050e9b8(piVar2,local_c8,puVar6);
      }
      puStack_3c = *(undefined1 **)
                    (PTR_DAT_0066b660 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar11 * 0x130) * 4);
      piVar2 = *(int **)(param_1 + 0x304);
      puStack_40 = (undefined1 *)0x5e5874;
      iVar8 = (**(code **)(*piVar2 + 0x11c))();
      puStack_40 = (undefined1 *)0x5e5884;
      FUN_00416244(local_d8,iVar8 + -1,0xfc);
      puStack_40 = local_d8;
      local_44 = (undefined1 *)0x5e589b;
      FUN_00416478(local_e8,"posicaojog");
      puVar6 = puStack_40;
      puStack_40 = (undefined1 *)0x5e58a9;
      FUN_0050e9b8(piVar2,local_e8,puVar6);
      puStack_40 = (undefined1 *)0x5e58bf;
      FUN_00405194(&local_ec,*(int *)PTR_DAT_0066b5b8 + iVar11 * 0x130);
      puStack_40 = (undefined1 *)local_ec;
      piVar2 = *(int **)(param_1 + 0x304);
      local_44 = (undefined1 *)0x5e58d9;
      iVar8 = (**(code **)(*piVar2 + 0x11c))();
      local_44 = (undefined1 *)0x5e58e9;
      FUN_00416244(local_fc,iVar8 + -1,0xfc);
      local_44 = local_fc;
      puStack_48 = (undefined1 *)0x5e5900;
      FUN_00416478(local_10c,&DAT_005e6a8c);
      puVar6 = local_44;
      local_44 = (undefined1 *)0x5e590e;
      FUN_0050e9b8(piVar2,local_10c,puVar6);
      local_44 = *(undefined1 **)
                  (PTR_DAT_0066ad08 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + iVar11 * 0x130) * 4 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar11 * 0x130) * 0x14);
      piVar2 = *(int **)(param_1 + 0x304);
      puStack_48 = (undefined1 *)0x5e5948;
      iVar8 = (**(code **)(*piVar2 + 0x11c))();
      puStack_48 = (undefined1 *)0x5e5958;
      FUN_00416244(local_11c,iVar8 + -1,0xfc);
      puStack_48 = local_11c;
      puStack_4c = (undefined1 *)0x5e596f;
      FUN_00416478(local_12c,"funcaojog");
      puVar6 = puStack_48;
      puStack_48 = (undefined1 *)0x5e597d;
      FUN_0050e9b8(piVar2,local_12c,puVar6);
      puStack_48 = (undefined1 *)0x5e5993;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar11 * 0x130),&local_134);
      puStack_48 = (undefined1 *)0x5e59a4;
      FUN_004051d4(&local_130,local_134);
      puStack_48 = (undefined1 *)local_130;
      piVar2 = *(int **)(param_1 + 0x304);
      puStack_4c = (undefined1 *)0x5e59be;
      iVar8 = (**(code **)(*piVar2 + 0x11c))();
      puStack_4c = (undefined1 *)0x5e59ce;
      FUN_00416244(local_144,iVar8 + -1,0xfc);
      puStack_4c = local_144;
      puStack_50 = (undefined1 *)0x5e59e5;
      FUN_00416478(local_154,"forca");
      puVar6 = puStack_4c;
      puStack_4c = (undefined1 *)0x5e59f3;
      FUN_0050e9b8(piVar2,local_154,puVar6);
      puStack_4c = (undefined1 *)0x5e5a09;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar11 * 0x130),&local_15c);
      puStack_4c = (undefined1 *)0x5e5a1a;
      FUN_004051d4(&local_158,local_15c);
      puStack_4c = (undefined1 *)local_158;
      piVar2 = *(int **)(param_1 + 0x304);
      puStack_50 = (undefined1 *)0x5e5a34;
      iVar8 = (**(code **)(*piVar2 + 0x11c))();
      puStack_50 = (undefined1 *)0x5e5a44;
      FUN_00416244(local_16c,iVar8 + -1,0xfc);
      puStack_50 = local_16c;
      local_54 = (undefined4 **)0x5e5a5b;
      FUN_00416478(local_17c,"energia");
      puVar6 = puStack_50;
      puStack_50 = (undefined1 *)0x5e5a69;
      FUN_0050e9b8(piVar2,local_17c,puVar6);
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + iVar11 * 0x130) == 0) {
        puStack_50 = (undefined1 *)0x5e5a87;
        FUN_00642c50(0x99,&local_180);
        puStack_50 = (undefined1 *)local_180;
        piVar2 = *(int **)(param_1 + 0x304);
        local_54 = (undefined4 **)0x5e5aa1;
        iVar8 = (**(code **)(*piVar2 + 0x11c))();
        local_54 = (undefined4 **)0x5e5ab1;
        FUN_00416244(local_190,iVar8 + -1,0xfc);
        local_54 = local_190;
        puStack_58 = (undefined1 *)0x5e5ac8;
        FUN_00416478(local_1a0,&DAT_005e6ad0);
        puVar3 = local_54;
        local_54 = (undefined4 **)0x5e5ad6;
        FUN_0050e9b8(piVar2,local_1a0,puVar3);
      }
      else {
        puStack_50 = (undefined1 *)0x5e5ae8;
        FUN_00642c50(0x9b,&local_1a4);
        puStack_50 = (undefined1 *)local_1a4;
        piVar2 = *(int **)(param_1 + 0x304);
        local_54 = (undefined4 **)0x5e5b02;
        iVar8 = (**(code **)(*piVar2 + 0x11c))();
        local_54 = (undefined4 **)0x5e5b12;
        FUN_00416244(local_1b4,iVar8 + -1,0xfc);
        local_54 = local_1b4;
        puStack_58 = (undefined1 *)0x5e5b29;
        FUN_00416478(local_1c4,&DAT_005e6ad0);
        puVar3 = local_54;
        local_54 = (undefined4 **)0x5e5b37;
        FUN_0050e9b8(piVar2,local_1c4,puVar3);
      }
      if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar11 * 0x130) == '\0') {
        local_54 = (undefined4 **)0x5e5b5f;
        uVar7 = FUN_00402c38();
        local_54 = (undefined4 **)0x5e5b6a;
        FUN_0064d948(uVar7,&local_1c8);
        local_54 = local_1c8;
        piVar2 = *(int **)(param_1 + 0x304);
        puStack_58 = (undefined1 *)0x5e5b84;
        iVar8 = (**(code **)(*piVar2 + 0x11c))();
        puStack_58 = (undefined1 *)0x5e5b94;
        FUN_00416244(local_1d8,iVar8 + -1,0xfc);
        puStack_58 = local_1d8;
        puStack_5c = (undefined1 *)0x5e5bab;
        FUN_00416478(local_1e8,"passe");
        puVar6 = puStack_58;
        puStack_58 = (undefined1 *)0x5e5bb9;
        FUN_0050e9b8(piVar2,local_1e8,puVar6);
        puStack_58 = (undefined1 *)0x5e5bca;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_58 = (undefined1 *)0x5e5bda;
        FUN_00416244(local_1f8,iVar8 + -1,0xfc);
        puStack_58 = local_1f8;
        puStack_5c = (undefined1 *)0x5e5bf1;
        FUN_00416478(local_208,"passe");
        puVar6 = puStack_58;
        puStack_58 = (undefined1 *)0x5e5c06;
        puStack_58 = (undefined1 *)FUN_004f77e4(*(undefined4 *)(param_1 + 0x304),local_208,puVar6);
        puStack_5c = (undefined1 *)0x5e5c1d;
        uVar7 = FUN_00402c38();
        puStack_5c = (undefined1 *)0x5e5c28;
        FUN_006468f4(uVar7,&local_20c);
        puVar6 = puStack_58;
        puStack_58 = (undefined1 *)0x5e5c34;
        FUN_004f7234(puVar6,local_20c);
        puStack_58 = (undefined1 *)0x5e5c4a;
        puStack_5c = (undefined1 *)FUN_00402c38();
        puStack_60 = (undefined1 *)0x5e5c57;
        FUN_00409fa8(&local_214);
        puStack_58 = (undefined1 *)0x5e5c68;
        FUN_004051d4(&local_210,local_214);
        puStack_58 = (undefined1 *)local_210;
        puStack_5c = (undefined1 *)0x5e5c80;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_5c = (undefined1 *)0x5e5c90;
        FUN_00416244(local_224,iVar8 + -1,0xfc);
        puStack_5c = local_224;
        puStack_60 = (undefined1 *)0x5e5ca7;
        FUN_00416478(local_234,"passet");
        puVar6 = puStack_5c;
        puStack_5c = (undefined1 *)0x5e5cbc;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_234,puVar6);
      }
      else {
        local_54 = (undefined4 **)0x5e5cd7;
        uVar7 = FUN_00402c38();
        local_54 = (undefined4 **)0x5e5ce2;
        FUN_0064d948(uVar7,&local_238);
        local_54 = local_238;
        puStack_58 = (undefined1 *)0x5e5cfa;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_58 = (undefined1 *)0x5e5d0a;
        FUN_00416244(local_248,iVar8 + -1,0xfc);
        puStack_58 = local_248;
        puStack_5c = (undefined1 *)0x5e5d21;
        FUN_00416478(local_258,"passe");
        puVar6 = puStack_58;
        puStack_58 = (undefined1 *)0x5e5d36;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_258,puVar6);
        puStack_58 = (undefined1 *)0x5e5d47;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_58 = (undefined1 *)0x5e5d57;
        FUN_00416244(local_268,iVar8 + -1,0xfc);
        puStack_58 = local_268;
        puStack_5c = (undefined1 *)0x5e5d6e;
        FUN_00416478(local_278,"passe");
        puVar6 = puStack_58;
        puStack_58 = (undefined1 *)0x5e5d83;
        puStack_58 = (undefined1 *)FUN_004f77e4(*(undefined4 *)(param_1 + 0x304),local_278,puVar6);
        puStack_5c = (undefined1 *)0x5e5d9a;
        uVar7 = FUN_00402c38();
        puStack_5c = (undefined1 *)0x5e5da5;
        FUN_006468f4(uVar7,&local_27c);
        puVar6 = puStack_58;
        puStack_58 = (undefined1 *)0x5e5db1;
        FUN_004f7234(puVar6,local_27c);
        puStack_58 = (undefined1 *)0x5e5dc7;
        puStack_5c = (undefined1 *)FUN_00402c38();
        puStack_60 = (undefined1 *)0x5e5dd4;
        FUN_00409fa8(&local_284);
        puStack_58 = (undefined1 *)0x5e5de5;
        FUN_004051d4(&local_280,local_284);
        puStack_58 = (undefined1 *)local_280;
        puStack_5c = (undefined1 *)0x5e5dfd;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_5c = (undefined1 *)0x5e5e0d;
        FUN_00416244(local_294,iVar8 + -1,0xfc);
        puStack_5c = local_294;
        puStack_60 = (undefined1 *)0x5e5e24;
        FUN_00416478(local_2a4,"passet");
        puVar6 = puStack_5c;
        puStack_5c = (undefined1 *)0x5e5e39;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_2a4,puVar6);
      }
      if (*PTR_DAT_0066ae3c == '\0') {
        puStack_5c = (undefined1 *)0x5e5e52;
        uVar7 = FUN_0063b704(*(undefined4 *)PTR_DAT_0066b054,iVar11);
        puStack_5c = (undefined1 *)0x5e5e5d;
        FUN_00409dd8(uVar7,&local_2ac);
        puStack_5c = (undefined1 *)0x5e5e6e;
        FUN_004051d4(&local_2a8,local_2ac);
        puStack_5c = (undefined1 *)local_2a8;
        puStack_60 = (undefined1 *)0x5e5e86;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_5c = (undefined1 *)0x5e5e96;
        FUN_00416244(local_2bc,iVar8 + -1,0xfc);
        puStack_5c = local_2bc;
        puStack_60 = (undefined1 *)0x5e5ead;
        FUN_00416478(local_2cc,&DAT_005e6b04);
        puVar6 = puStack_5c;
        puStack_5c = (undefined1 *)0x5e5ec2;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_2cc,puVar6);
      }
      iVar8 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar11 * 0x130);
      if ((iVar8 < 0) || (0xd < iVar8)) {
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar11 * 0x130) == 0) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar11 * 0x130) = 0;
        }
        else {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar11 * 0x130) = 0xd;
        }
      }
      iVar8 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar11 * 0x130);
      if ((iVar8 < 0) || (0xd < iVar8)) {
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar11 * 0x130) == 0) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar11 * 0x130) = 1;
        }
        else {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar11 * 0x130) = 0xb;
        }
      }
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar11 * 0x130) ==
          *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar11 * 0x130)) {
        puStack_60 = &LAB_005e617b;
        local_64 = *in_FS_OFFSET;
        *in_FS_OFFSET = &local_64;
        uStack_68 = *(undefined4 *)
                     (PTR_DAT_0066b3a4 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar11 * 0x130) * 4);
        puStack_6c = (undefined1 *)0x5e6135;
        puStack_5c = &stack0xfffffffc;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_78 = (undefined1 *)0x5e6145;
        FUN_00416244(auStack_324,iVar8 + -1,0xfc);
        puStack_78 = auStack_324;
        uStack_7c = 0x5e615c;
        FUN_00416478(local_334,"habilidades");
        puVar6 = puStack_78;
        puStack_78 = (undefined1 *)0x5e6171;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_334,puVar6);
        *in_FS_OFFSET = local_74;
        puVar6 = puStack_6c;
      }
      else {
        puStack_60 = &LAB_005e601e;
        local_64 = *in_FS_OFFSET;
        *in_FS_OFFSET = &local_64;
        uStack_68 = *(undefined4 *)
                     (PTR_DAT_0066b1c8 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar11 * 0x130) * 4);
        puStack_6c = &DAT_005e6b10;
        puStack_70 = *(undefined1 **)
                      (PTR_DAT_0066b1c8 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar11 * 0x130) * 4);
        local_74 = (undefined4 **)0x5e5fc0;
        puStack_5c = &stack0xfffffffc;
        FUN_00405330(&local_2d0,3);
        local_74 = local_2d0;
        puStack_78 = (undefined1 *)0x5e5fd8;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_78 = (undefined1 *)0x5e5fe8;
        FUN_00416244(auStack_2e0,iVar8 + -1,0xfc);
        puStack_78 = auStack_2e0;
        uStack_7c = 0x5e5fff;
        FUN_00416478(auStack_2f0,"habilidades");
        puVar6 = puStack_78;
        puStack_78 = (undefined1 *)0x5e6014;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),auStack_2f0,puVar6);
        puVar6 = puStack_6c;
        *in_FS_OFFSET = local_74;
        puStack_70 = &LAB_005e60f2;
        local_74 = (undefined4 *)*in_FS_OFFSET;
        *in_FS_OFFSET = &local_74;
        puStack_6c = &stack0xfffffffc;
        if (*PTR_DAT_0066b700 == '\0') {
          iVar8 = **(int **)(param_1 + 0x304);
          puStack_78 = (undefined1 *)0x5e6055;
          puStack_6c = &stack0xfffffffc;
          iVar8 = (**(code **)(iVar8 + 0x11c))(*(int **)(param_1 + 0x304),iVar8,puVar6);
          puStack_78 = (undefined1 *)0x5e6065;
          FUN_00416244(auStack_300,iVar8 + -1,0xfc);
          puStack_78 = auStack_300;
          uStack_7c = 0x5e607c;
          FUN_00416478(local_310,"habilidades");
          puVar6 = puStack_78;
          puStack_78 = (undefined1 *)0x5e6091;
          puStack_78 = (undefined1 *)FUN_004f77e4(*(undefined4 *)(param_1 + 0x304),local_310,puVar6)
          ;
          uStack_7c = *(undefined4 *)
                       (PTR_DAT_0066b3a4 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar11 * 0x130) * 4);
          puStack_80 = &DAT_005e6b10;
          local_84 = *(undefined4 *)
                      (PTR_DAT_0066b3a4 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar11 * 0x130) * 4);
          local_88 = (undefined4 **)0x5e60d9;
          FUN_00405330(&local_314,3);
          puVar6 = puStack_78;
          puStack_78 = (undefined1 *)0x5e60e5;
          FUN_004f7234(puVar6,local_314);
        }
        *in_FS_OFFSET = local_74;
        puVar6 = puStack_6c;
      }
      puStack_6c = (undefined1 *)0x5e619f;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar11 * 0x130),&local_33c,
                   puVar6);
      puStack_6c = (undefined1 *)0x5e61b0;
      FUN_004051d4(&local_338,local_33c);
      puStack_6c = (undefined1 *)local_338;
      piVar2 = *(int **)(param_1 + 0x304);
      puStack_70 = (undefined1 *)0x5e61ca;
      iVar8 = (**(code **)(*piVar2 + 0x11c))();
      puStack_70 = (undefined1 *)0x5e61da;
      FUN_00416244(auStack_34c,iVar8 + -1,0xfc);
      puStack_70 = auStack_34c;
      local_74 = (undefined4 **)0x5e61f1;
      FUN_00416478(local_35c,"idade");
      puVar6 = puStack_70;
      puStack_70 = (undefined1 *)0x5e61ff;
      FUN_0050e9b8(piVar2,local_35c,puVar6);
      local_74 = (undefined4 *)&LAB_005e6293;
      puStack_78 = (undefined1 *)*in_FS_OFFSET;
      *in_FS_OFFSET = &puStack_78;
      uStack_7c = 0x5e6229;
      puStack_70 = &stack0xfffffffc;
      FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar11 * 0x130) + 7,&local_364);
      uStack_7c = 0x5e623a;
      FUN_004051d4(&local_360,local_364);
      uStack_7c = local_360;
      piVar2 = *(int **)(param_1 + 0x304);
      puStack_80 = (undefined *)0x5e6254;
      iVar8 = (**(code **)(*piVar2 + 0x11c))();
      puStack_3c = (undefined1 *)0x5e6264;
      FUN_00416244(auStack_374,iVar8 + -1,0xfc);
      puStack_3c = auStack_374;
      puStack_40 = (undefined1 *)0x5e627b;
      FUN_00416478(auStack_384,"moral");
      puVar6 = puStack_3c;
      puStack_3c = (undefined1 *)0x5e6289;
      FUN_0050e9b8(piVar2,auStack_384,puVar6);
      puVar5 = puStack_30;
      *in_FS_OFFSET = puStack_38;
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + iVar11 * 0x130 + 0x8c +
                  *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 3) {
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + iVar11 * 0x130 + 0xb8 +
                    *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 1) {
          if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x68 + iVar11 * 0x130) <=
              *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
            if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar11 * 0x130) != '\0') {
              puStack_30 = &DAT_005e6b4c;
              iVar8 = **(int **)(param_1 + 0x304);
              local_34 = (undefined4 ***)0x5e63c0;
              iVar8 = (**(code **)(iVar8 + 0x11c))(*(int **)(param_1 + 0x304),iVar8,puVar5);
              puStack_30 = (undefined *)0x5e63d0;
              FUN_00416244(auStack_394,iVar8 + -1,0xfc);
              puStack_30 = auStack_394;
              local_34 = (undefined4 ***)0x5e63e7;
              FUN_00416478(auStack_3a4,"condicao");
              puVar5 = puStack_30;
              puStack_30 = (undefined *)0x5e63fc;
              FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),auStack_3a4,puVar5);
            }
          }
          else {
            puStack_30 = (undefined *)
                         CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),
                                  *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar11 * 0x130))
            ;
            local_34 = (undefined4 ***)0x5e638a;
            iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
            puStack_30 = (undefined *)0x5e639a;
            FUN_005e5314(param_1,iVar8 + -1,3);
          }
        }
        else {
          puStack_30 = (undefined *)
                       CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),
                                *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar11 * 0x130));
          local_34 = (undefined4 ***)0x5e6330;
          iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_30 = (undefined *)0x5e6340;
          FUN_005e5314(param_1,iVar8 + -1,1);
        }
      }
      else {
        puStack_30 = (undefined *)
                     CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),
                              *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar11 * 0x130));
        local_34 = (undefined4 ***)0x5e62de;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
        puStack_30 = (undefined *)0x5e62ee;
        FUN_005e5314(param_1,iVar8 + -1,4);
      }
      if (*PTR_DAT_0066b700 == '\0') {
        if (((double)_DAT_005e6b68 <=
             *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar11 * 0x130) -
             *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) ||
           (*PTR_DAT_0066ae3c != '\0')) {
          if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x68 + iVar11 * 0x130) <=
              *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
            if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + iVar11 * 0x130 + 0x8c +
                         *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 3) &&
               (*(int *)(*(int *)PTR_DAT_0066b5b8 + iVar11 * 0x130 + 0xb8 +
                        *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 1)) {
              if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x85 + iVar11 * 0x130) == '\0') {
                puStack_30 = (undefined *)0x5e669e;
                iVar11 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
                puStack_30 = (undefined *)0x5e66ae;
                FUN_00416244(auStack_444,iVar11 + -1,0xfc);
                puStack_30 = auStack_444;
                local_34 = (undefined4 ***)0x5e66c5;
                FUN_00416478(local_454,"status");
                puVar5 = puStack_30;
                puStack_30 = (undefined *)0x5e66da;
                uVar7 = FUN_004f77e4(*(undefined4 *)(param_1 + 0x304),local_454,puVar5);
                puStack_30 = (undefined *)0x5e66e1;
                FUN_004f7234(uVar7,0);
              }
              else {
                puStack_30 = (undefined *)0x5e6632;
                iVar11 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
                puStack_30 = (undefined *)0x5e6642;
                FUN_00416244(auStack_420,iVar11 + -1,0xfc);
                puStack_30 = auStack_420;
                local_34 = (undefined4 ***)0x5e6659;
                FUN_00416478(local_430,"status");
                puVar5 = puStack_30;
                puStack_30 = (undefined *)0x5e666e;
                puStack_30 = (undefined *)
                             FUN_004f77e4(*(undefined4 *)(param_1 + 0x304),local_430,puVar5);
                local_34 = (undefined4 ***)0x5e667f;
                FUN_00642c50(0x3a,&local_434);
                puVar5 = puStack_30;
                puStack_30 = (undefined *)0x5e668b;
                FUN_004f7234(puVar5,local_434);
              }
            }
            else {
              puStack_30 = (undefined *)0x5e65ad;
              iVar11 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
              puStack_30 = (undefined *)0x5e65bd;
              FUN_00416244(auStack_3fc,iVar11 + -1,0xfc);
              puStack_30 = auStack_3fc;
              local_34 = (undefined4 ***)0x5e65d4;
              FUN_00416478(local_40c,"status");
              puVar5 = puStack_30;
              puStack_30 = (undefined *)0x5e65e9;
              puStack_30 = (undefined *)
                           FUN_004f77e4(*(undefined4 *)(param_1 + 0x304),local_40c,puVar5);
              local_34 = (undefined4 ***)0x5e65fa;
              FUN_00642c50(0x3b,&local_410);
              puVar5 = puStack_30;
              puStack_30 = (undefined *)0x5e6606;
              FUN_004f7234(puVar5,local_410);
            }
          }
          else {
            puStack_30 = (undefined *)0x5e64f4;
            iVar11 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
            puStack_30 = (undefined *)0x5e6504;
            FUN_00416244(auStack_3d8,iVar11 + -1,0xfc);
            puStack_30 = auStack_3d8;
            local_34 = (undefined4 ***)0x5e651b;
            FUN_00416478(local_3e8,"status");
            puVar5 = puStack_30;
            puStack_30 = (undefined *)0x5e6530;
            puStack_30 = (undefined *)
                         FUN_004f77e4(*(undefined4 *)(param_1 + 0x304),local_3e8,puVar5);
            local_34 = (undefined4 ***)0x5e6541;
            FUN_00642c50(0x3e,&local_3ec);
            puVar5 = puStack_30;
            puStack_30 = (undefined *)0x5e654d;
            FUN_004f7234(puVar5,local_3ec);
          }
        }
        else {
          puStack_30 = (undefined *)0x5e6458;
          iVar11 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_30 = (undefined *)0x5e6468;
          FUN_00416244(auStack_3b4,iVar11 + -1,0xfc);
          puStack_30 = auStack_3b4;
          local_34 = (undefined4 ***)0x5e647f;
          FUN_00416478(local_3c4,"status");
          puVar5 = puStack_30;
          puStack_30 = (undefined *)0x5e6494;
          puStack_30 = (undefined *)FUN_004f77e4(*(undefined4 *)(param_1 + 0x304),local_3c4,puVar5);
          local_34 = (undefined4 ***)0x5e64a5;
          FUN_00642c50(0x37,&local_3c8);
          puVar5 = puStack_30;
          puStack_30 = (undefined *)0x5e64b1;
          FUN_004f7234(puVar5,local_3c8);
        }
      }
      iVar9 = iVar9 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != (undefined1 *)0x0);
  }
  puStack_30 = (undefined *)0x0;
  local_34 = (undefined4 ***)0x5e6704;
  FUN_004060a8(&DAT_006d34ec,PTR_DAT_005e5170,1);
  puStack_30 = (undefined *)0x5e671e;
  (**(code **)(**(int **)(param_1 + 0x304) + 0x210))(*(int **)(param_1 + 0x304),DAT_005e6b6c);
  *in_FS_OFFSET = puStack_2c;
  local_24 = &LAB_005e6a23;
  puStack_28 = (undefined1 *)0x5e6741;
  FUN_00405744(local_454,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e674c;
  FUN_00404ff0(&local_434);
  puStack_28 = (undefined1 *)0x5e6762;
  FUN_00405744(local_430,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e676d;
  FUN_00404ff0(&local_410);
  puStack_28 = (undefined1 *)0x5e6783;
  FUN_00405744(local_40c,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e678e;
  FUN_00404ff0(&local_3ec);
  puStack_28 = (undefined1 *)0x5e67a4;
  FUN_00405744(local_3e8,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e67af;
  FUN_00404ff0(&local_3c8);
  puStack_28 = (undefined1 *)0x5e67c5;
  FUN_00405744(local_3c4,PTR_DAT_004010f8,6);
  puStack_28 = (undefined1 *)0x5e67d0;
  FUN_004048d4(&local_364);
  puStack_28 = (undefined1 *)0x5e67db;
  FUN_00404ff0(&local_360);
  puStack_28 = (undefined1 *)0x5e67f1;
  FUN_00405744(local_35c,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e67fc;
  FUN_004048d4(&local_33c);
  puStack_28 = (undefined1 *)0x5e6807;
  FUN_00404ff0(&local_338);
  puStack_28 = (undefined1 *)0x5e681d;
  FUN_00405744(local_334,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e6828;
  FUN_00404ff0(&local_314);
  puStack_28 = (undefined1 *)0x5e683e;
  FUN_00405744(local_310,PTR_DAT_004010f8,4);
  puStack_28 = (undefined1 *)0x5e6849;
  FUN_00404ff0(&local_2d0);
  puStack_28 = (undefined1 *)0x5e685f;
  FUN_00405744(local_2cc,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e686a;
  FUN_004048d4(&local_2ac);
  puStack_28 = (undefined1 *)0x5e6875;
  FUN_00404ff0(&local_2a8);
  puStack_28 = (undefined1 *)0x5e688b;
  FUN_00405744(local_2a4,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e6896;
  FUN_004048d4(&local_284);
  puStack_28 = (undefined1 *)0x5e68a6;
  FUN_00405008(&local_280,2);
  puStack_28 = (undefined1 *)0x5e68bc;
  FUN_00405744(local_278,PTR_DAT_004010f8,4);
  puStack_28 = (undefined1 *)0x5e68c7;
  FUN_00404ff0(&local_238);
  puStack_28 = (undefined1 *)0x5e68dd;
  FUN_00405744(local_234,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e68e8;
  FUN_004048d4(&local_214);
  puStack_28 = (undefined1 *)0x5e68f8;
  FUN_00405008(&local_210,2);
  puStack_28 = (undefined1 *)0x5e690e;
  FUN_00405744(local_208,PTR_DAT_004010f8,4);
  puStack_28 = (undefined1 *)0x5e6919;
  FUN_00404ff0(&local_1c8);
  puStack_28 = (undefined1 *)0x5e692f;
  FUN_00405744(local_1c4,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e693a;
  FUN_00404ff0(&local_1a4);
  puStack_28 = (undefined1 *)0x5e6950;
  FUN_00405744(local_1a0,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e695b;
  FUN_00404ff0(&local_180);
  puStack_28 = (undefined1 *)0x5e6971;
  FUN_00405744(local_17c,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e697c;
  FUN_004048d4(&local_15c);
  puStack_28 = (undefined1 *)0x5e6987;
  FUN_00404ff0(&local_158);
  puStack_28 = (undefined1 *)0x5e699d;
  FUN_00405744(local_154,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x5e69a8;
  FUN_004048d4(&local_134);
  puStack_28 = (undefined1 *)0x5e69b3;
  FUN_00404ff0(&local_130);
  puStack_28 = (undefined1 *)0x5e69c9;
  FUN_00405744(local_12c,PTR_DAT_004010f8,4);
  puStack_28 = (undefined1 *)0x5e69d4;
  FUN_00404ff0(&local_ec);
  puStack_28 = (undefined1 *)0x5e69ea;
  FUN_00405744(local_e8,PTR_DAT_004010f8,6);
  puStack_28 = (undefined1 *)0x5e69f5;
  FUN_00404ff0(&local_88);
  puStack_28 = (undefined1 *)0x5e6a08;
  FUN_00405744(&local_84,PTR_DAT_004010f8,6);
  puStack_28 = (undefined1 *)0x5e6a10;
  FUN_004048d4(&local_24);
  puStack_28 = (undefined1 *)0x5e6a18;
  FUN_00404ff0(&local_20);
  return;
}

