// Address: 0058efa4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0058efa4(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar7;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined4 local_1c8;
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  undefined1 *local_1a4;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 *local_180;
  undefined1 local_17c [16];
  undefined1 local_16c [16];
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 *local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 *local_128;
  undefined1 local_124 [16];
  undefined1 local_114 [16];
  undefined4 local_104;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4 [16];
  undefined1 local_c4 [16];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined1 local_64 [16];
  undefined1 local_54 [12];
  undefined4 uStack_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *local_30;
  undefined1 **ppuStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar6 = 0x43;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = &LAB_0058fb19;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar6 = 0;
  puStack_28 = (undefined1 *)0x58efd6;
  (**(code **)(**(int **)(param_1 + 0x304) + 0x1dc))();
  puStack_28 = (undefined1 *)0x58efe2;
  local_8 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b070);
  local_8 = local_8 + -1;
  if (DAT_006d2234 == 2) {
    puStack_28 = (undefined1 *)0x58f094;
    FUN_00466128(*(undefined4 *)(param_1 + 0x324),0);
  }
  else {
    puStack_28 = (undefined1 *)0x58f000;
    FUN_00466128(*(undefined4 *)(param_1 + 0x324),1);
    local_c = *(int *)(PTR_DAT_0066ac78 + 0x3c);
    puStack_28 = (undefined1 *)0x58f016;
    FUN_00642c50(0x22b,&stack0xfffffff0);
    puStack_28 = (undefined1 *)0x58f024;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x324),unaff_EBX);
    if (-1 < local_c + -1) {
      iVar7 = 0;
      do {
        puStack_28 = (undefined1 *)0x58f045;
        FUN_00405194(&stack0xffffffec,*(int *)PTR_DAT_0066af70 + iVar7 * 0x2f8);
        puStack_28 = (undefined1 *)0x58f053;
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x324),unaff_ESI);
        iVar7 = iVar7 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    if (DAT_006d2234 == 3) {
      puStack_28 = (undefined1 *)0x58f076;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x324),*(int *)PTR_DAT_0066b320 + 1);
    }
    else {
      puStack_28 = (undefined1 *)0x58f085;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x324),0);
    }
  }
  if (DAT_006d2234 == 1) {
    puStack_28 = (undefined1 *)0x58f0ae;
    FUN_00642c50(0x22b,&stack0xffffffe8);
    puStack_28 = (undefined1 *)0x58f0bc;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x328),unaff_EDI);
    iVar7 = local_8;
    if (-1 < local_8) {
      do {
        if (iVar6 < 200) {
          puStack_28 = (undefined1 *)0x58f0e7;
          (**(code **)(**(int **)(param_1 + 0x304) + 0x1d0))(*(int **)(param_1 + 0x304),1);
          puStack_28 = *(undefined1 **)(*(int *)PTR_DAT_0066b070 + 0xc + iVar7 * 0x20);
          ppuStack_2c = *(undefined1 ***)(*(int *)PTR_DAT_0066b070 + 8 + iVar7 * 0x20);
          local_30 = (undefined1 *)0x58f104;
          FUN_0040d11c(&local_20);
          puStack_28 = (undefined1 *)0x58f10f;
          FUN_004051d4(&local_1c,local_20);
          puStack_28 = local_1c;
          ppuStack_2c = (undefined1 **)0x58f121;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          ppuStack_2c = (undefined1 **)0x58f12e;
          FUN_00416244(&local_30,iVar4 + -1,0xfc);
          ppuStack_2c = &local_30;
          local_30 = (undefined1 *)0x58f13f;
          FUN_00416478(&local_40,"nxano");
          ppuVar3 = ppuStack_2c;
          ppuStack_2c = (undefined1 **)0x58f14e;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),&local_40,ppuVar3);
          ppuStack_2c = (undefined1 **)0x58f172;
          FUN_00405194(&local_44,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b070 + iVar7 * 0x20) * 0x130);
          ppuStack_2c = (undefined1 **)local_44;
          local_30 = (undefined1 *)0x58f184;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          local_30 = (undefined1 *)0x58f191;
          FUN_00416244(local_54,iVar4 + -1,0xfc);
          local_30 = local_54;
          puStack_34 = (undefined1 *)0x58f1a2;
          FUN_00416478(local_64,"nxjogador");
          puVar2 = local_30;
          local_30 = (undefined1 *)0x58f1b1;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_64,puVar2);
          local_30 = (undefined1 *)0x58f1d6;
          FUN_00405194(&local_68,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b070 + 0x10 + iVar7 * 0x20) * 0x2f8);
          local_30 = local_68;
          puStack_34 = (undefined1 *)0x58f1e8;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_34 = (undefined1 *)0x58f1f5;
          FUN_00416244(local_78,iVar4 + -1,0xfc);
          puStack_34 = local_78;
          puStack_38 = (undefined1 *)0x58f209;
          FUN_00416478(local_88,"nxorigem");
          puVar2 = puStack_34;
          puStack_34 = (undefined1 *)0x58f21b;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_88,puVar2);
          puStack_34 = (undefined1 *)0x58f243;
          FUN_00405194(&local_8c,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b070 + 0x14 + iVar7 * 0x20) * 0x2f8);
          puStack_34 = (undefined1 *)local_8c;
          puStack_38 = (undefined1 *)0x58f258;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_38 = (undefined1 *)0x58f268;
          FUN_00416244(local_9c,iVar4 + -1,0xfc);
          puStack_38 = local_9c;
          puStack_3c = (undefined1 *)0x58f27f;
          FUN_00416478(local_ac,"nxdestino");
          puVar2 = puStack_38;
          puStack_38 = (undefined1 *)0x58f291;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_ac,puVar2);
          puStack_38 = (undefined1 *)0x58f2ad;
          FUN_00651ebc(*(undefined4 *)(*(int *)PTR_DAT_0066b070 + 0x18 + iVar7 * 0x20),&local_b4);
          puStack_38 = (undefined1 *)0x58f2c3;
          FUN_004052cc(&local_b0,&DAT_0058fb7c,local_b4);
          puStack_38 = (undefined1 *)local_b0;
          puStack_3c = (undefined1 *)0x58f2d8;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_28 = (undefined1 *)0x58f2e8;
          FUN_00416244(local_c4,iVar4 + -1,0xfc);
          puStack_28 = local_c4;
          ppuStack_2c = (undefined1 **)0x58f2ff;
          FUN_00416478(local_d4,"nxvalor");
          puVar2 = puStack_28;
          puStack_28 = (undefined1 *)0x58f311;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_d4,puVar2);
          iVar6 = iVar6 + 1;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != -1);
    }
  }
  if (DAT_006d2234 == 2) {
    iVar7 = 0;
    piVar1 = *(int **)(*(int *)(param_1 + 0x304) + 0x4d4);
    puStack_28 = (undefined1 *)0x58f341;
    uVar5 = (**(code **)(*piVar1 + 0x30))(piVar1,2);
    puStack_28 = (undefined1 *)0x58f34b;
    FUN_0050a850(uVar5,0xa0);
    piVar1 = *(int **)(*(int *)(param_1 + 0x304) + 0x4d4);
    puStack_28 = (undefined1 *)0x58f361;
    uVar5 = (**(code **)(*piVar1 + 0x30))(piVar1,4);
    puStack_28 = (undefined1 *)0x58f36b;
    FUN_0050a850(uVar5,200);
    piVar1 = *(int **)(*(int *)(param_1 + 0x304) + 0x4d4);
    puStack_28 = (undefined1 *)0x58f381;
    iVar6 = (**(code **)(*piVar1 + 0x30))(piVar1,2);
    puStack_28 = (undefined1 *)0x58f38b;
    FUN_00509a64(*(undefined4 *)(iVar6 + 0x60),0);
    piVar1 = *(int **)(*(int *)(param_1 + 0x304) + 0x4d4);
    puStack_28 = (undefined1 *)0x58f3a1;
    iVar6 = (**(code **)(*piVar1 + 0x30))(piVar1,4);
    puStack_28 = (undefined1 *)0x58f3ab;
    FUN_00509a64(*(undefined4 *)(iVar6 + 0x60),0);
    piVar1 = *(int **)(*(int *)(param_1 + 0x304) + 0x4d4);
    puStack_28 = (undefined1 *)0x58f3c1;
    uVar5 = (**(code **)(*piVar1 + 0x30))(piVar1,3);
    puStack_28 = (undefined1 *)0x58f3c8;
    FUN_0050a804(uVar5,0);
    piVar1 = *(int **)(*(int *)(param_1 + 0x304) + 0x4d4);
    puStack_28 = (undefined1 *)0x58f3de;
    uVar5 = (**(code **)(*piVar1 + 0x30))(piVar1,5);
    puStack_28 = (undefined1 *)0x58f3e5;
    FUN_0050a804(uVar5,0);
    puStack_28 = (undefined1 *)0x58f3f5;
    FUN_00642c50(0x22a,&local_d8);
    puStack_28 = (undefined1 *)0x58f406;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_d8);
    puStack_28 = (undefined1 *)0x58f412;
    local_8 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b2b8);
    local_8 = local_8 + -1;
    iVar6 = local_8;
    if (-1 < local_8) {
      do {
        if (iVar7 < 200) {
          puStack_28 = (undefined1 *)0x58f441;
          (**(code **)(**(int **)(param_1 + 0x304) + 0x1d0))(*(int **)(param_1 + 0x304),1);
          puStack_28 = (undefined1 *)0x58f463;
          FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066b2b8 + 4 + iVar6 * 0xc) +
                       *(int *)PTR_DAT_0066b7c4,&local_e0);
          puStack_28 = (undefined1 *)0x58f474;
          FUN_004051d4(&local_dc,local_e0);
          puStack_28 = (undefined1 *)local_dc;
          ppuStack_2c = (undefined1 **)0x58f489;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          ppuStack_2c = (undefined1 **)0x58f499;
          FUN_00416244(local_f0,iVar4 + -1,0xfc);
          ppuStack_2c = (undefined1 **)local_f0;
          local_30 = (undefined1 *)0x58f4b0;
          FUN_00416478(local_100,"nxano");
          ppuVar3 = ppuStack_2c;
          ppuStack_2c = (undefined1 **)0x58f4c2;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_100,ppuVar3);
          ppuStack_2c = (undefined1 **)0x58f4e9;
          FUN_00405194(&local_104,
                       *(int *)PTR_DAT_0066b718 +
                       *(int *)(*(int *)PTR_DAT_0066b2b8 + iVar6 * 0xc) * 0x80);
          ppuStack_2c = (undefined1 **)local_104;
          local_30 = (undefined1 *)0x58f4fe;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          local_30 = (undefined1 *)0x58f50e;
          FUN_00416244(local_114,iVar4 + -1,0xfc);
          local_30 = local_114;
          puStack_34 = (undefined1 *)0x58f525;
          FUN_00416478(local_124,"nxjogador");
          puVar2 = local_30;
          local_30 = (undefined1 *)0x58f537;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_124,puVar2);
          local_30 = (undefined1 *)0x58f55d;
          FUN_00405194(&local_128,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b2b8 + 8 + iVar6 * 0xc) * 0x2f8);
          local_30 = local_128;
          puStack_34 = (undefined1 *)0x58f572;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_28 = (undefined1 *)0x58f582;
          FUN_00416244(local_138,iVar4 + -1,0xfc);
          puStack_28 = local_138;
          ppuStack_2c = (undefined1 **)0x58f599;
          FUN_00416478(local_148,"nxdestino");
          puVar2 = puStack_28;
          puStack_28 = (undefined1 *)0x58f5ab;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_148,puVar2);
          iVar7 = iVar7 + 1;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != -1);
    }
  }
  if (DAT_006d2234 == 3) {
    puStack_28 = (undefined1 *)0x58f5d3;
    FUN_00642c50(0x229,&local_150);
    puStack_28 = (undefined1 *)local_150;
    ppuStack_2c = (undefined1 **)&LAB_0058fb94;
    local_30 = (undefined1 *)0x58f5fd;
    FUN_00405194(&local_154,*(int *)PTR_DAT_0066af70 + *(int *)PTR_DAT_0066b320 * 0x2f8);
    local_30 = local_154;
    puStack_34 = (undefined1 *)0x58f613;
    FUN_00405330(&local_14c,3);
    puStack_28 = (undefined1 *)0x58f624;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_14c);
    if (-1 < local_8) {
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066b070 + 0x10 + local_8 * 0x20) == *(int *)PTR_DAT_0066b320)
           || (*(int *)(*(int *)PTR_DAT_0066b070 + 0x14 + local_8 * 0x20) ==
               *(int *)PTR_DAT_0066b320)) {
          puStack_28 = (undefined1 *)0x58f676;
          (**(code **)(**(int **)(param_1 + 0x304) + 0x1d0))(*(int **)(param_1 + 0x304),1);
          puStack_28 = *(undefined1 **)(*(int *)PTR_DAT_0066b070 + 0xc + local_8 * 0x20);
          ppuStack_2c = *(undefined1 ***)(*(int *)PTR_DAT_0066b070 + 8 + local_8 * 0x20);
          local_30 = (undefined1 *)0x58f690;
          FUN_0040d11c(&local_15c);
          puStack_28 = (undefined1 *)0x58f6a1;
          FUN_004051d4(&local_158,local_15c);
          puStack_28 = (undefined1 *)local_158;
          ppuStack_2c = (undefined1 **)0x58f6b6;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          ppuStack_2c = (undefined1 **)0x58f6c6;
          FUN_00416244(local_16c,iVar6 + -1,0xfc);
          ppuStack_2c = (undefined1 **)local_16c;
          local_30 = (undefined1 *)0x58f6dd;
          FUN_00416478(local_17c,"nxano");
          ppuVar3 = ppuStack_2c;
          ppuStack_2c = (undefined1 **)0x58f6ef;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_17c,ppuVar3);
          ppuStack_2c = (undefined1 **)0x58f711;
          FUN_00405194(&local_180,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)PTR_DAT_0066b070 + local_8 * 0x20) * 0x130);
          ppuStack_2c = (undefined1 **)local_180;
          local_30 = (undefined1 *)0x58f726;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          local_30 = (undefined1 *)0x58f736;
          FUN_00416244(local_190,iVar6 + -1,0xfc);
          local_30 = local_190;
          puStack_34 = (undefined1 *)0x58f74d;
          FUN_00416478(local_1a0,"nxjogador");
          puVar2 = local_30;
          local_30 = (undefined1 *)0x58f75f;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_1a0,puVar2);
          local_30 = (undefined1 *)0x58f782;
          FUN_00405194(&local_1a4,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b070 + 0x10 + local_8 * 0x20) * 0x2f8);
          local_30 = local_1a4;
          puStack_34 = (undefined1 *)0x58f797;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_34 = (undefined1 *)0x58f7a7;
          FUN_00416244(local_1b4,iVar6 + -1,0xfc);
          puStack_34 = local_1b4;
          puStack_38 = (undefined1 *)0x58f7be;
          FUN_00416478(local_1c4,"nxorigem");
          puVar2 = puStack_34;
          puStack_34 = (undefined1 *)0x58f7d0;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_1c4,puVar2);
          puStack_34 = (undefined1 *)0x58f7f3;
          FUN_00405194(&local_1c8,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b070 + 0x14 + local_8 * 0x20) * 0x2f8);
          puStack_34 = (undefined1 *)local_1c8;
          puStack_38 = (undefined1 *)0x58f808;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_38 = (undefined1 *)0x58f818;
          FUN_00416244(local_1d8,iVar6 + -1,0xfc);
          puStack_38 = local_1d8;
          puStack_3c = (undefined1 *)0x58f82f;
          FUN_00416478(local_1e8,"nxdestino");
          puVar2 = puStack_38;
          puStack_38 = (undefined1 *)0x58f841;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_1e8,puVar2);
          puStack_38 = (undefined1 *)0x58f857;
          FUN_00651ebc(*(undefined4 *)(*(int *)PTR_DAT_0066b070 + 0x18 + local_8 * 0x20),&local_1f0)
          ;
          puStack_38 = (undefined1 *)0x58f86d;
          FUN_004052cc(&local_1ec,&DAT_0058fb7c,local_1f0);
          puStack_38 = (undefined1 *)local_1ec;
          puStack_3c = (undefined1 *)0x58f882;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x304) + 0x11c))();
          puStack_3c = (undefined1 *)0x58f892;
          FUN_00416244(local_200,iVar6 + -1,0xfc);
          puStack_3c = local_200;
          local_40 = (undefined1 *)0x58f8a9;
          FUN_00416478(local_210,"nxvalor");
          puVar2 = puStack_3c;
          puStack_3c = (undefined1 *)0x58f8bb;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_210,puVar2);
          puStack_3c = (undefined1 *)0x58f8cb;
          FUN_00642c50(0x229,&local_218);
          puStack_3c = (undefined1 *)local_218;
          local_40 = &LAB_0058fb94;
          local_44 = 0x58f8f5;
          FUN_00405194(&local_21c,*(int *)PTR_DAT_0066af70 + *(int *)PTR_DAT_0066b320 * 0x2f8);
          local_44 = local_21c;
          uStack_48 = 0x58f90b;
          FUN_00405330(&local_214,3);
          puStack_28 = (undefined1 *)0x58f91c;
          FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_214);
        }
        local_8 = local_8 + -1;
      } while (local_8 != -1);
    }
  }
  puVar2 = local_1c;
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_0058fb23;
  local_20 = (undefined1 *)0x58f943;
  FUN_00405008(&local_21c,3,puVar2);
  local_20 = (undefined1 *)0x58f959;
  FUN_00405744(local_210,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58f969;
  FUN_00405008(&local_1f0,2);
  local_20 = (undefined1 *)0x58f97f;
  FUN_00405744(local_1e8,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58f98a;
  FUN_00404ff0(&local_1c8);
  local_20 = (undefined1 *)0x58f9a0;
  FUN_00405744(local_1c4,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58f9ab;
  FUN_00404ff0(&local_1a4);
  local_20 = (undefined1 *)0x58f9c1;
  FUN_00405744(local_1a0,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58f9cc;
  FUN_00404ff0(&local_180);
  local_20 = (undefined1 *)0x58f9e2;
  FUN_00405744(local_17c,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58f9ed;
  FUN_004048d4(&local_15c);
  local_20 = (undefined1 *)0x58f9fd;
  FUN_00405008(&local_158,4);
  local_20 = (undefined1 *)0x58fa13;
  FUN_00405744(local_148,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58fa1e;
  FUN_00404ff0(&local_128);
  local_20 = (undefined1 *)0x58fa34;
  FUN_00405744(local_124,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58fa3f;
  FUN_00404ff0(&local_104);
  local_20 = (undefined1 *)0x58fa55;
  FUN_00405744(local_100,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58fa60;
  FUN_004048d4(&local_e0);
  local_20 = (undefined1 *)0x58fa70;
  FUN_00405008(&local_dc,2);
  local_20 = (undefined1 *)0x58fa86;
  FUN_00405744(local_d4,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58fa96;
  FUN_00405008(&local_b4,2);
  local_20 = (undefined1 *)0x58faac;
  FUN_00405744(local_ac,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58fab7;
  FUN_00404ff0(&local_8c);
  local_20 = (undefined1 *)0x58facd;
  FUN_00405744(local_88,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58fad5;
  FUN_00404ff0(&local_68);
  local_20 = (undefined1 *)0x58fae8;
  FUN_00405744(local_64,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58faf0;
  FUN_00404ff0(&local_44);
  local_20 = (undefined1 *)0x58fb03;
  FUN_00405744(&local_40,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x58fb0b;
  FUN_004048d4(&local_20);
  local_20 = (undefined1 *)0x58fb18;
  FUN_00405008(&local_1c,4);
  return;
}

