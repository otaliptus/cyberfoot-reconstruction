// Address: 005c28f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c28f8(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 local_2c4 [16];
  undefined1 local_2b4 [16];
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined1 local_29c [16];
  undefined1 local_28c [16];
  undefined4 local_27c;
  undefined4 local_278;
  undefined1 local_274 [16];
  undefined1 local_264 [16];
  undefined1 local_254 [16];
  undefined1 local_244 [16];
  undefined4 local_234;
  undefined1 *local_230;
  undefined1 local_22c [16];
  undefined1 local_21c [16];
  undefined1 local_20c [16];
  undefined1 local_1fc [16];
  undefined1 *local_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined4 local_1c8;
  undefined1 *local_1c4;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined4 local_1a0;
  undefined1 *local_19c;
  undefined4 local_198;
  undefined1 local_194 [16];
  undefined1 local_184 [16];
  undefined4 local_174;
  undefined1 *local_170;
  undefined1 local_16c [16];
  undefined1 local_15c [16];
  undefined4 local_14c;
  undefined1 *local_148;
  undefined4 local_144;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined1 *local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined1 *local_f4;
  undefined4 local_f0;
  undefined1 local_ec [16];
  undefined1 local_dc [16];
  undefined1 *local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined4 local_84;
  undefined1 *local_80;
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined4 local_5c;
  undefined4 *local_58;
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 local_c [4];
  undefined4 local_8;
  
  iVar6 = 0x58;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_1c = (undefined1 *)0x5c291f;
  FUN_00405658(&stack0xffffffe8,PTR_DAT_004010e8,5);
  local_20 = &LAB_005c3665;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined1 *)0x5c293b;
  local_1c = &stack0xfffffffc;
  (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1dc))();
  DAT_006d2b90 = 0;
  _DAT_006d2b88 = 0;
  local_28 = (undefined1 *)0x5c2956;
  FUN_00642c50(0x238,&local_1c);
  local_28 = (undefined1 *)0x5c2961;
  thunk_FUN_0040502c(&stack0xffffffe8,local_1c);
  local_28 = (undefined1 *)0x5c296e;
  FUN_00642c50(0x239,&local_20);
  local_28 = (undefined1 *)0x5c2979;
  thunk_FUN_0040502c(&stack0xffffffec,local_20);
  local_28 = (undefined1 *)0x5c2986;
  FUN_00642c50(0x23a,&local_24);
  local_28 = (undefined1 *)0x5c2991;
  thunk_FUN_0040502c(&stack0xfffffff0,local_24);
  local_28 = (undefined1 *)0x5c299e;
  FUN_00642c50(0x23b,&local_28);
  puVar3 = local_28;
  local_28 = (undefined1 *)0x5c29a9;
  thunk_FUN_0040502c(local_c,puVar3);
  local_28 = (undefined1 *)0x5c29b6;
  FUN_00642c50(0x23c,&local_2c);
  local_28 = (undefined1 *)0x5c29c1;
  thunk_FUN_0040502c(&local_8,local_2c);
  local_28 = (undefined1 *)0x5c29ce;
  FUN_005c1c74(*(undefined4 *)(param_1 + 0x334),0);
  local_28 = (undefined1 *)0x5c29da;
  iVar6 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b770);
  if ((iVar6 != 0) && (iVar6 = iVar6 + -1, -1 < iVar6)) {
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b770 + iVar6 * 0x30) == *(int *)(PTR_DAT_0066ac78 + 8)) {
        local_28 = (undefined1 *)0x5c2a21;
        (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1d0))(*(int **)(param_1 + 0x2f8),1);
        local_28 = (undefined1 *)0x5c2a2b;
        FUN_00409dd8(iVar6,&local_34);
        local_28 = (undefined1 *)0x5c2a36;
        FUN_004051d4(&local_30,local_34);
        local_28 = local_30;
        local_2c = (undefined4 *)0x5c2a48;
        iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
        local_2c = (undefined4 *)0x5c2a55;
        FUN_00416244(&local_44,iVar5 + -1,0xfc);
        local_2c = &local_44;
        local_30 = (undefined1 *)0x5c2a66;
        FUN_00416478(local_54,&DAT_005c3680);
        puVar4 = local_2c;
        local_2c = (undefined4 *)0x5c2a75;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_54,puVar4);
        local_2c = *(undefined4 **)(*(int *)PTR_DAT_0066b770 + 0xc + iVar6 * 0x30);
        local_30 = *(undefined1 **)(*(int *)PTR_DAT_0066b770 + 8 + iVar6 * 0x30);
        local_34 = (undefined1 *)0x5c2a8c;
        FUN_0040d11c(&local_5c);
        local_2c = (undefined4 *)0x5c2a97;
        FUN_004051d4(&local_58,local_5c);
        local_2c = local_58;
        local_30 = (undefined1 *)0x5c2aa9;
        iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
        local_30 = (undefined1 *)0x5c2ab6;
        FUN_00416244(local_6c,iVar5 + -1,0xfc);
        local_30 = local_6c;
        local_34 = (undefined1 *)0x5c2ac7;
        FUN_00416478(local_7c,"nxdata");
        puVar3 = local_30;
        local_30 = (undefined1 *)0x5c2ad6;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_7c,puVar3);
        switch(*(undefined4 *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30)) {
        default:
          local_30 = *(undefined1 **)
                      (PTR_DAT_0066b304 +
                      *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4);
          local_34 = (undefined1 *)0x5c31eb;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c31fb;
          FUN_00416244(local_21c,iVar5 + -1,0xfc);
          local_34 = local_21c;
          puStack_38 = (undefined *)0x5c3212;
          FUN_00416478(local_22c,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c3224;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_22c,puVar3);
          break;
        case 1:
          local_30 = (undefined1 *)0x5c2b5e;
          FUN_00405194(&local_84,*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
          local_30 = (undefined1 *)0x5c2b7e;
          FUN_004052cc(&local_80,
                       *(undefined4 *)
                        (PTR_DAT_0066b304 +
                        *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4),local_84)
          ;
          local_30 = local_80;
          local_34 = (undefined1 *)0x5c2b90;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c2ba0;
          FUN_00416244(local_94,iVar5 + -1,0xfc);
          local_34 = local_94;
          puStack_38 = (undefined *)0x5c2bb7;
          FUN_00416478(local_a4,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c2bc9;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_a4,puVar3);
          break;
        case 2:
          local_30 = (undefined1 *)0x5c2bf1;
          FUN_00405194(&local_a8,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x1c + iVar6 * 0x30) * 0x130);
          local_30 = (undefined1 *)0x5c2c12;
          FUN_0040526c(&local_a8,
                       *(undefined4 *)
                        (PTR_DAT_0066b304 +
                        *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4));
          local_30 = local_a8;
          local_34 = (undefined1 *)0x5c2c27;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c2c37;
          FUN_00416244(local_b8,iVar5 + -1,0xfc);
          local_34 = local_b8;
          puStack_38 = (undefined *)0x5c2c4e;
          FUN_00416478(local_c8,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c2c60;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_c8,puVar3);
          break;
        case 4:
          local_30 = (undefined1 *)0x5c2c88;
          FUN_00405194(&local_cc,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x1c + iVar6 * 0x30) * 0x130);
          local_30 = (undefined1 *)0x5c2ca9;
          FUN_0040526c(&local_cc,
                       *(undefined4 *)
                        (PTR_DAT_0066b304 +
                        *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4));
          local_30 = local_cc;
          local_34 = (undefined1 *)0x5c2cbe;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c2cce;
          FUN_00416244(local_dc,iVar5 + -1,0xfc);
          local_34 = local_dc;
          puStack_38 = (undefined *)0x5c2ce5;
          FUN_00416478(local_ec,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c2cf7;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_ec,puVar3);
          break;
        case 8:
          local_30 = (undefined1 *)0x5c2d1f;
          FUN_00405194(&local_f4,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x1c + iVar6 * 0x30) * 0x130);
          local_30 = local_f4;
          local_34 = *(undefined1 **)
                      (PTR_DAT_0066b304 +
                      *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4);
          puStack_38 = (undefined *)0x5c2d5d;
          FUN_00405194(&local_f8,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x20 + iVar6 * 0x30) * 0x2f8);
          puStack_38 = (undefined *)local_f8;
          uStack_3c = 0x5c2d73;
          FUN_00405330(&local_f0,3);
          uStack_3c = local_f0;
          uStack_40 = 0x5c2d88;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c2d98;
          FUN_00416244(local_108,iVar5 + -1,0xfc);
          local_34 = local_108;
          puStack_38 = (undefined *)0x5c2daf;
          FUN_00416478(local_118,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c2dc1;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_118,puVar3);
          break;
        case 9:
          local_30 = (undefined1 *)0x5c2de9;
          FUN_00405194(&local_120,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x1c + iVar6 * 0x30) * 0x130);
          local_30 = (undefined1 *)0x5c2e0f;
          FUN_004052cc(&local_11c,
                       *(undefined4 *)
                        (PTR_DAT_0066b304 +
                        *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4),local_120
                      );
          local_30 = local_11c;
          local_34 = (undefined1 *)0x5c2e24;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c2e34;
          FUN_00416244(local_130,iVar5 + -1,0xfc);
          local_34 = local_130;
          puStack_38 = (undefined *)0x5c2e4b;
          FUN_00416478(local_140,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c2e5d;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_140,puVar3);
          break;
        case 0xd:
          local_30 = *(undefined1 **)
                      (PTR_DAT_0066b304 +
                      *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4);
          local_34 = (undefined1 *)0x5c2e9a;
          FUN_00405194(&local_148,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x1c + iVar6 * 0x30) * 0x130);
          local_34 = local_148;
          puStack_38 = &DAT_005c36a8;
          uStack_3c = 0x5c2ec8;
          FUN_00405194(&local_14c,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x20 + iVar6 * 0x30) * 0x130);
          uStack_3c = local_14c;
          uStack_40 = 0x5c2ede;
          FUN_00405330(&local_144,4);
          uStack_40 = local_144;
          local_44 = 0x5c2ef3;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c2f03;
          FUN_00416244(local_15c,iVar5 + -1,0xfc);
          local_34 = local_15c;
          puStack_38 = (undefined *)0x5c2f1a;
          FUN_00416478(local_16c,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c2f2c;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_16c,puVar3);
          break;
        case 0xe:
          local_30 = (undefined1 *)0x5c2f54;
          FUN_00405194(&local_174,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x1c + iVar6 * 0x30) * 0x130);
          local_30 = (undefined1 *)0x5c2f7a;
          FUN_004052cc(&local_170,
                       *(undefined4 *)
                        (PTR_DAT_0066b304 +
                        *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4),local_174
                      );
          local_30 = local_170;
          local_34 = (undefined1 *)0x5c2f8f;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c2f9f;
          FUN_00416244(local_184,iVar5 + -1,0xfc);
          local_34 = local_184;
          puStack_38 = (undefined *)0x5c2fb6;
          FUN_00416478(local_194,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c2fc8;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_194,puVar3);
          break;
        case 0xf:
          local_30 = (undefined1 *)0x5c2ff0;
          FUN_00405194(&local_19c,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x1c + iVar6 * 0x30) * 0x130);
          local_30 = local_19c;
          local_34 = *(undefined1 **)
                      (PTR_DAT_0066b304 +
                      *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4);
          puStack_38 = (undefined *)0x5c302e;
          FUN_00405194(&local_1a0,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x20 + iVar6 * 0x30) * 0x2f8);
          puStack_38 = (undefined *)local_1a0;
          uStack_3c = 0x5c3044;
          FUN_00405330(&local_198,3);
          uStack_3c = local_198;
          uStack_40 = 0x5c3059;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c3069;
          FUN_00416244(local_1b0,iVar5 + -1,0xfc);
          local_34 = local_1b0;
          puStack_38 = (undefined *)0x5c3080;
          FUN_00416478(local_1c0,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c3092;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_1c0,puVar3);
          break;
        case 0x10:
        case 0x11:
        case 0x12:
          local_30 = (undefined1 *)0x5c30ba;
          FUN_00405194(&local_1c8,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x1c + iVar6 * 0x30) * 0x130);
          local_30 = (undefined1 *)0x5c30e0;
          FUN_004052cc(&local_1c4,
                       *(undefined4 *)
                        (PTR_DAT_0066b304 +
                        *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4),local_1c8
                      );
          local_30 = local_1c4;
          local_34 = (undefined1 *)0x5c30f5;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c3105;
          FUN_00416244(local_1d8,iVar5 + -1,0xfc);
          local_34 = local_1d8;
          puStack_38 = (undefined *)0x5c311c;
          FUN_00416478(local_1e8,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c312e;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_1e8,puVar3);
          break;
        case 0x13:
          local_30 = (undefined1 *)0x5c3156;
          FUN_00405194(&local_1ec,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x1c + iVar6 * 0x30) * 0x130);
          local_30 = (undefined1 *)0x5c3177;
          FUN_0040526c(&local_1ec,
                       *(undefined4 *)
                        (PTR_DAT_0066b304 +
                        *(int *)(*(int *)PTR_DAT_0066b770 + 0x18 + iVar6 * 0x30) * 4 + -4));
          local_30 = local_1ec;
          local_34 = (undefined1 *)0x5c318c;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          local_34 = (undefined1 *)0x5c319c;
          FUN_00416244(local_1fc,iVar5 + -1,0xfc);
          local_34 = local_1fc;
          puStack_38 = (undefined *)0x5c31b3;
          FUN_00416478(local_20c,"assunto");
          puVar3 = local_34;
          local_34 = (undefined1 *)0x5c31c5;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_20c,puVar3);
        }
        if (*(int *)(*(int *)PTR_DAT_0066b770 + 0x14 + iVar6 * 0x30) == 3) {
          local_34 = (undefined1 *)0x5c3259;
          FUN_00405194(&local_234,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b770 + 0x1c + iVar6 * 0x30) * 0x130);
          local_34 = (undefined1 *)0x5c3279;
          FUN_004052cc(&local_230,
                       (&local_1c)[*(int *)(*(int *)PTR_DAT_0066b770 + 0x14 + iVar6 * 0x30)],
                       local_234);
          local_34 = local_230;
          puStack_38 = (undefined *)0x5c328e;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          puStack_38 = (undefined *)0x5c329e;
          FUN_00416244(local_244,iVar5 + -1,0xfc);
          puStack_38 = local_244;
          uStack_3c = 0x5c32b5;
          FUN_00416478(local_254,&DAT_005c36b8);
          puVar2 = puStack_38;
          puStack_38 = (undefined *)0x5c32c7;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_254,puVar2);
        }
        else {
          local_34 = (&local_1c)[*(int *)(*(int *)PTR_DAT_0066b770 + 0x14 + iVar6 * 0x30)];
          puStack_38 = (undefined *)0x5c32e7;
          iVar5 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
          puStack_38 = (undefined *)0x5c32f7;
          FUN_00416244(local_264,iVar5 + -1,0xfc);
          puStack_38 = local_264;
          uStack_3c = 0x5c330e;
          FUN_00416478(local_274,&DAT_005c36b8);
          puVar2 = puStack_38;
          puStack_38 = (undefined *)0x5c3320;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_274,puVar2);
        }
        if (*(char *)(*(int *)PTR_DAT_0066b770 + 0x28 + iVar6 * 0x30) == '\0') {
          puStack_38 = (undefined *)0x5c333b;
          FUN_00409dd8(0,&local_27c);
          puStack_38 = (undefined *)0x5c334c;
          FUN_004051d4(&local_278,local_27c);
          puStack_38 = (undefined *)local_278;
          piVar1 = *(int **)(param_1 + 0x2f8);
          uStack_3c = 0x5c3363;
          iVar5 = (**(code **)(*piVar1 + 0x11c))();
          local_28 = (undefined1 *)0x5c3373;
          FUN_00416244(local_28c,iVar5 + -1,0xfc);
          local_28 = local_28c;
          local_2c = (undefined4 *)0x5c338a;
          FUN_00416478(local_29c,&DAT_005c36c8);
          puVar3 = local_28;
          local_28 = (undefined1 *)0x5c3398;
          FUN_0050e9b8(piVar1,local_29c,puVar3);
        }
        else {
          puStack_38 = (undefined *)0x5c33aa;
          FUN_00409dd8(1,&local_2a4);
          puStack_38 = (undefined *)0x5c33bb;
          FUN_004051d4(&local_2a0,local_2a4);
          puStack_38 = (undefined *)local_2a0;
          piVar1 = *(int **)(param_1 + 0x2f8);
          uStack_3c = 0x5c33d2;
          iVar5 = (**(code **)(*piVar1 + 0x11c))();
          local_28 = (undefined1 *)0x5c33e2;
          FUN_00416244(local_2b4,iVar5 + -1,0xfc);
          local_28 = local_2b4;
          local_2c = (undefined4 *)0x5c33f9;
          FUN_00416478(local_2c4,&DAT_005c36c8);
          puVar3 = local_28;
          local_28 = (undefined1 *)0x5c3407;
          FUN_0050e9b8(piVar1,local_2c4,puVar3);
        }
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != -1);
  }
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005c366f;
  local_20 = (undefined1 *)0x5c3434;
  FUN_00405744(local_2c4,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c343f;
  FUN_004048d4(&local_2a4);
  local_20 = (undefined1 *)0x5c344a;
  FUN_00404ff0(&local_2a0);
  local_20 = (undefined1 *)0x5c3460;
  FUN_00405744(local_29c,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c346b;
  FUN_004048d4(&local_27c);
  local_20 = (undefined1 *)0x5c3476;
  FUN_00404ff0(&local_278);
  local_20 = (undefined1 *)0x5c348c;
  FUN_00405744(local_274,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x5c349c;
  FUN_00405008(&local_234,2);
  local_20 = (undefined1 *)0x5c34b2;
  FUN_00405744(local_22c,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x5c34bd;
  FUN_00404ff0(&local_1ec);
  local_20 = (undefined1 *)0x5c34d3;
  FUN_00405744(local_1e8,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c34e3;
  FUN_00405008(&local_1c8,2);
  local_20 = (undefined1 *)0x5c34f9;
  FUN_00405744(local_1c0,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c3509;
  FUN_00405008(&local_1a0,3);
  local_20 = (undefined1 *)0x5c351f;
  FUN_00405744(local_194,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c352f;
  FUN_00405008(&local_174,2);
  local_20 = (undefined1 *)0x5c3545;
  FUN_00405744(local_16c,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c3555;
  FUN_00405008(&local_14c,3);
  local_20 = (undefined1 *)0x5c356b;
  FUN_00405744(local_140,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c357b;
  FUN_00405008(&local_120,2);
  local_20 = (undefined1 *)0x5c3591;
  FUN_00405744(local_118,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c35a1;
  FUN_00405008(&local_f8,3);
  local_20 = (undefined1 *)0x5c35b7;
  FUN_00405744(local_ec,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c35c2;
  FUN_00404ff0(&local_cc);
  local_20 = (undefined1 *)0x5c35d8;
  FUN_00405744(local_c8,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c35e3;
  FUN_00404ff0(&local_a8);
  local_20 = (undefined1 *)0x5c35f9;
  FUN_00405744(local_a4,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c3606;
  FUN_00405008(&local_84,2);
  local_20 = (undefined1 *)0x5c3619;
  FUN_00405744(local_7c,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c3621;
  FUN_004048d4(&local_5c);
  local_20 = (undefined1 *)0x5c3629;
  FUN_00404ff0(&local_58);
  local_20 = (undefined1 *)0x5c363c;
  FUN_00405744(local_54,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5c3644;
  FUN_004048d4(&local_34);
  local_20 = (undefined1 *)0x5c3651;
  FUN_00405008(&local_30,6);
  local_20 = (undefined1 *)0x5c3664;
  FUN_00405744(&stack0xffffffe8,PTR_DAT_004010e8,5);
  return;
}

