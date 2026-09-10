// Address: 0065c0b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm1_FormCreate(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  HCURSOR pHVar7;
  int iVar8;
  undefined2 extraout_var;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar12;
  byte bVar13;
  char *apcStackY_1844 [1514];
  undefined1 local_9c [4];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  char *apcStackY_64 [4];
  char *local_54;
  wchar_t *local_50;
  undefined4 local_4c;
  undefined *local_48;
  char *local_44;
  int *local_40;
  wchar_t *local_3c;
  char *in_stack_ffffffc8;
  undefined1 *puVar14;
  wchar_t *pwVar15;
  undefined *local_30;
  char *local_2c;
  char *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int *local_1c;
  undefined4 *puVar16;
  
  bVar13 = 0;
  local_1c = (int *)&stack0xfffffffc;
  puVar14 = &stack0xfffffffc;
  iVar8 = 0x15;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_20 = &LAB_0065d1a6;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  iVar8 = 4;
  puVar16 = (undefined4 *)PTR_DAT_0066b420;
  do {
    *puVar16 = 0xffffffff;
    puVar16 = puVar16 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  DAT_007c95e8 = 0;
  *PTR_DAT_0066b458 = 0;
  local_28 = (char *)0x65c10c;
  uVar3 = FUN_0042fcb8(PTR_PTR_00429378,1);
  *(undefined4 *)PTR_DAT_0066b6ec = uVar3;
  local_28 = (char *)0x65c11e;
  cVar2 = FUN_0040a43c("img\\f01.jpg");
  if (cVar2 != '\0') {
    local_28 = (char *)0x65c12e;
    piVar4 = (int *)FUN_0048aca8(PTR_PTR_0048a9f4,1);
    local_28 = (char *)0x65c13e;
    (**(code **)(*piVar4 + 0x4c))(piVar4,"img\\f01.jpg");
    local_28 = (char *)0x65c14d;
    (**(code **)(**(int **)PTR_DAT_0066b6ec + 8))(*(int **)PTR_DAT_0066b6ec,piVar4);
    local_2c = &LAB_0065c16d;
    local_30 = (undefined *)*in_FS_OFFSET;
    *in_FS_OFFSET = &local_30;
    local_28 = &stack0xfffffffc;
    FUN_0040fe60(&stack0xffffffec);
    *in_FS_OFFSET = local_30;
  }
  iVar8 = 1;
  puVar16 = &DAT_007c95ec;
  local_1c = &DAT_007c9610;
  puVar9 = (undefined4 *)PTR_DAT_0066afa4;
  do {
    local_28 = (char *)0x65c19c;
    uVar3 = FUN_004aa034(PTR_LAB_004a5420,1);
    *puVar16 = uVar3;
    local_28 = (char *)0x65c1ad;
    FUN_00409dd8(iVar8,&local_24);
    local_28 = (char *)0x65c1bd;
    FUN_00404bf0(&local_20,&DAT_0065d1d0,local_24);
    local_28 = (char *)0x65c1cd;
    FUN_004ab2b0(uVar3,DAT_0066c668,local_20);
    local_28 = (char *)0x65c1df;
    piVar4 = (int *)FUN_0043a67c(PTR_PTR_004386b8,1,DAT_007c957c);
    *local_1c = (int)piVar4;
    local_28 = (char *)0x65c1f0;
    FUN_00409dd8(iVar8,&local_2c);
    local_28 = (char *)0x65c200;
    FUN_00404bf0(&local_28,"botoes",local_2c);
    pcVar1 = local_28;
    local_28 = (char *)0x65c20a;
    (**(code **)(*piVar4 + 0x18))(piVar4,pcVar1);
    local_28 = (char *)0x65c217;
    (**(code **)(*piVar4 + 0x68))(piVar4,DAT_007c957c);
    local_28 = (char *)0x65c220;
    (**(code **)(*piVar4 + 0x5c))(piVar4,0);
    local_28 = (char *)0x65c229;
    FUN_0043aa78(piVar4,0);
    local_28 = (char *)0x65c235;
    FUN_004659c4(piVar4,0xb4);
    local_28 = (char *)0x65c241;
    FUN_004659e8(piVar4,0x32);
    local_28 = (char *)0x65c24a;
    FUN_0043aa50(piVar4,1);
    local_28 = (char *)0x65c253;
    FUN_00465978(piVar4,*puVar9);
    local_28 = (char *)0x65c25d;
    FUN_0046599c(piVar4,puVar9[1]);
    piVar4[3] = iVar8;
    if (4 < iVar8) {
      local_28 = (char *)0x65c26e;
      FUN_00466128(piVar4,0);
    }
    local_28 = (char *)0x65c275;
    FUN_00466468(piVar4);
    piVar4[0x49] = param_1;
    piVar4[0x48] = (int)FUN_0065bf58;
    piVar4[0x37] = param_1;
    piVar4[0x36] = (int)FUN_0065bdec;
    local_28 = (char *)0x65c2a4;
    FUN_00466128(piVar4,0);
    local_28 = (char *)0x65c2b9;
    (**(code **)(**(int **)(*local_1c + 0x168) + 8))(*(int **)(*local_1c + 0x168),*puVar16);
    iVar8 = iVar8 + 1;
    puVar9 = puVar9 + 2;
    local_1c = local_1c + 1;
    puVar16 = puVar16 + 1;
  } while (iVar8 != 10);
  *PTR_DAT_0066b700 = 0;
  iVar8 = 0;
  piVar4 = (int *)PTR_DAT_0066ae70;
  do {
    *piVar4 = iVar8;
    iVar8 = iVar8 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar8 != 0xca);
  local_28 = (char *)0x65c2fe;
  FUN_00653148("opcoes","language",&local_30);
  local_28 = (char *)0x65c306;
  iVar5 = FUN_00409ff8(local_30);
  iVar11 = 0;
  iVar8 = 0;
  *(undefined4 *)PTR_DAT_0066af84 = 0;
  iVar10 = 0xca;
  piVar4 = (int *)PTR_DAT_0066ae70;
  do {
    local_28 = "languages/";
    local_2c = (char *)0x65c333;
    FUN_00409dd8(*piVar4,&stack0xffffffc8);
    local_30 = &DAT_0065d224;
    uVar3 = 0x65c348;
    local_2c = in_stack_ffffffc8;
    FUN_00404c64(&stack0xffffffcc,3);
    local_28 = (char *)0x65c350;
    cVar2 = FUN_0040a43c(uVar3);
    if (cVar2 != '\0') {
      local_28 = "<img src=\"idx:";
      local_2c = (char *)0x65c367;
      FUN_00409dd8(*piVar4,&local_44);
      local_2c = local_44;
      local_30 = &DAT_0065d24c;
      FUN_00404c64(&local_40,3);
      FUN_004051d4(&local_3c,local_40);
      in_stack_ffffffc8 = "languages/";
      local_3c = L"痿梴툤e䖍몸\x03";
      FUN_00409dd8(*piVar4,&local_50);
      local_3c = local_50;
      local_40 = (int *)&DAT_0065d224;
      local_44 = (char *)0x65c3af;
      FUN_00404c64(&local_4c,3);
      local_2c = (char *)0x65c3bd;
      FUN_0065ecbc(param_1,local_4c,&local_48);
      pcVar1 = local_28;
      local_28 = (char *)0x65c3c6;
      FUN_0040526c(pcVar1,local_48);
      local_28 = (char *)0x65c3d7;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x30c),local_3c);
      local_28 = (char *)0x65c3e1;
      iVar6 = FUN_00405eec(DAT_007c966c);
      local_28 = (char *)(iVar6 + 1);
      local_2c = (char *)0x65c3f8;
      FUN_004060a8(&DAT_007c966c,PTR_DAT_0065bd5c,1);
      local_28 = (char *)0x65c405;
      iVar6 = FUN_00405ef4(DAT_007c966c);
      *(int *)(DAT_007c966c + iVar6 * 4) = *piVar4;
      if (*piVar4 == iVar5) {
        *(int *)PTR_DAT_0066af84 = *piVar4;
        iVar8 = iVar11;
      }
      iVar11 = iVar11 + 1;
    }
    piVar4 = piVar4 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_28 = (char *)0x65c43e;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x30c),iVar8);
  local_28 = "languages/";
  local_2c = (char *)0x65c452;
  FUN_00409dd8(*(undefined4 *)PTR_DAT_0066af84,apcStackY_64 + 3);
  local_2c = apcStackY_64[3];
  local_30 = &DAT_0065d224;
  FUN_00404c64(apcStackY_64 + 4,3);
  FUN_0065eb64(param_1,local_54);
  FUN_00402b90();
  uVar3 = FUN_004032c8(100);
  *(undefined4 *)PTR_DAT_0066b1c0 = uVar3;
  *(undefined4 *)PTR_DAT_0066b6fc = 0;
  local_3c = L"疍뾜閈|ꖥꖥ굨";
  FUN_0041c990(0x12e,100,0x1e5);
  DAT_007c9588 = local_68;
  (&DAT_007c958c)[(uint)bVar13 * -2] = apcStackY_64[(uint)bVar13 * -2];
  (&DAT_007c9590)[(uint)bVar13 * -2 + (uint)bVar13 * -2] =
       apcStackY_64[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  (&DAT_007c9590 + (uint)bVar13 * -2 + (uint)bVar13 * -2)[(uint)bVar13 * -2 + 1] =
       (apcStackY_64 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
  local_3c = (wchar_t *)0x65c4d8;
  FUN_0041c990(0x12d,0x90,0x1e5);
  DAT_007c9598 = local_68;
  (&DAT_007c959c)[(uint)bVar13 * -2] = apcStackY_64[(uint)bVar13 * -2];
  (&DAT_007c95a0)[(uint)bVar13 * -2 + (uint)bVar13 * -2] =
       apcStackY_64[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  (&DAT_007c95a0 + (uint)bVar13 * -2 + (uint)bVar13 * -2)[(uint)bVar13 * -2 + 1] =
       (apcStackY_64 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
  local_3c = L"疍뾜閨|ꖥꖥཨ\x01贀鱅륐ǥ";
  FUN_0041c990(0x12d,0xc0,0x1e5);
  DAT_007c95a8 = local_68;
  (&DAT_007c95ac)[(uint)bVar13 * -2] = apcStackY_64[(uint)bVar13 * -2];
  (&DAT_007c95b0)[(uint)bVar13 * -2 + (uint)bVar13 * -2] =
       apcStackY_64[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  (&DAT_007c95b0 + (uint)bVar13 * -2 + (uint)bVar13 * -2)[(uint)bVar13 * -2 + 1] =
       (apcStackY_64 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
  local_3c = L"疍뾜閸|ꖥꖥᵨ\x01贀鱅륐F";
  FUN_0041c990(0x12d,0xf2,0x1e5);
  DAT_007c95b8 = local_68;
  (&DAT_007c95bc)[(uint)bVar13 * -2] = apcStackY_64[(uint)bVar13 * -2];
  (&DAT_007c95c0)[(uint)bVar13 * -2 + (uint)bVar13 * -2] =
       apcStackY_64[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  (&DAT_007c95c0 + (uint)bVar13 * -2 + (uint)bVar13 * -2)[(uint)bVar13 * -2 + 1] =
       (apcStackY_64 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
  local_3c = L"疍뾜闈|ꖥꖥ婪䖍傜특";
  FUN_0041c990(0xe,0x104,0x46);
  DAT_007c95c8 = local_68;
  (&DAT_007c95cc)[(uint)bVar13 * -2] = apcStackY_64[(uint)bVar13 * -2];
  (&DAT_007c95d0)[(uint)bVar13 * -2 + (uint)bVar13 * -2] =
       apcStackY_64[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  (&DAT_007c95d0 + (uint)bVar13 * -2 + (uint)bVar13 * -2)[(uint)bVar13 * -2 + 1] =
       (apcStackY_64 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
  local_3c = (wchar_t *)0x65c579;
  FUN_0041c990(0x20,0x46,0xd2);
  DAT_007c95d8 = local_68;
  (&DAT_007c95dc)[(uint)bVar13 * -2] = apcStackY_64[(uint)bVar13 * -2];
  (&DAT_007c95e0)[(uint)bVar13 * -2 + (uint)bVar13 * -2] =
       apcStackY_64[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  (&DAT_007c95e0 + (uint)bVar13 * -2 + (uint)bVar13 * -2)[(uint)bVar13 * -2 + 1] =
       (apcStackY_64 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
  FUN_00487b04(*(undefined4 *)PTR_DAT_0066b3ac,&local_6c);
  FUN_0064d7f0(local_6c);
  cVar2 = FUN_006452e8();
  if (cVar2 == '\0') {
    FUN_004875e0(*(undefined4 *)PTR_DAT_0066b3ac);
  }
  cVar2 = FUN_0040a43c("sons\\gol1.wav");
  if (cVar2 != '\0') {
    FUN_0055cfc0("sons\\gol1.wav",&DAT_0065d270);
  }
  cVar2 = FUN_0040a43c("sons\\goladv.wav");
  if (cVar2 != '\0') {
    FUN_0055cfc0("sons\\goladv.wav","goladv");
  }
  cVar2 = FUN_0040a43c("sons\\fimjogo.wav");
  if (cVar2 != '\0') {
    FUN_0055cfc0("sons\\fimjogo.wav","fimjogo");
  }
  cVar2 = FUN_0040a43c("sons\\penalty.wav");
  if (cVar2 != '\0') {
    FUN_0055cfc0("sons\\penalty.wav","penalty");
  }
  cVar2 = FUN_0040a43c("sons\\contusao.wav");
  if (cVar2 != '\0') {
    FUN_0055cfc0("sons\\contusao.wav","contusao");
  }
  cVar2 = FUN_0040a43c("sons\\intervalo.wav");
  if (cVar2 != '\0') {
    FUN_0055cfc0("sons\\intervalo.wav","intervalo");
  }
  cVar2 = FUN_0040a43c("sons\\expulsao.wav");
  if (cVar2 != '\0') {
    FUN_0055cfc0("sons\\expulsao.wav","expulsao");
  }
  FUN_00402b90();
  *(undefined4 *)PTR_DAT_0066ad44 = 0xffffffff;
  PTR_DAT_0066ac78[0x75c] = 0;
  uVar12 = 1;
  local_3c = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_3c;
  local_40 = (int *)0x65c6b8;
  FUN_00653148("opcoes","opdes",&local_70);
  local_40 = (int *)0x65c6c5;
  FUN_00404cf0(local_70,&DAT_0065d39c);
  if ((bool)uVar12) {
    PTR_DAT_0066ac78[0x10c] = 1;
  }
  else {
    PTR_DAT_0066ac78[0x10c] = 0;
  }
  *in_FS_OFFSET = local_3c;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xd4) = 1;
  uVar12 = 1;
  local_3c = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_3c;
  local_40 = (int *)0x65c724;
  FUN_00653148("opcoes","opdesc",&local_74);
  local_40 = (int *)0x65c731;
  FUN_00404cf0(local_74,&DAT_0065d3b8);
  if ((bool)uVar12) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xd4) = 3;
  }
  else {
    local_40 = (int *)0x65c756;
    FUN_00653148("opcoes","opdesc",&local_78);
    local_40 = (int *)0x65c763;
    FUN_00404cf0(local_78,&DAT_0065d3c4);
    if ((bool)uVar12) {
      *(undefined4 *)(PTR_DAT_0066ac78 + 0xd4) = 2;
    }
  }
  *in_FS_OFFSET = local_3c;
  FUN_0064aa20(0,local_3c,puVar14);
  FUN_00404928(PTR_DAT_0066b368,"Santiago");
  FUN_00404928(PTR_DAT_0066b368 + 4,&DAT_0065d3e4);
  FUN_00404928(PTR_DAT_0066b368 + 8,&DAT_0065d3fc);
  FUN_00404928(PTR_DAT_0066b368 + 0xc,&DAT_0065d410);
  FUN_00404928(PTR_DAT_0066b368 + 0x10,"Miami");
  FUN_00404928(PTR_DAT_0066b368 + 0x14,"Dallas");
  FUN_00404928(PTR_DAT_0066b368 + 0x18,"Washington");
  FUN_00404928(PTR_DAT_0066b368 + 0x1c,"Los Angeles");
  FUN_00404928(PTR_DAT_0066b368 + 0x20,&DAT_0065d46c);
  FUN_00404928(PTR_DAT_0066b368 + 0x24,"Salto");
  FUN_00404928(PTR_DAT_0066b368 + 0x28,"Las Piedras");
  FUN_00404928(PTR_DAT_0066b368 + 0x2c,"Maldonado");
  FUN_00404928(PTR_DAT_0066b368 + 0x30,&DAT_0065d4b8);
  FUN_00404928(PTR_DAT_0066b368 + 0x34,"Ciudad del Este");
  FUN_00404928(PTR_DAT_0066b368 + 0x38,"San Lorenzo");
  FUN_00404928(PTR_DAT_0066b368 + 0x3c,"Lambare");
  FUN_00404928(PTR_DAT_0066b368 + 0x40,"La Paz");
  FUN_00404928(PTR_DAT_0066b368 + 0x44,"Santa Cruz");
  FUN_00404928(PTR_DAT_0066b368 + 0x48,"Sucre");
  FUN_00404928(PTR_DAT_0066b368 + 0x4c,&DAT_0065d53c);
  FUN_00404928(PTR_DAT_0066b368 + 0x50,&DAT_0065d54c);
  FUN_00404928(PTR_DAT_0066b368 + 0x54,&DAT_0065d55c);
  FUN_00404928(PTR_DAT_0066b368 + 0x58,"Medellin");
  FUN_00404928(PTR_DAT_0066b368 + 0x5c,"Barranquilla");
  FUN_00404928(PTR_DAT_0066b368 + 0x60,"Buenos Aires");
  FUN_00404928(PTR_DAT_0066b368 + 100,&DAT_0065d5b0);
  FUN_00404928(PTR_DAT_0066b368 + 0x68,"Mar del Plata");
  FUN_00404928(PTR_DAT_0066b368 + 0x6c,&DAT_0065d5d8);
  FUN_00404928(PTR_DAT_0066b06c,"Paris");
  FUN_00404928(PTR_DAT_0066b06c + 4,"Marseille");
  FUN_00404928(PTR_DAT_0066b06c + 8,&DAT_0065d60c);
  FUN_00404928(PTR_DAT_0066b06c + 0xc,"Bordeaux");
  FUN_00404928(PTR_DAT_0066b06c + 0x10,"Londres");
  FUN_00404928(PTR_DAT_0066b06c + 0x14,"Manchester");
  FUN_00404928(PTR_DAT_0066b06c + 0x18,"Liverpool");
  FUN_00404928(PTR_DAT_0066b06c + 0x1c,"Leeds");
  FUN_00404928(PTR_DAT_0066b06c + 0x20,"Ancara");
  FUN_00404928(PTR_DAT_0066b06c + 0x24,"Istambul");
  FUN_00404928(PTR_DAT_0066b06c + 0x28,"Esmirna");
  FUN_00404928(PTR_DAT_0066b06c + 0x2c,"Bursa");
  FUN_00404928(PTR_DAT_0066b06c + 0x30,"Berlim");
  FUN_00404928(PTR_DAT_0066b06c + 0x34,"Munique");
  FUN_00404928(PTR_DAT_0066b06c + 0x38,"Nuremberg");
  FUN_00404928(PTR_DAT_0066b06c + 0x3c,"Frankfurt");
  FUN_00404928(PTR_DAT_0066b06c + 0x40,"Madrid");
  FUN_00404928(PTR_DAT_0066b06c + 0x44,"Sevilha");
  FUN_00404928(PTR_DAT_0066b06c + 0x48,"Barcelona");
  FUN_00404928(PTR_DAT_0066b06c + 0x4c,&DAT_0065d738);
  FUN_00404928(PTR_DAT_0066b06c + 0x50,&DAT_0065d748);
  FUN_00404928(PTR_DAT_0066b06c + 0x54,&DAT_0065d758);
  FUN_00404928(PTR_DAT_0066b06c + 0x58,&DAT_0065d76c);
  FUN_00404928(PTR_DAT_0066b06c + 0x5c,"Donestk");
  FUN_00404928(PTR_DAT_0066b06c + 0x60,&DAT_0065d78c);
  FUN_00404928(PTR_DAT_0066b06c + 100,&DAT_0065d79c);
  FUN_00404928(PTR_DAT_0066b06c + 0x68,&DAT_0065d7ac);
  FUN_00404928(PTR_DAT_0066b06c + 0x6c,"Turim");
  local_3c = L"좋悡暷謀먀\x14";
  pHVar7 = LoadCursorA(DAT_0066c668,"cursor5");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,0x14,pHVar7);
  iVar8 = 1;
  puVar16 = &DAT_007c9648;
  do {
    piVar4 = (int *)FUN_00544f08(PTR_PTR_0053f6b0,1,DAT_007c957c);
    *puVar16 = piVar4;
    FUN_00409dd8(iVar8,&local_80);
    FUN_00404bf0(&local_7c,"labinii",local_80);
    (**(code **)(*piVar4 + 0x18))(piVar4,local_7c);
    (**(code **)(*piVar4 + 0x68))(piVar4,DAT_007c957c);
    FUN_004663cc(piVar4,0);
    piVar4[3] = iVar8;
    FUN_004659c4(piVar4,0xb4);
    FUN_004659e8(piVar4,0x14);
    FUN_00545040(piVar4,0);
    FUN_0042a5c8(piVar4[0x1a],"Arial");
    FUN_0042a66c(piVar4[0x1a],DAT_0065d7ec);
    FUN_0042a640(piVar4[0x1a],0xb);
    FUN_00466238(piVar4,"New game");
    FUN_00465978(piVar4,200);
    FUN_0046599c(piVar4,0x78);
    FUN_004663a8(piVar4,0xff8000);
    FUN_0042a3a0(piVar4[0x1a],0xffffff);
    FUN_00466468(piVar4);
    FUN_00545854(piVar4,0);
    FUN_00545868(piVar4,1);
    FUN_00466358(piVar4,0);
    FUN_0045bbe4(piVar4,1);
    FUN_00466128(piVar4,1);
    FUN_00466414(piVar4,CONCAT22(extraout_var,0xffeb));
    if (iVar8 < 5) {
      piVar4[0x49] = param_1;
      piVar4[0x48] = (int)TForm1_HTMLabel1Click;
      piVar4[0x37] = param_1;
      piVar4[0x36] = (int)TForm1_HTMLabel1MouseMove;
      piVar4[0x87] = param_1;
      piVar4[0x86] = (int)TForm1_HTMLabel1MouseLeave;
    }
    iVar8 = iVar8 + 1;
    puVar16 = puVar16 + 1;
  } while (iVar8 != 8);
  FUN_00465978(DAT_007c9648,0x134);
  FUN_0046599c(DAT_007c9648,0x69);
  FUN_00642c50(1,&local_84);
  FUN_00545088(DAT_007c9648,local_84);
  FUN_00465978(DAT_007c964c,0x134);
  FUN_0046599c(DAT_007c964c,0x96);
  FUN_00642c50(2,&local_88);
  FUN_00545088(DAT_007c964c,local_88);
  FUN_00465978(DAT_007c9650,0x134);
  FUN_0046599c(DAT_007c9650,0xc5);
  FUN_00642c50(3,&local_8c);
  FUN_00545088(DAT_007c9650,local_8c);
  FUN_00465978(DAT_007c9654,0x134);
  FUN_0046599c(DAT_007c9654,0xf5);
  FUN_00642c50(4,&local_90);
  FUN_00545088(DAT_007c9654,local_90);
  cVar2 = FUN_00651f8c();
  if (cVar2 != '\0') {
    FUN_00642c50(6,&local_94);
    FUN_00545088(DAT_007c9654,local_94);
    FUN_0042a3a0(DAT_007c9654[0x1a],0x808080);
    (**(code **)(*DAT_007c9654 + 100))(DAT_007c9654,0);
  }
  FUN_0042a640(*(undefined4 *)(DAT_007c9658 + 0x68),8);
  FUN_0042a5c8(*(undefined4 *)(DAT_007c9658 + 0x68),"Arial");
  FUN_004659c4(DAT_007c9658,0x78);
  FUN_0042a3a0(*(undefined4 *)(DAT_007c9658 + 0x68),0xffffff);
  FUN_00465978(DAT_007c9658,0xf);
  FUN_0046599c(DAT_007c9658,0xeb);
  FUN_00545088(DAT_007c9658,&DAT_0065d808);
  FUN_0042a640(*(undefined4 *)(DAT_007c965c + 0x68),0xb);
  FUN_00465978(DAT_007c965c,0xc);
  FUN_0046599c(DAT_007c965c,200);
  FUN_004659c4(DAT_007c965c,300);
  pwVar15 = L"<p align=\"left\"><shad>";
  FUN_00642c50(5,local_9c);
  local_3c = L"</shad><br><shad>www.cyberfoot.net</shad><p>";
  local_40 = (int *)0x65cf24;
  FUN_00405330(&local_98,3);
  local_40 = (int *)0x65cf34;
  FUN_00545088(DAT_007c965c,local_98);
  local_40 = (int *)0x65cf42;
  FUN_00466468(*(undefined4 *)(param_1 + 0x318));
  local_40 = (int *)0x65cf50;
  FUN_00466468(*(undefined4 *)(param_1 + 0x31c));
  local_40 = (int *)0x65cf5e;
  FUN_00466468(*(undefined4 *)(param_1 + 800));
  local_40 = (int *)0x65cf6c;
  FUN_00466468(*(undefined4 *)(param_1 + 0x324));
  local_40 = (int *)0x65cf71;
  cVar2 = FUN_00651f8c();
  if (cVar2 != '\0') {
    local_40 = (int *)0x65cf81;
    FUN_00466128(DAT_007c965c,0);
  }
  local_40 = (int *)0x65cf89;
  FUN_0065d968(param_1);
  local_40 = (int *)0x65cf91;
  FUN_0065e48c(param_1);
  local_40 = (int *)0xcb;
  local_44 = (char *)0x65cfab;
  FUN_004060a8(PTR_DAT_0066b3e0,PTR_DAT_00489040,1);
  iVar8 = 0;
  do {
    local_40 = (int *)0x65cfbc;
    uVar3 = FUN_004aa034(PTR_LAB_004a5420,1);
    *(undefined4 *)(*(int *)PTR_DAT_0066b3e0 + iVar8 * 4) = uVar3;
    local_40 = (int *)0x65d94c;
    local_44 = (char *)0x65cfd9;
    FUN_00409dd8(iVar8,apcStackY_1844 + 0x5e8);
    local_44 = apcStackY_1844[0x5e8];
    local_48 = &DAT_0065d960;
    local_4c = 0x65cff4;
    FUN_00404c64(apcStackY_1844 + 0x5e9,3);
    local_40 = (int *)0x65cfff;
    cVar2 = FUN_0040a43c(apcStackY_1844[0x5e9]);
    if (cVar2 == '\0') {
      *(undefined4 *)(*(int *)PTR_DAT_0066b3e0 + iVar8 * 4) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x308) + 0x168) + 0xc);
    }
    else {
      local_40 = (int *)0x65d94c;
      local_44 = (char *)0x65d015;
      FUN_00409dd8(iVar8,apcStackY_1844 + 0x5e6);
      local_44 = apcStackY_1844[0x5e6];
      local_48 = &DAT_0065d960;
      local_4c = 0x65d030;
      FUN_00404c64(apcStackY_1844 + 0x5e7,3);
      piVar4 = *(int **)(*(int *)PTR_DAT_0066b3e0 + iVar8 * 4);
      local_4c = 0x65d045;
      (**(code **)(*piVar4 + 0x4c))(piVar4,apcStackY_1844[0x5e7]);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xca);
  local_40 = (int *)0x65d07c;
  DAT_007c9664 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  local_40 = (int *)0x65d090;
  (**(code **)(*DAT_007c9664 + 0x40))(DAT_007c9664,0x12);
  local_40 = (int *)0x65d09f;
  (**(code **)(*DAT_007c9664 + 0x34))(DAT_007c9664,0x12);
  iVar8 = 0;
  do {
    local_40 = (int *)0x65d0ab;
    uVar3 = FUN_00430280(DAT_007c9664);
    local_40 = (int *)0x65d0b3;
    FUN_0042b584(uVar3,&local_68);
    local_40 = &local_68;
    local_44 = (char *)0x65d0c1;
    uVar3 = FUN_00430280(DAT_007c9664);
    piVar4 = local_40;
    local_40 = (int *)0x65d0d2;
    FUN_0042b20c(uVar3,piVar4,*(undefined4 *)(*(int *)PTR_DAT_0066b3e0 + iVar8 * 4));
    local_40 = DAT_007c9664;
    local_44 = (char *)0x65d0e2;
    uVar3 = FUN_00430280(DAT_007c9664);
    local_44 = (char *)0x65d0eb;
    FUN_0042ae64(uVar3,0,0);
    local_40 = (int *)0x65d0f5;
    iVar5 = (**(code **)(*DAT_007c9664 + 0x2c))();
    if (iVar5 == 0x12) {
      local_40 = (int *)0x65d104;
      iVar5 = (**(code **)(*DAT_007c9664 + 0x20))();
      if (iVar5 == 0x12) {
        local_40 = (int *)0x65d11f;
        FUN_00473d0c(*(undefined4 *)(param_1 + 0x2fc),DAT_007c9664,0);
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xca);
  local_40 = (int *)0x65d134;
  FUN_0065ef4c(param_1);
  *in_FS_OFFSET = local_3c;
  FUN_004048f8(apcStackY_1844 + 0x5e6,4,pwVar15);
  FUN_00405008(local_9c,7);
  FUN_004048f8(&local_80,6);
  FUN_004048f8(apcStackY_64 + 3,4);
  FUN_00404ff0(&local_48);
  FUN_004048f8(&local_44,2);
  FUN_00404ff0(&local_3c);
  FUN_004048f8(&stack0xffffffc8,7);
  return;
}

