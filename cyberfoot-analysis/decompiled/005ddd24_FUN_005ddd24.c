// Address: 005ddd24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ddd24(int param_1,int param_2)

{
  int *piVar1;
  undefined1 **ppuVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int iVar8;
  int *in_FS_OFFSET;
  undefined1 local_2e4 [16];
  undefined1 local_2d4 [16];
  undefined4 local_2c4;
  undefined **local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined1 **local_2b4;
  undefined4 local_2b0;
  undefined1 local_2ac [16];
  undefined1 local_29c [16];
  undefined1 local_28c [16];
  undefined1 local_27c [16];
  undefined4 local_26c;
  undefined **local_268;
  undefined1 local_264 [16];
  undefined1 local_254 [16];
  undefined1 local_244 [16];
  undefined1 local_234 [16];
  undefined4 local_224;
  undefined4 local_220;
  undefined1 local_21c [16];
  undefined1 local_20c [16];
  undefined1 local_1fc [16];
  undefined1 local_1ec [16];
  undefined4 local_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  int local_1b4;
  undefined1 local_1b0 [52];
  undefined1 local_17c [48];
  undefined1 local_14c [24];
  undefined4 local_134;
  undefined4 local_130;
  undefined1 **local_12c;
  undefined4 local_128;
  undefined1 local_124 [16];
  undefined1 local_114 [16];
  undefined1 local_104 [16];
  undefined1 local_f4 [16];
  undefined1 local_e4 [56];
  undefined1 local_ac [32];
  undefined1 **local_8c;
  undefined1 local_88 [16];
  undefined1 *local_78 [4];
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 **local_38;
  undefined **local_34;
  undefined **local_30;
  undefined4 *local_2c;
  undefined1 **local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int iVar9;
  
  local_1c = &stack0xfffffffc;
  iVar7 = 0x5c;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = &LAB_005dea21;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = (undefined1 **)0x5ddd57;
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1dc))();
  local_28 = (undefined1 **)0x5ddd5f;
  FUN_00404ff0(&stack0xffffffe8);
  iVar8 = -1;
  local_20 = (undefined1 *)0xffffffff;
  local_1c = (undefined1 *)0xffffffff;
  iVar7 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294);
  if ((*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294) == 0x1d) &&
     (PTR_DAT_0066ac78[0x75c] != '\0')) {
    iVar7 = 4;
  }
  if (0 < iVar7) {
    iVar9 = 1;
    local_30 = &PTR_s_5_000_000_0066a374;
    local_24 = iVar7;
    do {
      local_28 = (undefined1 **)0x5ddde8;
      (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1d0))(*(int **)(param_1 + 0x2fc),1);
      local_28 = (undefined1 **)0x5dddf6;
      FUN_00642c50(iVar9 + 0x22,&local_38);
      local_28 = local_38;
      piVar1 = *(int **)(param_1 + 0x2fc);
      local_2c = (undefined4 *)0x5dde0a;
      iVar7 = (**(code **)(*piVar1 + 0x11c))();
      local_28 = (undefined1 **)0x5dde17;
      FUN_00416244(&local_48,iVar7 + -1,0xfc);
      local_28 = (undefined1 **)&local_48;
      local_2c = (undefined4 *)0x5dde28;
      FUN_00416478(local_58,"nxinfo1");
      ppuVar2 = local_28;
      local_28 = (undefined1 **)0x5dde33;
      FUN_0050e9b8(piVar1,local_58,ppuVar2);
      iVar7 = 1;
      local_2c = local_28;
      local_34 = local_30;
      do {
        if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
          local_28 = (undefined1 **)&DAT_005dea4c;
          local_2c = (undefined4 *)*local_2c;
          local_30 = (undefined **)&DAT_005dea58;
          local_34 = (undefined **)0x5dde6e;
          FUN_00404c64(&local_5c,3);
          local_34 = (undefined **)0x5dde79;
          FUN_004051d4(&stack0xffffffec,local_5c);
        }
        else {
          local_28 = (undefined1 **)&DAT_005dea4c;
          local_2c = (undefined4 *)*local_34;
          local_30 = (undefined **)&DAT_005dea58;
          local_34 = (undefined **)0x5dde97;
          FUN_00404c64(&local_60,3);
          local_34 = (undefined **)0x5ddea2;
          FUN_004051d4(&stack0xffffffec,local_60);
        }
        local_34 = (undefined **)0x5ddeb5;
        (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1d0))(*(int **)(param_1 + 0x2fc),1);
        local_34 = (undefined **)0x5ddebf;
        FUN_00409dd8(iVar7,&local_68);
        local_34 = (undefined **)0x5ddeca;
        FUN_004051d4(&local_64,local_68);
        local_34 = (undefined **)local_64;
        piVar1 = *(int **)(param_1 + 0x2fc);
        local_38 = (undefined1 **)0x5ddede;
        iVar8 = (**(code **)(*piVar1 + 0x11c))();
        local_38 = (undefined1 **)0x5ddeeb;
        FUN_00416244(local_78,iVar8 + -1,0xfc);
        local_38 = local_78;
        iStack_3c = 0x5ddeff;
        FUN_00416478(local_88,"nximg1");
        ppuVar2 = local_38;
        local_38 = (undefined1 **)0x5ddf0d;
        FUN_0050e9b8(piVar1,local_88,ppuVar2);
        local_38 = (undefined1 **)0x1;
        uStack_40 = 0x5ddf36;
        iStack_3c = iVar9;
        iVar8 = FUN_006452f0(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294),
                             iVar7,DAT_006d34b8);
        local_38 = (undefined1 **)0x1;
        uStack_40 = 0x5ddf61;
        iStack_3c = iVar9;
        iVar5 = FUN_00645380(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294),
                             iVar7,DAT_006d34b8);
        local_38 = (undefined1 **)0x5ddf7d;
        FUN_004030d4(local_ac,*(int *)PTR_DAT_0066af70 + iVar8 * 0x2f8);
        local_38 = (undefined1 **)0x5ddf8f;
        FUN_004030a4(local_ac,&DAT_005dea6c,0x1c);
        local_38 = (undefined1 **)0x5ddfa0;
        FUN_004030d4(local_e4,local_ac);
        local_38 = (undefined1 **)0x5ddfbe;
        FUN_004030a4(local_e4,*(int *)PTR_DAT_0066b718 + iVar5 * 0x80,0x35);
        local_38 = (undefined1 **)0x5ddfcf;
        FUN_00405194(&local_8c,local_e4);
        local_38 = (undefined1 **)0x5ddfdd;
        FUN_0040526c(&local_8c,unaff_ESI);
        local_38 = local_8c;
        iStack_3c = 0x5ddff2;
        iVar5 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
        local_28 = (undefined1 **)0x5de002;
        FUN_00416244(local_f4,iVar5 + -1,0xfc);
        local_28 = (undefined1 **)local_f4;
        local_2c = (undefined4 *)0x5de019;
        FUN_00416478(local_104,"nxinfo1");
        ppuVar2 = local_28;
        local_28 = (undefined1 **)0x5de02b;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_104,ppuVar2);
        local_28 = (undefined1 **)0x5de034;
        FUN_005d9cf0(param_1,iVar8);
        iVar7 = iVar7 + 1;
        local_34 = (undefined **)((int)local_34 + 4);
        local_2c = (undefined4 *)((int)local_2c + 4);
      } while (iVar7 != 3);
      local_28 = (undefined1 **)0xffffffff;
      local_2c = (undefined4 *)0xffffffff;
      local_30 = (undefined **)0x5de06d;
      uVar6 = FUN_0064dee4(1,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294),
                           iVar9);
      local_28 = (undefined1 **)0x5de078;
      iVar7 = FUN_006575ac(uVar6,DAT_006d34b8);
      if (-1 < iVar7) {
        local_28 = (undefined1 **)0x5de08a;
        FUN_00404ff0(&stack0xffffffec);
        if (iVar9 == 1) {
          local_28 = (undefined1 **)0x5de09d;
          thunk_FUN_0040502c(&stack0xffffffec,L" - $1 500 000");
        }
        local_28 = (undefined1 **)0x5de0b0;
        (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1d0))(*(int **)(param_1 + 0x2fc),1);
        local_28 = (undefined1 **)&DAT_005dea94;
        local_2c = (undefined4 *)0x5de0c3;
        iVar5 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
        local_2c = (undefined4 *)0x5de0d3;
        FUN_00416244(local_114,iVar5 + -1,0xfc);
        local_2c = (undefined4 *)local_114;
        local_30 = (undefined **)0x5de0ea;
        FUN_00416478(local_124,"nximg1");
        puVar4 = local_2c;
        local_2c = (undefined4 *)0x5de0fc;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_124,puVar4);
        local_2c = (undefined4 *)0x5de126;
        FUN_004030d4(local_14c,
                     *(int *)PTR_DAT_0066b5b8 +
                     *(int *)(*(int *)PTR_DAT_0066b560 + 0xc + iVar7 * 0x1c) * 0x130);
        local_2c = (undefined4 *)0x5de138;
        FUN_004030a4(local_14c,&DAT_005dea98,0x16);
        local_2c = (undefined4 *)0x5de149;
        FUN_004030d4(local_17c,local_14c);
        local_2c = (undefined4 *)0x5de175;
        FUN_004030a4(local_17c,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066b560 + 8 + iVar7 * 0x1c) * 0x2f8,0x2f);
        local_2c = (undefined4 *)0x5de186;
        FUN_004030d4(local_1b0,local_17c);
        local_2c = (undefined4 *)0x5de198;
        FUN_004030a4(local_1b0,&DAT_005dea6c,0x32);
        local_2c = (undefined4 *)0x5de1a9;
        FUN_00404b48(&local_134,local_1b0);
        local_2c = (undefined4 *)local_134;
        local_30 = (undefined **)0x5de1cd;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b560 + 0x14 + iVar7 * 0x1c),&local_1b4);
        local_30 = (undefined **)local_1b4;
        local_34 = (undefined **)&DAT_005deaa4;
        local_38 = (undefined1 **)0x5de1e8;
        FUN_00404c64(&local_130,3);
        local_38 = (undefined1 **)0x5de1f9;
        FUN_004051d4(&local_12c,local_130);
        local_38 = local_12c;
        iStack_3c = 0x5de20f;
        FUN_00642c50(0x188,&local_1b8);
        iStack_3c = local_1b8;
        puStack_44 = &DAT_005deaac;
        local_48 = 0x5de22d;
        uStack_40 = unaff_ESI;
        FUN_00405330(&local_128,4);
        local_48 = local_128;
        uStack_4c = 0x5de242;
        iVar7 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
        local_28 = (undefined1 **)0x5de252;
        FUN_00416244(local_1c8,iVar7 + -1,0xfc);
        local_28 = (undefined1 **)local_1c8;
        local_2c = (undefined4 *)0x5de269;
        FUN_00416478(local_1d8,"nxinfo1");
        ppuVar2 = local_28;
        local_28 = (undefined1 **)0x5de27b;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_1d8,ppuVar2);
      }
      iVar9 = iVar9 + 1;
      local_30 = (undefined **)((int)local_30 + 8);
      local_28 = (undefined1 **)((int)local_28 + 8);
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  if (PTR_DAT_0066ac78[0x10e] == '\0') goto LAB_005de89d;
  local_28 = (undefined1 **)0x5de2b4;
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1d0))(*(int **)(param_1 + 0x2fc),1);
  local_28 = (undefined1 **)0x5de2d5;
  FUN_006458c8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294),&local_1dc);
  local_28 = (undefined1 **)local_1dc;
  piVar1 = *(int **)(param_1 + 0x2fc);
  local_2c = (undefined4 *)0x5de2ec;
  iVar7 = (**(code **)(*piVar1 + 0x11c))();
  local_2c = (undefined4 *)0x5de2fc;
  FUN_00416244(local_1ec,iVar7 + -1,0xfc);
  local_2c = (undefined4 *)local_1ec;
  local_30 = (undefined **)0x5de313;
  FUN_00416478(local_1fc,"nxinfo1");
  puVar4 = local_2c;
  local_2c = (undefined4 *)0x5de321;
  FUN_0050e9b8(piVar1,local_1fc,puVar4);
  local_2c = (undefined4 *)0x5de334;
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1d0))(*(int **)(param_1 + 0x2fc),1);
  local_2c = (undefined4 *)&DAT_005deab4;
  piVar1 = *(int **)(param_1 + 0x2fc);
  local_30 = (undefined **)0x5de349;
  iVar7 = (**(code **)(*piVar1 + 0x11c))();
  local_30 = (undefined **)0x5de359;
  FUN_00416244(local_20c,iVar7 + -1,0xfc);
  local_30 = (undefined **)local_20c;
  local_34 = (undefined **)0x5de370;
  FUN_00416478(local_21c,"nximg1");
  ppuVar3 = local_30;
  local_30 = (undefined **)0x5de37e;
  FUN_0050e9b8(piVar1,local_21c,ppuVar3);
  local_30 = (undefined **)DAT_006d34b8;
  local_34 = (undefined **)0x2;
  local_38 = &local_20;
  iStack_3c = 0x5de3ac;
  FUN_005d9c4c(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294),1);
  if (-1 < iVar8) {
    if (*(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + (int)local_1c * 0x14) < 0) {
LAB_005de413:
      local_30 = (undefined **)0x5de41b;
      FUN_00404ff0(&stack0xffffffe8);
    }
    else {
      local_30 = (undefined **)0x5de3d5;
      iVar7 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718);
      if (iVar7 <= *(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + (int)local_1c * 0x14))
      goto LAB_005de413;
      local_30 = (undefined **)0x5de411;
      FUN_00405194(&stack0xffffffe8,
                   *(int *)PTR_DAT_0066b718 +
                   *(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + (int)local_1c * 0x14) * 0x80);
    }
    local_30 = (undefined **)0x5de435;
    FUN_004030d4(local_ac,*(int *)PTR_DAT_0066af70 + (int)local_20 * 0x2f8);
    local_30 = (undefined **)0x5de447;
    FUN_004030a4(local_ac,&DAT_005dea6c,0x1c);
    local_30 = (undefined **)0x5de458;
    FUN_00405194(&local_224,local_ac);
    local_30 = (undefined **)local_224;
    local_38 = (undefined1 **)0x5deabc;
    iStack_3c = 0x5de476;
    FUN_00405330(&local_220,3);
    iStack_3c = local_220;
    uStack_40 = 0x5de48b;
    iVar7 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
    local_30 = (undefined **)0x5de49b;
    FUN_00416244(local_234,iVar7 + -1,0xfc);
    local_30 = (undefined **)local_234;
    local_34 = (undefined **)0x5de4b2;
    FUN_00416478(local_244,"nxinfo1");
    ppuVar3 = local_30;
    local_30 = (undefined **)0x5de4c4;
    FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_244,ppuVar3);
    local_30 = (undefined **)0x5de4ce;
    FUN_005d9cf0(param_1,local_20);
  }
  local_30 = (undefined **)0x5de4e1;
  (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1d0))(*(int **)(param_1 + 0x2fc),1);
  local_30 = (undefined **)&DAT_005deadc;
  piVar1 = *(int **)(param_1 + 0x2fc);
  local_34 = (undefined **)0x5de4f6;
  iVar7 = (**(code **)(*piVar1 + 0x11c))();
  local_28 = (undefined1 **)0x5de506;
  FUN_00416244(local_254,iVar7 + -1,0xfc);
  local_28 = (undefined1 **)local_254;
  local_2c = (undefined4 *)0x5de51d;
  FUN_00416478(local_264,"nximg1");
  ppuVar2 = local_28;
  local_28 = (undefined1 **)0x5de52b;
  FUN_0050e9b8(piVar1,local_264,ppuVar2);
  local_28 = (undefined1 **)DAT_006d34b8;
  local_2c = (undefined4 *)0x2;
  local_30 = &local_20;
  local_34 = (undefined **)0x5de559;
  FUN_005d9c4c(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294),2);
  if (-1 < iVar8) {
    if (*(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + (int)local_1c * 0x14) < 0) {
LAB_005de5c0:
      local_28 = (undefined1 **)0x5de5c8;
      FUN_00404ff0(&stack0xffffffe8);
    }
    else {
      local_28 = (undefined1 **)0x5de582;
      iVar7 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718);
      if (iVar7 <= *(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + (int)local_1c * 0x14))
      goto LAB_005de5c0;
      local_28 = (undefined1 **)0x5de5be;
      FUN_00405194(&stack0xffffffe8,
                   *(int *)PTR_DAT_0066b718 +
                   *(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + (int)local_1c * 0x14) * 0x80);
    }
    local_28 = (undefined1 **)0x5de5e2;
    FUN_004030d4(local_ac,*(int *)PTR_DAT_0066af70 + (int)local_20 * 0x2f8);
    local_28 = (undefined1 **)0x5de5f4;
    FUN_004030a4(local_ac,&DAT_005dea6c,0x1c);
    local_28 = (undefined1 **)0x5de605;
    FUN_00405194(&local_26c,local_ac);
    local_28 = (undefined1 **)local_26c;
    local_30 = (undefined **)0x5deae4;
    local_34 = (undefined **)0x5de623;
    FUN_00405330(&local_268,3);
    local_34 = local_268;
    local_38 = (undefined1 **)0x5de638;
    iVar7 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
    local_28 = (undefined1 **)0x5de648;
    FUN_00416244(local_27c,iVar7 + -1,0xfc);
    local_28 = (undefined1 **)local_27c;
    local_2c = (undefined4 *)0x5de65f;
    FUN_00416478(local_28c,"nxinfo1");
    ppuVar2 = local_28;
    local_28 = (undefined1 **)0x5de671;
    FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_28c,ppuVar2);
    local_28 = (undefined1 **)0x5de67b;
    FUN_005d9cf0(param_1,local_20);
  }
  local_28 = (undefined1 **)0xffffffff;
  local_2c = (undefined4 *)0xffffffff;
  local_30 = (undefined **)0x5de6a2;
  uVar6 = FUN_0064dee4(2,*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294),
                       0xffffffff);
  local_28 = (undefined1 **)0x5de6ad;
  iVar7 = FUN_006575ac(uVar6,DAT_006d34b8);
  if (-1 < iVar7) {
    local_28 = (undefined1 **)0x5de6bf;
    FUN_00404ff0(&stack0xffffffec);
    local_28 = (undefined1 **)0x5de6d2;
    (**(code **)(**(int **)(param_1 + 0x2fc) + 0x1d0))(*(int **)(param_1 + 0x2fc),1);
    local_28 = (undefined1 **)&DAT_005dea94;
    local_2c = (undefined4 *)0x5de6e5;
    iVar8 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
    local_2c = (undefined4 *)0x5de6f5;
    FUN_00416244(local_29c,iVar8 + -1,0xfc);
    local_2c = (undefined4 *)local_29c;
    local_30 = (undefined **)0x5de70c;
    FUN_00416478(local_2ac,"nximg1");
    puVar4 = local_2c;
    local_2c = (undefined4 *)0x5de71e;
    FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_2ac,puVar4);
    local_2c = (undefined4 *)0x5de748;
    FUN_004030d4(local_14c,
                 *(int *)PTR_DAT_0066b5b8 +
                 *(int *)(*(int *)PTR_DAT_0066b560 + 0xc + iVar7 * 0x1c) * 0x130);
    local_2c = (undefined4 *)0x5de75a;
    FUN_004030a4(local_14c,&DAT_005dea98,0x16);
    local_2c = (undefined4 *)0x5de76b;
    FUN_004030d4(local_17c,local_14c);
    local_2c = (undefined4 *)0x5de797;
    FUN_004030a4(local_17c,
                 *(int *)PTR_DAT_0066af70 +
                 *(int *)(*(int *)PTR_DAT_0066b560 + 8 + iVar7 * 0x1c) * 0x2f8,0x2f);
    local_2c = (undefined4 *)0x5de7a8;
    FUN_004030d4(local_1b0,local_17c);
    local_2c = (undefined4 *)0x5de7ba;
    FUN_004030a4(local_1b0,&DAT_005dea6c,0x32);
    local_2c = (undefined4 *)0x5de7cb;
    FUN_00404b48(&local_2bc,local_1b0);
    local_2c = (undefined4 *)local_2bc;
    local_30 = (undefined **)0x5de7ef;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b560 + 0x14 + iVar7 * 0x1c),&local_2c0);
    local_30 = local_2c0;
    local_34 = (undefined **)&DAT_005deaa4;
    local_38 = (undefined1 **)0x5de80a;
    FUN_00404c64(&local_2b8,3);
    local_38 = (undefined1 **)0x5de81b;
    FUN_004051d4(&local_2b4,local_2b8);
    local_38 = local_2b4;
    iStack_3c = 0x5de831;
    FUN_00642c50(0x188,&local_2c4);
    iStack_3c = local_2c4;
    puStack_44 = &DAT_005deaac;
    local_48 = 0x5de84f;
    uStack_40 = unaff_ESI;
    FUN_00405330(&local_2b0,4);
    local_48 = local_2b0;
    uStack_4c = 0x5de864;
    iVar7 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0x11c))();
    local_28 = (undefined1 **)0x5de874;
    FUN_00416244(local_2d4,iVar7 + -1,0xfc);
    local_28 = (undefined1 **)local_2d4;
    local_2c = (undefined4 *)0x5de88b;
    FUN_00416478(local_2e4,"nxinfo1");
    ppuVar2 = local_28;
    local_28 = (undefined1 **)0x5de89d;
    FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2fc),local_2e4,ppuVar2);
  }
