// Address: 005953f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm27_button2Click(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 **ppuVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined2 extraout_var;
  int iVar12;
  int *in_FS_OFFSET;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined4 local_2e8;
  undefined1 *local_2e4;
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined4 local_2c0;
  undefined1 *local_2bc;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined4 local_278;
  undefined1 local_274 [16];
  undefined1 local_264 [16];
  undefined1 local_254 [16];
  undefined1 local_244 [16];
  undefined1 *local_234;
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 *local_210;
  undefined1 local_20c [16];
  undefined1 local_1fc [16];
  undefined1 *local_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined4 local_1c8;
  undefined1 *local_1c4;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 *local_1a0;
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined1 *local_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined4 local_158;
  undefined1 *local_154;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined4 local_130;
  undefined1 *local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined *local_e8;
  undefined1 local_e4 [16];
  undefined1 local_d4 [16];
  undefined4 local_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined *local_30;
  undefined4 *local_2c;
  undefined1 **local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined *local_1c;
  int local_c;
  
  local_1c = &stack0xfffffffc;
  iVar11 = 99;
  do {
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  local_20 = &LAB_005966f9;
  local_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = (undefined1 **)0x59542d;
  FUN_00466414(DAT_006d2268,0xfff5);
  local_28 = (undefined1 **)0x59543f;
  FUN_00466414(*(undefined4 *)(param_1 + 0x3b8),CONCAT22(extraout_var,0xfff5));
  local_28 = (undefined1 **)0x59544b;
  FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
  local_28 = (undefined1 **)0x59545c;
  (**(code **)(**(int **)(param_1 + 0x344) + 0x1dc))();
  local_28 = (undefined1 **)0x59546f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),L"Procurando ...");
  local_28 = (undefined1 **)0x595495;
  uVar8 = (**(code **)(**(int **)(param_1 + 0x32c) + 0xcc))();
  switch(uVar8) {
  case 0:
    DAT_006d226c = 1;
    DAT_006d2270 = 10;
    break;
  case 1:
    DAT_006d226c = 0xb;
    DAT_006d2270 = 0x1e;
    break;
  case 2:
    DAT_006d226c = 0x1f;
    DAT_006d2270 = 0x32;
    break;
  case 3:
    DAT_006d226c = 0x33;
    DAT_006d2270 = 0x46;
    break;
  case 4:
    DAT_006d226c = 0x47;
    DAT_006d2270 = 0x65;
    break;
  case 5:
    DAT_006d226c = 0;
    DAT_006d2270 = 0x65;
    break;
  default:
    DAT_006d226c = 0;
    DAT_006d2270 = 0x65;
  }
  local_28 = (undefined1 **)0x595560;
  iVar11 = (**(code **)(**(int **)(param_1 + 0x334) + 0xcc))();
  if (iVar11 == 0) {
    DAT_006d2278 = 0xf;
    DAT_006d227c = 0x19;
  }
  else if (iVar11 == 1) {
    DAT_006d2278 = 0x1a;
    DAT_006d227c = 0x24;
  }
  else if (iVar11 == 2) {
    DAT_006d2278 = 0x25;
    DAT_006d227c = 0x50;
  }
  else {
    DAT_006d2278 = 0x10;
    DAT_006d227c = 0x50;
  }
  local_28 = (undefined1 **)0x5955d3;
  uVar8 = (**(code **)(**(int **)(param_1 + 0x330) + 0xcc))();
  switch(uVar8) {
  case 0:
    _DAT_006d2280 = 1000;
    _DAT_006d2284 = 100000;
    break;
  case 1:
    _DAT_006d2280 = 0x18a88;
    _DAT_006d2284 = 500000;
    break;
  case 2:
    _DAT_006d2280 = 500000;
    _DAT_006d2284 = 1000000;
    break;
  case 3:
    _DAT_006d2280 = 1000000;
    _DAT_006d2284 = 3000000;
    break;
  case 4:
    _DAT_006d2280 = 0x2dc6c1;
    _DAT_006d2284 = 5000000;
    break;
  case 5:
    _DAT_006d2280 = 0x4c4b41;
    _DAT_006d2284 = 10000000;
    break;
  case 6:
    _DAT_006d2280 = 0x989681;
    _DAT_006d2284 = 999999999;
    break;
  default:
    _DAT_006d2280 = 1000;
    _DAT_006d2284 = 999999999;
  }
  iVar11 = 0;
  local_28 = (undefined1 **)0x5956c4;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  local_28 = (undefined1 **)0x5956d0;
  puVar9 = (undefined *)FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (0 < (int)puVar9) {
    local_c = 1;
    local_30 = puVar9;
    do {
      iVar12 = 0;
      local_28 = (undefined1 **)0x5956f2;
      iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3c0));
      if (iVar10 == 2) {
        local_2c = *(undefined4 **)(*(int *)PTR_DAT_0066b5b8 + 0x2c + local_c * 0x130);
      }
      else {
        local_28 = (undefined1 **)0x59571a;
        local_2c = (undefined4 *)FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3c0));
      }
      local_28 = (undefined1 **)0x59572b;
      iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3b0));
      if (iVar10 == 5) {
        DAT_006d2274 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + local_c * 0x130);
      }
      else {
        local_28 = (undefined1 **)0x595755;
        DAT_006d2274 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3b0));
      }
      local_28 = (undefined1 **)0x595768;
      iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3a8));
      if (iVar10 == 0xe) {
        local_1c = *(undefined **)(*(int *)PTR_DAT_0066b5b8 + 0x5c + local_c * 0x130);
      }
      else {
        local_28 = (undefined1 **)0x595790;
        local_1c = (undefined *)FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3a8));
      }
      local_28 = (undefined1 **)0x5957a1;
      iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3ac));
      if (iVar10 == 0xe) {
        local_20 = *(undefined1 **)(*(int *)PTR_DAT_0066b5b8 + 0x60 + local_c * 0x130);
      }
      else {
        local_28 = (undefined1 **)0x5957c9;
        local_20 = (undefined1 *)FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3ac));
      }
      local_28 = (undefined1 **)0x5957da;
      iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3b4));
      if (iVar10 == 0xca) {
        iVar10 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + local_c * 0x130);
      }
      else {
        local_28 = (undefined1 **)0x595804;
        iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3b4));
      }
      local_28 = (undefined1 **)0x595818;
      FUN_00466208(*(undefined4 *)(param_1 + 0x324),&local_34);
      if (local_34 == (undefined1 *)0x0) {
        local_28 = (undefined1 **)0x595835;
        FUN_00404b48(&local_3c,*(int *)PTR_DAT_0066b5b8 + local_c * 0x130);
        local_28 = (undefined1 **)0x595840;
        FUN_0064a6f4(local_3c,&local_38);
        local_28 = (undefined1 **)0x59584d;
        FUN_00404928(&DAT_006d2288,local_38);
      }
      else {
        local_28 = (undefined1 **)0x595860;
        FUN_00466208(*(undefined4 *)(param_1 + 0x324),&local_44);
        local_28 = (undefined1 **)0x59586b;
        FUN_0064a6f4(local_44,&local_40);
        local_28 = (undefined1 **)0x595878;
        FUN_00404928(&DAT_006d2288,local_40);
      }
      local_28 = (undefined1 **)0x595889;
      cVar5 = (**(code **)(**(int **)(param_1 + 0x328) + 200))();
      if (cVar5 == '\0') {
        cVar5 = *(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + local_c * 0x130);
      }
      else {
        cVar5 = '\x01';
      }
      local_28 = (undefined1 **)0x5958b7;
      cVar6 = (**(code **)(**(int **)(param_1 + 0x37c) + 200))();
      if (cVar6 == '\0') {
        local_24 = *(undefined1 **)(*(int *)PTR_DAT_0066b5b8 + 0x100 + local_c * 0x130);
      }
      else {
        local_24 = (undefined1 *)0x1;
      }
      local_28 = (undefined1 **)0x5958eb;
      cVar6 = (**(code **)(**(int **)(param_1 + 0x338) + 200))();
      if (cVar6 == '\0') {
        cVar6 = *(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + local_c * 0x130);
      }
      else {
        cVar6 = '\x01';
      }
      iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_c * 0x130);
      if ((-1 < iVar1) && (iVar1 <= (int)local_28)) {
        if (*(int *)(PTR_DAT_0066ac78 + 0xc4) != 0xca) {
          local_28 = (undefined1 **)0x595944;
          cVar7 = (**(code **)(**(int **)(param_1 + 800) + 200))();
          if (cVar7 != '\0') {
            local_28 = (undefined1 **)0x595956;
            iVar12 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3bc));
            iVar12 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar12 * 0x294);
            goto LAB_0059598a;
          }
        }
        iVar12 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c +
                         *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_c * 0x130) * 0x2f8);
      }
