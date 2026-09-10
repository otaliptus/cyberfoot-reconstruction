// Address: 00601f9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm88_FormCreate(int param_1,undefined4 param_2)

{
  char *pcVar1;
  HCURSOR pHVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  int unaff_EDI;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  wchar_t *local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined *local_f0;
  char *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  wchar_t *local_b4;
  wchar_t *local_b0;
  wchar_t *local_ac;
  wchar_t *local_a8;
  wchar_t *local_a4;
  undefined1 *local_a0;
  wchar_t *local_9c;
  wchar_t *local_98;
  wchar_t *local_94;
  undefined4 local_90;
  wchar_t *local_8c;
  undefined *local_88;
  wchar_t *local_84;
  char *local_80;
  wchar_t *local_7c;
  undefined4 local_78;
  wchar_t *local_74;
  wchar_t *local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  char *local_64;
  undefined4 local_60;
  char *local_5c;
  char *local_58;
  undefined4 local_54;
  char *local_50;
  char *local_4c;
  undefined4 local_48;
  char *local_44;
  wchar_t *local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 uStack_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 0x27;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  uStack_20 = (undefined1 *)0x601fc8;
  local_c = param_2;
  local_8 = param_1;
  FUN_00405658(&local_38,PTR_DAT_004010e8,4);
  local_24 = &LAB_00603795;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  uStack_20 = &stack0xfffffffc;
  FUN_00642c50(0x122,&local_3c);
  FUN_0054cd98(*(undefined4 *)(local_8 + 0x38c),local_3c);
  FUN_00642c50(0x123,&local_40);
  FUN_0054cd98(*(undefined4 *)(local_8 + 0x38c),local_40);
  FUN_00642c50(0x124,&local_44);
  FUN_0054cd98(*(undefined4 *)(local_8 + 0x38c),local_44);
  FUN_00642c50(0x125,&local_48);
  FUN_0054cd98(*(undefined4 *)(local_8 + 0x390),local_48);
  FUN_00642c50(0x126,&local_4c);
  FUN_0054cd98(*(undefined4 *)(local_8 + 0x390),local_4c);
  FUN_00642c50(0x127,&local_50);
  FUN_0054cd98(*(undefined4 *)(local_8 + 0x390),local_50);
  FUN_00642c50(0x128,&local_54);
  FUN_0054cd98(*(undefined4 *)(local_8 + 0x394),local_54);
  FUN_00642c50(0x129,&local_58);
  FUN_0054cd98(*(undefined4 *)(local_8 + 0x394),local_58);
  FUN_00642c50(0x2c7,&local_5c);
  FUN_004e1414(*(undefined4 *)(local_8 + 0x388),local_5c);
  FUN_00642c50(0x2c6,&local_60);
  FUN_0054dcb8(*(undefined4 *)(local_8 + 900),local_60);
  uStack_20 = (undefined1 *)((uint)uStack_20 & 0xffffff);
  FUN_00404ff0(&local_38);
  FUN_00404ff0(&local_34);
  FUN_00404ff0(&stack0xffffffd0);
  FUN_00404ff0(&stack0xffffffd4);
  FUN_00545088(*(undefined4 *)(local_8 + 0x398),0);
  FUN_00404ff0(&local_10);
  FUN_00404ff0(&stack0xffffffec);
  DAT_006d4128 = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d4128,DAT_0066c668,"camisa0");
  DAT_006d412c = (int *)FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_006462ac(DAT_006d4260,&local_64);
  if (local_64 == (char *)0x0) {
    FUN_004ab2b0(DAT_006d412c,DAT_0066c668,"camisa1");
  }
  else {
    FUN_006462ac(DAT_006d4260,&local_68);
    (**(code **)(*DAT_006d412c + 0x4c))(DAT_006d412c,local_68);
  }
  DAT_006d4130 = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d4130,DAT_0066c668,"camisa2");
  DAT_006d4134 = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d4134,DAT_0066c668,"camisa3");
  local_34 = L"좋悡暷謀먀\x04";
  pHVar2 = LoadCursorA(DAT_0066c668,"cursor0");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,4,pHVar2);
  local_34 = L"좋悡暷謀먀\x01";
  pHVar2 = LoadCursorA(DAT_0066c668,"cursor1");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,1,pHVar2);
  local_34 = L"좋悡暷謀먀\x02";
  pHVar2 = LoadCursorA(DAT_0066c668,"cursor2");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,2,pHVar2);
  local_34 = L"좋悡暷謀먀\x03";
  pHVar2 = LoadCursorA(DAT_0066c668,"cursor3");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,3,pHVar2);
  DAT_006d4138 = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d4138,DAT_0066c668,"campoalpha");
  piVar7 = *(int **)(*(int *)(local_8 + 0x2fc) + 0x168);
  (**(code **)(*piVar7 + 8))(piVar7,DAT_006d4138);
  local_34 = L"\xf08bƲ\xf4a1䢩\xe800规￨㲣流謀ꇖ䄼mࢋ凿譔ﱅ肋˸";
  uVar3 = FUN_00421234(PTR_PTR_0041c10c,1,DAT_0066c668);
  DAT_006d413c = (int *)FUN_0048aca8(PTR_PTR_0048a9f4,1);
  (**(code **)(*DAT_006d413c + 0x54))(DAT_006d413c,uVar3);
  piVar7 = *(int **)(*(int *)(local_8 + 0x2f8) + 0x168);
  (**(code **)(*piVar7 + 8))(piVar7,DAT_006d413c);
  local_34 = L"좋悡暷謀먀\x04";
  pHVar2 = LoadCursorA(DAT_0066c668,"cursor0");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,4,pHVar2);
  local_34 = L"좋悡暷謀먀\x01";
  pHVar2 = LoadCursorA(DAT_0066c668,"cursor1");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,1,pHVar2);
  local_34 = L"좋悡暷謀먀\x02";
  pHVar2 = LoadCursorA(DAT_0066c668,"cursor2");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,2,pHVar2);
  local_34 = L"좋悡暷謀먀\x03";
  pHVar2 = LoadCursorA(DAT_0066c668,"cursor3");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,3,pHVar2);
  iVar6 = 1;
  piVar7 = &DAT_006d4140;
  do {
    piVar4 = (int *)FUN_0043a67c(PTR_PTR_004386b8,1,*(undefined4 *)(local_8 + 0x308));
    *piVar7 = (int)piVar4;
    FUN_00409dd8(iVar6,&local_70);
    FUN_00404bf0(&local_6c,"camisa",local_70);
    (**(code **)(*piVar4 + 0x18))(piVar4,local_6c);
    (**(code **)(*piVar4 + 0x68))(piVar4,*(undefined4 *)(local_8 + 0x308));
    (**(code **)(*piVar4 + 0x5c))(piVar4,0);
    FUN_0043aa78(piVar4,0);
    FUN_004659c4(piVar4,0x37);
    FUN_004659e8(piVar4,0x37);
    FUN_0043aa50(piVar4,1);
    uVar3 = FUN_004032c8(100);
    FUN_00465978(piVar4,uVar3);
    uVar3 = FUN_004032c8(100);
    FUN_0046599c(piVar4,uVar3);
    piVar4[3] = iVar6;
    (**(code **)(**(int **)(*piVar7 + 0x168) + 8))(*(int **)(*piVar7 + 0x168),DAT_006d4128);
    piVar4[0x35] = local_8;
    piVar4[0x34] = (int)TForm88_ImagecamisaMouseDown;
    piVar4[0x3d] = local_8;
    piVar4[0x3c] = (int)TForm88_ImagecamisaDragOver;
    piVar4[0x45] = local_8;
    piVar4[0x44] = (int)TForm88_ImagecamisaStartDrag;
    piVar4[0x47] = local_8;
    piVar4[0x46] = (int)TForm88_ImagecamisaEndDrag;
    piVar4[0x3b] = local_8;
    piVar4[0x3a] = (int)TForm88_ImagecamisaDragDrop;
    FUN_00466468(piVar4);
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar6 != 0x13);
  iVar6 = 1;
  puVar8 = &DAT_006d4188;
  do {
    piVar7 = (int *)FUN_00544f08(PTR_PTR_0053f6b0,1,*(undefined4 *)(local_8 + 0x308));
    *puVar8 = piVar7;
    FUN_00409dd8(iVar6,&local_78);
    FUN_00404bf0(&local_74,"labescal",local_78);
    (**(code **)(*piVar7 + 0x18))(piVar7,local_74);
    (**(code **)(*piVar7 + 0x68))(piVar7,*(undefined4 *)(local_8 + 0x308));
    FUN_004663cc(piVar7,0);
    piVar7[3] = iVar6;
    if (iVar6 < 0xc) {
      FUN_004659c4(piVar7,0x50);
    }
    else {
      FUN_004659c4(piVar7,0x50);
    }
    if (iVar6 == 0xb) {
      FUN_004659c4(piVar7,0x78);
    }
    FUN_00545040(piVar7,1);
    FUN_0042a5c8(piVar7[0x1a],"Arial");
    FUN_0042a66c(piVar7[0x1a],DAT_0060386c);
    FUN_0042a640(piVar7[0x1a],8);
    FUN_00466238(piVar7,&DAT_00603878);
    FUN_00465978(piVar7,10);
    FUN_0046599c(piVar7,10);
    FUN_004663a8(piVar7,0xff8000);
    FUN_0042a3a0(piVar7[0x1a],0xffffff);
    FUN_00466468(piVar7);
    FUN_00545854(piVar7,0);
    FUN_00545868(piVar7,1);
    FUN_00466358(piVar7,1);
    FUN_0045bbe4(piVar7,1);
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar6 != 0x13);
  iVar6 = 1;
  puVar8 = &DAT_006d41d0;
  do {
    piVar7 = (int *)FUN_0045b76c(PTR_PTR_004df4e4,1,*(undefined4 *)(local_8 + 0x308));
    *puVar8 = piVar7;
    piVar7[3] = iVar6;
    FUN_00409dd8(iVar6,&local_80);
    FUN_00404bf0(&local_7c,"labnumer",local_80);
    (**(code **)(*piVar7 + 0x18))(piVar7,local_7c);
    (**(code **)(*piVar7 + 0x68))(piVar7,*(undefined4 *)(local_8 + 0x308));
    FUN_004663cc(piVar7,0);
    FUN_004659c4(piVar7,10);
    FUN_004659e8(piVar7,0xc);
    (**(code **)(*piVar7 + 0x5c))(piVar7,0);
    FUN_0042a5c8(piVar7[0x1a],"Arial");
    FUN_0042a640(piVar7[0x1a],8);
    FUN_004e1414(piVar7,0);
    FUN_00465978(piVar7,10);
    FUN_0046599c(piVar7,10);
    FUN_004663a8(piVar7,0xff8000);
    FUN_0042a3a0(piVar7[0x1a],0xffffff);
    FUN_0045bb70(piVar7,2);
    FUN_00466468(piVar7);
    FUN_0045bc28(piVar7,1);
    FUN_0045bbe4(piVar7,1);
    piVar7[0x35] = local_8;
    piVar7[0x34] = (int)TForm88_labnumeroMouseDown;
    piVar7[0x3d] = local_8;
    piVar7[0x3c] = (int)TForm88_ImagecamisaDragOver;
    piVar7[0x45] = local_8;
    piVar7[0x44] = (int)TForm88_ImagecamisaStartDrag;
    piVar7[0x47] = local_8;
    piVar7[0x46] = (int)TForm88_ImagecamisaEndDrag;
    piVar7[0x3b] = local_8;
    piVar7[0x3a] = (int)TForm88_ImagecamisaDragDrop;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar6 != 0x13);
  iVar6 = 1;
  puVar8 = &DAT_006d4218;
  do {
    piVar7 = (int *)FUN_0045b76c(PTR_PTR_004df4e4,1,*(undefined4 *)(local_8 + 0x308));
    *puVar8 = piVar7;
    piVar7[3] = iVar6;
    FUN_00409dd8(iVar6,&local_88);
    FUN_00404bf0(&local_84,"labener",local_88);
    (**(code **)(*piVar7 + 0x18))(piVar7,local_84);
    (**(code **)(*piVar7 + 0x68))(piVar7,*(undefined4 *)(local_8 + 0x308));
    FUN_004663cc(piVar7,0);
    FUN_004659c4(piVar7,0x19);
    FUN_004659e8(piVar7,0xc);
    (**(code **)(*piVar7 + 0x5c))(piVar7,0);
    FUN_0042a5c8(piVar7[0x1a],"Arial");
    FUN_0042a640(piVar7[0x1a],7);
    FUN_004e1414(piVar7,0);
    FUN_00465978(piVar7,10);
    FUN_0046599c(piVar7,10);
    FUN_004663a8(piVar7,0xff8000);
    FUN_0042a3a0(piVar7[0x1a],0);
    FUN_0045bb70(piVar7,2);
    FUN_00466468(piVar7);
    FUN_0045bc28(piVar7,1);
    FUN_0045bbe4(piVar7,1);
    FUN_00466358(piVar7,1);
    piVar7[0x35] = local_8;
    piVar7[0x34] = (int)TForm88_labnumeroMouseDown;
    piVar7[0x3d] = local_8;
    piVar7[0x3c] = (int)TForm88_ImagecamisaDragOver;
    piVar7[0x45] = local_8;
    piVar7[0x44] = (int)TForm88_ImagecamisaStartDrag;
    piVar7[0x47] = local_8;
    piVar7[0x46] = (int)TForm88_ImagecamisaEndDrag;
    piVar7[0x3b] = local_8;
    piVar7[0x3a] = (int)TForm88_ImagecamisaDragDrop;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar6 != 0x13);
  DAT_006d4260 = *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + *(int *)PTR_DAT_0066ad84 * 0x1bc);
  DAT_006d4264 = *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + *(int *)PTR_DAT_0066ad84 * 0x1bc);
  DAT_006d4268 = *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + DAT_006d4260 * 0x2f8);
  DAT_006d426c = *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + DAT_006d4264 * 0x2f8);
  FUN_00404b48(&local_8c,*(int *)PTR_DAT_0066af70 + DAT_006d4260 * 0x2f8);
  FUN_00551138(*(undefined4 *)(*(int *)(local_8 + 800) + 0x16c),local_8c);
  FUN_00404b48(&local_90,*(int *)PTR_DAT_0066af70 + DAT_006d4260 * 0x2f8);
  FUN_00551138(*(undefined4 *)(*(int *)(local_8 + 0x31c) + 0x16c),local_90);
  FUN_00404b48(&local_94,*(int *)PTR_DAT_0066af70 + DAT_006d4264 * 0x2f8);
  FUN_00551138(*(undefined4 *)(*(int *)(local_8 + 0x314) + 0x16c),local_94);
  FUN_00404b48(&local_98,*(int *)PTR_DAT_0066af70 + DAT_006d4264 * 0x2f8);
  FUN_00551138(*(undefined4 *)(*(int *)(local_8 + 0x318) + 0x16c),local_98);
  FUN_00404ff0(&local_24);
  FUN_00404ff0(&local_28);
  iVar6 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d4260 * 0x2f8);
  if (-1 < iVar6) {
    iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b718);
    if (iVar6 <= iVar5) {
      FUN_00405194(&local_24,
                   *(int *)PTR_DAT_0066b718 +
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d4260 * 0x2f8) * 0x80);
    }
  }
  iVar6 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d4264 * 0x2f8);
  if (-1 < iVar6) {
    iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b718);
    if (iVar6 <= iVar5) {
      FUN_00405194(&local_28,
                   *(int *)PTR_DAT_0066b718 +
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d4264 * 0x2f8) * 0x80);
    }
  }
  if ((6 < *(int *)(PTR_DAT_0066ac78 + 0x88)) && (*(int *)(PTR_DAT_0066ac78 + 0x88) < 10)) {
    local_34 = (wchar_t *)*in_FS_OFFSET;
    *in_FS_OFFSET = &local_34;
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d4260 * 0x2f8) < 0) {
      local_38 = 
      L"쀳奚摙ႉ૫᫩\xe014\xe8ff᝽￠쀳桕⮩`､搰₉ի䉤m譟瀕暯謀茒쉼Dⱽ䖍毜搕浂开උ꽰fঋ咋䃑툃ᒍ譒됍暴謀贉텔\xe808◵￠쀳奚摙ႉ૫뛩\xe013\xe8ff᜙￠ꑨ怸＀\xe075\xe468怸贀梅\xffff뫿\x03"
      ;
      FUN_00405194(&local_24,
                   *(int *)PTR_DAT_0066b4b4 + 8 +
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + DAT_006d4260 * 0x2f8) * 0x30);
    }
    *in_FS_OFFSET = local_34;
    local_34 = (wchar_t *)*in_FS_OFFSET;
    *in_FS_OFFSET = &local_34;
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + DAT_006d4264 * 0x2f8) < 0) {
      local_38 = L"쀳奚摙ႉ૫뛩\xe013\xe8ff᜙￠ꑨ怸＀\xe075\xe468怸贀梅\xffff뫿\x03";
      FUN_00405194(&local_28,
                   *(int *)PTR_DAT_0066b4b4 + 8 +
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + DAT_006d4264 * 0x2f8) * 0x30);
    }
    *in_FS_OFFSET = local_34;
  }
  pwVar10 = L"<SHAD><FONT color=\"#C1C100\">";
  local_34 = L"</font></shad>";
  local_38 = (wchar_t *)0x602bd0;
  puVar9 = local_24;
  FUN_00405330(&local_9c,3);
  local_38 = (wchar_t *)0x602be4;
  FUN_00545088(*(undefined4 *)(local_8 + 0x378),local_9c);
  local_38 = L"<SHAD><FONT color=\"#C1C100\">";
  local_3c = local_28;
  local_40 = L"</font></shad>";
  local_44 = (char *)0x602c01;
  FUN_00405330(&local_a0,3);
  local_44 = (char *)0x602c15;
  FUN_00545088(*(undefined4 *)(local_8 + 0x37c),local_a0);
  local_44 = (char *)0x602c25;
  FUN_00645508(DAT_006d4260,&local_a4);
  if (local_a4 != (wchar_t *)0x0) {
    local_44 = (char *)0x602c3e;
    FUN_00645508(DAT_006d4260,&local_a8);
    local_44 = (char *)0x602c58;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(local_8 + 0x300) + 0x168),local_a8);
  }
  local_44 = (char *)0x602c68;
  FUN_00645508(DAT_006d4264,&local_ac);
  if (local_ac != (wchar_t *)0x0) {
    local_44 = (char *)0x602c81;
    FUN_00645508(DAT_006d4264,&local_b0);
    local_44 = (char *)0x602c9b;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(local_8 + 0x304) + 0x168),local_b0);
  }
  if ((6 < *(int *)(PTR_DAT_0066ac78 + 0x88)) && (*(int *)(PTR_DAT_0066ac78 + 0x88) < 10)) {
    local_44 = (char *)0x602cce;
    FUN_00645714(DAT_006d4260,&local_b4);
    if (local_b4 != (wchar_t *)0x0) {
      local_44 = (char *)0x602ce7;
      FUN_00645714(DAT_006d4260,&local_b8);
      local_44 = (char *)0x602d01;
      FUN_0042d6c0(*(undefined4 *)(*(int *)(local_8 + 0x300) + 0x168),local_b8);
    }
    local_44 = (char *)0x602d11;
    FUN_00645714(DAT_006d4264,&local_bc);
    if (local_bc != 0) {
      local_44 = (char *)0x602d2a;
      FUN_00645714(DAT_006d4264,&local_c0);
      local_44 = (char *)0x602d44;
      FUN_0042d6c0(*(undefined4 *)(*(int *)(local_8 + 0x304) + 0x168),local_c0);
    }
  }
  if (*(int *)PTR_DAT_0066b5ec == 1) {
    local_44 = (char *)0x602d62;
    FUN_00466128(*(undefined4 *)(local_8 + 0x334),1);
    local_44 = (char *)0x602d72;
    FUN_00466128(*(undefined4 *)(local_8 + 0x32c),0);
    local_44 = (char *)0x602d80;
    FUN_00466478(*(undefined4 *)(local_8 + 0x334));
    local_44 = (char *)0x602d8e;
    FUN_00466478(*(undefined4 *)(local_8 + 0x330));
    local_44 = (char *)0x602d9c;
    FUN_00466478(*(undefined4 *)(local_8 + 0x310));
    local_44 = (char *)0x602daa;
    FUN_00466478(*(undefined4 *)(local_8 + 0x32c));
    local_44 = (char *)0x602dba;
    FUN_00466414(*(undefined4 *)(local_8 + 800),0);
    local_44 = (char *)0x602dca;
    FUN_00466414(*(undefined4 *)(local_8 + 0x30c),0);
    local_44 = (char *)0x602dda;
    FUN_00466414(*(undefined4 *)(local_8 + 0x300),0);
    local_44 = (char *)0x602dea;
    FUN_00466414(*(undefined4 *)(local_8 + 0x328),0);
  }
  else {
    local_44 = (char *)0x602dfc;
    FUN_00466128(*(undefined4 *)(local_8 + 0x32c),1);
    local_44 = (char *)0x602e0c;
    FUN_00466128(*(undefined4 *)(local_8 + 0x334),0);
    local_44 = (char *)0x602e1c;
    FUN_00466414(*(undefined4 *)(local_8 + 0x314),0);
    local_44 = (char *)0x602e2c;
    FUN_00466414(*(undefined4 *)(local_8 + 0x310),0);
    local_44 = (char *)0x602e3c;
    FUN_00466414(*(undefined4 *)(local_8 + 0x304),0);
    local_44 = (char *)0x602e4c;
    FUN_00466414(*(undefined4 *)(local_8 + 0x324),0);
  }
  local_44 = (char *)0x602e56;
  FUN_00466754(DAT_006d4124);
  local_44 = "h\f9`";
  FUN_00605e40(local_8);
  local_44 = "<shad>";
  local_48 = 0x602e82;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + *(int *)PTR_DAT_0066ad84 * 0x1bc),
               &local_cc);
  local_48 = local_cc;
  local_4c = "</shad>";
  local_50 = (char *)0x602e9d;
  FUN_00404c64(&local_c8,3);
  local_50 = (char *)0x602eae;
  FUN_004051d4(&local_c4,local_c8);
  local_50 = "h\f9`";
  FUN_00545088(*(undefined4 *)(local_8 + 0x328),local_c4);
  local_50 = "<shad>";
  local_54 = 0x602ee6;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + *(int *)PTR_DAT_0066ad84 * 0x1bc),
               &local_d8);
  local_54 = local_d8;
  local_58 = "</shad>";
  local_5c = (char *)0x602f01;
  FUN_00404c64(&local_d4,3);
  local_5c = (char *)0x602f12;
  FUN_004051d4(&local_d0,local_d4);
  local_5c = "h,9`";
  FUN_00545088(*(undefined4 *)(local_8 + 0x324),local_d0);
  local_5c = "<SHAD><FONT color=\"#C1C100\">";
  local_60 = *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x3c + *(int *)PTR_DAT_0066ad84 * 0x1bc);
  local_64 = "</font></shad>";
  local_68 = L"開Ｄ\xffff薍Ｈ\xffff濨\xe022诿⢕\xffff诿ﱅ肋͌";
  FUN_00404c64(&local_e0,3);
  local_68 = L"開Ｈ\xffff䖋诼䲀\x03\xe800ℏ\xfff4碡暬謀袀";
  FUN_004051d4(&local_dc,local_e0);
  local_68 = L"碡暬謀袀";
  FUN_00545088(*(undefined4 *)(local_8 + 0x34c),local_dc);
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) < 7) && (*(int *)(PTR_DAT_0066ac78 + 0x88) != 5)) {
    local_68 = L"<SHAD><FONT color=\"#C1C100\">";
    local_6c = 0x602fc0;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x28 + *(int *)PTR_DAT_0066ad84 * 0x1bc)
                 ,&local_e4);
    local_6c = local_e4;
    local_70 = L"</shad></font>";
    local_74 = 
    L"豨怹ꄀ궄fk譯렕暳謀謒艄贬Ვ\xffff\xe8ff\xe890\x04뗿＜\xffff顨怹ꄀ궄fk譯렕暳謀謒艄贰ᢕ\xffff\xe8ff\xe866\x04뗿８\xffffꑨ怹ꄀ궄fk譯렕暳謀謒艄贴ᒕ\xffff\xe8ff\xe83c\x04뗿４\xffff둨怹ꄀ궄fk譯렕暳謀謒艄贸႕\xffff\xe8ff\xe812\x04뗿０\xffff쑨怹贀\xf045঺"
    ;
    FUN_00405330(&local_10,3);
    local_74 = L"(T:";
    local_78 = 0x602ffc;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + *(int *)PTR_DAT_0066ad84 * 0x1bc)
                 ,&local_e8);
    local_78 = local_e8;
    local_7c = L" B:";
    local_80 = (char *)0x603026;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + *(int *)PTR_DAT_0066ad84 * 0x1bc)
                 ,&local_ec);
    local_80 = local_ec;
    local_84 = L" CV:";
    local_88 = (undefined *)0x603050;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + *(int *)PTR_DAT_0066ad84 * 0x1bc)
                 ,&local_f0);
    local_88 = local_f0;
    local_8c = L" VIP:";
    local_90 = 0x60307a;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x38 + *(int *)PTR_DAT_0066ad84 * 0x1bc)
                 ,&local_f4);
    local_90 = local_f4;
    local_94 = L")";
    local_98 = 
    L"䖋诼傀\x03謀\xf455\xe5e8\xf41f棿㧌`蒡暭欀漀ᖋ뎸fኋ䒋⒂閍（\xffff엨ӧ＀ࢵ\xffff棿㣤`薍，\xffffκ"
    ;
    FUN_00405330(&stack0xffffffec,9);
  }
  local_68 = 
  L"챨怹ꄀ궄fk譯렕暳謀謒艄贤࢕\xffff\xe8ff\xe7c5\x04뗿（\xffff\xe468怸贀ಅ\xffff뫿\x03"
  ;
  FUN_00545088(*(undefined4 *)(local_8 + 0x350),local_10);
  local_68 = L"<SHAD><FONT color=\"#C1C100\">$";
  local_6c = 0x6030c7;
  FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + *(int *)PTR_DAT_0066ad84 * 0x1bc),
               &local_fc);
  local_6c = local_fc;
  local_70 = L"</font></shad>";
  local_74 = L"開，\xffff䖋诼咀\x03\xe800ᾒ\xfff4౨怺贀\x95\xffffꇿ뚤f\x8b肋̌";
  FUN_00405330(&local_f8,3);
  local_74 = L"౨怺贀\x95\xffffꇿ뚤f\x8b肋̌";
  FUN_00545088(*(undefined4 *)(local_8 + 0x354),local_f8);
  local_74 = L"<SHAD><P align=\"center\">";
  local_78 = 0x603113;
  FUN_004e1400(*(undefined4 *)(*(int *)PTR_DAT_0066b6a4 + 0x30c),&local_104);
  local_78 = local_104;
  local_7c = L"</p></SHAD>";
  local_80 = (char *)0x60312e;
  FUN_00405330(&local_100,3);
  local_80 = "hd:`";
  FUN_00545088(*(undefined4 *)(local_8 + 0x358),local_100);
  local_80 = "<SHAD><P align=\"center\">";
  local_84 = L"뗿ﻴ\xffff表怺贀\xf885\xfffe뫿\x03";
  FUN_00409dd8(*(undefined4 *)PTR_DAT_0066b2cc,&local_110);
  local_84 = local_110;
  local_88 = &DAT_00603a88;
  local_8c = L"開ﻸ\xffff薍ﻼ\xffff俨\xe020诿ﲕ\xfffe诿ﱅ肋͜";
  FUN_00404c64(&local_10c,3);
  local_8c = 
  L"開ﻼ\xffff䖋诼岀\x03\xe800ữ\xfff4咡暯茀ĸ╵䖋诼墀\x03먀㪜`틨\xf41e诿ﱅ肋͜";
  FUN_004051d4(&local_108,local_10c);
  local_8c = L"咡暯茀ĸ╵䖋诼墀\x03먀㪜`틨\xf41e诿ﱅ肋͜";
  FUN_00545088(*(undefined4 *)(local_8 + 0x35c),local_108);
  if (*(int *)PTR_DAT_0066af54 == 1) {
    local_8c = L"䖋诼岀\x03㌀\xe8d2⽢￦ძ䖋诼岀\x03눀\xe801⽐￦ᖋ뗬fኋ䖋\xe8fcኀ";
    FUN_00545088(*(undefined4 *)(local_8 + 0x358),L"<SHAD><P align=\"center\">-</p></shad>");
    local_8c = L"ძ䖋诼岀\x03눀\xe801⽐￦ᖋ뗬fኋ䖋\xe8fcኀ";
    FUN_00466128(*(undefined4 *)(local_8 + 0x35c),0);
  }
  else {
    local_8c = L"ᖋ뗬fኋ䖋\xe8fcኀ";
    FUN_00466128(*(undefined4 *)(local_8 + 0x35c),1);
  }
  local_8c = L"碡暬茀袸";
  FUN_00604468(local_8,*(undefined4 *)PTR_DAT_0066b5ec);
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 2) && (*(int *)(PTR_DAT_0066ac78 + 0x118) == 2)) {
    local_8c = (wchar_t *)&stack0xffffffe4;
    local_90 = 0x60322c;
    FUN_006426dc(*(undefined4 *)(PTR_DAT_0066ac78 + 0x110),DAT_006d4260,DAT_006d4264);
    if ((-1 < unaff_EDI) && (-1 < unaff_ESI)) {
      uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
      local_8c = 
      L"䖍毐怕浂开උ꽰fঋᒍ\xe8d1ἤ￠閍ﻰ\xffff䖋\xe8e8歚￠開ﻰ\xffff䖍\xe8d4Ὀ￠閍ﻬ\xffff䖋\xe8ec款￠開ﻬ\xffff䖍\xe8d8Ἤ￠碡暬茀袸"
      ;
      FUN_00405194(&local_38,*(int *)PTR_DAT_0066af70 + DAT_006d4264 * 0x2f8);
      local_8c = 
      L"閍ﻰ\xffff䖋\xe8e8歚￠開ﻰ\xffff䖍\xe8d4Ὀ￠閍ﻬ\xffff䖋\xe8ec款￠開ﻬ\xffff䖍\xe8d8Ἤ￠碡暬茀袸"
      ;
      FUN_00405194(&local_34,*(int *)PTR_DAT_0066af70 + DAT_006d4260 * 0x2f8);
      local_8c = 
      L"開ﻰ\xffff䖍\xe8d4Ὀ￠閍ﻬ\xffff䖋\xe8ec款￠開ﻬ\xffff䖍\xe8d8Ἤ￠碡暬茀袸"
      ;
      FUN_00409dd8(unaff_EDI,&local_114);
      local_8c = L"閍ﻬ\xffff䖋\xe8ec款￠開ﻬ\xffff䖍\xe8d8Ἤ￠碡暬茀袸";
      FUN_004051d4(&stack0xffffffd0,local_114);
      local_8c = L"開ﻬ\xffff䖍\xe8d8Ἤ￠碡暬茀袸";
      FUN_00409dd8(unaff_ESI,&local_118);
      local_8c = L"碡暬茀袸";
      FUN_004051d4(&stack0xffffffd4,local_118);
    }
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) &&
     (((*(int *)PTR_DAT_0066acac == 0x66 || (*(int *)PTR_DAT_0066acac == 0xca)) ||
      (*(int *)PTR_DAT_0066acac == 0x192)))) {
    local_8c = (wchar_t *)&stack0xffffffe4;
    local_90 = 0x6032ff;
    FUN_006426dc(*(int *)PTR_DAT_0066acac + -1,DAT_006d4260,DAT_006d4264);
    if ((-1 < unaff_EDI) && (-1 < unaff_ESI)) {
      uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
      local_8c = 
      L"䖍毐怕浂开උ꽰fঋᒍ\xe8d1ṑ￠閍ﻨ\xffff䖋\xe8e8檇￠開ﻨ\xffff䖍\xe8d4ṵ￠閍ﻤ\xffff䖋\xe8ec橫￠開ﻤ\xffff䖍\xe8d8ṙ￠碡暬茀袸"
      ;
      FUN_00405194(&local_38,*(int *)PTR_DAT_0066af70 + DAT_006d4264 * 0x2f8);
      local_8c = 
      L"閍ﻨ\xffff䖋\xe8e8檇￠開ﻨ\xffff䖍\xe8d4ṵ￠閍ﻤ\xffff䖋\xe8ec橫￠開ﻤ\xffff䖍\xe8d8ṙ￠碡暬茀袸"
      ;
      FUN_00405194(&local_34,*(int *)PTR_DAT_0066af70 + DAT_006d4260 * 0x2f8);
      local_8c = 
      L"開ﻨ\xffff䖍\xe8d4ṵ￠閍ﻤ\xffff䖋\xe8ec橫￠開ﻤ\xffff䖍\xe8d8ṙ￠碡暬茀袸"
      ;
      FUN_00409dd8(unaff_EDI,&local_11c);
      local_8c = L"閍ﻤ\xffff䖋\xe8ec橫￠開ﻤ\xffff䖍\xe8d8ṙ￠碡暬茀袸";
      FUN_004051d4(&stack0xffffffd0,local_11c);
      local_8c = L"開ﻤ\xffff䖍\xe8d8ṙ￠碡暬茀袸";
      FUN_00409dd8(unaff_ESI,&local_120);
      local_8c = L"碡暬茀袸";
      FUN_004051d4(&stack0xffffffd4,local_120);
    }
  }
  if (((*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) && (3 < *(int *)(PTR_DAT_0066ac78 + 0x194))) &&
     (*(int *)(PTR_DAT_0066ac78 + 0x198) == 2)) {
    local_8c = (wchar_t *)&stack0xffffffe4;
    local_90 = 0x6033d1;
    FUN_006426dc(*(undefined4 *)(PTR_DAT_0066ac78 + 0x194),DAT_006d4260,DAT_006d4264);
    if ((-1 < unaff_EDI) && (-1 < unaff_ESI)) {
      uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
      local_8c = 
      L"䖍毐怕浂开උ꽰fঋᒍ\xe8d1ᵿ￠閍ﻠ\xffff䖋\xe8e8榵￠開ﻠ\xffff䖍\xe8d4ᶣ￠閍ﻜ\xffff䖋\xe8ec榙￠開ﻜ\xffff䖍\xe8d8ᶇ￠碡暬茀袸"
      ;
      FUN_00405194(&local_38,*(int *)PTR_DAT_0066af70 + DAT_006d4264 * 0x2f8);
      local_8c = 
      L"閍ﻠ\xffff䖋\xe8e8榵￠開ﻠ\xffff䖍\xe8d4ᶣ￠閍ﻜ\xffff䖋\xe8ec榙￠開ﻜ\xffff䖍\xe8d8ᶇ￠碡暬茀袸"
      ;
      FUN_00405194(&local_34,*(int *)PTR_DAT_0066af70 + DAT_006d4260 * 0x2f8);
      local_8c = 
      L"開ﻠ\xffff䖍\xe8d4ᶣ￠閍ﻜ\xffff䖋\xe8ec榙￠開ﻜ\xffff䖍\xe8d8ᶇ￠碡暬茀袸"
      ;
      FUN_00409dd8(unaff_EDI,&local_124);
      local_8c = L"閍ﻜ\xffff䖋\xe8ec榙￠開ﻜ\xffff䖍\xe8d8ᶇ￠碡暬茀袸";
      FUN_004051d4(&stack0xffffffd0,local_124);
      local_8c = L"開ﻜ\xffff䖍\xe8d8ᶇ￠碡暬茀袸";
      FUN_00409dd8(unaff_ESI,&local_128);
      local_8c = L"碡暬茀袸";
      FUN_004051d4(&stack0xffffffd4,local_128);
    }
  }
  if ((((*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) && (*(int *)PTR_DAT_0066b484 == 2)) &&
      (3 < *(int *)(PTR_DAT_0066ac78 + 0x1a0))) && (*(int *)(PTR_DAT_0066ac78 + 0x1a4) == 2)) {
    local_8c = (wchar_t *)&stack0xffffffe4;
    local_90 = 0x6034b1;
    FUN_006426dc(*(undefined4 *)(PTR_DAT_0066ac78 + 0x1a0),DAT_006d4260,DAT_006d4264);
    if ((-1 < unaff_EDI) && (-1 < unaff_ESI)) {
      uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
      local_8c = 
      L"䖍毐怕浂开උ꽰fঋᒍ\xe8d1Ჟ￠閍ﻘ\xffff䖋\xe8e8棕￠開ﻘ\xffff䖍\xe8d4᳃￠閍ﻔ\xffff䖋\xe8ec梹￠開ﻔ\xffff䖍\xe8d8Ყ￠碡暬茀袸"
      ;
      FUN_00405194(&local_38,*(int *)PTR_DAT_0066af70 + DAT_006d4264 * 0x2f8);
      local_8c = 
      L"閍ﻘ\xffff䖋\xe8e8棕￠開ﻘ\xffff䖍\xe8d4᳃￠閍ﻔ\xffff䖋\xe8ec梹￠開ﻔ\xffff䖍\xe8d8Ყ￠碡暬茀袸"
      ;
      FUN_00405194(&local_34,*(int *)PTR_DAT_0066af70 + DAT_006d4260 * 0x2f8);
      local_8c = 
      L"開ﻘ\xffff䖍\xe8d4᳃￠閍ﻔ\xffff䖋\xe8ec梹￠開ﻔ\xffff䖍\xe8d8Ყ￠碡暬茀袸"
      ;
      FUN_00409dd8(unaff_EDI,&local_12c);
      local_8c = L"閍ﻔ\xffff䖋\xe8ec梹￠開ﻔ\xffff䖍\xe8d8Ყ￠碡暬茀袸";
      FUN_004051d4(&stack0xffffffd0,local_12c);
      local_8c = L"開ﻔ\xffff䖍\xe8d8Ყ￠碡暬茀袸";
      FUN_00409dd8(unaff_ESI,&local_130);
      local_8c = L"碡暬茀袸";
      FUN_004051d4(&stack0xffffffd4,local_130);
    }
  }
  if (((*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) && (*(int *)PTR_DAT_0066b484 == 1)) &&
     (*(int *)(PTR_DAT_0066ac78 + 0x1a4) == 2)) {
    local_8c = (wchar_t *)&stack0xffffffe4;
    local_90 = 0x60357b;
    FUN_006426dc(*(undefined4 *)PTR_DAT_0066ade8,DAT_006d4260,DAT_006d4264);
    if ((-1 < unaff_EDI) && (-1 < unaff_ESI)) {
      uStack_20 = (undefined1 *)CONCAT13(1,(undefined3)uStack_20);
      local_8c = 
      L"䖍毐怕浂开උ꽰fঋᒍ\xe8d1ᯕ￠閍ﻐ\xffff䖋\xe8e8栋￠開ﻐ\xffff䖍\xe8d4᯹￠閍ﻌ\xffff䖋\xe8ec柯￠開ﻌ\xffff䖍\xe8d8ᯝ￠綀ç癴䖋诼梀\x03눀\xe801⬛￦\xec68怺贀쒕\xfffe룿ˈ"
      ;
      FUN_00405194(&local_38,*(int *)PTR_DAT_0066af70 + DAT_006d4264 * 0x2f8);
      local_8c = 
      L"閍ﻐ\xffff䖋\xe8e8栋￠開ﻐ\xffff䖍\xe8d4᯹￠閍ﻌ\xffff䖋\xe8ec柯￠開ﻌ\xffff䖍\xe8d8ᯝ￠綀ç癴䖋诼梀\x03눀\xe801⬛￦\xec68怺贀쒕\xfffe룿ˈ"
      ;
      FUN_00405194(&local_34,*(int *)PTR_DAT_0066af70 + DAT_006d4260 * 0x2f8);
      local_8c = 
      L"開ﻐ\xffff䖍\xe8d4᯹￠閍ﻌ\xffff䖋\xe8ec柯￠開ﻌ\xffff䖍\xe8d8ᯝ￠綀ç癴䖋诼梀\x03눀\xe801⬛￦\xec68怺贀쒕\xfffe룿ˈ"
      ;
      FUN_00409dd8(unaff_EDI,&local_134);
      local_8c = 
      L"閍ﻌ\xffff䖋\xe8ec柯￠開ﻌ\xffff䖍\xe8d8ᯝ￠綀ç癴䖋诼梀\x03눀\xe801⬛￦\xec68怺贀쒕\xfffe룿ˈ"
      ;
      FUN_004051d4(&stack0xffffffd0,local_134);
      local_8c = 
      L"開ﻌ\xffff䖍\xe8d8ᯝ￠綀ç癴䖋诼梀\x03눀\xe801⬛￦\xec68怺贀쒕\xfffe룿ˈ";
      FUN_00409dd8(unaff_ESI,&local_138);
      local_8c = L"綀ç癴䖋诼梀\x03눀\xe801⬛￦\xec68怺贀쒕\xfffe룿ˈ";
      FUN_004051d4(&stack0xffffffd4,local_138);
    }
  }
  if (uStack_20._3_1_ == '\0') {
    local_8c = L"䖋\xe8fcԩ";
    FUN_00466128(*(undefined4 *)(local_8 + 0x368),0);
  }
  else {
    local_8c = L"\xec68怺贀쒕\xfffe룿ˈ";
    FUN_00466128(*(undefined4 *)(local_8 + 0x368),1);
    local_8c = L"<SHAD>";
    local_90 = 0x603622;
    local_a0 = puVar9;
    local_b0 = pwVar10;
    FUN_00642c50(0x2c8,&local_140);
    local_90 = local_140;
    local_94 = L"</SHAD><BR><SHAD><FONT color=\"#FFFFFF\">";
    local_98 = local_38;
    local_9c = L"</FONT></SHAD><IND x=\"120\"><SHAD>";
    local_a4 = L"</SHAD><BR><SHAD><FONT color=\"#FFFFFF\">";
    local_a8 = local_34;
    local_ac = L"</FONT></SHAD><IND x=\"120\"><SHAD>";
    local_b4 = L"</SHAD><BR>";
    local_b8 = 0x60365d;
    FUN_00405330(&local_13c,0xb);
    local_8c = L"ძ䖋诼梀\x03㌀\xe8d2⪥￦䖋\xe8fcԩ";
    FUN_00545088(*(undefined4 *)(local_8 + 0x368),local_13c);
  }
  local_8c = L"쀳奚摙ႉ齨怷贀쒅\xfffe뫿\x02";
  TForm88_stats(local_8);
  pcVar1 = local_80;
  *in_FS_OFFSET = local_88;
  local_80 = &LAB_0060379f;
  local_84 = L"薍ﻌ\xffff಺";
  FUN_00405008(&local_140,2,pcVar1);
  local_84 = L"薍ﻼ\xffffⷨ\xe019跿\x85\xffff\xe8ffᤢ￠薍＄\xffffࢺ";
  FUN_004048f8(&local_138,0xc);
  local_84 = L"薍＀\xffff⋨\xe019跿҅\xffff뫿\b";
  FUN_00404ff0(&local_108);
  local_84 = L"薍＄\xffffࢺ";
  FUN_00404ff0(&local_104);
  local_84 = L"薍Ｄ\xffff\xebe8\xe011跿⢅\xffff\xe8ff᣼￠薍Ｌ\xffffʺ";
  FUN_00405008(&local_100,8);
  local_84 = L"薍Ｈ\xffffﳨ\xe018跿ⲅ\xffff뫿\x02";
  FUN_004048d4(&local_e0);
  local_84 = L"薍Ｌ\xffffʺ";
  FUN_00404ff0(&local_dc);
  local_84 = L"薍Ｔ\xffff\xe1e8\xe018跿㢅\xffff뫿\x02";
  FUN_004048f8(&local_d8,2);
  local_84 = L"薍Ｘ\xffffʺ";
  FUN_00404ff0(&local_d0);
  local_84 = L"薍｀\xffff웨\xe018跿䒅\xffff뫿\b";
  FUN_004048f8(&local_cc,2);
  local_84 = L"薍ｄ\xffffࢺ";
  FUN_00404ff0(&local_c4);
  local_84 = L"薍､\xffffʺ";
  FUN_004048f8(&local_c0,8);
  local_84 = L"薍ｬ\xffff຺";
  FUN_00405008(&local_a0,2);
  local_84 = L"䖍몤\n";
  FUN_004048f8(&local_98,0xe);
  local_84 = L"䖍만\x04";
  FUN_00405008(&local_60,10);
  local_84 = L"䖍뫜\x02";
  FUN_00405744(&local_38,PTR_DAT_004010e8,4);
  local_84 = L"䖍뫰\x02";
  FUN_00405008(&local_28,2);
  local_84 = L"\xe9c3੾￠里\xfffe忿孞\xe58b썝";
  FUN_00405008(&stack0xffffffec,2);
  return;
}