LAB_005de89d:
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005dea2b;
  local_20 = (undefined1 *)0x5de8c0;
  FUN_00405744(local_2e4,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5de8cb;
  FUN_00404ff0(&local_2c4);
  local_20 = (undefined1 *)0x5de8db;
  FUN_004048f8(&local_2c0,3);
  local_20 = (undefined1 *)0x5de8eb;
  FUN_00405008(&local_2b4,2);
  local_20 = (undefined1 *)0x5de901;
  FUN_00405744(local_2ac,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x5de911;
  FUN_00405008(&local_26c,2);
  local_20 = (undefined1 *)0x5de927;
  FUN_00405744(local_264,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x5de937;
  FUN_00405008(&local_224,2);
  local_20 = (undefined1 *)0x5de94d;
  FUN_00405744(local_21c,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x5de958;
  FUN_00404ff0(&local_1dc);
  local_20 = (undefined1 *)0x5de96e;
  FUN_00405744(local_1d8,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5de979;
  FUN_00404ff0(&local_1b8);
  local_20 = (undefined1 *)0x5de984;
  FUN_004048d4(&local_1b4);
  local_20 = (undefined1 *)0x5de994;
  FUN_004048f8(&local_134,2);
  local_20 = (undefined1 *)0x5de9a4;
  FUN_00405008(&local_12c,2);
  local_20 = (undefined1 *)0x5de9ba;
  FUN_00405744(local_124,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x5de9c5;
  FUN_00404ff0(&local_8c);
  local_20 = (undefined1 *)0x5de9db;
  FUN_00405744(local_88,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5de9e3;
  FUN_004048d4(&local_68);
  local_20 = (undefined1 *)0x5de9eb;
  FUN_00404ff0(&local_64);
  local_20 = (undefined1 *)0x5de9f8;
  FUN_004048f8(&local_60,2);
  local_20 = (undefined1 *)0x5dea0b;
  FUN_00405744(local_58,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5dea13;
  FUN_00404ff0(&local_38);
  local_20 = (undefined1 *)0x5dea20;
  FUN_00405008(&stack0xffffffe8,2);
  return;
}

