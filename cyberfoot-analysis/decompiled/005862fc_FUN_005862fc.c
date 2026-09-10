// Address: 005862fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005862fc(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  undefined1 **ppuVar5;
  char **ppcVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 *in_FS_OFFSET;
  undefined1 *local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined1 local_2b4 [16];
  char local_2a4 [16];
  undefined4 local_294;
  undefined1 *local_290;
  undefined1 local_28c [16];
  undefined1 local_27c [16];
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 local_264 [16];
  undefined1 local_254 [16];
  undefined4 local_244;
  undefined1 *local_240;
  undefined1 local_23c [16];
  undefined1 local_22c [16];
  undefined4 local_21c;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 *local_1d8;
  undefined1 local_1d4 [16];
  undefined1 local_1c4 [16];
  undefined4 local_1b4;
  undefined1 *local_1b0;
  undefined1 local_1ac [16];
  undefined1 local_19c [16];
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined4 local_140;
  undefined1 local_13c [16];
  undefined1 local_12c [16];
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined1 *local_f4;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined *puStack_7c;
  undefined4 local_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 *local_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  wchar_t *pwStack_48;
  undefined1 *local_44;
  undefined4 *puStack_40;
  undefined1 **ppuStack_3c;
  char **ppcStack_38;
  char *local_34;
  undefined1 *puStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  char *local_20;
  int local_10;
  
  local_20 = &stack0xfffffffc;
  iVar10 = 0x58;
  do {
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_24 = &LAB_005870df;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iStack_2c = 0x586331;
  (**(code **)(**(int **)(param_1 + 0x300) + 0x1dc))();
  iVar12 = 0;
  iStack_2c = 0x58633f;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  iStack_2c = 0x58634e;
  iVar10 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar10) {
    iVar10 = iVar10 + 1;
    local_10 = 0;
    do {
      if (((-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_10 * 0x130)) &&
          (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_10 * 0x130) == *(int *)PTR_DAT_0066b76c)
          ) && (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + local_10 * 0x130) != '\0')) {
        iVar12 = iVar12 + 1;
        puStack_30 = (undefined1 *)0x5863b9;
        iStack_2c = iVar12;
        FUN_004060a8(&DAT_006d21d8,PTR_DAT_005861f4,1);
        *(int *)(DAT_006d21d8 + -0x10 + iVar12 * 0x10) = local_10;
        iStack_2c = 0x5863d4;
        uVar8 = FUN_006538b8(local_10);
        *(undefined4 *)(DAT_006d21d8 + -0xc + iVar12 * 0x10) = uVar8;
        *(undefined4 *)(DAT_006d21d8 + -8 + iVar12 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + local_10 * 0x130);
        *(undefined4 *)(DAT_006d21d8 + -4 + iVar12 * 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + local_10 * 0x130);
      }
      local_10 = local_10 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iStack_2c = 0x58641e;
  DAT_006d21d0 = FUN_00405eec(DAT_006d21d8);
  iStack_2c = DAT_006d21d0 + -1;
  puStack_30 = &LAB_00586214;
  local_34 = (char *)0x586440;
  FUN_004bcdb0(DAT_006d21d8,0x10,0);
  if (-1 < iVar12 + -1) {
    local_10 = 0;
    do {
      iVar10 = *(int *)(DAT_006d21d8 + local_10 * 0x10);
      local_34 = (char *)0x58647b;
      (**(code **)(**(int **)(param_1 + 0x300) + 0x1d0))(*(int **)(param_1 + 0x300),1);
      local_34 = (char *)0x586486;
      FUN_00409dd8(iVar10,&local_24);
      local_34 = (char *)0x586491;
      FUN_004051d4(&local_20,local_24);
      local_34 = local_20;
      piVar1 = *(int **)(param_1 + 0x300);
      ppcStack_38 = (char **)0x5864a8;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      ppcStack_38 = (char **)0x5864b5;
      FUN_00416244(&local_34,iVar9 + -1,0xfc);
      ppcStack_38 = &local_34;
      ppuStack_3c = (undefined1 **)0x5864c6;
      FUN_00416478(&local_44,&DAT_005870f8);
      ppcVar6 = ppcStack_38;
      ppcStack_38 = (char **)0x5864d1;
      FUN_0050e9b8(piVar1,&local_44,ppcVar6);
      ppcStack_38 = *(char ***)
                     (PTR_DAT_0066b660 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar10 * 0x130) * 4);
      piVar1 = *(int **)(param_1 + 0x300);
      ppuStack_3c = (undefined1 **)0x5864fd;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      ppuStack_3c = (undefined1 **)0x58650a;
      FUN_00416244(&local_54,iVar9 + -1,0xfc);
      ppuStack_3c = &local_54;
      puStack_40 = (undefined4 *)0x58651b;
      FUN_00416478(&local_64,"posicaojog");
      ppuVar5 = ppuStack_3c;
      ppuStack_3c = (undefined1 **)0x586526;
      FUN_0050e9b8(piVar1,&local_64,ppuVar5);
      ppuStack_3c = (undefined1 **)0x586539;
      FUN_00405194(&local_68,*(int *)PTR_DAT_0066b5b8 + iVar10 * 0x130);
      ppuStack_3c = (undefined1 **)local_68;
      piVar1 = *(int **)(param_1 + 0x300);
      puStack_40 = (undefined4 *)0x586550;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_40 = (undefined4 *)0x58655d;
      FUN_00416244(&local_78,iVar9 + -1,0xfc);
      puStack_40 = &local_78;
      local_44 = (undefined1 *)0x586571;
      FUN_00416478(local_88,&DAT_00587118);
      puVar4 = puStack_40;
      puStack_40 = (undefined4 *)0x58657f;
      FUN_0050e9b8(piVar1,local_88,puVar4);
      piVar1 = *(int **)(param_1 + 0x300);
      puStack_40 = (undefined4 *)0x586592;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_40 = (undefined4 *)0x5865a2;
      FUN_00416244(local_98,iVar9 + -1,0xfc);
      puStack_40 = (undefined4 *)local_98;
      local_44 = (undefined1 *)0x5865b9;
      FUN_00416478(local_a8,"nxpais");
      puVar4 = puStack_40;
      puStack_40 = (undefined4 *)0x5865c7;
      iVar9 = FUN_004f77e4(piVar1,local_a8,puVar4);
      *(undefined4 *)(iVar9 + 8) =
           *(undefined4 *)
            (*(int *)PTR_DAT_0066b3e0 +
            *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + iVar10 * 0x130) * 4);
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + iVar10 * 0x130) == 0) {
        puStack_40 = (undefined4 *)0x5865ff;
        FUN_00642c50(0x99,&local_ac);
        puStack_40 = (undefined4 *)local_ac;
        piVar1 = *(int **)(param_1 + 0x300);
        local_44 = (undefined1 *)0x586619;
        iVar9 = (**(code **)(*piVar1 + 0x11c))();
        local_44 = (undefined1 *)0x586629;
        FUN_00416244(local_bc,iVar9 + -1,0xfc);
        local_44 = local_bc;
        pwStack_48 = L"閍Ｘ\xffff욋\xe859荪\xfff8快閍Ｔ\xffff鮸";
        FUN_00416478(local_cc,"funcaojog");
        puVar11 = local_44;
        local_44 = (undefined1 *)0x58664e;
        FUN_0050e9b8(piVar1,local_cc,puVar11);
      }
      else {
        puStack_40 = (undefined4 *)0x586660;
        FUN_00642c50(0x9b,&local_d0);
        puStack_40 = (undefined4 *)local_d0;
        piVar1 = *(int **)(param_1 + 0x300);
        local_44 = (undefined1 *)0x58667a;
        iVar9 = (**(code **)(*piVar1 + 0x11c))();
        local_44 = (undefined1 *)0x58668a;
        FUN_00416244(local_e0,iVar9 + -1,0xfc);
        local_44 = local_e0;
        pwStack_48 = (wchar_t *)0x5866a1;
        FUN_00416478(local_f0,"funcaojog");
        puVar11 = local_44;
        local_44 = (undefined1 *)0x5866af;
        FUN_0050e9b8(piVar1,local_f0,puVar11);
      }
      local_44 = (undefined1 *)0x5866c8;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x128 + iVar10 * 0x130),&local_f8);
      local_44 = (undefined1 *)0x5866d9;
      FUN_004051d4(&local_f4,local_f8);
      local_44 = local_f4;
      piVar1 = *(int **)(param_1 + 0x300);
      pwStack_48 = 
      L"킋赊ﲅ\xfffe뇿\xe8fcסּ￨薍ﻼ\xffff赐\xec85\xfffe뫿煌X廨\xe8fd跿\xec95\xfffe诿姆部\xf882ꇿ떸f\x8b泟㣘㗘煔X﫨\xe7c4跿\xe895\xfffe\xe8ff띳\f薋ﻨ\xffff譐ﱅ낋̀"
      ;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      pwStack_48 = 
      L"薍ﻼ\xffff赐\xec85\xfffe뫿煌X廨\xe8fd跿\xec95\xfffe诿姆部\xf882ꇿ떸f\x8b泟㣘㗘煔X﫨\xe7c4跿\xe895\xfffe\xe8ff띳\f薋ﻨ\xffff譐ﱅ낋̀"
      ;
      FUN_00416244(local_108,iVar9 + -1,0xfc);
      pwStack_48 = (wchar_t *)local_108;
      puStack_4c = (undefined1 *)0x58671a;
      FUN_00416478(local_118,"energia");
      pwVar3 = pwStack_48;
      pwStack_48 = (wchar_t *)0x586728;
      FUN_0050e9b8(piVar1,local_118,pwVar3);
      pwStack_48 = (wchar_t *)0x58673e;
      uVar8 = FUN_00402c38();
      pwStack_48 = L"薋ﻨ\xffff譐ﱅ낋̀";
      FUN_00651ebc(uVar8,&local_11c);
      pwStack_48 = (wchar_t *)local_11c;
      piVar1 = *(int **)(param_1 + 0x300);
      puStack_4c = (undefined1 *)0x586763;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_4c = (undefined1 *)0x586773;
      FUN_00416244(local_12c,iVar9 + -1,0xfc);
      puStack_4c = local_12c;
      puStack_50 = (undefined1 *)0x58678a;
      FUN_00416478(local_13c,"salario");
      puVar11 = puStack_4c;
      puStack_4c = (undefined1 *)0x586798;
      FUN_0050e9b8(piVar1,local_13c,puVar11);
      puStack_4c = (undefined1 *)0x5867ae;
      uVar8 = FUN_00402c38();
      puStack_4c = (undefined1 *)0x5867b9;
      FUN_0064d948(uVar8,&local_140);
      puStack_4c = (undefined1 *)local_140;
      piVar1 = *(int **)(param_1 + 0x300);
      puStack_50 = (undefined1 *)0x5867d3;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_50 = (undefined1 *)0x5867e3;
      FUN_00416244(local_150,iVar9 + -1,0xfc);
      puStack_50 = local_150;
      local_54 = (undefined1 *)0x5867fa;
      FUN_00416478(local_160,"passe");
      puVar11 = puStack_50;
      puStack_50 = (undefined1 *)0x586808;
      FUN_0050e9b8(piVar1,local_160,puVar11);
      piVar1 = *(int **)(param_1 + 0x300);
      puStack_50 = (undefined1 *)0x58681b;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_50 = (undefined1 *)0x58682b;
      FUN_00416244(local_170,iVar9 + -1,0xfc);
      puStack_50 = local_170;
      local_54 = (undefined1 *)0x586842;
      FUN_00416478(local_180,"passe");
      puVar11 = puStack_50;
      puStack_50 = (undefined1 *)0x586850;
      puStack_50 = (undefined1 *)FUN_004f77e4(piVar1,local_180,puVar11);
      local_54 = (undefined1 *)0x586867;
      uVar8 = FUN_00402c38();
      local_54 = (undefined1 *)0x586872;
      FUN_006468f4(uVar8,&local_184);
      puVar11 = puStack_50;
      puStack_50 = (undefined1 *)0x58687e;
      FUN_004f7234(puVar11,local_184);
      puStack_50 = (undefined1 *)0x586894;
      local_54 = (undefined1 *)FUN_00402c38();
      puStack_58 = (undefined1 *)0x5868a1;
      FUN_00409fa8(&local_18c);
      puStack_50 = (undefined1 *)0x5868b2;
      FUN_004051d4(&local_188,local_18c);
      puStack_50 = (undefined1 *)local_188;
      piVar1 = *(int **)(param_1 + 0x300);
      local_54 = (undefined1 *)0x5868cc;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      local_54 = (undefined1 *)0x5868dc;
      FUN_00416244(local_19c,iVar9 + -1,0xfc);
      local_54 = local_19c;
      puStack_58 = (undefined1 *)0x5868f3;
      FUN_00416478(local_1ac,"passet");
      puVar11 = local_54;
      local_54 = (undefined1 *)0x586901;
      FUN_0050e9b8(piVar1,local_1ac,puVar11);
      local_54 = (undefined1 *)0x58691a;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x124 + iVar10 * 0x130),&local_1b4);
      local_54 = (undefined1 *)0x58692b;
      FUN_004051d4(&local_1b0,local_1b4);
      local_54 = local_1b0;
      piVar1 = *(int **)(param_1 + 0x300);
      puStack_58 = (undefined1 *)0x586945;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_58 = (undefined1 *)0x586955;
      FUN_00416244(local_1c4,iVar9 + -1,0xfc);
      puStack_58 = local_1c4;
      puStack_5c = (undefined1 *)0x58696c;
      FUN_00416478(local_1d4,&DAT_00587190);
      puVar11 = puStack_58;
      puStack_58 = (undefined1 *)0x58697a;
      FUN_0050e9b8(piVar1,local_1d4,puVar11);
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
        puStack_5c = &LAB_00586c26;
        uStack_60 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_60;
        local_64 = *(undefined4 *)
                    (PTR_DAT_0066b3a4 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar10 * 0x130) * 4);
        piVar1 = *(int **)(param_1 + 0x300);
        local_68 = (undefined1 *)0x586be7;
        puStack_58 = &stack0xfffffffc;
        iVar9 = (**(code **)(*piVar1 + 0x11c))();
        puStack_74 = (undefined1 *)0x586bf7;
        FUN_00416244(local_22c,iVar9 + -1,0xfc);
        puStack_74 = local_22c;
        local_78 = 0x586c0e;
        FUN_00416478(local_23c,"habilidades");
        puVar11 = puStack_74;
        puStack_74 = (undefined1 *)0x586c1c;
        FUN_0050e9b8(piVar1,local_23c,puVar11);
        *in_FS_OFFSET = puStack_70;
        puVar11 = local_68;
      }
      else {
        puStack_5c = &LAB_00586ad1;
        uStack_60 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_60;
        local_64 = *(undefined4 *)
                    (PTR_DAT_0066b1c8 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar10 * 0x130) * 4);
        local_68 = &DAT_00587198;
        puStack_6c = *(undefined1 **)
                      (PTR_DAT_0066b1c8 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar10 * 0x130) * 4);
        puStack_70 = (undefined1 *)0x586a78;
        puStack_58 = &stack0xfffffffc;
        FUN_00405330(&local_1d8,3);
        puStack_70 = local_1d8;
        piVar1 = *(int **)(param_1 + 0x300);
        puStack_74 = (undefined1 *)0x586a92;
        iVar9 = (**(code **)(*piVar1 + 0x11c))();
        puStack_74 = (undefined1 *)0x586aa2;
        FUN_00416244(local_1e8,iVar9 + -1,0xfc);
        puStack_74 = local_1e8;
        local_78 = 0x586ab9;
        FUN_00416478(local_1f8,"habilidades");
        puVar11 = puStack_74;
        puStack_74 = (undefined1 *)0x586ac7;
        FUN_0050e9b8(piVar1,local_1f8,puVar11);
        puVar11 = local_68;
        *in_FS_OFFSET = puStack_70;
        puStack_6c = &LAB_00586ba5;
        puStack_70 = (undefined1 *)*in_FS_OFFSET;
        *in_FS_OFFSET = &puStack_70;
        local_68 = &stack0xfffffffc;
        if (*PTR_DAT_0066b700 == '\0') {
          iVar9 = **(int **)(param_1 + 0x300);
          puStack_74 = (undefined1 *)0x586b08;
          local_68 = &stack0xfffffffc;
          iVar9 = (**(code **)(iVar9 + 0x11c))(*(int **)(param_1 + 0x300),iVar9,puVar11);
          puStack_74 = (undefined1 *)0x586b18;
          FUN_00416244(local_208,iVar9 + -1,0xfc);
          puStack_74 = local_208;
          local_78 = 0x586b2f;
          FUN_00416478(local_218,"habilidades");
          puVar11 = puStack_74;
          puStack_74 = (undefined1 *)0x586b44;
          puStack_74 = (undefined1 *)
                       FUN_004f77e4(*(undefined4 *)(param_1 + 0x300),local_218,puVar11);
          local_78 = *(undefined4 *)
                      (PTR_DAT_0066b3a4 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar10 * 0x130) * 4);
          puStack_7c = &DAT_00587198;
          uStack_80 = *(undefined4 *)
                       (PTR_DAT_0066b3a4 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar10 * 0x130) * 4);
          uStack_84 = 0x586b8c;
          FUN_00405330(&local_21c,3);
          puVar11 = puStack_74;
          puStack_74 = (undefined1 *)0x586b98;
          FUN_004f7234(puVar11,local_21c);
        }
        *in_FS_OFFSET = puStack_70;
        puVar11 = local_68;
      }
      local_68 = (undefined1 *)0x586c4a;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar10 * 0x130),&local_244,
                   puVar11);
      local_68 = (undefined1 *)0x586c5b;
      FUN_004051d4(&local_240,local_244);
      local_68 = local_240;
      piVar1 = *(int **)(param_1 + 0x300);
      puStack_6c = (undefined1 *)0x586c75;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_6c = (undefined1 *)0x586c85;
      FUN_00416244(local_254,iVar9 + -1,0xfc);
      puStack_6c = local_254;
      puStack_70 = (undefined1 *)0x586c9c;
      FUN_00416478(local_264,"idade");
      puVar11 = puStack_6c;
      puStack_6c = (undefined1 *)0x586caa;
      FUN_0050e9b8(piVar1,local_264,puVar11);
      puStack_70 = &LAB_00586d3e;
      puStack_74 = (undefined1 *)*in_FS_OFFSET;
      *in_FS_OFFSET = &puStack_74;
      local_78 = 0x586cd4;
      puStack_6c = &stack0xfffffffc;
      FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar10 * 0x130) + 7,&local_26c);
      local_78 = 0x586ce5;
      FUN_004051d4(&local_268,local_26c);
      local_78 = local_268;
      piVar1 = *(int **)(param_1 + 0x300);
      puStack_7c = (undefined *)0x586cff;
      iVar9 = (**(code **)(*piVar1 + 0x11c))();
      puStack_7c = (undefined *)0x586d0f;
      FUN_00416244(local_27c,iVar9 + -1,0xfc);
      puStack_7c = local_27c;
      uStack_80 = 0x586d26;
      FUN_00416478(local_28c,"moral");
      puVar2 = puStack_7c;
      puStack_7c = (undefined *)0x586d34;
      FUN_0050e9b8(piVar1,local_28c,puVar2);
      puVar11 = puStack_70;
      *in_FS_OFFSET = local_78;
      puStack_70 = (undefined1 *)0x586d63;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + iVar10 * 0x130),&local_294,
                   puVar11);
      puStack_70 = (undefined1 *)0x586d74;
      FUN_004051d4(&local_290,local_294);
      puStack_70 = local_290;
      piVar1 = *(int **)(param_1 + 0x300);
      puStack_74 = (undefined1 *)0x586d8e;
      iVar10 = (**(code **)(*piVar1 + 0x11c))();
      local_34 = (char *)0x586d9e;
      FUN_00416244(local_2a4,iVar10 + -1,0xfc);
      local_34 = local_2a4;
      ppcStack_38 = (char **)0x586db5;
      FUN_00416478(local_2b4,"status");
      pcVar7 = local_34;
      local_34 = (char *)0x586dc3;
      FUN_0050e9b8(piVar1,local_2b4,pcVar7);
      local_10 = local_10 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  local_34 = "<shad>";
  ppcStack_38 = (char **)0x586de5;
  uVar8 = (**(code **)(**(int **)(param_1 + 0x300) + 0x11c))();
  ppcStack_38 = (char **)0x586df0;
  FUN_00409dd8(uVar8,&local_2c4);
  ppcStack_38 = (char **)local_2c4;
  ppuStack_3c = (undefined1 **)&DAT_005871f8;
  puStack_40 = (undefined4 *)0x586e0b;
  FUN_00404c64(&local_2c0,3);
  puStack_40 = (undefined4 *)0x586e1c;
  FUN_004051d4(&local_2bc,local_2c0);
  puStack_40 = (undefined4 *)local_2bc;
  local_44 = (undefined1 *)0x586e32;
  FUN_00642c50(0x49,&local_2c8);
  local_44 = local_2c8;
  pwStack_48 = L"</shad>";
  puStack_4c = (undefined1 *)0x586e4d;
  FUN_00405330(&local_2b8,3);
  puStack_4c = (undefined1 *)0x586e61;
  FUN_00545088(*(undefined4 *)(param_1 + 0x340),local_2b8);
  puStack_4c = (undefined1 *)0x0;
  puStack_50 = (undefined1 *)0x586e78;
  FUN_004060a8(&DAT_006d21d8,PTR_DAT_005861f4,1);
  puStack_4c = (undefined1 *)0x586e92;
  (**(code **)(**(int **)(param_1 + 0x300) + 0x210))(*(int **)(param_1 + 0x300),DAT_00587210);
  puVar4 = puStack_40;
  *in_FS_OFFSET = pwStack_48;
  puStack_40 = (undefined4 *)&LAB_005870e9;
  local_44 = (undefined1 *)0x586eaa;
  FUN_00404ff0(&local_2c8,pwStack_48,puVar4);
  local_44 = (undefined1 *)0x586eba;
  FUN_004048f8(&local_2c4,2);
  local_44 = (undefined1 *)0x586eca;
  FUN_00405008(&local_2bc,2);
  local_44 = (undefined1 *)0x586ee0;
  FUN_00405744(local_2b4,PTR_DAT_004010f8,2);
  local_44 = (undefined1 *)0x586eeb;
  FUN_004048d4(&local_294);
  local_44 = (undefined1 *)0x586ef6;
  FUN_00404ff0(&local_290);
  local_44 = (undefined1 *)0x586f0c;
  FUN_00405744(local_28c,PTR_DAT_004010f8,2);
  local_44 = (undefined1 *)0x586f17;
  FUN_004048d4(&local_26c);
  local_44 = (undefined1 *)0x586f22;
  FUN_00404ff0(&local_268);
  local_44 = (undefined1 *)0x586f38;
  FUN_00405744(local_264,PTR_DAT_004010f8,2);
  local_44 = (undefined1 *)0x586f43;
  FUN_004048d4(&local_244);
  local_44 = (undefined1 *)0x586f4e;
  FUN_00404ff0(&local_240);
  local_44 = (undefined1 *)0x586f64;
  FUN_00405744(local_23c,PTR_DAT_004010f8,2);
  local_44 = (undefined1 *)0x586f6f;
  FUN_00404ff0(&local_21c);
  local_44 = (undefined1 *)0x586f85;
  FUN_00405744(local_218,PTR_DAT_004010f8,4);
  local_44 = (undefined1 *)0x586f90;
  FUN_00404ff0(&local_1d8);
  local_44 = (undefined1 *)0x586fa6;
  FUN_00405744(local_1d4,PTR_DAT_004010f8,2);
  local_44 = (undefined1 *)0x586fb1;
  FUN_004048d4(&local_1b4);
  local_44 = (undefined1 *)0x586fbc;
  FUN_00404ff0(&local_1b0);
  local_44 = (undefined1 *)0x586fd2;
  FUN_00405744(local_1ac,PTR_DAT_004010f8,2);
  local_44 = (undefined1 *)0x586fdd;
  FUN_004048d4(&local_18c);
  local_44 = (undefined1 *)0x586fed;
  FUN_00405008(&local_188,2);
  local_44 = (undefined1 *)0x587003;
  FUN_00405744(local_180,PTR_DAT_004010f8,4);
  local_44 = (undefined1 *)0x58700e;
  FUN_00404ff0(&local_140);
  local_44 = (undefined1 *)0x587024;
  FUN_00405744(local_13c,PTR_DAT_004010f8,2);
  local_44 = (undefined1 *)0x58702f;
  FUN_00404ff0(&local_11c);
  local_44 = (undefined1 *)0x587045;
  FUN_00405744(local_118,PTR_DAT_004010f8,2);
  local_44 = (undefined1 *)0x587050;
  FUN_004048d4(&local_f8);
  local_44 = (undefined1 *)0x58705b;
  FUN_00404ff0(&local_f4);
  local_44 = (undefined1 *)0x587071;
  FUN_00405744(local_f0,PTR_DAT_004010f8,2);
  local_44 = (undefined1 *)0x58707c;
  FUN_00404ff0(&local_d0);
  local_44 = (undefined1 *)0x587092;
  FUN_00405744(local_cc,PTR_DAT_004010f8,2);
  local_44 = (undefined1 *)0x58709d;
  FUN_00404ff0(&local_ac);
  local_44 = (undefined1 *)0x5870b3;
  FUN_00405744(local_a8,PTR_DAT_004010f8,4);
  local_44 = (undefined1 *)0x5870bb;
  FUN_00404ff0(&local_68);
  local_44 = (undefined1 *)0x5870ce;
  FUN_00405744(&local_64,PTR_DAT_004010f8,4);
  local_44 = (undefined1 *)0x5870d6;
  FUN_004048d4(&local_24);
  local_44 = (undefined1 *)0x5870de;
  FUN_00404ff0(&local_20);
  return;
}

