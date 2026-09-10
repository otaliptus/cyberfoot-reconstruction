// Address: 0055f038
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm73_BitBtn1Click(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 local_1d4 [16];
  undefined1 local_1c4 [16];
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  undefined1 local_1a4 [16];
  undefined1 local_194 [16];
  undefined4 local_184;
  undefined4 local_180;
  undefined1 local_17c [16];
  undefined1 local_16c [16];
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined1 local_134 [16];
  undefined1 local_124 [16];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [196];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  iVar6 = 0x3a;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_20 = &LAB_0055f620;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*PTR_DAT_0066b6d8 == '\0') {
    puStack_28 = (undefined1 *)0x55f073;
    puStack_1c = &stack0xfffffffc;
    iVar6 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
    iVar6 = *(int *)(PTR_DAT_0066b2bc + iVar6 * 8 + 4);
    puStack_28 = (undefined1 *)0x55f084;
    cVar2 = TForm73_checkapais(param_1);
    if (cVar2 != '\0') {
      puStack_28 = (undefined1 *)0x55f092;
      FUN_00437fe8("This National team already exists");
      goto LAB_0055f53f;
    }
    puStack_28 = (undefined1 *)0x55f0a5;
    FUN_00466208(*(undefined4 *)(param_1 + 800),&local_8);
    if (local_8 == 0) {
      puStack_28 = (undefined1 *)0x55f0b5;
      FUN_00437fe8("Enter coach name");
      goto LAB_0055f53f;
    }
    puStack_28 = (undefined1 *)0x55f0cb;
    FUN_00466208(*(undefined4 *)(param_1 + 800),&local_10c);
    puStack_28 = (undefined1 *)0x55f0e1;
    FUN_00404b80(local_108,local_10c,0xff);
    puStack_28 = (undefined1 *)0x55f0fd;
    FUN_004030e0(PTR_DAT_0066b640 + iVar6 * 0x6d4 + 0x27,local_108,0x1e);
    *(int *)(PTR_DAT_0066b640 + iVar6 * 0x6d4) = iVar6;
    puStack_28 = (undefined1 *)0x55f116;
    uVar3 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x300) + 0x16c));
    *(undefined4 *)(PTR_DAT_0066b640 + iVar6 * 0x6d4 + 0x54) = uVar3;
    puStack_28 = (undefined1 *)0x55f131;
    uVar3 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x16c));
    *(undefined4 *)(PTR_DAT_0066b640 + iVar6 * 0x6d4 + 0x50) = uVar3;
    puStack_28 = (undefined1 *)0x55f149;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))();
    *(int *)(PTR_DAT_0066b640 + iVar6 * 0x6d4 + 0x48) = iVar4 + 1;
    *(undefined4 *)(PTR_DAT_0066b640 + iVar6 * 0x6d4 + 0x58) = 0;
    puStack_28 = (undefined1 *)0x55f174;
    FUN_004030e0(PTR_DAT_0066b640 + iVar6 * 0x6d4 + 8,&DAT_0067b420,0x1e);
    puStack_28 = (undefined1 *)0x55f189;
    iVar4 = (**(code **)(**(int **)(*(int *)PTR_DAT_0066b300 + 0x370) + 0x134))();
    if (iVar4 == 0) {
      puStack_28 = (undefined1 *)0x55f1a4;
      (**(code **)(**(int **)(*(int *)PTR_DAT_0066b300 + 0x370) + 0x1f0))
                (*(int **)(*(int *)PTR_DAT_0066b300 + 0x370),0);
      iVar4 = 0;
    }
    else {
      puStack_28 = (undefined1 *)0x55f1bd;
      iVar4 = (**(code **)(**(int **)(*(int *)PTR_DAT_0066b300 + 0x370) + 0x138))();
      puStack_28 = (undefined1 *)0x55f1d7;
      (**(code **)(**(int **)(*(int *)PTR_DAT_0066b300 + 0x370) + 0x1f0))
                (*(int **)(*(int *)PTR_DAT_0066b300 + 0x370),iVar4 + 1);
      iVar4 = iVar4 + 1;
    }
    puStack_28 = (undefined1 *)0x55f1e5;
    FUN_00409dd8(iVar6,&local_114);
    puStack_28 = (undefined1 *)0x55f1f6;
    FUN_004051d4(&local_110,local_114);
    puStack_28 = (undefined1 *)local_110;
    puStack_2c = (undefined1 *)0x55f20c;
    FUN_00416244(local_124,iVar4,0xfc);
    puStack_2c = local_124;
    puStack_30 = (undefined1 *)0x55f223;
    FUN_00416478(local_134,"idsel");
    puVar1 = puStack_2c;
    puStack_2c = (undefined1 *)0x55f23c;
    FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x370),local_134,puVar1);
    puStack_2c = *(undefined1 **)(PTR_DAT_0066b294 + iVar6 * 4);
    puStack_30 = (undefined1 *)0x55f254;
    FUN_00416244(local_144,iVar4,0xfc);
    puStack_30 = local_144;
    puStack_34 = (undefined1 *)0x55f26b;
    FUN_00416478(local_154,"selnome");
    puVar1 = puStack_30;
    puStack_30 = (undefined1 *)0x55f284;
    FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x370),local_154,puVar1);
    puStack_30 = (undefined1 *)0x55f291;
    FUN_00409dd8(iVar6,&local_15c);
    puStack_30 = (undefined1 *)0x55f2a2;
    FUN_004051d4(&local_158,local_15c);
    puStack_30 = (undefined1 *)local_158;
    puStack_34 = (undefined1 *)0x55f2b8;
    FUN_00416244(local_16c,iVar4,0xfc);
    puStack_34 = local_16c;
    puStack_38 = (undefined1 *)0x55f2cf;
    FUN_00416478(local_17c,"paisimg2");
    puVar1 = puStack_34;
    puStack_34 = (undefined1 *)0x55f2e8;
    FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x370),local_17c,puVar1);
    puStack_34 = (undefined1 *)0x55f2f6;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))();
    puStack_34 = (undefined1 *)0x55f302;
    FUN_00409dd8(iVar5 + 1,&local_184);
    puStack_34 = (undefined1 *)0x55f313;
    FUN_004051d4(&local_180,local_184);
    puStack_34 = (undefined1 *)local_180;
    puStack_38 = (undefined1 *)0x55f329;
    FUN_00416244(local_194,iVar4,0xfc);
    puStack_38 = local_194;
    uStack_3c = 0x55f340;
    FUN_00416478(local_1a4,"selnivel");
    puVar1 = puStack_38;
    puStack_38 = (undefined1 *)0x55f359;
    uVar3 = FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x370),local_1a4,puVar1);
    puStack_38 = (undefined1 *)CONCAT31((int3)((uint)uVar3 >> 8),DAT_0055f6c4);
    uStack_3c = 1;
    uStack_40 = 0;
    uStack_44 = 0x55f37f;
    (**(code **)(**(int **)(*(int *)PTR_DAT_0066b300 + 0x370) + 0x20c))
              (*(int **)(*(int *)PTR_DAT_0066b300 + 0x370),1,iVar4);
    puStack_28 = (undefined1 *)0x55f38d;
    TForm3_selecaosalvar(*(undefined4 *)PTR_DAT_0066b300,iVar6);
    puStack_28 = (undefined1 *)0x55f39b;
    TForm3_listjogselecao(*(undefined4 *)PTR_DAT_0066b300,iVar6);
  }
  else {
    puStack_28 = (undefined1 *)0x55f3b1;
    FUN_00466208(*(undefined4 *)(param_1 + 800),&local_1a8);
    if (local_1a8 == 0) {
      puStack_28 = (undefined1 *)0x55f3c4;
      FUN_00437fe8("Enter coach name");
      goto LAB_0055f53f;
    }
    puStack_28 = (undefined1 *)0x55f3da;
    FUN_00466208(*(undefined4 *)(param_1 + 800),&local_1ac);
    puStack_28 = (undefined1 *)0x55f3f0;
    FUN_00404b80(local_108,local_1ac,0xff);
    puStack_28 = (undefined1 *)0x55f412;
    FUN_004030e0(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x27,local_108,0x1e);
    puStack_28 = (undefined1 *)0x55f423;
    uVar3 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x300) + 0x16c));
    *(undefined4 *)(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x54) = uVar3;
    puStack_28 = (undefined1 *)0x55f44a;
    uVar3 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x16c));
    *(undefined4 *)(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x50) = uVar3;
    puStack_28 = (undefined1 *)0x55f46e;
    iVar6 = (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))();
    *(int *)(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x48) = iVar6 + 1;
    puStack_28 = (undefined1 *)0x55f499;
    TForm3_selecaosalvar(*(undefined4 *)PTR_DAT_0066b300,*(undefined4 *)PTR_DAT_0066b63c);
    puStack_28 = (undefined1 *)0x55f4ae;
    uVar3 = (**(code **)(**(int **)(*(int *)PTR_DAT_0066b300 + 0x370) + 0x138))();
    puStack_28 = (undefined1 *)0x55f4be;
    iVar6 = (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))();
    uStack_24 = 0x55f4ca;
    FUN_00409dd8(iVar6 + 1,&local_1b4);
    uStack_24 = 0x55f4db;
    FUN_004051d4(&local_1b0,local_1b4);
    uStack_24 = local_1b0;
    puStack_28 = (undefined1 *)0x55f4f1;
    FUN_00416244(local_1c4,uVar3,0xfc);
    puStack_28 = local_1c4;
    puStack_2c = (undefined1 *)0x55f508;
    FUN_00416478(local_1d4,"selnivel");
    puVar1 = puStack_28;
    puStack_28 = (undefined1 *)0x55f521;
    FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b300 + 0x370),local_1d4,puVar1);
    puStack_28 = (undefined1 *)0x55f535;
    TForm3_listjogselecao(*(undefined4 *)PTR_DAT_0066b300,*(undefined4 *)PTR_DAT_0066b63c);
  }
  puStack_28 = (undefined1 *)0x55f53f;
  FUN_00483bc4(DAT_0067b41c);
