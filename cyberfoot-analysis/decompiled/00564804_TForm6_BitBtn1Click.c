// Address: 00564804
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm6_BitBtn1Click(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 local_37c [16];
  undefined1 local_36c [16];
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined4 local_330;
  undefined1 local_32c [16];
  undefined1 local_31c [16];
  undefined4 local_30c;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  int local_27c;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined4 local_218;
  undefined1 local_214 [16];
  undefined1 local_204 [16];
  undefined4 local_1f4;
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined4 local_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined4 local_158;
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined1 local_134 [16];
  undefined1 local_124 [16];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [184];
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;
  
  puVar2 = PTR_DAT_0066b300;
  puStack_1c = &stack0xfffffffc;
  iVar8 = 0x6f;
  do {
    local_8 = 0;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puStack_20 = &LAB_00565671;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*PTR_DAT_0066ad3c == '\0') {
    puStack_28 = (undefined1 *)0x56484d;
    puStack_1c = &stack0xfffffffc;
    FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_8);
    if (local_8 != 0) {
      puStack_28 = (undefined1 *)0x564868;
      FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_10c);
      puStack_28 = (undefined1 *)0x56487e;
      FUN_00404b80(local_108,local_10c,0xff);
      iVar8 = *(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708;
      puStack_28 = (undefined1 *)0x5648ac;
      FUN_004030e0(iVar8 + -0x24 + DAT_0067b49c * 0x24,local_108,
                   CONCAT31((int3)((uint)iVar8 >> 8),0x23));
      puStack_28 = (undefined1 *)0x5648bd;
      FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_114);
      puStack_28 = (undefined1 *)0x5648ce;
      FUN_004051d4(&local_110,local_114);
      puStack_28 = (undefined1 *)local_110;
      puStack_2c = (undefined1 *)0x5648e5;
      uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
      puStack_28 = (undefined1 *)0x5648f4;
      FUN_00416244(local_124,uVar7,0xfc);
      puStack_28 = local_124;
      puStack_2c = (undefined1 *)0x56490b;
      FUN_00416478(local_134,&DAT_0056568c);
      puVar3 = puStack_28;
      puStack_28 = (undefined1 *)0x56491f;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_134,puVar3);
    }
    puStack_28 = (undefined1 *)0x56492a;
    uVar5 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
    *(undefined1 *)
     (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x617 + DAT_0067b49c) = uVar5;
    puStack_28 = (undefined1 *)0x564955;
    iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
    puStack_28 = *(undefined1 **)(PTR_DAT_0066b084 + iVar8 * 4);
    puStack_2c = (undefined1 *)0x56496f;
    uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
    puStack_2c = (undefined1 *)0x56497e;
    FUN_00416244(local_144,uVar7,0xfc);
    puStack_2c = local_144;
    puStack_30 = (undefined *)0x564995;
    FUN_00416478(local_154,"posicaojog");
    puVar3 = puStack_2c;
    puStack_2c = (undefined1 *)0x5649a9;
    FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_154,puVar3);
    if (*(char *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x617 + DAT_0067b49c
                 ) == '\0') {
      puStack_2c = (undefined1 *)0x5649d6;
      uVar5 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
      *(undefined1 *)
       (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x667 + DAT_0067b49c) = uVar5;
      puStack_2c = (undefined1 *)0x564a01;
      uVar5 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
      *(undefined1 *)
       (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x68f + DAT_0067b49c) = uVar5;
    }
    else {
      puStack_2c = (undefined1 *)0x564a2e;
      cVar6 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
      *(char *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x667 + DAT_0067b49c)
           = cVar6 + '\x04';
      puStack_2c = (undefined1 *)0x564a5b;
      cVar6 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
      *(char *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x68f + DAT_0067b49c)
           = cVar6 + '\x04';
    }
    puStack_2c = (undefined1 *)0x564a88;
    uVar5 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
    *(undefined1 *)
     (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6b7 + DAT_0067b49c) = uVar5;
    if (*(char *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x617 + DAT_0067b49c
                 ) == '\0') {
      puStack_2c = (undefined1 *)0x564ad9;
      iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
      puStack_2c = *(undefined1 **)(PTR_DAT_0066b1c8 + iVar8 * 4);
      puStack_30 = &DAT_005656ac;
      puStack_34 = (undefined *)0x564af2;
      iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
      puStack_34 = *(undefined **)(PTR_DAT_0066b1c8 + iVar8 * 4);
      uStack_38 = 0x564b0b;
      FUN_00405330(&local_158,3);
      uStack_38 = local_158;
      puStack_3c = (undefined1 *)0x564b22;
      uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
      puStack_3c = (undefined1 *)0x564b31;
      FUN_00416244(local_168,uVar7,0xfc);
      puStack_3c = local_168;
      puStack_40 = (undefined1 *)0x564b48;
      FUN_00416478(local_178,"habilidadejog");
      puVar3 = puStack_3c;
      puStack_3c = (undefined1 *)0x564b5c;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_178,puVar3);
    }
    else {
      puStack_2c = (undefined1 *)0x564b6c;
      iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
      puStack_2c = *(undefined1 **)(PTR_DAT_0066b1c8 + iVar8 * 4 + 0x10);
      puStack_30 = &DAT_005656ac;
      puStack_34 = (undefined *)0x564b86;
      iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
      puStack_34 = *(undefined **)(PTR_DAT_0066b1c8 + iVar8 * 4 + 0x10);
      uStack_38 = 0x564ba0;
      FUN_00405330(&local_17c,3);
      uStack_38 = local_17c;
      puStack_3c = (undefined1 *)0x564bb7;
      uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
      puStack_3c = (undefined1 *)0x564bc6;
      FUN_00416244(local_18c,uVar7,0xfc);
      puStack_3c = local_18c;
      puStack_40 = (undefined1 *)0x564bdd;
      FUN_00416478(local_19c,"habilidadejog");
      puVar3 = puStack_3c;
      puStack_3c = (undefined1 *)0x564bf1;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_19c,puVar3);
    }
    puStack_3c = (undefined1 *)0x564bfc;
    iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x338));
    *(undefined *)
     (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x5c7 + DAT_0067b49c) =
         PTR_DAT_0066b2bc[iVar8 * 8 + 4];
    puStack_3c = (undefined1 *)0x564c31;
    iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x338));
    puStack_3c = (undefined1 *)0x564c46;
    FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066b2bc + iVar8 * 8 + 4),&local_1a4);
    puStack_3c = (undefined1 *)0x564c57;
    FUN_004051d4(&local_1a0,local_1a4);
    puStack_3c = (undefined1 *)local_1a0;
    puStack_40 = (undefined1 *)0x564c6e;
    uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
    puStack_40 = (undefined1 *)0x564c7d;
    FUN_00416244(local_1b4,uVar7,0xfc);
    puStack_40 = local_1b4;
    puStack_44 = (undefined1 *)0x564c94;
    FUN_00416478(local_1c4,"paisjog");
    puVar3 = puStack_40;
    puStack_40 = (undefined1 *)0x564ca8;
    FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_1c4,puVar3);
    puStack_40 = (undefined1 *)0x564cb9;
    FUN_00466208(*(undefined4 *)(param_1 + 0x2f8),&local_1c8);
    puStack_40 = (undefined1 *)0x564cc4;
    uVar5 = FUN_00409ff8(local_1c8);
    *(undefined1 *)
     (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x5ef + DAT_0067b49c) = uVar5;
    puStack_40 = (undefined1 *)0x564cf5;
    FUN_00466208(*(undefined4 *)(param_1 + 0x2f8),&local_1d0);
    puStack_40 = (undefined1 *)0x564d06;
    FUN_004051d4(&local_1cc,local_1d0);
    puStack_40 = (undefined1 *)local_1cc;
    puStack_44 = (undefined1 *)0x564d1d;
    uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
    puStack_44 = (undefined1 *)0x564d2c;
    FUN_00416244(local_1e0,uVar7,0xfc);
    puStack_44 = local_1e0;
    puStack_48 = (undefined *)0x564d43;
    FUN_00416478(local_1f0,"idade");
    puVar3 = puStack_44;
    puStack_44 = (undefined1 *)0x564d57;
    FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_1f0,puVar3);
    puStack_44 = (undefined1 *)0x564d62;
    iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
    if (iVar8 == 0) {
      puStack_44 = (undefined1 *)0x564d76;
      FUN_00642c50(0x99,&local_1f4);
      puStack_44 = (undefined1 *)local_1f4;
      puStack_48 = (undefined *)0x564d8d;
      uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
      puStack_48 = (undefined *)0x564d9c;
      FUN_00416244(local_204,uVar7,0xfc);
      puStack_48 = local_204;
      puStack_4c = (undefined1 *)0x564db3;
      FUN_00416478(local_214,"nxlado");
      puVar4 = puStack_48;
      puStack_48 = (undefined *)0x564dc7;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_214,puVar4);
    }
    else {
      puStack_44 = (undefined1 *)0x564dd9;
      FUN_00642c50(0x9b,&local_218);
      puStack_44 = (undefined1 *)local_218;
      puStack_48 = (undefined *)0x564df0;
      uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
      puStack_48 = (undefined *)0x564dff;
      FUN_00416244(local_228,uVar7,0xfc);
      puStack_48 = local_228;
      puStack_4c = (undefined1 *)0x564e16;
      FUN_00416478(local_238,"nxlado");
      puVar4 = puStack_48;
      puStack_48 = (undefined *)0x564e2a;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_238,puVar4);
    }
    puStack_48 = (undefined *)0x564e38;
    uVar5 = (**(code **)(**(int **)(param_1 + 0x2fc) + 200))();
    *(undefined1 *)
     (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x59f + DAT_0067b49c) = uVar5;
    if (*(char *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x59f + DAT_0067b49c
                 ) == '\0') {
      puStack_48 = &DAT_00565714;
      piVar1 = *(int **)(*(int *)puVar2 + 0x33c);
      puStack_4c = (undefined1 *)0x564ede;
      uVar7 = (**(code **)(*piVar1 + 0x138))();
      puStack_4c = (undefined1 *)0x564eed;
      FUN_00416244(local_268,uVar7,0xfc);
      puStack_4c = local_268;
      uStack_50 = 0x564f04;
      FUN_00416478(local_278,"estrela");
      puVar3 = puStack_4c;
      puStack_4c = (undefined1 *)0x564f12;
      FUN_0050e9b8(piVar1,local_278,puVar3);
    }
    else {
      puStack_48 = &DAT_005656fc;
      piVar1 = *(int **)(*(int *)puVar2 + 0x33c);
      puStack_4c = (undefined1 *)0x564e91;
      uVar7 = (**(code **)(*piVar1 + 0x138))();
      puStack_4c = (undefined1 *)0x564ea0;
      FUN_00416244(local_248,uVar7,0xfc);
      puStack_4c = local_248;
      uStack_50 = 0x564eb7;
      FUN_00416478(local_258,"estrela");
      puVar3 = puStack_4c;
      puStack_4c = (undefined1 *)0x564ec5;
      FUN_0050e9b8(piVar1,local_258,puVar3);
    }
    puStack_4c = (undefined1 *)0x564f21;
    TForm3_timesalvar(*(undefined4 *)puVar2,*(undefined4 *)PTR_DAT_0066ac90);
    puStack_4c = (undefined1 *)0x564f2b;
    FUN_00483bc4(DAT_0067b498);
  }
  else {
    puStack_28 = (undefined1 *)0x564f41;
    FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_27c);
    if (local_27c != 0) {
      puStack_28 = (undefined1 *)0x564f5f;
      FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_280);
      puStack_28 = (undefined1 *)0x564f75;
      FUN_00404b80(local_108,local_280,0xff);
      puStack_28 = (undefined1 *)0x564fa1;
      FUN_004030e0(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4 + DAT_0067b49c * 0x24 + 0x38,
                   local_108,
                   CONCAT31((int3)((uint)(PTR_DAT_0066b640 + *(int *)PTR_DAT_0066b63c * 0x6d4) >> 8)
                            ,0x23));
      puStack_28 = (undefined1 *)0x564fb2;
      FUN_00466208(*(undefined4 *)(param_1 + 0x300),&local_288);
      puStack_28 = (undefined1 *)0x564fc3;
      FUN_004051d4(&local_284,local_288);
      puStack_28 = (undefined1 *)local_284;
      puStack_2c = (undefined1 *)0x564fda;
      uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
      puStack_28 = (undefined1 *)0x564fe9;
      FUN_00416244(local_298,uVar7,0xfc);
      puStack_28 = local_298;
      puStack_2c = (undefined1 *)0x565000;
      FUN_00416478(local_2a8,&DAT_0056568c);
      puVar3 = puStack_28;
      puStack_28 = (undefined1 *)0x565014;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_2a8,puVar3);
    }
    puStack_28 = (undefined1 *)0x56501f;
    uVar7 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
    *(undefined4 *)(PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x4b8)
         = uVar7;
    puStack_28 = (undefined1 *)0x565048;
    iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
    puStack_28 = *(undefined1 **)(PTR_DAT_0066b084 + iVar8 * 4);
    puStack_2c = (undefined1 *)0x565062;
    uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
    puStack_2c = (undefined1 *)0x565071;
    FUN_00416244(local_2b8,uVar7,0xfc);
    puStack_2c = local_2b8;
    puStack_30 = (undefined *)0x565088;
    FUN_00416478(local_2c8,"posicaojog");
    puVar3 = puStack_2c;
    puStack_2c = (undefined1 *)0x56509c;
    FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_2c8,puVar3);
    if (*(int *)(PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x4b8) ==
        0) {
      puStack_2c = (undefined1 *)0x5650c7;
      uVar7 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
      *(undefined4 *)
       (PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x598) = uVar7;
      puStack_2c = (undefined1 *)0x5650f0;
      uVar7 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
      *(undefined4 *)
       (PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x608) = uVar7;
    }
    else {
      puStack_2c = (undefined1 *)0x56511b;
      iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
      *(int *)(PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x598) =
           iVar8 + 4;
      puStack_2c = (undefined1 *)0x565147;
      iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
      *(int *)(PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x608) =
           iVar8 + 4;
    }
    puStack_2c = (undefined1 *)0x565173;
    uVar5 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
    PTR_DAT_0066b640[DAT_0067b49c + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x698] = uVar5;
    puStack_2c = (undefined1 *)0x56519c;
    iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
    if (iVar8 == 0) {
      puStack_2c = &DAT_0056571c;
      puStack_30 = (undefined *)0x5651b5;
      uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
      puStack_30 = (undefined *)0x5651c4;
      FUN_00416244(local_2d8,uVar7,0xfc);
      puStack_30 = local_2d8;
      puStack_34 = (undefined *)0x5651db;
      FUN_00416478(local_2e8,"nxlado");
      puVar4 = puStack_30;
      puStack_30 = (undefined *)0x5651ef;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_2e8,puVar4);
    }
    else {
      puStack_2c = &DAT_00565724;
      puStack_30 = (undefined *)0x565206;
      uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
      puStack_30 = (undefined *)0x565215;
      FUN_00416244(local_2f8,uVar7,0xfc);
      puStack_30 = local_2f8;
      puStack_34 = (undefined *)0x56522c;
      FUN_00416478(local_308,"nxlado");
      puVar4 = puStack_30;
      puStack_30 = (undefined *)0x565240;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_308,puVar4);
    }
    if (*(int *)(PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x4b8) ==
        0) {
      puStack_30 = (undefined *)0x56526f;
      iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
      puStack_30 = *(undefined **)(PTR_DAT_0066b1c8 + iVar8 * 4);
      puStack_34 = &DAT_005656ac;
      uStack_38 = 0x565288;
      iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
      uStack_38 = *(undefined4 *)(PTR_DAT_0066b1c8 + iVar8 * 4);
      puStack_3c = (undefined1 *)0x5652a1;
      FUN_00405330(&local_30c,3);
      puStack_3c = (undefined1 *)local_30c;
      puStack_40 = (undefined1 *)0x5652b8;
      uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
      puStack_40 = (undefined1 *)0x5652c7;
      FUN_00416244(local_31c,uVar7,0xfc);
      puStack_40 = local_31c;
      puStack_44 = (undefined1 *)0x5652de;
      FUN_00416478(local_32c,"habilidadejog");
      puVar3 = puStack_40;
      puStack_40 = (undefined1 *)0x5652f2;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_32c,puVar3);
    }
    else {
      puStack_30 = (undefined *)0x565302;
      iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x33c));
      puStack_30 = *(undefined **)(PTR_DAT_0066b1c8 + iVar8 * 4 + 0x10);
      puStack_34 = &DAT_005656ac;
      uStack_38 = 0x56531c;
      iVar8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x340));
      uStack_38 = *(undefined4 *)(PTR_DAT_0066b1c8 + iVar8 * 4 + 0x10);
      puStack_3c = (undefined1 *)0x565336;
      FUN_00405330(&local_330,3);
      puStack_3c = (undefined1 *)local_330;
      puStack_40 = (undefined1 *)0x56534d;
      uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
      puStack_40 = (undefined1 *)0x56535c;
      FUN_00416244(local_340,uVar7,0xfc);
      puStack_40 = local_340;
      puStack_44 = (undefined1 *)0x565373;
      FUN_00416478(local_350,"habilidadejog");
      puVar3 = puStack_40;
      puStack_40 = (undefined1 *)0x565387;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_350,puVar3);
    }
    puStack_40 = (undefined1 *)0x565398;
    FUN_00466208(*(undefined4 *)(param_1 + 0x2f8),&local_354);
    puStack_40 = (undefined1 *)0x5653a3;
    uVar7 = FUN_00409ff8(local_354);
    *(undefined4 *)(PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x448)
         = uVar7;
    puStack_40 = (undefined1 *)0x5653d2;
    FUN_00466208(*(undefined4 *)(param_1 + 0x2f8),&local_35c);
    puStack_40 = (undefined1 *)0x5653e3;
    FUN_004051d4(&local_358,local_35c);
    puStack_40 = (undefined1 *)local_358;
    puStack_44 = (undefined1 *)0x5653fa;
    uVar7 = (**(code **)(**(int **)(*(int *)puVar2 + 0x33c) + 0x138))();
    puStack_44 = (undefined1 *)0x565409;
    FUN_00416244(local_36c,uVar7,0xfc);
    puStack_44 = local_36c;
    puStack_48 = (undefined *)0x565420;
    FUN_00416478(local_37c,"idade");
    puVar3 = puStack_44;
    puStack_44 = (undefined1 *)0x565434;
    FUN_0050e9b8(*(undefined4 *)(*(int *)puVar2 + 0x33c),local_37c,puVar3);
    puStack_44 = (undefined1 *)0x565442;
    uVar5 = (**(code **)(**(int **)(param_1 + 0x2fc) + 200))();
    PTR_DAT_0066b640[DAT_0067b49c + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x67b] = uVar5;
    puStack_4c = (undefined1 *)0x56546f;
    TForm3_selecaosalvar(*(undefined4 *)puVar2,*(undefined4 *)PTR_DAT_0066b63c);
    puStack_4c = (undefined1 *)0x56547e;
    TForm3_listjogselecao(*(undefined4 *)puVar2,*(undefined4 *)PTR_DAT_0066b63c);
    puStack_4c = (undefined1 *)0x565488;
    FUN_00483bc4(DAT_0067b498);
  }
  *in_FS_OFFSET = puStack_48;
  puStack_40 = &LAB_0056567b;
  puStack_44 = (undefined1 *)0x5654ab;
  FUN_00405744(local_37c,PTR_DAT_004010f8,2);
  puStack_44 = (undefined1 *)0x5654b6;
  FUN_004048d4(&local_35c);
  puStack_44 = (undefined1 *)0x5654c1;
  FUN_00404ff0(&local_358);
  puStack_44 = (undefined1 *)0x5654cc;
  FUN_004048d4(&local_354);
  puStack_44 = (undefined1 *)0x5654e2;
  FUN_00405744(local_350,PTR_DAT_004010f8,2);
  puStack_44 = (undefined1 *)0x5654ed;
  FUN_00404ff0(&local_330);
  puStack_44 = (undefined1 *)0x565503;
  FUN_00405744(local_32c,PTR_DAT_004010f8,2);
  puStack_44 = (undefined1 *)0x56550e;
  FUN_00404ff0(&local_30c);
  puStack_44 = (undefined1 *)0x565524;
  FUN_00405744(local_308,PTR_DAT_004010f8,8);
  puStack_44 = (undefined1 *)0x56552f;
  FUN_004048d4(&local_288);
  puStack_44 = (undefined1 *)0x56553a;
  FUN_00404ff0(&local_284);
  puStack_44 = (undefined1 *)0x56554a;
  FUN_004048f8(&local_280,2);
  puStack_44 = (undefined1 *)0x565560;
  FUN_00405744(local_278,PTR_DAT_004010f8,6);
  puStack_44 = (undefined1 *)0x56556b;
  FUN_00404ff0(&local_218);
  puStack_44 = (undefined1 *)0x565581;
  FUN_00405744(local_214,PTR_DAT_004010f8,2);
  puStack_44 = (undefined1 *)0x56558c;
  FUN_00404ff0(&local_1f4);
  puStack_44 = (undefined1 *)0x5655a2;
  FUN_00405744(local_1f0,PTR_DAT_004010f8,2);
  puStack_44 = (undefined1 *)0x5655ad;
  FUN_004048d4(&local_1d0);
  puStack_44 = (undefined1 *)0x5655b8;
  FUN_00404ff0(&local_1cc);
  puStack_44 = (undefined1 *)0x5655c3;
  FUN_004048d4(&local_1c8);
  puStack_44 = (undefined1 *)0x5655d9;
  FUN_00405744(local_1c4,PTR_DAT_004010f8,2);
  puStack_44 = (undefined1 *)0x5655e4;
  FUN_004048d4(&local_1a4);
  puStack_44 = (undefined1 *)0x5655ef;
  FUN_00404ff0(&local_1a0);
  puStack_44 = (undefined1 *)0x565605;
  FUN_00405744(local_19c,PTR_DAT_004010f8,2);
  puStack_44 = (undefined1 *)0x565610;
  FUN_00404ff0(&local_17c);
  puStack_44 = (undefined1 *)0x565626;
  FUN_00405744(local_178,PTR_DAT_004010f8,2);
  puStack_44 = (undefined1 *)0x565631;
  FUN_00404ff0(&local_158);
  puStack_44 = (undefined1 *)0x565647;
  FUN_00405744(local_154,PTR_DAT_004010f8,4);
  puStack_44 = (undefined1 *)0x565652;
  FUN_004048d4(&local_114);
  puStack_44 = (undefined1 *)0x56565d;
  FUN_00404ff0(&local_110);
  puStack_44 = (undefined1 *)0x565668;
  FUN_004048d4(&local_10c);
  puStack_44 = (undefined1 *)0x565670;
  FUN_004048d4(&local_8);
  return;
}

