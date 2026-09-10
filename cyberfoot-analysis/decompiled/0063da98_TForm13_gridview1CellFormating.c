// Address: 0063da98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm13_gridview1CellFormating
               (int param_1,undefined4 param_2,undefined4 param_3,byte param_4,undefined4 param_5,
               undefined4 *param_6,int param_7)

{
  undefined1 **ppuVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [16];
  undefined1 *local_118 [4];
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [16];
  undefined1 *local_f0 [4];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 *local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  undefined1 *local_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined1 *local_78 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 **local_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined1 *local_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  iVar5 = 0x2e;
  do {
    local_c = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  local_8 = 0;
  puStack_24 = (undefined4 *)&LAB_0063e273;
  puStack_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_28;
  puVar3 = &stack0xfffffffc;
  if ((param_4 & 8) == 0) {
    puStack_2c = (undefined4 *)0x63dae3;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
    puVar3 = local_20;
    if (param_7 < iVar5) {
      puStack_2c = (undefined4 *)0x63dafb;
      FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"posicaojog");
      puStack_2c = (undefined4 *)0x63db00;
      iVar5 = FUN_0050a2cc();
      puVar3 = local_20;
      if (iVar5 == local_8) {
        puStack_2c = &local_10;
        local_30 = (undefined1 **)0x63db19;
        FUN_00416244(&local_20,param_7,0xfc);
        local_30 = &local_20;
        local_34 = (undefined1 *)0x63db2a;
        FUN_00416478(&local_30,&DAT_0063e2a4);
        ppuVar1 = local_30;
        local_30 = (undefined1 **)0x63db3e;
        FUN_0050e448(*(undefined4 *)(DAT_006d52c4 + 0x334),&local_30,ppuVar1);
        local_30 = (undefined1 **)0x63db49;
        FUN_00404b6c(&local_c,local_10);
        local_30 = (undefined1 **)0x63db51;
        iVar5 = FUN_00409ff8(local_c);
        iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar5 * 0x130);
        puStack_28 = &local_38;
        local_34 = (undefined1 *)0x63db70;
        FUN_00416244(local_48,param_7,0xfc);
        local_34 = local_48;
        local_38 = 0x63db81;
        FUN_00416478(local_58,&DAT_0063e2a4);
        puVar3 = local_34;
        local_34 = (undefined1 *)0x63db95;
        FUN_0050e448(*(undefined4 *)(DAT_006d52c4 + 0x334),local_58,puVar3);
        local_34 = (undefined1 *)0x63dba0;
        FUN_00404b6c(&local_34,local_38);
        puVar3 = local_34;
        local_34 = (undefined1 *)0x63dba8;
        iVar4 = FUN_00409ff8(puVar3);
        puVar3 = local_20;
        if (iVar5 != *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar4 * 0x130)) {
          *param_6 = 0xff;
        }
      }
    }
  }
  local_20 = puVar3;
  if ((param_4 & 8) == 0) {
    puStack_2c = (undefined4 *)0x63dbdd;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
    if (param_7 < iVar5) {
      puStack_2c = (undefined4 *)0x63dbf1;
      FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"idade");
      puStack_2c = (undefined4 *)0x63dbf6;
      iVar5 = FUN_0050a2cc();
      if (iVar5 == local_8) {
        puStack_2c = &local_60;
        local_30 = (undefined1 **)0x63dc17;
        (**(code **)(**(int **)(DAT_006d52c4 + 0x334) + 0x100))
                  (*(int **)(DAT_006d52c4 + 0x334),local_8,param_7);
        puStack_2c = (undefined4 *)0x63dc22;
        FUN_00404b6c(&local_5c,local_60);
        puStack_2c = (undefined4 *)0x63dc2a;
        iVar5 = FUN_00409ff8(local_5c);
        if (iVar5 < 0x20) {
          *param_6 = 0xff0000;
        }
        else {
          *param_6 = 0xff;
        }
      }
    }
  }
  puStack_2c = (undefined4 *)0x63dc51;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
  if (param_7 < iVar5) {
    puStack_2c = (undefined4 *)0x63dc69;
    FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"passe");
    puStack_2c = (undefined4 *)0x63dc6e;
    iVar5 = FUN_0050a2cc();
    if (iVar5 == local_8) {
      puStack_2c = &local_68;
      local_30 = (undefined1 **)0x63dc83;
      FUN_00416244(local_78,param_7,0xfc);
      local_30 = local_78;
      local_34 = (undefined1 *)0x63dc97;
      FUN_00416478(local_88,&DAT_0063e2a4);
      ppuVar1 = local_30;
      local_30 = (undefined1 **)0x63dcae;
      FUN_0050e448(*(undefined4 *)(DAT_006d52c4 + 0x334),local_88,ppuVar1);
      local_30 = (undefined1 **)0x63dcb9;
      FUN_00404b6c(&local_64,local_68);
      local_30 = (undefined1 **)0x63dcc1;
      iVar5 = FUN_00409ff8(local_64);
      if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar5 * 0x130) != '\0') {
        *param_6 = 0x80;
      }
    }
  }
  puStack_2c = (undefined4 *)0x63dcea;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
  if (param_7 < iVar5) {
    puStack_2c = (undefined4 *)0x63dd02;
    FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"passe");
    puStack_2c = (undefined4 *)0x63dd07;
    iVar5 = FUN_0050a2cc();
    if (iVar5 == local_8) {
      puStack_2c = &local_90;
      local_30 = (undefined1 **)0x63dd22;
      FUN_00416244(local_a0,param_7,0xfc);
      local_30 = local_a0;
      local_34 = (undefined1 *)0x63dd39;
      FUN_00416478(local_b0,&DAT_0063e2a4);
      ppuVar1 = local_30;
      local_30 = (undefined1 **)0x63dd50;
      FUN_0050e448(*(undefined4 *)(DAT_006d52c4 + 0x334),local_b0,ppuVar1);
      local_30 = (undefined1 **)0x63dd61;
      FUN_00404b6c(&local_8c,local_90);
      local_30 = (undefined1 **)0x63dd6c;
      iVar5 = FUN_00409ff8(local_8c);
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar5 * 0x130) == 2) {
        *param_6 = 0x8000;
      }
    }
  }
  puStack_2c = (undefined4 *)0x63dd98;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
  if (param_7 < iVar5) {
    puStack_2c = (undefined4 *)0x63ddb0;
    FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),&DAT_0063e2d0);
    puStack_2c = (undefined4 *)0x63ddb5;
    iVar5 = FUN_0050a2cc();
    if (iVar5 == local_8) {
      puStack_2c = &local_b8;
      local_30 = (undefined1 **)0x63ddd0;
      FUN_00416244(local_c8,param_7,0xfc);
      local_30 = local_c8;
      local_34 = (undefined1 *)0x63dde7;
      FUN_00416478(local_d8,&DAT_0063e2a4);
      ppuVar1 = local_30;
      local_30 = (undefined1 **)0x63ddfe;
      FUN_0050e448(*(undefined4 *)(DAT_006d52c4 + 0x334),local_d8,ppuVar1);
      local_30 = (undefined1 **)0x63de0f;
      FUN_00404b6c(&local_b4,local_b8);
      local_30 = (undefined1 **)0x63de1a;
      iVar5 = FUN_00409ff8(local_b4);
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar5 * 0x130) == 2) {
        *param_6 = 0x8000;
      }
    }
  }
  puStack_2c = (undefined4 *)0x63de46;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
  if (param_7 < iVar5) {
    puStack_2c = (undefined4 *)0x63de5e;
    FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),&DAT_0063e2d0);
    puStack_2c = (undefined4 *)0x63de63;
    iVar5 = FUN_0050a2cc();
    if (iVar5 == local_8) {
      puStack_2c = &local_e0;
      local_30 = (undefined1 **)0x63de7e;
      FUN_00416244(local_f0,param_7,0xfc);
      local_30 = local_f0;
      local_34 = (undefined1 *)0x63de95;
      FUN_00416478(local_100,&DAT_0063e2a4);
      ppuVar1 = local_30;
      local_30 = (undefined1 **)0x63deac;
      FUN_0050e448(*(undefined4 *)(DAT_006d52c4 + 0x334),local_100,ppuVar1);
      local_30 = (undefined1 **)0x63debd;
      FUN_00404b6c(&local_dc,local_e0);
      local_30 = (undefined1 **)0x63dec8;
      iVar5 = FUN_00409ff8(local_dc);
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar5 * 0x130) == 1) {
        *param_6 = 0x800000;
      }
    }
  }
  if ((param_4 & 8) == 0) {
    puStack_2c = (undefined4 *)0x63df05;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x334) + 0x11c))();
    if (param_7 < iVar5) {
      puStack_2c = (undefined4 *)0x63df1d;
      FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"salario");
      puStack_2c = (undefined4 *)0x63df22;
      iVar5 = FUN_0050a2cc();
      if (iVar5 == local_8) {
        puStack_24 = &local_108;
        local_30 = (undefined1 **)0x63df41;
        FUN_00416244(local_118,param_7,0xfc);
        local_30 = local_118;
        local_34 = (undefined1 *)0x63df58;
        FUN_00416478(local_128,&DAT_0063e2a4);
        ppuVar1 = local_30;
        local_30 = (undefined1 **)0x63df6f;
        FUN_0050e448(*(undefined4 *)(DAT_006d52c4 + 0x334),local_128,ppuVar1);
        local_30 = (undefined1 **)0x63df80;
        FUN_00404b6c(&local_104,local_108);
        local_30 = (undefined1 **)0x63df8b;
        iVar5 = FUN_00409ff8(local_104);
        if ((double)_DAT_0063e2e8 <=
            *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar5 * 0x130) -
            *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
          puStack_24 = &local_130;
          local_34 = (undefined1 *)0x63dfe1;
          FUN_00416244(local_140,param_7,0xfc);
          local_34 = local_140;
          local_38 = 0x63dff8;
          FUN_00416478(local_150,&DAT_0063e2a4);
          puVar3 = local_34;
          local_34 = (undefined1 *)0x63e00f;
          FUN_0050e448(*(undefined4 *)(DAT_006d52c4 + 0x334),local_150,puVar3);
          local_34 = (undefined1 *)0x63e020;
          FUN_00404b6c(&local_12c,local_130);
          local_34 = (undefined1 *)0x63e02b;
          iVar5 = FUN_00409ff8(local_12c);
          if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar5 * 0x130) -
              *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <
              (double)_DAT_0063e2ec) {
            *param_6 = 0xc4c4;
          }
        }
        else {
          *param_6 = 0x95;
        }
        puStack_28 = &local_158;
        puStack_2c = (undefined4 *)0x63e07c;
        FUN_00416244(local_168,param_7,0xfc);
        puStack_2c = (undefined4 *)local_168;
        local_30 = (undefined1 **)0x63e093;
        FUN_00416478(local_178,&DAT_0063e2a4);
        puVar2 = puStack_2c;
        puStack_2c = (undefined4 *)0x63e0aa;
        FUN_0050e448(*(undefined4 *)(DAT_006d52c4 + 0x334),local_178,puVar2);
        puStack_2c = (undefined4 *)0x63e0bb;
        FUN_00404b6c(&local_154,local_158);
        puStack_2c = (undefined4 *)0x63e0c6;
        iVar5 = FUN_00409ff8(local_154);
        if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar5 * 0x130) != '\0') {
          *param_6 = 0x80;
        }
      }
    }
  }
  *in_FS_OFFSET = (int)puStack_28;
  local_20 = &LAB_0063e27d;
  puStack_24 = (undefined4 *)0x63e104;
  FUN_00405744(local_178,PTR_DAT_004010f8,2);
  puStack_24 = (undefined4 *)0x63e10f;
  FUN_00404ff0(&local_158);
  puStack_24 = (undefined4 *)0x63e11a;
  FUN_004048d4(&local_154);
  puStack_24 = (undefined4 *)0x63e130;
  FUN_00405744(local_150,PTR_DAT_004010f8,2);
  puStack_24 = (undefined4 *)0x63e13b;
  FUN_00404ff0(&local_130);
  puStack_24 = (undefined4 *)0x63e146;
  FUN_004048d4(&local_12c);
  puStack_24 = (undefined4 *)0x63e15c;
  FUN_00405744(local_128,PTR_DAT_004010f8,2);
  puStack_24 = (undefined4 *)0x63e167;
  FUN_00404ff0(&local_108);
  puStack_24 = (undefined4 *)0x63e172;
  FUN_004048d4(&local_104);
  puStack_24 = (undefined4 *)0x63e188;
  FUN_00405744(local_100,PTR_DAT_004010f8,2);
  puStack_24 = (undefined4 *)0x63e193;
  FUN_00404ff0(&local_e0);
  puStack_24 = (undefined4 *)0x63e19e;
  FUN_004048d4(&local_dc);
  puStack_24 = (undefined4 *)0x63e1b4;
  FUN_00405744(local_d8,PTR_DAT_004010f8,2);
  puStack_24 = (undefined4 *)0x63e1bf;
  FUN_00404ff0(&local_b8);
  puStack_24 = (undefined4 *)0x63e1ca;
  FUN_004048d4(&local_b4);
  puStack_24 = (undefined4 *)0x63e1e0;
  FUN_00405744(local_b0,PTR_DAT_004010f8,2);
  puStack_24 = (undefined4 *)0x63e1eb;
  FUN_00404ff0(&local_90);
  puStack_24 = (undefined4 *)0x63e1f6;
  FUN_004048d4(&local_8c);
  puStack_24 = (undefined4 *)0x63e20c;
  FUN_00405744(local_88,PTR_DAT_004010f8,2);
  puStack_24 = (undefined4 *)0x63e214;
  FUN_00404ff0(&local_68);
  puStack_24 = (undefined4 *)0x63e21c;
  FUN_004048d4(&local_64);
  puStack_24 = (undefined4 *)0x63e224;
  FUN_00404ff0(&local_60);
  puStack_24 = (undefined4 *)0x63e22c;
  FUN_004048d4(&local_5c);
  puStack_24 = (undefined4 *)0x63e23f;
  FUN_00405744(local_58,PTR_DAT_004010f8,2);
  puStack_24 = (undefined4 *)0x63e247;
  FUN_00404ff0(&local_38);
  puStack_24 = (undefined4 *)0x63e24f;
  FUN_004048d4(&local_34);
  puStack_24 = (undefined4 *)0x63e262;
  FUN_00405744(&local_30,PTR_DAT_004010f8,2);
  puStack_24 = (undefined4 *)0x63e26a;
  FUN_00404ff0(&local_10);
  puStack_24 = (undefined4 *)0x63e272;
  FUN_004048d4(&local_c);
  return;
}

