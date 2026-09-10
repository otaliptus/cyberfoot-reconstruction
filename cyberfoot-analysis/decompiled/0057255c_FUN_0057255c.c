// Address: 0057255c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0057255c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_fc;
  wchar_t *local_f8;
  wchar_t *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  wchar_t *local_e8;
  undefined1 local_e4 [48];
  undefined1 local_b4 [44];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  wchar_t *local_58;
  undefined *local_54;
  undefined *local_50;
  wchar_t *local_4c;
  wchar_t *local_48;
  wchar_t *local_44;
  wchar_t *local_40;
  wchar_t *local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  undefined *local_30;
  wchar_t *local_2c;
  wchar_t *local_28;
  wchar_t *local_24;
  undefined1 *local_20;
  wchar_t *local_1c;
  int iVar8;
  int local_c;
  
  puVar2 = PTR_DAT_0066b160;
  local_1c = (wchar_t *)&stack0xfffffffc;
  iVar6 = 0x1f;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = &LAB_00572b69;
  local_24 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 
  L"䖋诼岀\x03謀Ⲁ\x02㌀\xe8d2ᘝ￼䖍\xe8dc⩅￩䖍\xe8d8⨽￩䖍\xe8e0⨵￩䖍\xe8d4⨭￩쀳䖉㏸觀\xf445쀳䖉诬\xe806㤛￩\xf88bﾅ谏ӻ"
  ;
  FUN_00404ff0(&local_34);
  local_28 = 
  L"䖍\xe8dc⩅￩䖍\xe8d8⨽￩䖍\xe8e0⨵￩䖍\xe8d4⨭￩쀳䖉㏸觀\xf445쀳䖉诬\xe806㤛￩\xf88bﾅ谏ӻ"
  ;
  FUN_00533bc0(*(undefined4 *)(*(int *)(param_1 + 0x35c) + 0x22c),0);
  local_28 = 
  L"䖍\xe8d8⨽￩䖍\xe8e0⨵￩䖍\xe8d4⨭￩쀳䖉㏸觀\xf445쀳䖉诬\xe806㤛￩\xf88bﾅ谏ӻ"
  ;
  FUN_00404ff0(&local_28);
  local_28 = L"䖍\xe8e0⨵￩䖍\xe8d4⨭￩쀳䖉㏸觀\xf445쀳䖉诬\xe806㤛￩\xf88bﾅ谏ӻ";
  FUN_00404ff0(&local_2c);
  local_28 = L"䖍\xe8d4⨭￩쀳䖉㏸觀\xf445쀳䖉诬\xe806㤛￩\xf88bﾅ谏ӻ";
  FUN_00404ff0(&local_24);
  local_28 = L"쀳䖉㏸觀\xf445쀳䖉诬\xe806㤛￩\xf88bﾅ谏ӻ";
  FUN_00404ff0(&local_30);
  local_c = 0;
  iVar8 = 0;
  iVar6 = 0;
  local_28 = L"\xf88bﾅ谏ӻ";
  iVar4 = FUN_00405ef4(*(undefined4 *)puVar2);
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    iVar7 = 0;
    do {
      if (*(int *)(*(int *)puVar2 + 0x14 + iVar7 * 0x18) == *(int *)PTR_DAT_0066b27c) {
        local_28 = 
        L"䗿跬嬄ᚋҋ菂Ӹੴ\xf883琎茅࿸൵䖍뫐⭼Wⓨ\xe92a跿嬄ᚋ㲃ࣂ୴ҍ譛茖숼甐贍큅貺圫\xe800⨁￩ҍ譛茖숼甍赏嬄ᚋ粃ೂ甁贏큅ꂺ圫\xe800⧝￩㓫ҍ譛茖쉼Ȍཱུ䖍뫐⮰W싨\xe929\xebff贙嬄ᚋ粃ೂ甃贍큅삺圫\xe800⦧￩ҍ譛茖숼甒贍큅풺圫\xe800⦏￩ҍ譛謖숄\xf883琓茅ᓸ൵䖍뫐⯤W烨\xe929跿嬄ᚋ䒋ӂԻ⁜mㅵ䖍뫔⯴W勨\xe929棿ⰄW痿棐ⰠW䖍뫜\x03"
        ;
        FUN_00404ff0(&local_34);
        iVar6 = iVar6 + 1;
        iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
        if (((iVar1 == 4) || (iVar1 == 0xe)) || (iVar1 == 0xf)) {
          local_28 = (wchar_t *)0x57262c;
          thunk_FUN_0040502c(&local_34,L"i_gol");
        }
        if ((*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 8) ||
           (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0x10)) {
          local_28 = 
          L"ҍ譛茖숼甍赏嬄ᚋ粃ೂ甁贏큅ꂺ圫\xe800⧝￩㓫ҍ譛茖쉼Ȍཱུ䖍뫐⮰W싨\xe929\xebff贙嬄ᚋ粃ೂ甃贍큅삺圫\xe800⦧￩ҍ譛茖숼甒贍큅풺圫\xe800⦏￩ҍ譛謖숄\xf883琓茅ᓸ൵䖍뫐⯤W烨\xe929跿嬄ᚋ䒋ӂԻ⁜mㅵ䖍뫔⯴W勨\xe929棿ⰄW痿棐ⰠW䖍뫜\x03"
          ;
          thunk_FUN_0040502c(&local_34,L"i_golv");
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0xd) {
          if (*(int *)(*(int *)puVar2 + 0xc + iVar7 * 0x18) == 1) {
            local_28 = 
            L"㓫ҍ譛茖쉼Ȍཱུ䖍뫐⮰W싨\xe929\xebff贙嬄ᚋ粃ೂ甃贍큅삺圫\xe800⦧￩ҍ譛茖숼甒贍큅풺圫\xe800⦏￩ҍ譛謖숄\xf883琓茅ᓸ൵䖍뫐⯤W烨\xe929跿嬄ᚋ䒋ӂԻ⁜mㅵ䖍뫔⯴W勨\xe929棿ⰄW痿棐ⰠW䖍뫜\x03"
            ;
            thunk_FUN_0040502c(&local_34,L"i_ca");
          }
          else if (*(int *)(*(int *)puVar2 + 0xc + iVar7 * 0x18) == 2) {
            local_28 = (wchar_t *)0x57268e;
            thunk_FUN_0040502c(&local_34,L"i_cv");
          }
          else if (*(int *)(*(int *)puVar2 + 0xc + iVar7 * 0x18) == 3) {
            local_28 = 
            L"ҍ譛茖숼甒贍큅풺圫\xe800⦏￩ҍ譛謖숄\xf883琓茅ᓸ൵䖍뫐⯤W烨\xe929跿嬄ᚋ䒋ӂԻ⁜mㅵ䖍뫔⯴W勨\xe929棿ⰄW痿棐ⰠW䖍뫜\x03"
            ;
            thunk_FUN_0040502c(&local_34,L"i_cacv");
          }
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0x12) {
          local_28 = 
          L"ҍ譛謖숄\xf883琓茅ᓸ൵䖍뫐⯤W烨\xe929跿嬄ᚋ䒋ӂԻ⁜mㅵ䖍뫔⯴W勨\xe929棿ⰄW痿棐ⰠW䖍뫜\x03"
          ;
          thunk_FUN_0040502c(&local_34,L"i_ct");
        }
        iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
        if ((iVar1 == 0x13) || (iVar1 == 0x14)) {
          local_28 = (wchar_t *)0x5726e0;
          thunk_FUN_0040502c(&local_34,L"i_sub");
        }
        if (*(int *)(*(int *)puVar2 + 4 + iVar7 * 0x18) == DAT_006d205c) {
          local_28 = (wchar_t *)0x5726fe;
          thunk_FUN_0040502c(&local_30,L"left");
          local_28 = L"<IMG src=\"";
          local_2c = local_34;
          local_30 = &DAT_00572c20;
          local_34 = L"䖍\xe8d8⣐￩⿫䖍뫔ⰬW⇨\xe929棿ⰄW痿棐ⰠW䖍뫘\x03";
          FUN_00405330(&local_28,3);
          local_34 = L"⿫䖍뫔ⰬW⇨\xe929棿ⰄW痿棐ⰠW䖍뫘\x03";
          FUN_00404ff0(&local_2c);
        }
        else {
          local_28 = (wchar_t *)0x57272f;
          thunk_FUN_0040502c(&local_30,L"right");
          local_28 = L"<IMG src=\"";
          local_2c = local_34;
          local_30 = &DAT_00572c20;
          local_34 = 
          L"䖍\xe8dc⢟￩䖍\xe8e8⢗￩ҍ譛謖숄\xf883琄茏໸ੴ\xf883琈茅࿸᥵ҍ譛謖쉄㬄尅洠甀％\xf845ϫ䗿跴嬄ᚋ粃Ⴢ繜贠\xe445㲺圬\xe800⢩￩ҍ譛謖쉄\xe810\xf6bb\r䖉\xebf0贞\xe445䢺圬\xe800⢉￩ҍ譛謖쉄\xe810\xf69b\r䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅"
          ;
          FUN_00405330(&local_2c,3);
          local_34 = 
          L"䖍\xe8e8⢗￩ҍ譛謖숄\xf883琄茏໸ੴ\xf883琈茅࿸᥵ҍ譛謖쉄㬄尅洠甀％\xf845ϫ䗿跴嬄ᚋ粃Ⴢ繜贠\xe445㲺圬\xe800⢩￩ҍ譛謖쉄\xe810\xf6bb\r䖉\xebf0贞\xe445䢺圬\xe800⢉￩ҍ譛謖쉄\xe810\xf69b\r䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅"
          ;
          FUN_00404ff0(&local_28);
        }
        local_34 = 
        L"ҍ譛謖숄\xf883琄茏໸ੴ\xf883琈茅࿸᥵ҍ譛謖쉄㬄尅洠甀％\xf845ϫ䗿跴嬄ᚋ粃Ⴢ繜贠\xe445㲺圬\xe800⢩￩ҍ譛謖쉄\xe810\xf6bb\r䖉\xebf0贞\xe445䢺圬\xe800⢉￩ҍ譛謖쉄\xe810\xf69b\r䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅"
        ;
        FUN_00404ff0(&local_1c);
        iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
        if ((((iVar1 == 4) || (iVar1 == 0xe)) || (iVar1 == 8)) || (iVar1 == 0xf)) {
          if (*(int *)(*(int *)puVar2 + 4 + iVar7 * 0x18) == DAT_006d205c) {
            local_c = local_c + 1;
          }
          else {
            iVar8 = iVar8 + 1;
          }
        }
        if (*(int *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18) < 0x5d) {
          local_34 = 
          L"ҍ譛謖쉄\xe810\xf69b\r䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅";
          thunk_FUN_0040502c(&local_20,&DAT_00572c48);
          local_34 = L"䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅";
          uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
        }
        else {
          local_34 = 
          L"ҍ譛謖쉄\xe810\xf6bb\r䖉\xebf0贞\xe445䢺圬\xe800⢉￩ҍ譛謖쉄\xe810\xf69b\r䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅"
          ;
          thunk_FUN_0040502c(&local_20,&DAT_00572c3c);
          local_34 = 
          L"䖉\xebf0贞\xe445䢺圬\xe800⢉￩ҍ譛謖쉄\xe810\xf69b\r䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅"
          ;
          uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
        }
        iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
        if (((iVar1 == 4) || (iVar1 == 0xe)) || ((iVar1 == 8 || (iVar1 == 0xf)))) {
          local_34 = 
          L"痿棄ⱘW喍诀\xf445싨\xe975\xffff쁵摨圬贀뱅ᒍ譛欎텔☈උ떸fঋᒍ\xe8d1⌍￩痿梼ⱤW喍许\xf045諨\xe975\xffff롵灨圬栀ⱤW䖍뫈\t"
          ;
          FUN_00409dd8(local_c,&local_40);
          local_34 = local_40;
          local_38 = L"x";
          local_3c = 
          L"痿检ⱤW䖍趼嬔຋呫࣑謦렍暵謀贉턔෨\xe923\xffff뱵摨圬贀롕䖋\xe8f0疊￩痿梸ⱰW摨圬贀졅঺"
          ;
          FUN_00409dd8(iVar8,&local_44);
          local_3c = local_44;
          local_40 = L"ⴠ \xffff\xffff\x01";
          local_44 = L"痿梼ⱤW喍许\xf045諨\xe975\xffff롵灨圬栀ⱤW䖍뫈\t";
          FUN_00404b48(&local_48,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130);
          local_44 = local_48;
          local_48 = L"ⴠ \xffff\xffff\x01";
          local_4c = L"痿梸ⱰW摨圬贀졅঺";
          FUN_00409dd8(uVar5,&local_4c);
          local_50 = &DAT_00572c70;
          local_54 = &DAT_00572c64;
          local_58 = L"喋跈책懨\xe929诿챕䖍诨\xe44d䯨\xe92a\xe9ffƢ";
          FUN_00404c64(&local_3c,9);
          local_28 = L"喋跌\xe845䶋\xe8e4⩋￩ꋩ\x01贀嬄ᚋҋ菂ᏸॴ\xf883༔ﲅ";
          FUN_004051d4(&local_38,local_3c);
          local_28 = L"ꋩ\x01贀嬄ᚋҋ菂ᏸॴ\xf883༔ﲅ";
          FUN_004052cc(&local_1c,local_38,local_20);
        }
        else {
          iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
          if ((iVar1 == 0x13) || (iVar1 == 0x14)) {
            local_34 = (wchar_t *)0x5728a9;
            FUN_004030d4(local_70,&DAT_00572c74);
            local_34 = (wchar_t *)0x5728c8;
            FUN_004030a4(local_70,*(int *)PTR_DAT_0066b5b8 +
                                  *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130,0x15);
            local_34 = (wchar_t *)0x5728d6;
            FUN_004030d4(local_88,local_70);
            local_34 = (wchar_t *)0x5728e8;
            FUN_004030a4(local_88,&DAT_00572c78,0x17);
            local_34 = 
            L"ҍ譛欖쉄☌ᖋ떸fኋᒍ跂傅\xffff뇿\xe82bމ￩閍ｐ\xffff薍＠\xffff꣨\xe907뫿ⱼW薍＠\xffffⲱ曨\xe907跿ₕ\xffff跿걅ﳨ\xe921\xffff걵閍＜\xffff䖋\xe8f0瑻￩뗿＜\xffff灨圬栀ⱤW䖍몰\x04"
            ;
            FUN_004030d4(local_b4,local_88);
            local_34 = 
            L"閍ｐ\xffff薍＠\xffff꣨\xe907뫿ⱼW薍＠\xffffⲱ曨\xe907跿ₕ\xffff跿걅ﳨ\xe921\xffff걵閍＜\xffff䖋\xe8f0瑻￩뗿＜\xffff灨圬栀ⱤW䖍몰\x04"
            ;
            FUN_004030a4(local_b4,*(int *)PTR_DAT_0066b5b8 +
                                  *(int *)(*(int *)puVar2 + 0xc + iVar7 * 0x18) * 0x130,0x2b);
            local_34 = 
            L"粺圬贀₅\xffff뇿\xe82cݦ￩閍＠\xffff䖍\xe8ac⇼￩痿趬Ვ\xffff诿\xf045篨\xe974\xffffᲵ\xffff棿ⱰW摨圬贀끅Һ"
            ;
            FUN_004030d4(local_e4,local_b4);
            local_34 = 
            L"閍＠\xffff䖍\xe8ac⇼￩痿趬Ვ\xffff诿\xf045篨\xe974\xffffᲵ\xffff棿ⱰW摨圬贀끅Һ"
            ;
            FUN_004030a4(local_e4,&DAT_00572c7c,0x2c);
            local_34 = L"痿趬Ვ\xffff诿\xf045篨\xe974\xffffᲵ\xffff棿ⱰW摨圬贀끅Һ";
            FUN_00404b48(&local_58,local_e4);
            local_34 = local_58;
            local_38 = L"뗿＜\xffff灨圬栀ⱤW䖍몰\x04";
            FUN_00409dd8(uVar5,&local_e8);
            local_38 = local_e8;
            local_3c = L"\'";
            local_40 = L"ⴠ \xffff\xffff\x01";
            local_44 = L"喋趰둅俨\xe928诿둕䖍诨\xe44d㧨\xe929\xe9ff\x90";
            FUN_00404c64(&local_54,4);
            local_28 = L"喋趴\xe845䶋\xe8e4⤹￩郩";
            FUN_004051d4(&local_50,local_54);
            local_28 = L"郩";
            FUN_004052cc(&local_1c,local_50,local_20);
          }
          else {
            local_34 = 
            L"粺圬贀鑅ᖱ\xe0e8\xe906跿鑕薍０\xffff盨\xe921\xffffႵ\xffff跿ಕ\xffff诿\xf045\xf2e8\xe973\xffffವ\xffff棿ⱰW摨圬贀ᒅ\xffff뫿\x04"
            ;
            FUN_004030d4(local_70,*(int *)PTR_DAT_0066b5b8 +
                                  *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130);
            local_34 = 
            L"喍趔ႅ\xffff\xe8ffⅶ￩뗿０\xffff閍，\xffff䖋\xe8f0珲￩뗿，\xffff灨圬栀ⱤW薍４\xffffҺ"
            ;
            FUN_004030a4(local_70,&DAT_00572c7c,0x15);
            local_34 = 
            L"뗿０\xffff閍，\xffff䖋\xe8f0珲￩뗿，\xffff灨圬栀ⱤW薍４\xffffҺ";
            FUN_00404b48(&local_f4,local_70);
            local_34 = local_f4;
            local_38 = L"뗿，\xffff灨圬栀ⱤW薍４\xffffҺ";
            FUN_00409dd8(uVar5,&local_f8);
            local_38 = local_f8;
            local_3c = L"\'";
            local_40 = L"ⴠ \xffff\xffff\x01";
            local_44 = (wchar_t *)0x572a06;
            FUN_00404c64(&local_f0,4);
            local_28 = (wchar_t *)0x572a17;
            FUN_004051d4(&local_ec,local_f0);
            local_28 = (wchar_t *)0x572a28;
            FUN_004052cc(&local_1c,local_ec,local_20);
          }
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 8) {
          local_28 = (wchar_t *)0x572a40;
          FUN_0040526c(&local_1c,L" (contra)");
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0xe) {
          local_28 = (wchar_t *)0x572a58;
          FUN_0040526c(&local_1c,L" (de falta)");
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0xf) {
          local_28 = (wchar_t *)0x572a70;
          FUN_0040526c(&local_1c,L" (de penalti)");
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0x10) {
          local_28 = L"綃෬㕽痿棠ⴀW痿棔ⴜW痿棜ⶈW痿棨⶜W痿棘ⶴW䖍뫠\n";
          FUN_0040526c(&local_1c,L" (perdeu penalti)");
        }
        if (iVar6 < 0xd) {
          local_28 = local_24;
          local_2c = L"<P align=\"";
          local_34 = L"\"><FONT color=\"#DFDF00\"  size=\"8\" face=\"Arial\"><B>";
          local_38 = local_24;
          local_3c = L"<shad>";
          local_40 = local_1c;
          local_44 = L" </shad>";
          local_48 = L"<P align=\"";
          local_4c = L"</b></font></p>";
          local_50 = (undefined *)0x572ac3;
          FUN_00405330(&local_24,10);
        }
        if (iVar6 == 0x10) {
          local_28 = 
          L"佃蔏﬈\xffff薍（\xffff喋\xe8e0₀￩開（\xffff䖋诼岀\x03謀Ⲁ\x02\xe800Ⴚ￼쀳奚摙ႉ灨圫贀ࢅ\xffff뫿\x04"
          ;
          FUN_0040526c(&local_24,L"<FONT color=\"#DFDF00\">...</font>");
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = L"開（\xffff䖋诼岀\x03謀Ⲁ\x02\xe800Ⴚ￼쀳奚摙ႉ灨圫贀ࢅ\xffff뫿\x04"
  ;
  FUN_00404b6c(&local_fc,local_24);
  local_28 = L"쀳奚摙ႉ灨圫贀ࢅ\xffff뫿\x04";
  FUN_00533bc0(*(undefined4 *)(*(int *)(param_1 + 0x35c) + 0x22c),local_fc);
  pwVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = L"幟譛工Ã\n";
  local_20 = (undefined1 *)0x572b23;
  FUN_004048f8(&local_fc,4,pwVar3);
  local_20 = (undefined1 *)0x572b2e;
  FUN_00404ff0(&local_ec);
  local_20 = (undefined1 *)0x572b39;
  FUN_004048d4(&local_e8);
  local_20 = (undefined1 *)0x572b46;
  FUN_004048f8(&local_58,2);
  local_20 = (undefined1 *)0x572b4e;
  FUN_00404ff0(&local_50);
  local_20 = (undefined1 *)0x572b5b;
  FUN_004048f8(&local_4c,5);
  local_20 = (undefined1 *)0x572b68;
  FUN_00405008(&local_38,8);
  return;
}

