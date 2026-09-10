// Address: 0062d4b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm92_Button1Click(void)

{
  undefined4 ***pppuVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined1 uVar9;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 **local_cc;
  undefined4 local_c8;
  undefined1 local_c4 [16];
  undefined1 local_b4 [16];
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined4 *local_90 [4];
  undefined1 *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 **local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined1 local_3c [8];
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined4 ***local_2c;
  undefined1 *puStack_28;
  undefined4 *puStack_24;
  undefined1 **ppuStack_20;
  undefined1 *local_1c;
  int local_c;
  
  local_1c = &stack0xfffffffc;
  iVar5 = 0x1b;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ppuStack_20 = (undefined1 **)&LAB_0062d91a;
  puStack_24 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_24;
  puStack_28 = (undefined1 *)0x62d4e0;
  FUN_00404ff0(&stack0xfffffff0);
  puStack_28 = (undefined1 *)0x62d4f3;
  iVar5 = (**(code **)(**(int **)(DAT_006d4b7c + 0x2fc) + 0x11c))();
  if (-1 < iVar5 + -1) {
    iVar8 = 0;
    uVar9 = true;
    do {
      ppuStack_20 = &local_1c;
      local_2c = (undefined4 ***)0x62d512;
      FUN_00416244(&local_2c,iVar8,0xfc);
      local_2c = &local_2c;
      puStack_30 = (undefined *)0x62d523;
      FUN_00416478(local_3c,&DAT_0062d934);
      pppuVar1 = local_2c;
      local_2c = (undefined4 ***)0x62d537;
      FUN_0050e448(*(undefined4 *)(DAT_006d4b7c + 0x2fc),local_3c,pppuVar1);
      local_2c = (undefined4 ***)0x62d542;
      FUN_00404b6c(&stack0xffffffe8,local_1c);
      local_2c = (undefined4 ***)0x62d54a;
      iVar4 = FUN_00409ff8(unaff_EDI);
      local_c = -1;
      iVar6 = 1;
      puVar7 = (undefined4 *)PTR_PTR_0066ac34;
      do {
        puStack_24 = &local_40;
        puStack_28 = (undefined1 *)0x62d56f;
        FUN_00416244(local_50,iVar8,0xfc);
        puStack_28 = local_50;
        local_2c = (undefined4 ***)0x62d580;
        FUN_00416478(local_60,"nxsistema");
        puVar2 = puStack_28;
        puStack_28 = (undefined1 *)0x62d594;
        FUN_0050e448(*(undefined4 *)(DAT_006d4b7c + 0x2fc),local_60,puVar2);
        puStack_28 = (undefined1 *)local_40;
        local_2c = (undefined4 ***)0x62d5a2;
        FUN_004051d4(&local_64,*puVar7);
        puVar2 = puStack_28;
        puStack_28 = (undefined1 *)0x62d5ab;
        FUN_00405378(puVar2,local_64);
        iVar3 = iVar6;
        if ((bool)uVar9) break;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
        uVar9 = iVar6 == 10;
        iVar3 = local_c;
      } while (!(bool)uVar9);
      local_c = iVar3;
      if (0 < local_c) {
        *(int *)(PTR_DAT_0066b674 + iVar4 * 4) = local_c;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + -1;
      uVar9 = iVar5 == 0;
    } while (!(bool)uVar9);
  }
  iVar5 = 0;
  puVar7 = (undefined4 *)PTR_DAT_0066b674;
  do {
    if (iVar5 < 0x1a) {
      local_2c = (undefined4 ***)0x62d5f3;
      FUN_00409dd8(*puVar7,&local_6c);
      local_2c = (undefined4 ***)0x62d5fe;
      FUN_004051d4(&local_68,local_6c);
      local_2c = (undefined4 ***)local_68;
      puStack_30 = &DAT_0062d954;
      uStack_34 = 0x62d613;
      FUN_00405330(&stack0xfffffff0,3);
    }
    else {
      puStack_28 = (undefined1 *)0x62d61f;
      FUN_00409dd8(*puVar7,&local_74);
      puStack_28 = (undefined1 *)0x62d62a;
      FUN_004051d4(&local_70,local_74);
      puStack_28 = (undefined1 *)0x62d635;
      FUN_0040526c(&stack0xfffffff0,local_70);
    }
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar5 != 0x1b);
  puStack_28 = (undefined1 *)0x62d649;
  FUN_00404b6c(&local_78,unaff_EBX);
  puStack_28 = (undefined1 *)0x62d65b;
  FUN_0064a178("opcoes",&DAT_0062d960,local_78);
  puStack_28 = (undefined1 *)0x62d663;
  FUN_00404ff0(&stack0xfffffff0);
  puStack_28 = (undefined1 *)0x62d676;
  iVar5 = (**(code **)(**(int **)(DAT_006d4b7c + 0x2fc) + 0x11c))();
  if (-1 < iVar5 + -1) {
    iVar8 = 0;
    do {
      ppuStack_20 = &local_80;
      local_2c = (undefined4 ***)0x62d698;
      FUN_00416244(local_90,iVar8,0xfc);
      local_2c = (undefined4 ***)local_90;
      puStack_30 = (undefined *)0x62d6af;
      FUN_00416478(local_a0,&DAT_0062d934);
      pppuVar1 = local_2c;
      local_2c = (undefined4 ***)0x62d6c6;
      FUN_0050e448(*(undefined4 *)(DAT_006d4b7c + 0x2fc),local_a0,pppuVar1);
      local_2c = (undefined4 ***)0x62d6d1;
      FUN_00404b6c(&local_7c,local_80);
      local_2c = (undefined4 ***)0x62d6d9;
      iVar4 = FUN_00409ff8(local_7c);
      local_c = -1;
      iVar6 = 0;
      uVar9 = true;
      puVar7 = (undefined4 *)PTR_PTR_0066ae54;
      do {
        puStack_24 = &local_a4;
        puStack_28 = (undefined1 *)0x62d701;
        FUN_00416244(local_b4,iVar8,0xfc);
        puStack_28 = local_b4;
        local_2c = (undefined4 ***)0x62d718;
        FUN_00416478(local_c4,"nxdesempate");
        puVar2 = puStack_28;
        puStack_28 = (undefined1 *)0x62d72f;
        FUN_0050e448(*(undefined4 *)(DAT_006d4b7c + 0x2fc),local_c4,puVar2);
        puStack_28 = (undefined1 *)local_a4;
        local_2c = (undefined4 ***)0x62d743;
        FUN_004051d4(&local_c8,*puVar7);
        puVar2 = puStack_28;
        puStack_28 = (undefined1 *)0x62d74f;
        FUN_00405378(puVar2,local_c8);
        iVar3 = iVar6;
        if ((bool)uVar9) break;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
        uVar9 = iVar6 == 2;
        iVar3 = local_c;
      } while (!(bool)uVar9);
      local_c = iVar3;
      if (-1 < local_c) {
        *(int *)(PTR_DAT_0066b41c + iVar4 * 4) = local_c;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = 0;
  puVar7 = (undefined4 *)PTR_DAT_0066b41c;
  do {
    if (iVar5 < 0x1a) {
      local_2c = (undefined4 ***)0x62d79a;
      FUN_00409dd8(*puVar7,&local_d0);
      local_2c = (undefined4 ***)0x62d7ab;
      FUN_004051d4(&local_cc,local_d0);
      local_2c = (undefined4 ***)local_cc;
      puStack_30 = &DAT_0062d954;
      uStack_34 = 0x62d7c3;
      FUN_00405330(&stack0xfffffff0,3);
    }
    else {
      puStack_28 = (undefined1 *)0x62d7d2;
      FUN_00409dd8(*puVar7,&local_d8);
      puStack_28 = (undefined1 *)0x62d7e3;
      FUN_004051d4(&local_d4,local_d8);
      puStack_28 = (undefined1 *)0x62d7f1;
      FUN_0040526c(&stack0xfffffff0,local_d4);
    }
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar5 != 0x1b);
  puStack_28 = (undefined1 *)0x62d808;
  FUN_00404b6c(&local_dc,unaff_EBX);
  puStack_28 = (undefined1 *)0x62d81d;
  FUN_0064a178("opcoes",&DAT_0062d990,local_dc);
  puStack_28 = (undefined1 *)0x62d827;
  FUN_00483bc4(DAT_006d4b7c);
  puVar2 = local_1c;
  *in_FS_OFFSET = (int)puStack_24;
  local_1c = &LAB_0062d924;
  ppuStack_20 = (undefined1 **)0x62d844;
  FUN_004048f8(&local_dc,2,puVar2);
  ppuStack_20 = (undefined1 **)0x62d84f;
  FUN_00404ff0(&local_d4);
  ppuStack_20 = (undefined1 **)0x62d85a;
  FUN_004048d4(&local_d0);
  ppuStack_20 = (undefined1 **)0x62d86a;
  FUN_00405008(&local_cc,2);
  ppuStack_20 = (undefined1 **)0x62d880;
  FUN_00405744(local_c4,PTR_DAT_004010f8,2);
  ppuStack_20 = (undefined1 **)0x62d88b;
  FUN_00404ff0(&local_a4);
  ppuStack_20 = (undefined1 **)0x62d8a1;
  FUN_00405744(local_a0,PTR_DAT_004010f8,2);
  ppuStack_20 = (undefined1 **)0x62d8a9;
  FUN_00404ff0(&local_80);
  ppuStack_20 = (undefined1 **)0x62d8b6;
  FUN_004048f8(&local_7c,3);
  ppuStack_20 = (undefined1 **)0x62d8be;
  FUN_00404ff0(&local_70);
  ppuStack_20 = (undefined1 **)0x62d8c6;
  FUN_004048d4(&local_6c);
  ppuStack_20 = (undefined1 **)0x62d8d3;
  FUN_00405008(&local_68,2);
  ppuStack_20 = (undefined1 **)0x62d8e6;
  FUN_00405744(local_60,PTR_DAT_004010f8,2);
  ppuStack_20 = (undefined1 **)0x62d8ee;
  FUN_00404ff0(&local_40);
  ppuStack_20 = (undefined1 **)0x62d901;
  FUN_00405744(local_3c,PTR_DAT_004010f8,2);
  ppuStack_20 = (undefined1 **)0x62d909;
  FUN_00404ff0(&local_1c);
  ppuStack_20 = (undefined1 **)0x62d911;
  FUN_004048d4(&stack0xffffffe8);
  ppuStack_20 = (undefined1 **)0x62d919;
  FUN_00404ff0(&stack0xfffffff0);
  return;
}

