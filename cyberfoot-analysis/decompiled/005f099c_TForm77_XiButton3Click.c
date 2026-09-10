// Address: 005f099c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm77_XiButton3Click(int param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *in_FS_OFFSET;
  undefined4 local_204;
  undefined1 local_200 [16];
  undefined *local_1f0 [4];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d4 [16];
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  undefined1 local_1a4 [16];
  int local_194;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  int local_170;
  undefined1 local_16c [16];
  undefined1 local_15c [16];
  int local_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined4 local_128;
  int local_124;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined4 local_100;
  int local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  int local_b8;
  undefined1 local_b4 [16];
  undefined1 local_a4 [16];
  undefined **local_94;
  undefined1 local_90 [4];
  undefined1 local_8c [16];
  undefined *local_7c [4];
  undefined4 local_6c;
  undefined **local_68;
  undefined *local_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  int iStack_58;
  undefined1 *puStack_54;
  undefined *puStack_50;
  undefined4 local_4c;
  int local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined **local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int iVar12;
  
  local_1c = &stack0xfffffffc;
  iVar11 = 0x40;
  do {
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  local_20 = &LAB_005f159f;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = (undefined **)0x5f09d3;
  (**(code **)(**(int **)(param_1 + 0x330) + 0x1dc))();
  local_28 = (undefined **)0x5f09e6;
  FUN_00466238(*(undefined4 *)(param_1 + 0x2fc),"Searching ...");
  local_34 = *(undefined1 **)
              (*(int *)PTR_DAT_0066af70 + 0x3c +
              *(int *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066b710 * 4 + 0x600) * 0x2f8);
  local_28 = (undefined **)0x5f0a1b;
  uVar6 = (**(code **)(**(int **)(param_1 + 0x318) + 0xcc))();
  switch(uVar6) {
  case 0:
    iVar12 = 1;
    iVar11 = 10;
    break;
  case 1:
    iVar12 = 0xb;
    iVar11 = 0x1e;
    break;
  case 2:
    iVar12 = 0x1f;
    iVar11 = 0x32;
    break;
  case 3:
    iVar12 = 0x33;
    iVar11 = 0x65;
    break;
  default:
    iVar12 = 0;
    iVar11 = 0x65;
    break;
  case 5:
    iVar12 = 0;
    iVar11 = 0x65;
  }
  local_28 = (undefined **)0x5f0aaa;
  iVar7 = (**(code **)(**(int **)(param_1 + 800) + 0xcc))();
  if (iVar7 == 0) {
    iVar7 = 0xf;
    local_1c = (undefined1 *)0x19;
  }
  else if (iVar7 == 1) {
    iVar7 = 0x1a;
    local_1c = (undefined1 *)0x24;
  }
  else if (iVar7 == 2) {
    iVar7 = 0x25;
    local_1c = (undefined1 *)0x50;
  }
  else {
    iVar7 = 0x10;
    local_1c = (undefined1 *)0x50;
  }
  local_28 = (undefined **)0x5f0b05;
  uVar6 = (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))();
  switch(uVar6) {
  case 0:
    local_20 = (undefined1 *)0x3e8;
    local_24 = 100000;
    break;
  case 1:
    local_20 = (undefined1 *)0x18a88;
    local_24 = 500000;
    break;
  case 2:
    local_20 = (undefined1 *)0x7a120;
    local_24 = 1000000;
    break;
  case 3:
    local_20 = (undefined1 *)0xf4240;
    local_24 = 3000000;
    break;
  case 4:
    local_20 = (undefined1 *)0x2dc6c1;
    local_24 = 5000000;
    break;
  case 5:
    local_20 = (undefined1 *)0x4c4b41;
    local_24 = 10000000;
    break;
  case 6:
    local_20 = (undefined1 *)0x989681;
    local_24 = 999999999;
    break;
  default:
    local_20 = (undefined1 *)0x3e8;
    local_24 = 999999999;
  }
  local_30 = (undefined1 *)0x0;
  local_40 = (undefined1 *)(*(int *)(PTR_DAT_0066ac78 + 0x40) + *(int *)(PTR_DAT_0066ac78 + 0x3c));
  local_28 = (undefined **)0x5f0bd4;
  puVar8 = (undefined1 *)FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (0 < (int)puVar8) {
    local_2c = (undefined1 *)0x1;
    local_44 = puVar8;
    do {
      local_28 = (undefined **)0x5f0bf4;
      iVar9 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3b8));
      if (iVar9 == 5) {
        iVar9 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + (int)local_2c * 0x130);
      }
      else {
        local_28 = (undefined **)0x5f0c19;
        iVar9 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3b8));
      }
      local_28 = (undefined **)0x5f0c29;
      iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3b4));
      if (iVar10 == 0xe) {
        local_38 = *(undefined1 **)(*(int *)PTR_DAT_0066b5b8 + 0x5c + (int)local_2c * 0x130);
      }
      else {
        local_28 = (undefined **)0x5f0c51;
        local_38 = (undefined1 *)FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3b4));
      }
      local_28 = (undefined **)0x5f0c62;
      iVar10 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3b0));
      if (iVar10 == 0xe) {
        local_3c = *(undefined1 **)(*(int *)PTR_DAT_0066b5b8 + 0x60 + (int)local_2c * 0x130);
      }
      else {
        local_28 = (undefined **)0x5f0c8a;
        local_3c = (undefined1 *)FUN_0054c0f0(*(undefined4 *)(param_1 + 0x3b0));
      }
      local_28 = (undefined **)0x5f0c9e;
      FUN_00466208(*(undefined4 *)(param_1 + 0x314),&local_48);
      if (local_48 == 0) {
        local_28 = (undefined **)0x5f0cbb;
        FUN_00404b48(&local_28,*(int *)PTR_DAT_0066b5b8 + (int)local_2c * 0x130);
      }
      else {
        local_28 = (undefined **)0x5f0cce;
        FUN_00466208(*(undefined4 *)(param_1 + 0x314),&local_28);
      }
      local_28 = (undefined **)0x5f0cdf;
      cVar5 = (**(code **)(**(int **)(param_1 + 0x324) + 200))();
      puVar8 = local_2c;
      if (cVar5 == '\0') {
        cVar5 = *(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + (int)local_2c * 0x130);
      }
      else {
        cVar5 = '\x01';
      }
      if (((((-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + (int)local_2c * 0x130)) &&
            (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + (int)local_2c * 0x130) < (int)local_40)) &&
           (iVar9 == *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + (int)local_2c * 0x130))) &&
          (((iVar12 <= *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + (int)local_2c * 0x130) &&
            (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + (int)local_2c * 0x130) <= iVar11)) &&
           ((iVar7 <= *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + (int)local_2c * 0x130) &&
            ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + (int)local_2c * 0x130) <= (int)local_1c &&
             ((float)(int)local_20 * _DAT_005f15c8 <
              (float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + (int)local_2c * 0x130)))))))))
         && ((float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + (int)local_2c * 0x130) <
             (float)local_24 * _DAT_005f15c8)) {
        local_28 = &local_64;
        local_2c = (undefined1 *)0x5f0dd1;
        uVar6 = FUN_00404ba4(local_28);
        local_2c = (undefined1 *)0x5f0de4;
        FUN_004029a0(*(int *)PTR_DAT_0066b5b8 + (int)puVar8 * 0x130,0,uVar6);
        local_28 = (undefined **)0x5f0def;
        FUN_00404b48(&local_4c,&local_64);
        ppuVar2 = local_28;
        local_28 = (undefined **)0x5f0dfa;
        iVar9 = FUN_00409790(local_4c,ppuVar2);
        if (((((iVar9 == 0) && (*(char *)(*(int *)PTR_DAT_0066b5b8 + (int)puVar8 * 0x130) != '\0'))
             && (cVar5 == *(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + (int)puVar8 * 0x130))) &&
            (((undefined1 *)*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + (int)puVar8 * 0x130) ==
              local_38 &&
             ((undefined1 *)*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + (int)puVar8 * 0x130) ==
              local_3c)))) &&
           ((undefined1 *)*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + (int)puVar8 * 0x130) ==
            local_34)) {
          local_30 = (undefined1 *)((int)local_30 + 1);
          local_28 = (undefined **)0x5f0e79;
          (**(code **)(**(int **)(param_1 + 0x330) + 0x1d0))(*(int **)(param_1 + 0x330),1);
          if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + (int)puVar8 * 0x130) == '\0') {
            local_28 = (undefined **)0x5f0ef4;
            FUN_00409dd8(0,local_90);
          }
          else {
            local_28 = (undefined **)0x5f0e94;
            FUN_00409dd8(1,&local_6c);
            local_28 = (undefined **)0x5f0e9f;
            FUN_004051d4(&local_68,local_6c);
            local_28 = local_68;
            piVar1 = *(int **)(param_1 + 0x330);
            local_2c = (undefined1 *)0x5f0eb6;
            iVar9 = (**(code **)(*piVar1 + 0x11c))();
            local_28 = (undefined **)0x5f0ec3;
            FUN_00416244(local_7c,iVar9 + -1,0xfc);
            local_28 = local_7c;
            local_2c = (undefined1 *)0x5f0ed7;
            FUN_00416478(local_8c,"nximg");
            ppuVar2 = local_28;
            local_28 = (undefined **)0x5f0ee5;
            FUN_0050e9b8(piVar1,local_8c,ppuVar2);
          }
          local_28 = (undefined **)0x5f0f0a;
          FUN_00405194(&local_94,*(int *)PTR_DAT_0066b5b8 + (int)puVar8 * 0x130);
          local_28 = local_94;
          piVar1 = *(int **)(param_1 + 0x330);
          local_2c = (undefined1 *)0x5f0f24;
          iVar9 = (**(code **)(*piVar1 + 0x11c))();
          local_2c = (undefined1 *)0x5f0f34;
          FUN_00416244(local_a4,iVar9 + -1,0xfc);
          local_2c = local_a4;
          local_30 = (undefined1 *)0x5f0f4b;
          FUN_00416478(local_b4,"nxnome");
          puVar4 = local_2c;
          local_2c = (undefined1 *)0x5f0f59;
          FUN_0050e9b8(piVar1,local_b4,puVar4);
          local_2c = (undefined1 *)0x5f0f7c;
          FUN_00405194(&local_b8,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + (int)puVar8 * 0x130) * 0x2f8);
          local_2c = (undefined1 *)local_b8;
          piVar1 = *(int **)(param_1 + 0x330);
          local_30 = (undefined1 *)0x5f0f96;
          iVar9 = (**(code **)(*piVar1 + 0x11c))();
          local_30 = (undefined1 *)0x5f0fa6;
          FUN_00416244(local_c8,iVar9 + -1,0xfc);
          local_30 = local_c8;
          local_34 = (undefined1 *)0x5f0fbd;
          FUN_00416478(local_d8,"nxclube");
          puVar4 = local_30;
          local_30 = (undefined1 *)0x5f0fcb;
          FUN_0050e9b8(piVar1,local_d8,puVar4);
          local_30 = *(undefined1 **)
                      (PTR_DAT_0066b660 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + (int)puVar8 * 0x130) * 4);
          piVar1 = *(int **)(param_1 + 0x330);
          local_34 = (undefined1 *)0x5f0ff3;
          iVar9 = (**(code **)(*piVar1 + 0x11c))();
          local_34 = (undefined1 *)0x5f1003;
          FUN_00416244(local_e8,iVar9 + -1,0xfc);
          local_34 = local_e8;
          local_38 = (undefined1 *)0x5f101a;
          FUN_00416478(local_f8,"nxposicao");
          puVar4 = local_34;
          local_34 = (undefined1 *)0x5f1028;
          FUN_0050e9b8(piVar1,local_f8,puVar4);
          local_34 = (undefined1 *)0x5f103e;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + (int)puVar8 * 0x130),
                       &local_100);
          local_34 = (undefined1 *)0x5f104f;
          FUN_004051d4(&local_fc,local_100);
          local_34 = (undefined1 *)local_fc;
          piVar1 = *(int **)(param_1 + 0x330);
          local_38 = (undefined1 *)0x5f1069;
          iVar9 = (**(code **)(*piVar1 + 0x11c))();
          local_38 = (undefined1 *)0x5f1079;
          FUN_00416244(local_110,iVar9 + -1,0xfc);
          local_38 = local_110;
          local_3c = (undefined1 *)0x5f1090;
          FUN_00416478(local_120,"nxforca");
          puVar4 = local_38;
          local_38 = (undefined1 *)0x5f109e;
          FUN_0050e9b8(piVar1,local_120,puVar4);
          local_38 = (undefined1 *)0x5f10b4;
          FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + (int)puVar8 * 0x130),
                       &local_128);
          local_38 = (undefined1 *)0x5f10c5;
          FUN_004051d4(&local_124,local_128);
          local_38 = (undefined1 *)local_124;
          piVar1 = *(int **)(param_1 + 0x330);
          local_3c = (undefined1 *)0x5f10df;
          iVar9 = (**(code **)(*piVar1 + 0x11c))();
          local_3c = (undefined1 *)0x5f10ef;
          FUN_00416244(local_138,iVar9 + -1,0xfc);
          local_3c = local_138;
          local_40 = (undefined1 *)0x5f1106;
          FUN_00416478(local_148,"nxidade");
          puVar4 = local_3c;
          local_3c = (undefined1 *)0x5f1114;
          FUN_0050e9b8(piVar1,local_148,puVar4);
          if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + (int)puVar8 * 0x130) == 0) {
            local_3c = (undefined1 *)0x5f1132;
            FUN_00642c50(0x99,&local_14c);
            local_3c = (undefined1 *)local_14c;
            piVar1 = *(int **)(param_1 + 0x330);
            local_40 = (undefined1 *)0x5f114c;
            iVar9 = (**(code **)(*piVar1 + 0x11c))();
            local_40 = (undefined1 *)0x5f115c;
            FUN_00416244(local_15c,iVar9 + -1,0xfc);
            local_40 = local_15c;
            local_44 = (undefined1 *)0x5f1173;
            FUN_00416478(local_16c,"nxlado");
            puVar4 = local_40;
            local_40 = (undefined1 *)0x5f1181;
            FUN_0050e9b8(piVar1,local_16c,puVar4);
          }
          else {
            local_3c = (undefined1 *)0x5f1193;
            FUN_00642c50(0x9b,&local_170);
            local_3c = (undefined1 *)local_170;
            piVar1 = *(int **)(param_1 + 0x330);
            local_40 = (undefined1 *)0x5f11ad;
            iVar9 = (**(code **)(*piVar1 + 0x11c))();
            local_40 = (undefined1 *)0x5f11bd;
            FUN_00416244(local_180,iVar9 + -1,0xfc);
            local_40 = local_180;
            local_44 = (undefined1 *)0x5f11d4;
            FUN_00416478(local_190,"nxlado");
            puVar4 = local_40;
            local_40 = (undefined1 *)0x5f11e2;
            FUN_0050e9b8(piVar1,local_190,puVar4);
          }
          local_44 = &LAB_005f1286;
          local_48 = *in_FS_OFFSET;
          *in_FS_OFFSET = (int)&local_48;
          local_4c = *(undefined4 *)
                      (PTR_DAT_0066b1c8 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + (int)puVar8 * 0x130) * 4);
          puStack_50 = &DAT_005f1644;
          puStack_54 = *(undefined1 **)
                        (PTR_DAT_0066b1c8 +
                        *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + (int)puVar8 * 0x130) * 4);
          iStack_58 = 0x5f122d;
          local_40 = &stack0xfffffffc;
          FUN_00405330(&local_194,3);
          iStack_58 = local_194;
          piVar1 = *(int **)(param_1 + 0x330);
          puStack_5c = (undefined1 *)0x5f1247;
          iVar9 = (**(code **)(*piVar1 + 0x11c))();
          puStack_5c = (undefined1 *)0x5f1257;
          FUN_00416244(local_1a4,iVar9 + -1,0xfc);
          puStack_5c = local_1a4;
          uStack_60 = 0x5f126e;
          FUN_00416478(local_1b4,"nxhabilidade");
          puVar8 = puStack_5c;
          puStack_5c = (undefined1 *)0x5f127c;
          FUN_0050e9b8(piVar1,local_1b4,puVar8);
          puVar3 = puStack_50;
          *in_FS_OFFSET = iStack_58;
          puStack_54 = &LAB_005f133e;
          iStack_58 = *in_FS_OFFSET;
          *in_FS_OFFSET = (int)&iStack_58;
          piVar1 = *(int **)(param_1 + 0x330);
          puStack_5c = (undefined1 *)0x5f12b1;
          puStack_50 = &stack0xfffffffc;
          iVar9 = (**(code **)(*piVar1 + 0x11c))(piVar1,*piVar1,puVar3);
          puStack_5c = (undefined1 *)0x5f12c1;
          FUN_00416244(local_1c4,iVar9 + -1,0xfc);
          puStack_5c = local_1c4;
          uStack_60 = 0x5f12d8;
          FUN_00416478(local_1d4,"nxhabilidade");
          puVar8 = puStack_5c;
          puStack_5c = (undefined1 *)0x5f12e6;
          puStack_5c = (undefined1 *)FUN_004f77e4(piVar1,local_1d4,puVar8);
          uStack_60 = *(undefined4 *)
                       (PTR_DAT_0066b3a4 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + (int)local_2c * 0x130) * 4);
          local_64 = &DAT_005f1644;
          local_68 = *(undefined ***)
                      (PTR_DAT_0066b3a4 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + (int)local_2c * 0x130) * 4);
          local_6c = 0x5f1328;
          FUN_00405330(&local_1d8,3);
          ppuVar2 = local_68;
          local_68 = (undefined **)0x5f1334;
          FUN_004f7234(ppuVar2,local_1d8);
          puVar8 = puStack_5c;
          *in_FS_OFFSET = (int)local_64;
          puStack_5c = (undefined1 *)0x5f1356;
          FUN_00409dd8(local_2c,&local_1e0,puVar8);
          puStack_5c = (undefined1 *)0x5f1367;
          FUN_004051d4(&local_1dc,local_1e0);
          puStack_5c = (undefined1 *)local_1dc;
          piVar1 = *(int **)(param_1 + 0x330);
          uStack_60 = 0x5f1381;
          iVar9 = (**(code **)(*piVar1 + 0x11c))();
          local_28 = (undefined **)0x5f1391;
          FUN_00416244(local_1f0,iVar9 + -1,0xfc);
          local_28 = local_1f0;
          local_2c = (undefined1 *)0x5f13a8;
          FUN_00416478(local_200,&DAT_005f1668);
          ppuVar2 = local_28;
          local_28 = (undefined **)0x5f13b6;
          FUN_0050e9b8(piVar1,local_200,ppuVar2);
        }
      }
      if ((int)local_30 < 1) {
        local_28 = (undefined **)0x5f1403;
        FUN_00466238(*(undefined4 *)(param_1 + 0x2fc),"Nenhum jogador encontrado");
      }
      else {
        local_28 = (undefined **)0x5f13ca;
        FUN_00409dd8(local_30,&local_204);
        local_28 = (undefined **)0x5f13da;
        FUN_00404bac(&local_204," jogadores encontrados");
        local_28 = (undefined **)0x5f13ee;
        FUN_00466238(*(undefined4 *)(param_1 + 0x2fc),local_204);
      }
      local_2c = (undefined1 *)((int)local_2c + 1);
      local_44 = local_44 + -1;
    } while (local_44 != (undefined1 *)0x0);
  }
  puVar8 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005f15a9;
  local_20 = (undefined1 *)0x5f1427;
  FUN_004048d4(&local_204,local_24,puVar8);
  local_20 = (undefined1 *)0x5f143d;
  FUN_00405744(local_200,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5f1448;
  FUN_004048d4(&local_1e0);
  local_20 = (undefined1 *)0x5f1458;
  FUN_00405008(&local_1dc,2);
  local_20 = (undefined1 *)0x5f146e;
  FUN_00405744(local_1d4,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x5f1479;
  FUN_00404ff0(&local_194);
  local_20 = (undefined1 *)0x5f148f;
  FUN_00405744(local_190,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5f149a;
  FUN_00404ff0(&local_170);
  local_20 = (undefined1 *)0x5f14b0;
  FUN_00405744(local_16c,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5f14bb;
  FUN_00404ff0(&local_14c);
  local_20 = (undefined1 *)0x5f14d1;
  FUN_00405744(local_148,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5f14dc;
  FUN_004048d4(&local_128);
  local_20 = (undefined1 *)0x5f14e7;
  FUN_00404ff0(&local_124);
  local_20 = (undefined1 *)0x5f14fd;
  FUN_00405744(local_120,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5f1508;
  FUN_004048d4(&local_100);
  local_20 = (undefined1 *)0x5f1513;
  FUN_00404ff0(&local_fc);
  local_20 = (undefined1 *)0x5f1529;
  FUN_00405744(local_f8,PTR_DAT_004010f8,4);
  local_20 = (undefined1 *)0x5f1534;
  FUN_00404ff0(&local_b8);
  local_20 = (undefined1 *)0x5f154a;
  FUN_00405744(local_b4,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5f1555;
  FUN_00404ff0(&local_94);
  local_20 = (undefined1 *)0x5f1560;
  FUN_004048d4(local_90);
  local_20 = (undefined1 *)0x5f1576;
  FUN_00405744(local_8c,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5f157e;
  FUN_004048d4(&local_6c);
  local_20 = (undefined1 *)0x5f1586;
  FUN_00404ff0(&local_68);
  local_20 = (undefined1 *)0x5f158e;
  FUN_004048d4(&local_4c);
  local_20 = (undefined1 *)0x5f1596;
  FUN_004048d4(&local_48);
  local_20 = (undefined1 *)0x5f159e;
  FUN_004048d4(&local_28);
  return;
}

