// Address: 00571254
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm52_FormCreate(int param_1)

{
  undefined *puVar1;
  wchar_t *pwVar2;
  HCURSOR pHVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c [76];
  undefined1 local_c0 [60];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined *local_70;
  int local_6c;
  wchar_t *local_68;
  int local_64;
  wchar_t *local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined4 local_54;
  undefined *local_50;
  wchar_t *local_4c;
  undefined4 local_48;
  wchar_t *local_44;
  char *local_40;
  undefined4 local_3c;
  char *local_38;
  char *local_34;
  undefined4 in_stack_ffffffd0;
  int iVar8;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 0x25;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = (undefined1 *)0x57127d;
  local_8 = param_1;
  FUN_00405658(&local_28,PTR_DAT_004010dc,4);
  puVar1 = PTR_DAT_0066b760;
  local_24 = &LAB_00571f45;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_20 = &stack0xfffffffc;
  FUN_004048d4(&local_28);
  FUN_004048d4(&local_24);
  FUN_004048d4(&local_20);
  FUN_004048d4(&stack0xffffffe4);
  FUN_00533bc0(*(undefined4 *)(*(int *)(local_8 + 0x35c) + 0x22c),0);
  FUN_00404ff0(&local_c);
  FUN_00404ff0(&local_10);
  DAT_006d1f24 = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d1f24,DAT_0066c668,"camisa0");
  DAT_006d1f28 = (int *)FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d1f28,DAT_0066c668,"camisa1");
  iVar8 = 0x57133b;
  FUN_006462ac(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600),
               &stack0xffffffd4);
  if (iVar8 == 0) {
    FUN_004ab2b0(DAT_006d1f28,DAT_0066c668,"camisa1");
  }
  else {
    FUN_006462ac(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600),
                 &stack0xffffffd0);
    (**(code **)(*DAT_006d1f28 + 0x4c))(DAT_006d1f28,in_stack_ffffffd0);
  }
  DAT_006d1f2c = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d1f2c,DAT_0066c668,"camisa2");
  _DAT_006d1f30 = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(_DAT_006d1f30,DAT_0066c668,"camisa3");
  local_34 = (char *)0x5713cd;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor0");
  FUN_0048545c(*(undefined4 *)puVar1,4,pHVar3);
  local_34 = (char *)0x5713e8;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor1");
  FUN_0048545c(*(undefined4 *)puVar1,1,pHVar3);
  local_34 = (char *)0x571403;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor2");
  FUN_0048545c(*(undefined4 *)puVar1,2,pHVar3);
  local_34 = (char *)0x57141e;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor3");
  FUN_0048545c(*(undefined4 *)puVar1,3,pHVar3);
  DAT_006d1f34 = FUN_004aa034(PTR_LAB_004a5420,1);
  FUN_004ab2b0(DAT_006d1f34,DAT_0066c668,"campoalpha");
  piVar6 = *(int **)(*(int *)(local_8 + 0x348) + 0x168);
  (**(code **)(*piVar6 + 8))(piVar6,DAT_006d1f34);
  local_34 = (char *)0x571480;
  uVar4 = FUN_00421234(PTR_PTR_0041c10c,1,DAT_0066c668);
  DAT_006d1f38 = (int *)FUN_0048aca8(PTR_PTR_0048a9f4,1);
  (**(code **)(*DAT_006d1f38 + 0x54))(DAT_006d1f38,uVar4);
  piVar6 = *(int **)(*(int *)(local_8 + 0x344) + 0x168);
  (**(code **)(*piVar6 + 8))(piVar6,DAT_006d1f38);
  local_34 = (char *)0x5714c6;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor0");
  FUN_0048545c(*(undefined4 *)puVar1,4,pHVar3);
  local_34 = (char *)0x5714e1;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor1");
  FUN_0048545c(*(undefined4 *)puVar1,1,pHVar3);
  local_34 = (char *)0x5714fc;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor2");
  FUN_0048545c(*(undefined4 *)puVar1,2,pHVar3);
  local_34 = (char *)0x571517;
  pHVar3 = LoadCursorA(DAT_0066c668,"cursor3");
  FUN_0048545c(*(undefined4 *)puVar1,3,pHVar3);
  iVar8 = 1;
  piVar6 = &DAT_006d1f3c;
  do {
    piVar5 = (int *)FUN_0043a67c(PTR_PTR_004386b8,1,*(undefined4 *)(local_8 + 0x340));
    *piVar6 = (int)piVar5;
    FUN_00409dd8(iVar8,&local_38);
    FUN_00404bf0(&local_34,"camisa",local_38);
    (**(code **)(*piVar5 + 0x18))(piVar5,local_34);
    (**(code **)(*piVar5 + 0x68))(piVar5,*(undefined4 *)(local_8 + 0x340));
    (**(code **)(*piVar5 + 0x5c))(piVar5,0);
    FUN_0043aa78(piVar5,0);
    FUN_004659c4(piVar5,0x37);
    FUN_004659e8(piVar5,0x37);
    FUN_0043aa50(piVar5,1);
    uVar4 = FUN_004032c8(100);
    FUN_00465978(piVar5,uVar4);
    uVar4 = FUN_004032c8(100);
    FUN_0046599c(piVar5,uVar4);
    piVar5[3] = iVar8;
    (**(code **)(**(int **)(*piVar6 + 0x168) + 8))(*(int **)(*piVar6 + 0x168),DAT_006d1f24);
    FUN_00466468(piVar5);
    iVar8 = iVar8 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar8 != 0x13);
  iVar8 = 1;
  puVar7 = &DAT_006d1f84;
  do {
    piVar6 = (int *)FUN_004bb328(PTR_PTR_004b3af4,1,*(undefined4 *)(local_8 + 0x340));
    *puVar7 = piVar6;
    FUN_00409dd8(iVar8,&local_40);
    FUN_00404bf0(&local_3c,"labescal",local_40);
    (**(code **)(*piVar6 + 0x18))(piVar6,local_3c);
    (**(code **)(*piVar6 + 0x68))(piVar6,*(undefined4 *)(local_8 + 0x340));
    FUN_004663cc(piVar6,0);
    piVar6[3] = iVar8;
    if (iVar8 < 0xc) {
      FUN_004659c4(piVar6,0x50);
    }
    else {
      FUN_004659c4(piVar6,0x50);
    }
    FUN_004bb578(piVar6,1);
    FUN_0042a5c8(piVar6[0x1a],"Arial");
    FUN_0042a66c(piVar6[0x1a],DAT_00572018);
    FUN_0042a640(piVar6[0x1a],8);
    FUN_00466238(piVar6,&DAT_00572024);
    FUN_00465978(piVar6,10);
    FUN_0046599c(piVar6,10);
    FUN_004663a8(piVar6,0xff8000);
    FUN_0042a3a0(piVar6[0x1a],0xffffff);
    FUN_00466468(piVar6);
    FUN_004bbec4(piVar6,0);
    FUN_004bbee4(piVar6,1);
    FUN_00466358(piVar6,1);
    FUN_0045bbe4(piVar6,1);
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 != 0x13);
  iVar8 = 1;
  puVar7 = &DAT_006d1fcc;
  do {
    piVar6 = (int *)FUN_0045b76c(PTR_PTR_00457844,1,*(undefined4 *)(local_8 + 0x340));
    *puVar7 = piVar6;
    piVar6[3] = iVar8;
    FUN_00409dd8(iVar8,&local_48);
    FUN_00404bf0(&local_44,"labnumer",local_48);
    (**(code **)(*piVar6 + 0x18))(piVar6,local_44);
    (**(code **)(*piVar6 + 0x68))(piVar6,*(undefined4 *)(local_8 + 0x340));
    FUN_004663cc(piVar6,0);
    FUN_004659c4(piVar6,10);
    FUN_004659e8(piVar6,0xc);
    (**(code **)(*piVar6 + 0x5c))(piVar6,0);
    FUN_0042a5c8(piVar6[0x1a],"Arial");
    FUN_0042a640(piVar6[0x1a],8);
    FUN_00466238(piVar6,0);
    FUN_00465978(piVar6,10);
    FUN_0046599c(piVar6,10);
    FUN_004663a8(piVar6,0xff8000);
    FUN_0042a3a0(piVar6[0x1a],0xffffff);
    FUN_0045bb70(piVar6,2);
    FUN_00466468(piVar6);
    FUN_0045bc28(piVar6,1);
    FUN_0045bbe4(piVar6,1);
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 != 0x13);
  iVar8 = 1;
  puVar7 = &DAT_006d2014;
  do {
    piVar6 = (int *)FUN_0045b76c(PTR_PTR_00457844,1,*(undefined4 *)(local_8 + 0x340));
    *puVar7 = piVar6;
    piVar6[3] = iVar8;
    FUN_00409dd8(iVar8,&local_50);
    FUN_00404bf0(&local_4c,"labener",local_50);
    (**(code **)(*piVar6 + 0x18))(piVar6,local_4c);
    (**(code **)(*piVar6 + 0x68))(piVar6,*(undefined4 *)(local_8 + 0x340));
    FUN_004663cc(piVar6,0);
    FUN_004659c4(piVar6,0x19);
    FUN_004659e8(piVar6,0xc);
    (**(code **)(*piVar6 + 0x5c))(piVar6,0);
    FUN_0042a5c8(piVar6[0x1a],"Arial");
    FUN_0042a640(piVar6[0x1a],7);
    FUN_00466238(piVar6,0);
    FUN_00465978(piVar6,10);
    FUN_0046599c(piVar6,10);
    FUN_004663a8(piVar6,0xff8000);
    FUN_0042a3a0(piVar6[0x1a],0);
    FUN_0045bb70(piVar6,2);
    FUN_00466468(piVar6);
    FUN_0045bc28(piVar6,1);
    FUN_0045bbe4(piVar6,1);
    FUN_00466358(piVar6,1);
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 != 0x13);
  DAT_006d205c = *(int *)(*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600);
  DAT_006d2060 = *(int *)(*(int *)PTR_DAT_0066b154 + 4 + *(int *)PTR_DAT_0066b27c * 600);
  _DAT_006d2064 = *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + DAT_006d205c * 0x2f8);
  _DAT_006d2068 = *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + DAT_006d2060 * 0x2f8);
  FUN_00404b48(&local_54,*(int *)PTR_DAT_0066af70 + DAT_006d205c * 0x2f8);
  FUN_00551138(*(undefined4 *)(*(int *)(local_8 + 800) + 0x16c),local_54);
  FUN_00404b48(&local_58,*(int *)PTR_DAT_0066af70 + DAT_006d205c * 0x2f8);
  FUN_00551138(*(undefined4 *)(*(int *)(local_8 + 0x36c) + 0x16c),local_58);
  FUN_00404b48(&local_5c,*(int *)PTR_DAT_0066af70 + DAT_006d2060 * 0x2f8);
  FUN_00551138(*(undefined4 *)(*(int *)(local_8 + 0x31c) + 0x16c),local_5c);
  FUN_00404b48(&local_60,*(int *)PTR_DAT_0066af70 + DAT_006d2060 * 0x2f8);
  FUN_00551138(*(undefined4 *)(*(int *)(local_8 + 0x318) + 0x16c),local_60);
  FUN_00645508(DAT_006d205c,&local_64);
  if (local_64 != 0) {
    FUN_00645508(DAT_006d205c,&local_68);
    FUN_0042d6c0(*(undefined4 *)(*(int *)(local_8 + 0x314) + 0x168),local_68);
  }
  FUN_00645508(DAT_006d2060,&local_6c);
  if (local_6c != 0) {
    FUN_00645508(DAT_006d2060,&local_70);
    FUN_0042d6c0(*(undefined4 *)(*(int *)(local_8 + 0x310) + 0x168),local_70);
  }
  if (*(int *)PTR_DAT_0066b5ec == 1) {
    FUN_00466128(*(undefined4 *)(local_8 + 0x2fc),1);
    FUN_00466128(*(undefined4 *)(local_8 + 0x308),0);
    FUN_00466478(*(undefined4 *)(local_8 + 0x2fc));
    FUN_00466478(*(undefined4 *)(local_8 + 0x304));
    FUN_00466478(*(undefined4 *)(local_8 + 0x30c));
    FUN_00466478(*(undefined4 *)(local_8 + 0x308));
    FUN_00466414(*(undefined4 *)(local_8 + 800),0);
    FUN_00466414(*(undefined4 *)(local_8 + 0x300),0);
    FUN_00466414(*(undefined4 *)(local_8 + 0x314),0);
    FUN_00466414(*(undefined4 *)(local_8 + 0x328),0);
  }
  else {
    FUN_00466128(*(undefined4 *)(local_8 + 0x308),1);
    FUN_00466128(*(undefined4 *)(local_8 + 0x2fc),0);
    FUN_00466414(*(undefined4 *)(local_8 + 0x31c),0);
    FUN_00466414(*(undefined4 *)(local_8 + 0x30c),0);
    FUN_00466414(*(undefined4 *)(local_8 + 0x310),0);
    FUN_00466414(*(undefined4 *)(local_8 + 0x324),0);
  }
  FUN_00466754(DAT_006d1f20);
  FUN_0057255c(local_8);
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + *(int *)PTR_DAT_0066b27c * 600),
               local_78);
  local_34 = "</shad>";
  local_38 = (char *)0x571c15;
  FUN_00404c64(&local_74,3);
  piVar6 = *(int **)(*(int *)(local_8 + 0x328) + 0x198);
  local_38 = "hT W";
  (**(code **)(*piVar6 + 0x2c))(piVar6,local_74);
  local_38 = "<shad>";
  local_3c = 0x571c4d;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + *(int *)PTR_DAT_0066b27c * 600),
               &local_80);
  local_3c = local_80;
  local_40 = "</shad>";
  local_44 = L"喋讈ﱅ肋̤";
  FUN_00404c64(&local_7c,3);
  piVar6 = *(int **)(*(int *)(local_8 + 0x324) + 0x198);
  local_44 = 
  L"沺圠贀䒅\xffff\xe8ffᑋ￩粡暲欀䬀ᖋ녔fኋѫ忂ᖋ꽰fኋ钍탂\x01贀䒅\xffff뇿\xe83aᏫ￩閍ｄ\xffff薍ﻸ\xffff૨\xe914뫿₌W薍ﻸ\xffff䢱죨\xe913跿\xf895\xfffe跿聅廨\xe92e诿聕䖋诼Ⲁ\x03謀颀\x01謀（ⱑ碡暬謀袀"
  ;
  (**(code **)(*piVar6 + 0x2c))(piVar6,local_7c);
  local_44 = 
  L"粡暲欀䬀ᖋ녔fኋѫ忂ᖋ꽰fኋ钍탂\x01贀䒅\xffff뇿\xe83aᏫ￩閍ｄ\xffff薍ﻸ\xffff૨\xe914뫿₌W薍ﻸ\xffff䢱죨\xe913跿\xf895\xfffe跿聅廨\xe92e诿聕䖋诼Ⲁ\x03謀颀\x01謀（ⱑ碡暬謀袀"
  ;
  FUN_004030d4(local_c0,&DAT_0057206c);
  local_44 = 
  L"閍ｄ\xffff薍ﻸ\xffff૨\xe914뫿₌W薍ﻸ\xffff䢱죨\xe913跿\xf895\xfffe跿聅廨\xe92e诿聕䖋诼Ⲁ\x03謀颀\x01謀（ⱑ碡暬謀袀"
  ;
  FUN_004030a4(local_c0,*(int *)PTR_DAT_0066af70 + 0x1d0 +
                        *(int *)(*(int *)PTR_DAT_0066b154 + *(int *)PTR_DAT_0066b27c * 600) * 0x2f8,
               0x3a);
  local_44 = L"貺圠贀\xf885\xfffe뇿\xe848Ꮘ￩閍ﻸ\xffff䖍\xe880⹞￩喋讀ﱅ肋̬";
  FUN_004030d4(local_10c,local_c0);
  local_44 = L"閍ﻸ\xffff䖍\xe880⹞￩喋讀ﱅ肋̬";
  FUN_004030a4(local_10c,&DAT_0057208c,0x48);
  local_44 = L"喋讀ﱅ肋̬";
  FUN_00404b48(&local_84,local_10c);
  piVar6 = *(int **)(*(int *)(local_8 + 0x32c) + 0x198);
  local_44 = L"碡暬謀袀";
  (**(code **)(*piVar6 + 0x2c))(piVar6,local_84);
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) < 7) && (*(int *)(PTR_DAT_0066ac78 + 0x88) != 5)) {
    local_44 = L"<SHAD><FONT color=\"#C1C100\">";
    local_48 = 0x571d48;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x14 + *(int *)PTR_DAT_0066b27c * 600),
                 &local_110);
    local_48 = local_110;
    local_4c = L" pagantes</shad></font>";
    local_50 = (undefined *)0x571d60;
    FUN_00405330(&local_c,3);
    local_50 = &DAT_00572114;
    local_54 = 0x571d84;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x18 + *(int *)PTR_DAT_0066b27c * 600),
                 &local_114);
    local_54 = local_114;
    local_58 = &DAT_00572120;
    local_5c = 0x571dae;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x1c + *(int *)PTR_DAT_0066b27c * 600),
                 &local_118);
    local_5c = local_118;
    local_60 = L" Cd:";
    local_64 = 0x571dd8;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x20 + *(int *)PTR_DAT_0066b27c * 600),
                 &local_11c);
    local_64 = local_11c;
    local_68 = L" Cm:";
    local_6c = 0x571e02;
    FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x24 + *(int *)PTR_DAT_0066b27c * 600),
                 &local_120);
    local_6c = local_120;
    local_70 = &DAT_0057214c;
    local_74 = 0x571e1a;
    FUN_00405330(&local_10,9);
  }
  local_44 = L"開ﻠ\xffff䖋诼む\x03謀颀\x01謀（ⱑ䖋诼む\x03Ԁ\x80";
  FUN_00404b6c(&local_124,local_c);
  piVar6 = *(int **)(*(int *)(local_8 + 0x330) + 0x198);
  local_44 = L"䖋诼む\x03Ԁ\x80";
  (**(code **)(*piVar6 + 0x2c))(piVar6,local_124);
  local_44 = (wchar_t *)0x571e58;
  FUN_00404b6c(*(int *)(local_8 + 0x330) + 0x80,local_10);
  local_44 = L"<SHAD><FONT color=\"#C1C100\">$";
  local_48 = 0x571e7c;
  FUN_0065188c(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x10 + *(int *)PTR_DAT_0066b27c * 600),
               &local_130);
  local_48 = local_130;
  local_4c = L"</font></shad>";
  local_50 = (undefined *)0x571e97;
  FUN_00405330(&local_12c,3);
  local_50 = (undefined *)0x571ea8;
  FUN_00404b6c(&local_128,local_12c);
  piVar6 = *(int **)(*(int *)(local_8 + 0x334) + 0x198);
  local_50 = (undefined *)0x571ec2;
  (**(code **)(*piVar6 + 0x2c))(piVar6,local_128);
  local_50 = (undefined *)0x571ed2;
  FUN_00573408(local_8,*(undefined4 *)PTR_DAT_0066b5ec);
  local_50 = (undefined *)0x571eda;
  FUN_005721b4(local_8);
  pwVar2 = local_44;
  *in_FS_OFFSET = local_4c;
  local_44 = L"幟譛工Ã\xffff\xffff\a";
  local_48 = 0x571ef7;
  FUN_00405008(&local_130,2,pwVar2);
  local_48 = 0x571f07;
  FUN_004048f8(&local_128,2);
  local_48 = 0x571f17;
  FUN_00405008(&local_120,5);
  local_48 = 0x571f24;
  FUN_004048f8(&local_84,0x17);
  local_48 = 0x571f37;
  FUN_00405744(&local_28,PTR_DAT_004010dc,4);
  local_48 = 0x571f44;
  FUN_00405008(&local_10,2);
  return;
}