LAB_0055f53f:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0055f62a;
  puStack_20 = (undefined1 *)0x55f562;
  FUN_00405744(local_1d4,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x55f56d;
  FUN_004048d4(&local_1b4);
  puStack_20 = (undefined1 *)0x55f578;
  FUN_00404ff0(&local_1b0);
  puStack_20 = (undefined1 *)0x55f588;
  FUN_004048f8(&local_1ac,2);
  puStack_20 = (undefined1 *)0x55f59e;
  FUN_00405744(local_1a4,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x55f5a9;
  FUN_004048d4(&local_184);
  puStack_20 = (undefined1 *)0x55f5b4;
  FUN_00404ff0(&local_180);
  puStack_20 = (undefined1 *)0x55f5ca;
  FUN_00405744(local_17c,PTR_DAT_004010f8,2);
  puStack_20 = (undefined1 *)0x55f5d5;
  FUN_004048d4(&local_15c);
  puStack_20 = (undefined1 *)0x55f5e0;
  FUN_00404ff0(&local_158);
  puStack_20 = (undefined1 *)0x55f5f6;
  FUN_00405744(local_154,PTR_DAT_004010f8,4);
  puStack_20 = (undefined1 *)0x55f601;
  FUN_004048d4(&local_114);
  puStack_20 = (undefined1 *)0x55f60c;
  FUN_00404ff0(&local_110);
  puStack_20 = (undefined1 *)0x55f617;
  FUN_004048d4(&local_10c);
  puStack_20 = (undefined1 *)0x55f61f;
  FUN_004048d4(&local_8);
  return;
}

