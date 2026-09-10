// Address: 005610f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm4_BitBtn1Click(int param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134 [16];
  undefined1 local_124 [16];
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c [216];
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_c;
  int local_8;
  
  puVar1 = PTR_DAT_0066b300;
  puStack_20 = &stack0xfffffffc;
  iVar5 = 0x36;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puStack_24 = &LAB_005618c7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = 0;
  if (DAT_0067b454 == '\0') {
    puStack_2c = (undefined1 *)0x561813;
    FUN_00483bc4(DAT_0067b450);
  }
  else {
    puStack_20 = &stack0xfffffffc;
    if (DAT_0067b458 != 0) {
      puStack_2c = (undefined1 *)0x561143;
      puStack_20 = &stack0xfffffffc;
      FUN_004051d4(&local_c,DAT_0067b458);
      puStack_2c = (undefined1 *)0x561153;
      FUN_004e1414(*(undefined4 *)(*(int *)puVar1 + 0x318),local_c);
      puStack_2c = (undefined1 *)0x561165;
      FUN_00404b80(local_10c,DAT_0067b458,0xff);
      puStack_2c = (undefined1 *)0x56118b;
      FUN_004030e0(*(int *)PTR_DAT_0066b010 + 0x1e + *(int *)PTR_DAT_0066ac90 * 200,local_10c,
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b010 >> 8),0x19));
    }
    if (DAT_0067b45c != 0) {
      puStack_2c = (undefined1 *)0x5611a3;
      FUN_004051d4(&local_110,DAT_0067b45c);
      puStack_2c = (undefined1 *)0x5611b6;
      FUN_004e1414(*(undefined4 *)(*(int *)puVar1 + 0x31c),local_110);
      puStack_2c = (undefined1 *)0x5611c9;
      FUN_00404b80(local_10c,DAT_0067b45c,0xff);
      puStack_2c = (undefined1 *)0x5611ef;
      FUN_004030e0(*(int *)PTR_DAT_0066b010 + 4 + *(int *)PTR_DAT_0066ac90 * 200,local_10c,
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b010 >> 8),0x19));
      puStack_2c = (undefined1 *)0x5611fd;
      FUN_004051d4(&local_114,DAT_0067b45c);
      puStack_2c = (undefined1 *)local_114;
      puStack_30 = (undefined1 *)0x561214;
      uVar4 = (**(code **)(**(int **)(*(int *)puVar1 + 0x2f8) + 0x138))();
      puStack_2c = (undefined1 *)0x561223;
      FUN_00416244(local_124,uVar4,0xfc);
      puStack_2c = local_124;
      puStack_30 = (undefined1 *)0x56123a;
      FUN_00416478(local_134,"clube");
      puVar2 = puStack_2c;
      puStack_2c = (undefined1 *)0x56124e;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar1 + 0x2f8),local_134,puVar2);
    }
    if (DAT_0067b460 != 0) {
      puStack_2c = (undefined1 *)0x561262;
      FUN_004051d4(&local_138,DAT_0067b460);
      puStack_2c = (undefined1 *)0x561275;
      FUN_004e1414(*(undefined4 *)(*(int *)puVar1 + 0x310),local_138);
      puStack_2c = (undefined1 *)0x561288;
      FUN_00404b80(local_10c,DAT_0067b460,0xff);
      puStack_2c = (undefined1 *)0x5612b1;
      FUN_004030e0(*(int *)PTR_DAT_0066b010 + 0x8b + *(int *)PTR_DAT_0066ac90 * 200,local_10c,
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b010 >> 8),0x19));
    }
    if (DAT_0067b464 != 0) {
      puStack_2c = (undefined1 *)0x5612c9;
      FUN_004051d4(&local_13c,DAT_0067b464);
      puStack_2c = (undefined1 *)0x5612dc;
      FUN_004e1414(*(undefined4 *)(*(int *)puVar1 + 0x334),local_13c);
      puStack_2c = (undefined1 *)0x5612e4;
      uVar3 = FUN_00409ff8(DAT_0067b464);
      *(undefined1 *)(*(int *)PTR_DAT_0066b010 + 3 + *(int *)PTR_DAT_0066ac90 * 200) = uVar3;
      puStack_2c = (undefined1 *)0x56130c;
      FUN_004051d4(&local_140,DAT_0067b464);
      puStack_2c = (undefined1 *)local_140;
      puStack_30 = (undefined1 *)0x561323;
      uVar4 = (**(code **)(**(int **)(*(int *)puVar1 + 0x2f8) + 0x138))();
      puStack_2c = (undefined1 *)0x561332;
      FUN_00416244(local_150,uVar4,0xfc);
      puStack_2c = local_150;
      puStack_30 = (undefined1 *)0x561349;
      FUN_00416478(local_160,"nivel");
      puVar2 = puStack_2c;
      puStack_2c = (undefined1 *)0x56135d;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar1 + 0x2f8),local_160,puVar2);
    }
    if (DAT_0067b478 != 0) {
      puStack_2c = (undefined1 *)0x561371;
      FUN_004051d4(&local_164,DAT_0067b478);
      puStack_2c = (undefined1 *)0x561384;
      FUN_004e1414(*(undefined4 *)(*(int *)puVar1 + 0x314),local_164);
      puStack_2c = (undefined1 *)0x561397;
      FUN_00404b80(local_10c,DAT_0067b478,0xff);
      puStack_2c = (undefined1 *)0x5613bd;
      FUN_004030e0(*(int *)PTR_DAT_0066b010 + 0x38 + *(int *)PTR_DAT_0066ac90 * 200,local_10c,
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b010 >> 8),0x1e));
    }
    if (DAT_0067b468 != 0) {
      puStack_2c = (undefined1 *)0x5613d6;
      FUN_0043aa68(*(undefined4 *)(*(int *)puVar1 + 0x32c),0);
      puStack_2c = (undefined1 *)0x5613e9;
      puStack_2c = (undefined1 *)
                   FUN_0042d5c8(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x32c) + 0x168));
      puStack_30 = (undefined1 *)0x5613f2;
      uVar4 = FUN_00409ff8(DAT_0067b468);
      puVar2 = puStack_2c;
      puStack_2c = (undefined1 *)0x561407;
      FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),uVar4,puVar2);
      puStack_2c = (undefined1 *)0x56140f;
      uVar3 = FUN_00409ff8(DAT_0067b468);
      *(undefined1 *)(*(int *)PTR_DAT_0066b010 + *(int *)PTR_DAT_0066ac90 * 200) = uVar3;
      puStack_2c = (undefined1 *)0x561436;
      FUN_004051d4(&local_168,DAT_0067b468);
      puStack_2c = (undefined1 *)local_168;
      puStack_30 = (undefined1 *)0x56144d;
      uVar4 = (**(code **)(**(int **)(*(int *)puVar1 + 0x2f8) + 0x138))();
      puStack_30 = (undefined1 *)0x56145c;
      FUN_00416244(local_178,uVar4,0xfc);
      puStack_30 = local_178;
      uStack_34 = 0x561473;
      FUN_00416478(local_188,"paisimg");
      puVar2 = puStack_30;
      puStack_30 = (undefined1 *)0x561487;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar1 + 0x2f8),local_188,puVar2);
      puStack_30 = (undefined1 *)0x56148f;
      iVar5 = FUN_00409ff8(DAT_0067b468);
      puStack_30 = *(undefined1 **)(PTR_DAT_0066b294 + iVar5 * 4);
      uStack_34 = 0x5614a9;
      uVar4 = (**(code **)(**(int **)(*(int *)puVar1 + 0x2f8) + 0x138))();
      puStack_2c = (undefined1 *)0x5614b8;
      FUN_00416244(local_198,uVar4,0xfc);
      puStack_2c = local_198;
      puStack_30 = (undefined1 *)0x5614cf;
      FUN_00416478(local_1a8,"paisnome");
      puVar2 = puStack_2c;
      puStack_2c = (undefined1 *)0x5614e3;
      FUN_0050e9b8(*(undefined4 *)(*(int *)puVar1 + 0x2f8),local_1a8,puVar2);
      puStack_2c = (undefined1 *)0x5614eb;
      iVar5 = FUN_00409ff8(DAT_0067b468);
      puStack_2c = (undefined1 *)0x561501;
      FUN_004e1414(*(undefined4 *)(*(int *)puVar1 + 0x330),
                   *(undefined4 *)(PTR_DAT_0066b294 + iVar5 * 4));
    }
    if (DAT_0067b46c != 0) {
      puStack_2c = (undefined1 *)0x56150f;
      uVar4 = FUN_00429ecc(DAT_0067b46c);
      puStack_2c = (undefined1 *)0x56151e;
      FUN_004663a8(*(undefined4 *)(*(int *)puVar1 + 0x30c),uVar4);
      puStack_2c = (undefined1 *)0x561526;
      uVar4 = FUN_00429ecc(DAT_0067b46c);
      *(undefined4 *)(*(int *)PTR_DAT_0066b010 + 0xa8 + *(int *)PTR_DAT_0066ac90 * 200) = uVar4;
    }
    if (DAT_0067b470 != 0) {
      puStack_2c = (undefined1 *)0x561555;
      uVar4 = FUN_00429ecc(DAT_0067b470);
      puStack_2c = (undefined1 *)0x561567;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x318) + 0x68),uVar4);
      puStack_2c = (undefined1 *)0x56156f;
      uVar4 = FUN_00429ecc(DAT_0067b470);
      puStack_2c = (undefined1 *)0x561581;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x31c) + 0x68),uVar4);
      puStack_2c = (undefined1 *)0x561589;
      uVar4 = FUN_00429ecc(DAT_0067b470);
      puStack_2c = (undefined1 *)0x56159b;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x310) + 0x68),uVar4);
      puStack_2c = (undefined1 *)0x5615a3;
      uVar4 = FUN_00429ecc(DAT_0067b470);
      puStack_2c = (undefined1 *)0x5615b5;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x338) + 0x68),uVar4);
      puStack_2c = (undefined1 *)0x5615bd;
      uVar4 = FUN_00429ecc(DAT_0067b470);
      puStack_2c = (undefined1 *)0x5615cf;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x334) + 0x68),uVar4);
      puStack_2c = (undefined1 *)0x5615d7;
      uVar4 = FUN_00429ecc(DAT_0067b470);
      puStack_2c = (undefined1 *)0x5615e9;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x330) + 0x68),uVar4);
      puStack_2c = (undefined1 *)0x5615f1;
      uVar4 = FUN_00429ecc(DAT_0067b470);
      puStack_2c = (undefined1 *)0x561603;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x314) + 0x68),uVar4);
      puStack_2c = (undefined1 *)0x56160b;
      uVar4 = FUN_00429ecc(DAT_0067b470);
      puStack_2c = (undefined1 *)0x56161d;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)puVar1 + 800) + 0x68),uVar4);
      puStack_2c = (undefined1 *)0x561625;
      uVar4 = FUN_00429ecc(DAT_0067b470);
      *(undefined4 *)(*(int *)PTR_DAT_0066b010 + 0xac + *(int *)PTR_DAT_0066ac90 * 200) = uVar4;
    }
    if (DAT_0067b47c != 0) {
      puStack_2c = (undefined1 *)0x561654;
      uVar3 = FUN_00409ff8(DAT_0067b47c);
      *(undefined1 *)(*(int *)PTR_DAT_0066b010 + 0xb0 + *(int *)PTR_DAT_0066ac90 * 200) = uVar3;
      puStack_2c = (undefined1 *)0x561679;
      iVar5 = FUN_00409ff8(DAT_0067b47c);
      puStack_2c = (undefined1 *)0x56168d;
      FUN_004051d4(&local_1ac,*(undefined4 *)(PTR_PTR_0066b348 + iVar5 * 4));
      puStack_2c = (undefined1 *)0x5616a0;
      FUN_004e1414(*(undefined4 *)(*(int *)puVar1 + 800),local_1ac);
      puStack_2c = (undefined1 *)0x5616af;
      FUN_0043aa68(*(undefined4 *)(*(int *)puVar1 + 0x324),0);
      puStack_2c = (undefined1 *)0x5616b7;
      iVar5 = FUN_00409ff8(DAT_0067b47c);
      puStack_2c = (undefined1 *)(uint)*(byte *)(*(int *)PTR_DAT_0066b010 + 0xb0 + iVar5 * 200);
      puStack_30 = (undefined1 *)0x5616e1;
      uVar4 = FUN_0042d5c8(*(undefined4 *)(*(int *)(*(int *)puVar1 + 0x324) + 0x168));
      puVar2 = puStack_2c;
      puStack_2c = (undefined1 *)0x5616f6;
      FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2f8),puVar2,uVar4);
    }
    if (DAT_0067b480 != 0) {
      puStack_2c = (undefined1 *)0x561707;
      uVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x35c));
      *(undefined4 *)(*(int *)PTR_DAT_0066b010 + 0xb4 + *(int *)PTR_DAT_0066ac90 * 200) = uVar4;
      puStack_2c = (undefined1 *)0x56172f;
      iVar5 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x35c));
      puStack_2c = (undefined1 *)0x561745;
      FUN_004e1414(*(undefined4 *)(*(int *)puVar1 + 0x3b8),
                   *(undefined4 *)(PTR_DAT_0066ad58 + iVar5 * 4));
    }
    puStack_2c = (undefined1 *)0x561756;
    FUN_00466208(*(undefined4 *)(param_1 + 0x328),&local_1b0);
    puStack_2c = (undefined1 *)0x561764;
    FUN_0040343c(local_1b0,&local_8);
    if ((DAT_0067b484 != 0) && (local_8 == 0)) {
      puStack_2c = (undefined1 *)0x56177c;
      iVar5 = FUN_00409ff8(DAT_0067b484);
      if (1000 < iVar5) {
        puStack_2c = (undefined1 *)0x56178b;
        iVar5 = FUN_00409ff8(DAT_0067b484);
        if (iVar5 < 120000) {
          puStack_2c = (undefined1 *)0x56179a;
          uVar4 = FUN_00409ff8(DAT_0067b484);
          *(undefined4 *)(*(int *)PTR_DAT_0066b010 + 0xc4 + *(int *)PTR_DAT_0066ac90 * 200) = uVar4;
          puStack_2c = (undefined1 *)0x5617ca;
          FUN_00404bf0(&local_1b8,DAT_0067b484," lugares");
          puStack_2c = (undefined1 *)0x5617db;
          FUN_004051d4(&local_1b4,local_1b8);
          puStack_2c = (undefined1 *)0x5617ee;
          FUN_004e1414(*(undefined4 *)(*(int *)puVar1 + 0x41c),local_1b4);
        }
      }
    }
    puStack_2c = (undefined1 *)0x5617fd;
    TForm3_timesalvar(*(undefined4 *)puVar1,*(undefined4 *)PTR_DAT_0066ac90);
    puStack_2c = (undefined1 *)0x561807;
    FUN_00483bc4(DAT_0067b450);
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005618d1;
  puStack_24 = (undefined1 *)0x56182b;
  FUN_004048d4(&local_1b8,uStack_28,puVar2);
  puStack_24 = (undefined1 *)0x561836;
  FUN_00404ff0(&local_1b4);
  puStack_24 = (undefined1 *)0x561841;
  FUN_004048d4(&local_1b0);
  puStack_24 = (undefined1 *)0x56184c;
  FUN_00404ff0(&local_1ac);
  puStack_24 = (undefined1 *)0x561862;
  FUN_00405744(local_1a8,PTR_DAT_004010f8,4);
  puStack_24 = (undefined1 *)0x561872;
  FUN_00405008(&local_168,2);
  puStack_24 = (undefined1 *)0x561888;
  FUN_00405744(local_160,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x561898;
  FUN_00405008(&local_140,3);
  puStack_24 = (undefined1 *)0x5618ae;
  FUN_00405744(local_134,PTR_DAT_004010f8,2);
  puStack_24 = (undefined1 *)0x5618be;
  FUN_00405008(&local_114,2);
  puStack_24 = (undefined1 *)0x5618c6;
  FUN_00404ff0(&local_c);
  return;
}

