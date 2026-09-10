// Address: 005cf114
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005cf114(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined4 local_1e8;
  undefined *local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc [16];
  undefined1 local_1cc [16];
  undefined1 local_1bc [16];
  undefined1 local_1ac [16];
  undefined4 local_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined *local_158;
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104 [16];
  undefined1 local_f4 [16];
  undefined1 local_e4 [16];
  undefined1 local_d4 [16];
  undefined1 *local_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined *puStack_74;
  undefined4 local_70;
  undefined1 *puStack_6c;
  undefined *puStack_68;
  undefined1 *puStack_64;
  undefined *local_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined1 *local_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *local_40;
  undefined1 **ppuStack_3c;
  undefined1 **ppuStack_38;
  undefined4 *puStack_34;
  undefined1 *local_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *local_20;
  int local_10;
  
  local_20 = &stack0xfffffffc;
  iVar6 = 0x4a;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_24 = &LAB_005cfd09;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  iStack_2c = 0x5cf149;
  (**(code **)(**(int **)(param_1 + 0x32c) + 0x1dc))();
  iVar8 = 0;
  iStack_2c = 0x5cf157;
  iVar6 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar6 + -1) {
    local_10 = 0;
    do {
      iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_10 * 0x130);
      if ((-1 < iVar5) && (iVar5 == *(int *)(PTR_DAT_0066ac78 + 0x600))) {
        iVar8 = iVar8 + 1;
        local_30 = (undefined1 *)0x5cf1af;
        iStack_2c = iVar8;
        FUN_004060a8(&DAT_006d2d54,PTR_DAT_005ce734,1);
        *(int *)(DAT_006d2d54 + -0x10 + iVar8 * 0x10) = local_10;
        iStack_2c = 0x5cf1ca;
        uVar4 = FUN_006538b8(local_10);
        *(undefined4 *)(DAT_006d2d54 + -0xc + iVar8 * 0x10) = uVar4;
        *(undefined4 *)(DAT_006d2d54 + -8 + iVar8 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + local_10 * 0x130);
        *(undefined4 *)(DAT_006d2d54 + -4 + iVar8 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + local_10 * 0x130);
      }
      local_10 = local_10 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iStack_2c = 0x5cf214;
  DAT_006d2d50 = FUN_00405eec(DAT_006d2d54);
  iStack_2c = DAT_006d2d50 + -1;
  local_30 = &LAB_005ce774;
  puStack_34 = (undefined4 *)0x5cf236;
  FUN_004bcdb0(DAT_006d2d54,0x10,0);
  if (-1 < iVar8 + -1) {
    local_10 = 0;
    do {
      iVar6 = *(int *)(DAT_006d2d54 + local_10 * 0x10);
      puStack_34 = (undefined4 *)0x5cf271;
      (**(code **)(**(int **)(param_1 + 0x32c) + 0x1d0))(*(int **)(param_1 + 0x32c),1);
      puStack_34 = (undefined4 *)0x5cf27c;
      FUN_00409dd8(iVar6,&local_20);
      puStack_34 = (undefined4 *)0x5cf287;
      FUN_004051d4(&stack0xffffffe4,local_20);
      piVar1 = *(int **)(param_1 + 0x32c);
      ppuStack_38 = (undefined1 **)0x5cf29e;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      ppuStack_38 = (undefined1 **)0x5cf2ab;
      FUN_00416244(&local_30,iVar5 + -1,0xfc);
      ppuStack_38 = &local_30;
      ppuStack_3c = (undefined1 **)0x5cf2bc;
      FUN_00416478(&local_40,&DAT_005cfd24);
      ppuVar3 = ppuStack_38;
      ppuStack_38 = (undefined1 **)0x5cf2c7;
      FUN_0050e9b8(piVar1,&local_40,ppuVar3);
      ppuStack_38 = (undefined1 **)&DAT_005cfd2c;
      piVar1 = *(int **)(param_1 + 0x32c);
      ppuStack_3c = (undefined1 **)0x5cf2df;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      ppuStack_3c = (undefined1 **)0x5cf2ec;
      FUN_00416244(&local_50,iVar5 + -1,0xfc);
      ppuStack_3c = &local_50;
      local_40 = (undefined1 *)0x5cf2fd;
      FUN_00416478(&local_60,"status");
      ppuVar3 = ppuStack_3c;
      ppuStack_3c = (undefined1 **)0x5cf308;
      FUN_0050e9b8(piVar1,&local_60,ppuVar3);
      if (PTR_DAT_0066ac78[0xde] != '\0') {
        iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x50 + iVar6 * 0x130);
        if (iVar5 == 1) {
          ppuStack_3c = (undefined1 **)&DAT_005cfd48;
          piVar1 = *(int **)(param_1 + 0x32c);
          local_40 = (undefined1 *)0x5cf347;
          iVar5 = (**(code **)(*piVar1 + 0x11c))();
          ppuStack_3c = (undefined1 **)0x5cf354;
          FUN_00416244(&local_70,iVar5 + -1,0xfc);
          ppuStack_3c = (undefined1 **)&local_70;
          local_40 = (undefined1 *)0x5cf365;
          FUN_00416478(local_80,"status");
          ppuVar3 = ppuStack_3c;
          ppuStack_3c = (undefined1 **)0x5cf370;
          FUN_0050e9b8(piVar1,local_80,ppuVar3);
        }
        else if (iVar5 == 2) {
          ppuStack_3c = (undefined1 **)&DAT_005cfd50;
          local_40 = (undefined1 *)0x5cf393;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x32c) + 0x11c))();
          ppuStack_3c = (undefined1 **)0x5cf3a3;
          FUN_00416244(local_90,iVar5 + -1,0xfc);
          ppuStack_3c = (undefined1 **)local_90;
          local_40 = (undefined1 *)0x5cf3ba;
          FUN_00416478(local_a0,"status");
          ppuVar3 = ppuStack_3c;
          ppuStack_3c = (undefined1 **)0x5cf3cf;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x32c),local_a0,ppuVar3);
        }
      }
      ppuStack_3c = *(undefined1 ***)
                     (PTR_DAT_0066b660 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar6 * 0x130) * 4);
      piVar1 = *(int **)(param_1 + 0x32c);
      local_40 = (undefined1 *)0x5cf3fb;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      local_40 = (undefined1 *)0x5cf40b;
      FUN_00416244(local_b0,iVar5 + -1,0xfc);
      local_40 = local_b0;
      puStack_44 = (undefined1 *)0x5cf422;
      FUN_00416478(local_c0,"posicaojog");
      puVar2 = local_40;
      local_40 = (undefined1 *)0x5cf430;
      FUN_0050e9b8(piVar1,local_c0,puVar2);
      local_40 = (undefined1 *)0x5cf446;
      FUN_00405194(&local_c4,*(int *)PTR_DAT_0066b5b8 + iVar6 * 0x130);
      local_40 = local_c4;
      piVar1 = *(int **)(param_1 + 0x32c);
      puStack_44 = (undefined1 *)0x5cf460;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      puStack_44 = (undefined1 *)0x5cf470;
      FUN_00416244(local_d4,iVar5 + -1,0xfc);
      puStack_44 = local_d4;
      puStack_48 = (undefined1 *)0x5cf487;
      FUN_00416478(local_e4,&DAT_005cfd74);
      puVar2 = puStack_44;
      puStack_44 = (undefined1 *)0x5cf495;
      FUN_0050e9b8(piVar1,local_e4,puVar2);
      puStack_44 = *(undefined1 **)
                    (PTR_DAT_0066ad08 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + iVar6 * 0x130) * 4 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar6 * 0x130) * 0x14);
      piVar1 = *(int **)(param_1 + 0x32c);
      puStack_48 = (undefined1 *)0x5cf4cf;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      puStack_48 = (undefined1 *)0x5cf4df;
      FUN_00416244(local_f4,iVar5 + -1,0xfc);
      puStack_48 = local_f4;
      puStack_4c = (undefined1 *)0x5cf4f6;
      FUN_00416478(local_104,"funcaojog");
      puVar2 = puStack_48;
      puStack_48 = (undefined1 *)0x5cf504;
      FUN_0050e9b8(piVar1,local_104,puVar2);
      puStack_48 = (undefined1 *)0x5cf51a;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar6 * 0x130),&local_10c);
      puStack_48 = (undefined1 *)0x5cf52b;
      FUN_004051d4(&local_108,local_10c);
      puStack_48 = (undefined1 *)local_108;
      piVar1 = *(int **)(param_1 + 0x32c);
      puStack_4c = (undefined1 *)0x5cf545;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      puStack_4c = (undefined1 *)0x5cf555;
      FUN_00416244(local_11c,iVar5 + -1,0xfc);
      puStack_4c = local_11c;
      local_50 = (undefined1 *)0x5cf56c;
      FUN_00416478(local_12c,"forca");
      puVar2 = puStack_4c;
      puStack_4c = (undefined1 *)0x5cf57a;
      FUN_0050e9b8(piVar1,local_12c,puVar2);
      puStack_4c = (undefined1 *)0x5cf590;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar6 * 0x130),&local_134);
      puStack_4c = (undefined1 *)0x5cf5a1;
      FUN_004051d4(&local_130,local_134);
      puStack_4c = (undefined1 *)local_130;
      piVar1 = *(int **)(param_1 + 0x32c);
      local_50 = (undefined1 *)0x5cf5bb;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      local_50 = (undefined1 *)0x5cf5cb;
      FUN_00416244(local_144,iVar5 + -1,0xfc);
      local_50 = local_144;
      puStack_54 = (undefined1 *)0x5cf5e2;
      FUN_00416478(local_154,"energia");
      puVar2 = local_50;
      local_50 = (undefined1 *)0x5cf5f0;
      FUN_0050e9b8(piVar1,local_154,puVar2);
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar6 * 0x130) ==
          *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar6 * 0x130)) {
        puStack_54 = &LAB_005cf809;
        puStack_58 = (undefined1 *)*in_FS_OFFSET;
        *in_FS_OFFSET = &puStack_58;
        uStack_5c = *(undefined4 *)
                     (PTR_DAT_0066b3a4 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar6 * 0x130) * 4);
        piVar1 = *(int **)(param_1 + 0x32c);
        local_60 = (undefined *)0x5cf7ca;
        local_50 = &stack0xfffffffc;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_60 = (undefined *)0x5cf7da;
        FUN_00416244(local_1ac,iVar5 + -1,0xfc);
        local_60 = local_1ac;
        puStack_64 = (undefined1 *)0x5cf7f1;
        FUN_00416478(local_1bc,"habilidades");
        puVar7 = local_60;
        local_60 = (undefined *)0x5cf7ff;
        FUN_0050e9b8(piVar1,local_1bc,puVar7);
        puVar2 = puStack_54;
        *in_FS_OFFSET = uStack_5c;
        puStack_58 = &LAB_005cf8c1;
        uStack_5c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_5c;
        piVar1 = *(int **)(param_1 + 0x32c);
        local_60 = (undefined *)0x5cf834;
        puStack_54 = &stack0xfffffffc;
        iVar5 = (**(code **)(*piVar1 + 0x11c))(piVar1,*piVar1,puVar2);
        local_60 = (undefined *)0x5cf844;
        FUN_00416244(local_1cc,iVar5 + -1,0xfc);
        local_60 = local_1cc;
        puStack_64 = (undefined1 *)0x5cf85b;
        FUN_00416478(local_1dc,"habilidades");
        puVar7 = local_60;
        local_60 = (undefined *)0x5cf869;
        local_60 = (undefined *)FUN_004f77e4(piVar1,local_1dc,puVar7);
        puStack_64 = *(undefined1 **)
                      (PTR_DAT_0066b3a4 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar6 * 0x130) * 4);
        puStack_68 = &DAT_005cfdb4;
        puStack_6c = *(undefined1 **)
                      (PTR_DAT_0066b3a4 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar6 * 0x130) * 4);
        local_70 = 0x5cf8ab;
        FUN_00405330(&local_1e0,3);
        puVar2 = puStack_6c;
        puStack_6c = (undefined1 *)0x5cf8b7;
        FUN_004f7234(puVar2,local_1e0);
        *in_FS_OFFSET = puStack_68;
        puVar7 = local_60;
      }
      else {
        puStack_54 = &LAB_005cf6b1;
        puStack_58 = (undefined1 *)*in_FS_OFFSET;
        *in_FS_OFFSET = &puStack_58;
        uStack_5c = *(undefined4 *)
                     (PTR_DAT_0066b1c8 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar6 * 0x130) * 4);
        local_60 = &DAT_005cfdb4;
        puStack_64 = *(undefined1 **)
                      (PTR_DAT_0066b1c8 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar6 * 0x130) * 4);
        puStack_68 = (undefined *)0x5cf658;
        local_50 = &stack0xfffffffc;
        FUN_00405330(&local_158,3);
        puStack_68 = local_158;
        piVar1 = *(int **)(param_1 + 0x32c);
        puStack_6c = (undefined1 *)0x5cf672;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        puStack_6c = (undefined1 *)0x5cf682;
        FUN_00416244(local_168,iVar5 + -1,0xfc);
        puStack_6c = local_168;
        local_70 = 0x5cf699;
        FUN_00416478(local_178,"habilidades");
        puVar2 = puStack_6c;
        puStack_6c = (undefined1 *)0x5cf6a7;
        FUN_0050e9b8(piVar1,local_178,puVar2);
        puVar7 = local_60;
        *in_FS_OFFSET = puStack_68;
        puStack_64 = &LAB_005cf785;
        puStack_68 = (undefined *)*in_FS_OFFSET;
        *in_FS_OFFSET = &puStack_68;
        local_60 = &stack0xfffffffc;
        if (*PTR_DAT_0066b700 == '\0') {
          iVar5 = **(int **)(param_1 + 0x32c);
          puStack_6c = (undefined1 *)0x5cf6e8;
          local_60 = &stack0xfffffffc;
          iVar5 = (**(code **)(iVar5 + 0x11c))(*(int **)(param_1 + 0x32c),iVar5,puVar7);
          puStack_6c = (undefined1 *)0x5cf6f8;
          FUN_00416244(local_188,iVar5 + -1,0xfc);
          puStack_6c = local_188;
          local_70 = 0x5cf70f;
          FUN_00416478(local_198,"habilidades");
          puVar2 = puStack_6c;
          puStack_6c = (undefined1 *)0x5cf724;
          puStack_6c = (undefined1 *)FUN_004f77e4(*(undefined4 *)(param_1 + 0x32c),local_198,puVar2)
          ;
          local_70 = *(undefined4 *)
                      (PTR_DAT_0066b3a4 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar6 * 0x130) * 4);
          puStack_74 = &DAT_005cfdb4;
          uStack_78 = *(undefined4 *)
                       (PTR_DAT_0066b3a4 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar6 * 0x130) * 4);
          uStack_7c = 0x5cf76c;
          FUN_00405330(&local_19c,3);
          puVar2 = puStack_6c;
          puStack_6c = (undefined1 *)0x5cf778;
          FUN_004f7234(puVar2,local_19c);
        }
        *in_FS_OFFSET = puStack_68;
        puVar7 = local_60;
      }
      local_60 = (undefined *)0x5cf8e5;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar6 * 0x130),&local_1e8,
                   puVar7);
      local_60 = (undefined *)0x5cf8f6;
      FUN_004051d4(&local_1e4,local_1e8);
      local_60 = local_1e4;
      piVar1 = *(int **)(param_1 + 0x32c);
      puStack_64 = (undefined1 *)0x5cf910;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      puStack_64 = (undefined1 *)0x5cf920;
      FUN_00416244(local_1f8,iVar5 + -1,0xfc);
      puStack_64 = local_1f8;
      puStack_68 = (undefined *)0x5cf937;
      FUN_00416478(local_208,"idade");
      puVar2 = puStack_64;
      puStack_64 = (undefined1 *)0x5cf945;
      FUN_0050e9b8(piVar1,local_208,puVar2);
      puStack_64 = (undefined1 *)0x5cf961;
      FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar6 * 0x130) + 7,&local_210);
      puStack_64 = (undefined1 *)0x5cf972;
      FUN_004051d4(&local_20c,local_210);
      puStack_64 = (undefined1 *)local_20c;
      piVar1 = *(int **)(param_1 + 0x32c);
      puStack_68 = (undefined *)0x5cf98c;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      puStack_34 = (undefined4 *)0x5cf99c;
      FUN_00416244(local_220,iVar5 + -1,0xfc);
      puStack_34 = (undefined4 *)local_220;
      ppuStack_38 = (undefined1 **)0x5cf9b3;
      FUN_00416478(local_230,"moral");
      puVar9 = puStack_34;
      puStack_34 = (undefined4 *)0x5cf9c1;
      FUN_0050e9b8(piVar1,local_230,puVar9);
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + iVar6 * 0x130 + 0x8c +
                  *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 3) {
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + iVar6 * 0x130 + 0xb8 +
                    *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 1) {
          if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x68 + iVar6 * 0x130) <=
              *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
            if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar6 * 0x130) != '\0') {
              puStack_34 = (undefined4 *)&DAT_005cfdf0;
              iVar6 = **(int **)(param_1 + 0x32c);
              ppuStack_38 = (undefined1 **)0x5cfadb;
              iVar6 = (**(code **)(iVar6 + 0x11c))
                                (*(int **)(param_1 + 0x32c),iVar6,PTR_DAT_0066ac78);
              puStack_34 = (undefined4 *)0x5cfaeb;
              FUN_00416244(local_240,iVar6 + -1,0xfc);
              puStack_34 = (undefined4 *)local_240;
              ppuStack_38 = (undefined1 **)0x5cfb02;
              FUN_00416478(local_250,"condicao");
              puVar9 = puStack_34;
              puStack_34 = (undefined4 *)0x5cfb17;
              FUN_0050e9b8(*(undefined4 *)(param_1 + 0x32c),local_250,puVar9);
            }
          }
          else {
            puStack_34 = (undefined4 *)
                         CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),
                                  *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar6 * 0x130));
            ppuStack_38 = (undefined1 **)0x5cfaa5;
            iVar6 = (**(code **)(**(int **)(param_1 + 0x32c) + 0x11c))();
            puStack_34 = (undefined4 *)0x5cfab5;
            FUN_005cfe0c(param_1,iVar6 + -1,3);
          }
        }
        else {
          puStack_34 = (undefined4 *)
                       CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),
                                *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar6 * 0x130));
          ppuStack_38 = (undefined1 **)0x5cfa4b;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x32c) + 0x11c))();
          puStack_34 = (undefined4 *)0x5cfa5b;
          FUN_005cfe0c(param_1,iVar6 + -1,1);
        }
      }
      else {
        puStack_34 = (undefined4 *)
                     CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),
                              *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar6 * 0x130));
        ppuStack_38 = (undefined1 **)0x5cf9fe;
        iVar6 = (**(code **)(**(int **)(param_1 + 0x32c) + 0x11c))();
        puStack_34 = (undefined4 *)0x5cfa0e;
        FUN_005cfe0c(param_1,iVar6 + -1,4);
      }
      local_10 = local_10 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  puStack_34 = (undefined4 *)0x5cfb34;
  iVar6 = (**(code **)(**(int **)(param_1 + 0x32c) + 0x11c))();
  if (-1 < iVar6 + -1) {
    iVar8 = 0;
    puVar9 = &DAT_006d2d5c;
    do {
      puStack_34 = &local_258;
      ppuStack_38 = (undefined1 **)0x5cfb60;
      (**(code **)(**(int **)(param_1 + 0x32c) + 0x100))(*(int **)(param_1 + 0x32c),0,iVar8);
      puStack_34 = (undefined4 *)0x5cfb71;
      FUN_00404b6c(&local_254,local_258);
      puStack_34 = (undefined4 *)0x5cfb7c;
      uVar4 = FUN_00409ff8(local_254);
      *puVar9 = uVar4;
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  puStack_34 = (undefined4 *)0x0;
  ppuStack_38 = (undefined1 **)0x5cfba4;
  FUN_004060a8(&DAT_006d2d54,PTR_DAT_005ce734,1);
  puVar2 = puStack_28;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_005cfd13;
  iStack_2c = 0x5cfbbf;
  FUN_00404ff0(&local_258,local_30,puVar2);
  iStack_2c = 0x5cfbca;
  FUN_004048d4(&local_254);
  iStack_2c = 0x5cfbe0;
  FUN_00405744(local_250,PTR_DAT_004010f8,4);
  iStack_2c = 0x5cfbeb;
  FUN_004048d4(&local_210);
  iStack_2c = 0x5cfbf6;
  FUN_00404ff0(&local_20c);
  iStack_2c = 0x5cfc0c;
  FUN_00405744(local_208,PTR_DAT_004010f8,2);
  iStack_2c = 0x5cfc17;
  FUN_004048d4(&local_1e8);
  iStack_2c = 0x5cfc27;
  FUN_00405008(&local_1e4,2);
  iStack_2c = 0x5cfc3d;
  FUN_00405744(local_1dc,PTR_DAT_004010f8,4);
  iStack_2c = 0x5cfc48;
  FUN_00404ff0(&local_19c);
  iStack_2c = 0x5cfc5e;
  FUN_00405744(local_198,PTR_DAT_004010f8,4);
  iStack_2c = 0x5cfc69;
  FUN_00404ff0(&local_158);
  iStack_2c = 0x5cfc7f;
  FUN_00405744(local_154,PTR_DAT_004010f8,2);
  iStack_2c = 0x5cfc8a;
  FUN_004048d4(&local_134);
  iStack_2c = 0x5cfc95;
  FUN_00404ff0(&local_130);
  iStack_2c = 0x5cfcab;
  FUN_00405744(local_12c,PTR_DAT_004010f8,2);
  iStack_2c = 0x5cfcb6;
  FUN_004048d4(&local_10c);
  iStack_2c = 0x5cfcc1;
  FUN_00404ff0(&local_108);
  iStack_2c = 0x5cfcd7;
  FUN_00405744(local_104,PTR_DAT_004010f8,4);
  iStack_2c = 0x5cfce2;
  FUN_00404ff0(&local_c4);
  iStack_2c = 0x5cfcf8;
  FUN_00405744(local_c0,PTR_DAT_004010f8,10);
  iStack_2c = 0x5cfd00;
  FUN_004048d4(&local_20);
  iStack_2c = 0x5cfd08;
  FUN_00404ff0(&stack0xffffffe4);
  return;
}