LAB_0059598a:
      if (*(int *)(PTR_DAT_0066ac78 + 0xc4) == 0xca) {
        iVar12 = 0xca;
      }
      if (((((((-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_c * 0x130)) &&
              (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_c * 0x130) <= (int)local_28)) &&
             (iVar12 == *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c +
                                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_c * 0x130) * 0x2f8)
             )) && ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + local_c * 0x130) == DAT_006d2274 &&
                    (DAT_006d226c <= *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + local_c * 0x130)))))
           && ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + local_c * 0x130) <= DAT_006d2270 &&
               ((DAT_006d2278 <= *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + local_c * 0x130) &&
                (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + local_c * 0x130) <= DAT_006d227c))))))
          && ((float)_DAT_006d2280 * _DAT_00596730 <
              (float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + local_c * 0x130))) &&
         ((float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + local_c * 0x130) <
          (float)_DAT_006d2284 * _DAT_00596730)) {
        local_28 = &local_48;
        local_2c = (undefined4 *)0x595ac0;
        FUN_00404b48(&local_50,*(int *)PTR_DAT_0066b5b8 + local_c * 0x130);
        local_2c = (undefined4 *)0x595acb;
        FUN_0064a6f4(local_50,&local_4c);
        local_2c = (undefined4 *)local_4c;
        local_30 = (undefined *)0x595ad9;
        uVar8 = FUN_00404ba4(DAT_006d2288);
        puVar3 = local_2c;
        local_2c = (undefined4 *)0x595ae3;
        FUN_00404e04(puVar3,0,uVar8);
        local_28 = (undefined1 **)0x595af1;
        iVar12 = FUN_00409790(local_48,DAT_006d2288);
        if (((((iVar12 == 0) &&
              (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + local_c * 0x130) == cVar5)) &&
             (*(char *)(*(int *)PTR_DAT_0066b5b8 + local_c * 0x130) != '\0')) &&
            (((*(undefined **)(*(int *)PTR_DAT_0066b5b8 + 0x5c + local_c * 0x130) == local_1c &&
              (*(undefined1 **)(*(int *)PTR_DAT_0066b5b8 + 0x60 + local_c * 0x130) == local_20)) &&
             ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + local_c * 0x130) == iVar10 &&
              ((cVar6 == *(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + local_c * 0x130) &&
               (*(undefined1 **)(*(int *)PTR_DAT_0066b5b8 + 0x100 + local_c * 0x130) == local_24))))
             )))) && (((undefined4 *)*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + local_c * 0x130) ==
                       local_2c &&
                      (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + local_c * 0x130) == '\0')))) {
          local_28 = (undefined1 **)0x595bc3;
          (**(code **)(**(int **)(param_1 + 0x344) + 0x1d0))(*(int **)(param_1 + 0x344),1);
          local_28 = (undefined1 **)0x595bd1;
          FUN_00511cbc(*(undefined4 *)(param_1 + 0x344));
          if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + local_c * 0x130) != '\0') {
            local_28 = (undefined1 **)0x595bec;
            FUN_00409dd8(1,&local_58);
            local_28 = (undefined1 **)0x595bf7;
            FUN_004051d4(&local_54,local_58);
            local_28 = (undefined1 **)local_54;
            local_2c = (undefined4 *)0x595c08;
            FUN_00416244(&local_68,iVar11,0xfc);
            local_2c = &local_68;
            local_30 = (undefined *)0x595c19;
            FUN_00416478(local_78,"nximg");
            puVar3 = local_2c;
            local_2c = (undefined4 *)0x595c2b;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_78,puVar3);
          }
          local_28 = (undefined1 **)0x595c3e;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + local_c * 0x130),&local_80)
          ;
          local_28 = (undefined1 **)0x595c49;
          FUN_004051d4(&local_7c,local_80);
          local_28 = (undefined1 **)local_7c;
          local_2c = (undefined4 *)0x595c5d;
          FUN_00416244(local_90,iVar11,0xfc);
          local_2c = (undefined4 *)local_90;
          local_30 = (undefined *)0x595c74;
          FUN_00416478(local_a0,"nxpais");
          puVar3 = local_2c;
          local_2c = (undefined4 *)0x595c89;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_a0,puVar3);
          if (*PTR_DAT_0066b700 == '\0') {
            local_2c = (undefined4 *)0x595ca3;
            FUN_00416244(local_b0,iVar11,0xfc);
            local_2c = (undefined4 *)local_b0;
            local_30 = (undefined *)0x595cba;
            FUN_00416478(local_c0,"nxpais");
            puVar3 = local_2c;
            local_2c = (undefined4 *)0x595ccf;
            uVar8 = FUN_004f77e4(*(undefined4 *)(param_1 + 0x344),local_c0,puVar3);
            local_2c = (undefined4 *)0x595ce9;
            FUN_004f7234(uVar8,*(undefined4 *)
                                (PTR_DAT_0066b294 +
                                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + local_c * 0x130) * 4));
          }
          local_2c = (undefined4 *)0x595cff;
          FUN_00405194(&local_c4,*(int *)PTR_DAT_0066b5b8 + local_c * 0x130);
          local_2c = (undefined4 *)local_c4;
          local_30 = (undefined *)0x595d16;
          FUN_00416244(local_d4,iVar11,0xfc);
          local_30 = local_d4;
          local_34 = (undefined1 *)0x595d2d;
          FUN_00416478(local_e4,"nxnome");
          puVar9 = local_30;
          local_30 = (undefined *)0x595d42;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_e4,puVar9);
          local_30 = (undefined *)0x595d65;
          FUN_00405194(&local_e8,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + local_c * 0x130) * 0x2f8);
          local_30 = local_e8;
          local_34 = (undefined1 *)0x595d7c;
          FUN_00416244(local_f8,iVar11,0xfc);
          local_34 = local_f8;
          local_38 = (undefined1 *)0x595d93;
          FUN_00416478(local_108,"nxclube");
          puVar2 = local_34;
          local_34 = (undefined1 *)0x595da8;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_108,puVar2);
          local_34 = *(undefined1 **)
                      (PTR_DAT_0066b660 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + local_c * 0x130) * 4);
          local_38 = (undefined1 *)0x595dcd;
          FUN_00416244(local_118,iVar11,0xfc);
          local_38 = local_118;
          local_3c = (undefined1 *)0x595de4;
          FUN_00416478(local_128,"nxposicao");
          puVar2 = local_38;
          local_38 = (undefined1 *)0x595df9;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_128,puVar2);
          local_38 = (undefined1 *)0x595e0f;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + local_c * 0x130),&local_130
                      );
          local_38 = (undefined1 *)0x595e20;
          FUN_004051d4(&local_12c,local_130);
          local_38 = local_12c;
          local_3c = (undefined1 *)0x595e37;
          FUN_00416244(local_140,iVar11,0xfc);
          local_3c = local_140;
          local_40 = (undefined1 *)0x595e4e;
          FUN_00416478(local_150,"nxforca");
          puVar2 = local_3c;
          local_3c = (undefined1 *)0x595e63;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_150,puVar2);
          local_3c = (undefined1 *)0x595e79;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + local_c * 0x130),&local_158
                      );
          local_3c = (undefined1 *)0x595e8a;
          FUN_004051d4(&local_154,local_158);
          local_3c = local_154;
          local_40 = (undefined1 *)0x595ea1;
          FUN_00416244(local_168,iVar11,0xfc);
          local_40 = local_168;
          local_44 = (undefined1 *)0x595eb8;
          FUN_00416478(local_178,"nxidade");
          puVar2 = local_40;
          local_40 = (undefined1 *)0x595ecd;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_178,puVar2);
          local_40 = (undefined1 *)0x595ee3;
          uVar8 = FUN_00402c38();
          local_40 = (undefined1 *)0x595eee;
          FUN_00651ebc(uVar8,&local_17c);
          local_40 = local_17c;
          local_44 = (undefined1 *)0x595f05;
          FUN_00416244(local_18c,iVar11,0xfc);
          local_44 = local_18c;
          local_48 = (undefined1 *)0x595f1c;
          FUN_00416478(local_19c,"nxsalario");
          puVar2 = local_44;
          local_44 = (undefined1 *)0x595f31;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_19c,puVar2);
          local_44 = (undefined1 *)0x595f47;
          uVar8 = FUN_00402c38();
          local_44 = (undefined1 *)0x595f52;
          FUN_00651ebc(uVar8,&local_1a0);
          local_44 = local_1a0;
          local_48 = (undefined1 *)0x595f69;
          FUN_00416244(local_1b0,iVar11,0xfc);
          local_48 = local_1b0;
          local_4c = (undefined1 *)0x595f80;
          FUN_00416478(local_1c0,"nxpasse");
          puVar2 = local_48;
          local_48 = (undefined1 *)0x595f95;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_1c0,puVar2);
          local_48 = (undefined1 *)0x595fae;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x104 + local_c * 0x130),
                       &local_1c8);
          local_48 = (undefined1 *)0x595fbf;
          FUN_004051d4(&local_1c4,local_1c8);
          local_48 = local_1c4;
          local_4c = (undefined1 *)0x595fd6;
          FUN_00416244(local_1d8,iVar11,0xfc);
          local_4c = local_1d8;
          local_50 = (undefined1 *)0x595fed;
          FUN_00416478(local_1e8,"nxgols");
          puVar2 = local_4c;
          local_4c = (undefined1 *)0x596002;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_1e8,puVar2);
          if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + local_c * 0x130) == 0) {
            local_4c = (undefined1 *)0x596020;
            FUN_00642c50(0x99,&local_1ec);
            local_4c = local_1ec;
            local_50 = (undefined1 *)0x596037;
            FUN_00416244(local_1fc,iVar11,0xfc);
            local_50 = local_1fc;
            local_54 = (undefined1 *)0x59604e;
            FUN_00416478(local_20c,"nxlado");
            puVar2 = local_50;
            local_50 = (undefined1 *)0x596063;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_20c,puVar2);
          }
          else {
            local_4c = (undefined1 *)0x596075;
            FUN_00642c50(0x9b,&local_210);
            local_4c = local_210;
            local_50 = (undefined1 *)0x59608c;
            FUN_00416244(local_220,iVar11,0xfc);
            local_50 = local_220;
            local_54 = (undefined1 *)0x5960a3;
            FUN_00416478(local_230,"nxlado");
            puVar2 = local_50;
            local_50 = (undefined1 *)0x5960b8;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_230,puVar2);
          }
          local_54 = &LAB_0059615a;
          local_58 = *in_FS_OFFSET;
          *in_FS_OFFSET = (int)&local_58;
          uStack_5c = *(undefined4 *)
                       (PTR_DAT_0066b1c8 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + local_c * 0x130) * 4);
          puStack_60 = &DAT_005967f0;
          uStack_64 = *(undefined4 *)
                       (PTR_DAT_0066b1c8 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + local_c * 0x130) * 4);
          local_68 = 0x59610d;
          local_50 = &stack0xfffffffc;
          FUN_00405330(&local_234,3);
          local_24 = local_234;
          local_28 = (undefined1 **)0x596124;
          FUN_00416244(local_244,iVar11,0xfc);
          local_28 = (undefined1 **)local_244;
          local_2c = (undefined4 *)0x59613b;
          FUN_00416478(local_254,"nxhabilidade");
          ppuVar4 = local_28;
          local_28 = (undefined1 **)0x596150;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_254,ppuVar4);
          *in_FS_OFFSET = (int)local_24;
          local_20 = &LAB_00596214;
          local_24 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&local_24;
          if (*PTR_DAT_0066b700 == '\0') {
            local_28 = (undefined1 **)0x596190;
            local_1c = &stack0xfffffffc;
            FUN_00416244(local_264,iVar11,0xfc);
            local_28 = (undefined1 **)local_264;
            local_2c = (undefined4 *)0x5961a7;
            FUN_00416478(local_274,"nxhabilidade");
            ppuVar4 = local_28;
            local_28 = (undefined1 **)0x5961bc;
            local_28 = (undefined1 **)
                       FUN_004f77e4(*(undefined4 *)(param_1 + 0x344),local_274,ppuVar4);
            local_2c = *(undefined4 **)
                        (PTR_DAT_0066b3a4 +
                        *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + local_c * 0x130) * 4);
            local_30 = &DAT_005967f0;
            local_34 = *(undefined1 **)
                        (PTR_DAT_0066b3a4 +
                        *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + local_c * 0x130) * 4);
            local_38 = (undefined1 *)0x5961fe;
            FUN_00405330(&local_278,3);
            ppuVar4 = local_28;
            local_28 = (undefined1 **)0x59620a;
            FUN_004f7234(ppuVar4,local_278);
          }
          *in_FS_OFFSET = (int)local_24;
          if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + local_c * 0x130) == '\0') {
            local_1c = &DAT_00596810;
            local_20 = (undefined1 *)0x596245;
            FUN_00416244(local_288,iVar11,0xfc);
            local_20 = local_288;
            local_24 = (undefined1 *)0x59625c;
            FUN_00416478(local_298,"nxavenda");
            puVar2 = local_20;
            local_20 = (undefined1 *)0x596271;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_298,puVar2);
          }
          else {
            local_1c = &DAT_0059682c;
            local_20 = (undefined1 *)0x596288;
            FUN_00416244(local_2a8,iVar11,0xfc);
            local_20 = local_2a8;
            local_24 = (undefined1 *)0x59629f;
            FUN_00416478(local_2b8,"nxavenda");
            puVar2 = local_20;
            local_20 = (undefined1 *)0x5962b4;
            FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_2b8,puVar2);
          }
          local_20 = (undefined1 *)0x5962c2;
          FUN_00409dd8(local_c,&local_2c0);
          local_20 = (undefined1 *)0x5962d3;
          FUN_004051d4(&local_2bc,local_2c0);
          local_20 = local_2bc;
          local_24 = (undefined1 *)0x5962ea;
          FUN_00416244(local_2d0,iVar11,0xfc);
          local_24 = local_2d0;
          local_28 = (undefined1 **)0x596301;
          FUN_00416478(local_2e0,&DAT_00596838);
          puVar2 = local_24;
          local_24 = (undefined1 *)0x596316;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_2e0,puVar2);
          local_24 = (undefined1 *)0x59632c;
          local_28 = (undefined1 **)FUN_00402c38();
          local_2c = (undefined4 *)0x596339;
          FUN_00409fa8(&local_2e8);
          local_24 = (undefined1 *)0x59634a;
          FUN_004051d4(&local_2e4,local_2e8);
          local_24 = local_2e4;
          local_28 = (undefined1 **)0x596361;
          FUN_00416244(local_2f8,iVar11,0xfc);
          local_28 = (undefined1 **)local_2f8;
          local_2c = (undefined4 *)0x596378;
          FUN_00416478(local_308,"nxvalortmp");
          ppuVar4 = local_28;
          local_28 = (undefined1 **)0x59638d;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x344),local_308,ppuVar4);
          local_28 = (undefined1 **)0x59639b;
          FUN_00511cd0(*(undefined4 *)(param_1 + 0x344));
          iVar11 = iVar11 + 1;
        }
      }
      local_c = local_c + 1;
      local_30 = local_30 + -1;
    } while (local_30 != (undefined *)0x0);
  }
  if (iVar11 < 1) {
    local_28 = (undefined1 **)0x596428;
    FUN_00642c50(0x191,&local_31c);
    local_28 = (undefined1 **)0x59643e;
    FUN_004052cc(&local_318,&DAT_00596864,local_31c);
    local_28 = (undefined1 **)0x596452;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_318);
  }
  else {
    local_28 = (undefined1 **)0x5963be;
    FUN_00409dd8(iVar11,&local_310);
    local_28 = (undefined1 **)0x5963ce;
    FUN_00404bac(&local_310,&DAT_0059685c);
    local_28 = (undefined1 **)0x5963df;
    FUN_004051d4(&local_30c,local_310);
    local_28 = (undefined1 **)&local_30c;
    local_2c = (undefined4 *)0x5963f6;
    FUN_00642c50(0x191,&local_314);
    ppuVar4 = local_28;
    local_28 = (undefined1 **)0x596402;
    FUN_0040526c(ppuVar4,local_314);
    local_28 = (undefined1 **)0x596416;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_30c);
  }
  local_28 = (undefined1 **)0x59645e;
  FUN_00466414(DAT_006d2268,0);
  local_28 = (undefined1 **)0x59646e;
  FUN_00466414(*(undefined4 *)(param_1 + 0x3b8),0);
  puVar9 = local_1c;
  *in_FS_OFFSET = (int)local_24;
  local_1c = &LAB_00596703;
  local_20 = (undefined1 *)0x59648b;
  FUN_00405008(&local_31c,3,puVar9);
  local_20 = (undefined1 *)0x596496;
  FUN_004048d4(&local_310);
  local_20 = (undefined1 *)0x5964a1;
  FUN_00404ff0(&local_30c);
  local_20 = (undefined1 *)0x5964b7;
  FUN_00405744(local_308,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5964c2;
  FUN_004048d4(&local_2e8);
  local_20 = (undefined1 *)0x5964cd;
  FUN_00404ff0(&local_2e4);
  local_20 = (undefined1 *)0x5964e3;
  FUN_00405744(local_2e0,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5964ee;
  FUN_004048d4(&local_2c0);
  local_20 = (undefined1 *)0x5964f9;
  FUN_00404ff0(&local_2bc);
  local_20 = (undefined1 *)0x59650f;
  FUN_00405744(local_2b8,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x59651a;
  FUN_00404ff0(&local_278);
  local_20 = (undefined1 *)0x596530;
  FUN_00405744(local_274,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x59653b;
  FUN_00404ff0(&local_234);
  local_20 = (undefined1 *)0x596551;
  FUN_00405744(local_230,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x59655c;
  FUN_00404ff0(&local_210);
  local_20 = (undefined1 *)0x596572;
  FUN_00405744(local_20c,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x59657d;
  FUN_00404ff0(&local_1ec);
  local_20 = (undefined1 *)0x596593;
  FUN_00405744(local_1e8,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x59659e;
  FUN_004048d4(&local_1c8);
  local_20 = (undefined1 *)0x5965a9;
  FUN_00404ff0(&local_1c4);
  local_20 = (undefined1 *)0x5965bf;
  FUN_00405744(local_1c0,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5965ca;
  FUN_00404ff0(&local_1a0);
  local_20 = (undefined1 *)0x5965e0;
  FUN_00405744(local_19c,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5965eb;
  FUN_00404ff0(&local_17c);
  local_20 = (undefined1 *)0x596601;
  FUN_00405744(local_178,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x59660c;
  FUN_004048d4(&local_158);
  local_20 = (undefined1 *)0x596617;
  FUN_00404ff0(&local_154);
  local_20 = (undefined1 *)0x59662d;
  FUN_00405744(local_150,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x596638;
  FUN_004048d4(&local_130);
  local_20 = (undefined1 *)0x596643;
  FUN_00404ff0(&local_12c);
  local_20 = (undefined1 *)0x596659;
  FUN_00405744(local_128,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x596664;
  FUN_00404ff0(&local_e8);
  local_20 = (undefined1 *)0x59667a;
  FUN_00405744(local_e4,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x596685;
  FUN_00404ff0(&local_c4);
  local_20 = (undefined1 *)0x59669b;
  FUN_00405744(local_c0,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x5966a3;
  FUN_004048d4(&local_80);
  local_20 = (undefined1 *)0x5966ab;
  FUN_00404ff0(&local_7c);
  local_20 = (undefined1 *)0x5966be;
  FUN_00405744(local_78,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5966c6;
  FUN_004048d4(&local_58);
  local_20 = (undefined1 *)0x5966ce;
  FUN_00404ff0(&local_54);
  local_20 = (undefined1 *)0x5966db;
  FUN_004048f8(&local_50,3);
  local_20 = (undefined1 *)0x5966e3;
  FUN_004048d4(&local_44);
  local_20 = (undefined1 *)0x5966f0;
  FUN_004048f8(&local_40,3);
  local_20 = (undefined1 *)0x5966f8;
  FUN_004048d4(&local_34);
  return;
}

