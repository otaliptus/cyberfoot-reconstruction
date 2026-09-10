// Address: 00605e40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00605e40(int param_1)

{
  int iVar1;
  undefined *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined *local_134;
  undefined *local_130;
  undefined *local_12c;
  undefined *local_128;
  wchar_t *local_124;
  wchar_t *local_120;
  undefined4 local_11c;
  wchar_t *local_118;
  wchar_t *local_114;
  undefined4 local_110;
  wchar_t *local_10c;
  wchar_t *local_108;
  wchar_t *local_104;
  wchar_t *local_100;
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
  
  puVar2 = PTR_DAT_0066ac7c;
  local_1c = (wchar_t *)&stack0xfffffffc;
  iVar6 = 0x26;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = &LAB_00606727;
  local_24 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (wchar_t *)0x605e71;
  FUN_00404ff0(&local_34);
  local_28 = (wchar_t *)0x605e81;
  FUN_00545088(*(undefined4 *)(param_1 + 0x398),0);
  local_28 = (wchar_t *)0x605e89;
  FUN_00404ff0(&local_28);
  local_28 = (wchar_t *)0x605e91;
  FUN_00404ff0(&local_2c);
  local_28 = (wchar_t *)0x605e99;
  FUN_00404ff0(&local_24);
  local_28 = (wchar_t *)0x605ea1;
  FUN_00404ff0(&local_30);
  local_28 = L"툳喉㏸角\xf455툳喉诬俸ﾅ谏ߡ";
  iVar4 = FUN_00405eec(*(undefined4 *)puVar2);
  local_c = 0;
  iVar8 = 0;
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    iVar7 = 0;
    do {
      iVar1 = *(int *)(*(int *)puVar2 + 4 + iVar7 * 0x18);
      if ((iVar1 == DAT_006d4260) || (iVar1 == DAT_006d4264)) {
        local_28 = (wchar_t *)0x605eea;
        FUN_00404ff0(&local_34);
        iVar6 = iVar6 + 1;
        iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
        if ((iVar1 == 4) || ((iVar1 == 0xe || (iVar1 == 0xf)))) {
          local_28 = (wchar_t *)0x605f11;
          thunk_FUN_0040502c(&local_34,L"i_gol");
        }
        if ((*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 8) ||
           (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0x10)) {
          local_28 = (wchar_t *)0x605f34;
          thunk_FUN_0040502c(&local_34,L"i_golv");
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0xd) {
          if (*(int *)(*(int *)puVar2 + 0xc + iVar7 * 0x18) == 1) {
            local_28 = (wchar_t *)0x605f58;
            thunk_FUN_0040502c(&local_34,L"i_ca");
          }
          else if (*(int *)(*(int *)puVar2 + 0xc + iVar7 * 0x18) == 2) {
            local_28 = (wchar_t *)0x605f73;
            thunk_FUN_0040502c(&local_34,L"i_cv");
          }
          else if (*(int *)(*(int *)puVar2 + 0xc + iVar7 * 0x18) == 3) {
            local_28 = (wchar_t *)0x605f8e;
            thunk_FUN_0040502c(&local_34,L"i_cacv");
          }
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0x12) {
          local_28 = (wchar_t *)0x605fa6;
          thunk_FUN_0040502c(&local_34,L"i_ct");
        }
        iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
        if ((iVar1 == 0x13) || (iVar1 == 0x14)) {
          local_28 = (wchar_t *)0x605fc5;
          thunk_FUN_0040502c(&local_34,L"i_sub");
        }
        if (*(int *)(*(int *)puVar2 + 4 + iVar7 * 0x18) == DAT_006d4260) {
          local_28 = (wchar_t *)0x605fe3;
          thunk_FUN_0040502c(&local_30,L"left");
          local_28 = L"<IMG src=\"";
          local_2c = local_34;
          local_30 = &DAT_006067e0;
          local_34 = (wchar_t *)0x605ffd;
          FUN_00405330(&local_28,3);
          local_34 = (wchar_t *)0x606005;
          FUN_00404ff0(&local_2c);
        }
        else {
          local_28 = (wchar_t *)0x606014;
          thunk_FUN_0040502c(&local_30,L"right");
          local_28 = L"<IMG src=\"";
          local_2c = local_34;
          local_30 = &DAT_006067e0;
          local_34 = 
          L"䖍\xe8dc\xefba￟䖍\xe8e8\xefb2￟ҍ譛謖숄\xf883琄茏໸ੴ\xf883琈茅࿸᥵ҍ譛謖쉄㬄怅浂甀％\xf845ϫ䗿ꇴ걸f뢀Ý"
          ;
          FUN_00405330(&local_2c,3);
          local_34 = 
          L"䖍\xe8e8\xefb2￟ҍ譛謖숄\xf883琄茏໸ੴ\xf883琈茅࿸᥵ҍ譛謖쉄㬄怅浂甀％\xf845ϫ䗿ꇴ걸f뢀Ý"
          ;
          FUN_00404ff0(&local_28);
        }
        local_34 = 
        L"ҍ譛謖숄\xf883琄茏໸ੴ\xf883琈茅࿸᥵ҍ譛謖쉄㬄怅浂甀％\xf845ϫ䗿ꇴ걸f뢀Ý"
        ;
        FUN_00404ff0(&local_1c);
        iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
        if ((((iVar1 == 4) || (iVar1 == 0xe)) || (iVar1 == 8)) || (iVar1 == 0xf)) {
          if (*(int *)(*(int *)puVar2 + 4 + iVar7 * 0x18) == DAT_006d4260) {
            local_c = local_c + 1;
          }
          else {
            iVar8 = iVar8 + 1;
          }
        }
        if (PTR_DAT_0066ac78[0xdd] == '\0') {
          if (*(int *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18) < 0x5d) {
            local_34 = 
            L"ҍ譛謖쉄\xe810붤\x04䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅";
            thunk_FUN_0040502c(&local_20,&DAT_00606808);
            local_34 = L"䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅";
            uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
          }
          else {
            local_34 = 
            L"ҍ譛謖쉄\xe810뷄\x04䖉\xebf0贞\xe445ࢺ恨\xe800\xef92￟ҍ譛謖쉄\xe810붤\x04䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅"
            ;
            thunk_FUN_0040502c(&local_20,&DAT_006067fc);
            local_34 = 
            L"䖉\xebf0贞\xe445ࢺ恨\xe800\xef92￟ҍ譛謖쉄\xe810붤\x04䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏躅"
            ;
            uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
          }
          iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
          if ((((iVar1 == 4) || (iVar1 == 0xe)) || (iVar1 == 8)) || (iVar1 == 0xf)) {
            local_34 = 
            L"痿棄栘`喍诀\xf445쯨\xe03c\xffff쁵⑨恨贀뱅ᒍ譛欎텔☈උ떸fঋᒍ\xe8d1\xea16￟痿梼栤`喍许\xf045鏨\xe03c\xffff롵と恨栀栤`䖍뫈\t"
            ;
            FUN_00409dd8(local_c,&local_40);
            local_34 = local_40;
            local_38 = L"x";
            local_3c = (wchar_t *)0x60610d;
            FUN_00409dd8(iVar8,&local_44);
            local_3c = local_44;
            local_40 = L"ⴠ \xffff\xffff\x01";
            local_44 = L"痿梼栤`喍许\xf045鏨\xe03c\xffff롵と恨栀栤`䖍뫈\t";
            FUN_00404b48(&local_48,
                         *(int *)PTR_DAT_0066b5b8 +
                         *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130);
            local_44 = local_48;
            local_48 = L"ⴠ \xffff\xffff\x01";
            local_4c = L"痿梸栰`⑨恨贀졅঺";
            FUN_00409dd8(uVar5,&local_4c);
            local_50 = &DAT_00606830;
            local_54 = &DAT_00606824;
            local_58 = (wchar_t *)0x60615f;
            FUN_00404c64(&local_3c,9);
            local_28 = L"喋跌\xe845䶋\xe8e4\xf154￟\xf8e9\x03贀嬄ᚋҋ菂ᏸॴ\xf883༔ﲅ";
            FUN_004051d4(&local_38,local_3c);
            local_28 = L"\xf8e9\x03贀嬄ᚋҋ菂ᏸॴ\xf883༔ﲅ";
            FUN_004052cc(&local_1c,local_38,local_20);
          }
          else {
            iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
            if ((iVar1 == 0x13) || (iVar1 == 0x14)) {
              local_34 = (wchar_t *)0x6061a0;
              FUN_004030d4(local_70,&DAT_00606834);
              local_34 = (wchar_t *)0x6061bf;
              FUN_004030a4(local_70,*(int *)PTR_DAT_0066b5b8 +
                                    *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130,0x15);
              local_34 = (wchar_t *)0x6061cd;
              FUN_004030d4(local_88,local_70);
              local_34 = (wchar_t *)0x6061df;
              FUN_004030a4(local_88,&DAT_00606838,0x17);
              local_34 = (wchar_t *)0x6061f0;
              FUN_004030d4(local_b4,local_88);
              local_34 = (wchar_t *)0x606212;
              FUN_004030a4(local_b4,*(int *)PTR_DAT_0066b5b8 +
                                    *(int *)(*(int *)puVar2 + 0xc + iVar7 * 0x18) * 0x130,0x2b);
              local_34 = 
              L"㲺恨贀₅\xffff뇿\xe82c칯￟閍＠\xffff䖍\xe8ac\xe905￟痿趬Ვ\xffff诿\xf045蓨\xe03b\xffffᲵ\xffff棿栰`⑨恨贀끅Һ"
              ;
              FUN_004030d4(local_e4,local_b4);
              local_34 = 
              L"閍＠\xffff䖍\xe8ac\xe905￟痿趬Ვ\xffff诿\xf045蓨\xe03b\xffffᲵ\xffff棿栰`⑨恨贀끅Һ"
              ;
              FUN_004030a4(local_e4,&DAT_0060683c,0x2c);
              local_34 = L"痿趬Ვ\xffff诿\xf045蓨\xe03b\xffffᲵ\xffff棿栰`⑨恨贀끅Һ";
              FUN_00404b48(&local_58,local_e4);
              local_34 = local_58;
              local_38 = L"뗿＜\xffffと恨栀栤`䖍몰\x04";
              FUN_00409dd8(uVar5,&local_e8);
              local_38 = local_e8;
              local_3c = L"\'";
              local_40 = L"ⴠ \xffff\xffff\x01";
              local_44 = (wchar_t *)0x606271;
              FUN_00404c64(&local_54,4);
              local_28 = (wchar_t *)0x60627c;
              FUN_004051d4(&local_50,local_54);
              local_28 = (wchar_t *)0x60628a;
              FUN_004052cc(&local_1c,local_50,local_20);
            }
            else {
              local_34 = (wchar_t *)0x6062ac;
              FUN_004030d4(local_70,*(int *)PTR_DAT_0066b5b8 +
                                    *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130);
              local_34 = 
              L"喍趔ႅ\xffff\xe8ff\xe87f￟뗿０\xffff閍，\xffff䖋\xe8f0㫻￠뗿，\xffffと恨栀栤`薍４\xffffҺ"
              ;
              FUN_004030a4(local_70,&DAT_0060683c,0x15);
              local_34 = 
              L"뗿０\xffff閍，\xffff䖋\xe8f0㫻￠뗿，\xffffと恨栀栤`薍４\xffffҺ";
              FUN_00404b48(&local_f4,local_70);
              local_34 = local_f4;
              local_38 = L"뗿，\xffffと恨栀栤`薍４\xffffҺ";
              FUN_00409dd8(uVar5,&local_f8);
              local_38 = local_f8;
              local_3c = L"\'";
              local_40 = L"ⴠ \xffff\xffff\x01";
              local_44 = (wchar_t *)0x6062fd;
              FUN_00404c64(&local_f0,4);
              local_28 = (wchar_t *)0x60630e;
              FUN_004051d4(&local_ec,local_f0);
              local_28 = (wchar_t *)0x60631f;
              FUN_004052cc(&local_1c,local_ec,local_20);
            }
          }
        }
        else {
          local_34 = L"ҍ譛謖쉄\xe810묶\x04䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏馅"
          ;
          FUN_00404ff0(&local_20);
          local_34 = L"䖉跰嬄ᚋҋ菂Ӹ፴\xf883琎茎ࣸॴ\xf883༏馅";
          uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
          iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
          if (((iVar1 == 4) || (iVar1 == 0xe)) || ((iVar1 == 8 || (iVar1 == 0xf)))) {
            local_34 = 
            L"뗿＄\xffffᡨ恨贀\x95\xffff诿\xf445哨\xe03a\xffffµ\xffff棿栤`薍ﻼ\xffffᒍ譛欎텔☈උ떸fঋᒍ\xe8d1\xe799￟뗿ﻼ\xffff⑨恨贀\xf895\xfffe诿\xf045შ\xe03a\xffff\xf8b5\xfffe棿栰`薍（\xffffࢺ"
            ;
            FUN_00409dd8(local_c,&local_100);
            local_34 = local_100;
            local_38 = L"x";
            local_3c = (wchar_t *)0x606384;
            FUN_00409dd8(iVar8,&local_104);
            local_3c = local_104;
            local_40 = L"ⴠ \xffff\xffff\x01";
            local_44 = 
            L"뗿ﻼ\xffff⑨恨贀\xf895\xfffe诿\xf045შ\xe03a\xffff\xf8b5\xfffe棿栰`薍（\xffffࢺ"
            ;
            FUN_00404b48(&local_108,
                         *(int *)PTR_DAT_0066b5b8 +
                         *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130);
            local_44 = local_108;
            local_48 = L"ⴠ \xffff\xffff\x01";
            local_4c = L"뗿ﻸ\xffffと恨贀ࢅ\xffff뫿\b";
            FUN_00409dd8(uVar5,&local_10c);
            local_4c = local_10c;
            local_50 = &DAT_00606830;
            local_54 = (undefined *)0x6063e3;
            FUN_00404c64(&local_fc,8);
            local_28 = L"翩\x01贀嬄ᚋҋ菂ᏸॴ\xf883༔\xf285";
            FUN_004051d4(&local_1c,local_fc);
          }
          else {
            iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
            if ((iVar1 == 0x13) || (iVar1 == 0x14)) {
              local_34 = (wchar_t *)0x606419;
              FUN_004030d4(local_70,&DAT_00606834);
              local_34 = (wchar_t *)0x606438;
              FUN_004030a4(local_70,*(int *)PTR_DAT_0066b5b8 +
                                    *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130,0x15);
              local_34 = (wchar_t *)0x606446;
              FUN_004030d4(local_88,local_70);
              local_34 = (wchar_t *)0x606458;
              FUN_004030a4(local_88,&DAT_00606838,0x17);
              local_34 = (wchar_t *)0x606469;
              FUN_004030d4(local_b4,local_88);
              local_34 = (wchar_t *)0x60648b;
              FUN_004030a4(local_b4,*(int *)PTR_DAT_0066b5b8 +
                                    *(int *)(*(int *)puVar2 + 0xc + iVar7 * 0x18) * 0x130,0x2b);
              local_34 = (wchar_t *)0x60649c;
              FUN_004030d4(local_e4,local_b4);
              local_34 = (wchar_t *)0x6064ae;
              FUN_004030a4(local_e4,&DAT_0060683c,0x2c);
              local_34 = 
              L"뗿ﻰ\xffff閍ﻬ\xffff䖋\xe8f0㤅￠뗿ﻬ\xffffと恨贀\xf485\xfffe뫿\x03";
              FUN_00404b48(&local_114,local_e4);
              local_34 = local_114;
              local_38 = L"뗿ﻬ\xffffと恨贀\xf485\xfffe뫿\x03";
              FUN_00409dd8(uVar5,&local_118);
              local_38 = local_118;
              local_3c = L"\'";
              local_40 = (wchar_t *)0x6064ee;
              FUN_00404c64(&local_110,3);
              local_28 = (wchar_t *)0x6064fc;
              FUN_004051d4(&local_1c,local_110);
            }
            else {
              local_34 = (wchar_t *)0x60651b;
              FUN_004030d4(local_70,*(int *)PTR_DAT_0066b5b8 +
                                    *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130);
              local_34 = 
              L"喍趔\xe485\xfffe\xe8ff\xe610￟뗿ﻤ\xffff閍ﻠ\xffff䖋\xe8f0㢌￠뗿ﻠ\xffffと恨贀\xe885\xfffe뫿\x03"
              ;
              FUN_004030a4(local_70,&DAT_0060683c,0x15);
              local_34 = 
              L"뗿ﻤ\xffff閍ﻠ\xffff䖋\xe8f0㢌￠뗿ﻠ\xffffと恨贀\xe885\xfffe뫿\x03";
              FUN_00404b48(&local_120,local_70);
              local_34 = local_120;
              local_38 = L"뗿ﻠ\xffffと恨贀\xe885\xfffe뫿\x03";
              FUN_00409dd8(uVar5,&local_124);
              local_38 = local_124;
              local_3c = L"\'";
              local_40 = (wchar_t *)0x606567;
              FUN_00404c64(&local_11c,3);
              local_28 = (wchar_t *)0x606575;
              FUN_004051d4(&local_1c,local_11c);
            }
          }
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 8) {
          local_28 = local_1c;
          local_2c = L" ";
          local_30 = (undefined *)0x606598;
          FUN_00642c50(0x1fe,&local_128);
          local_30 = local_128;
          local_34 = (wchar_t *)0x6065ab;
          FUN_00405330(&local_1c,3);
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0xe) {
          local_28 = local_1c;
          local_2c = L" ";
          local_30 = (undefined *)0x6065ce;
          FUN_00642c50(0x200,&local_12c);
          local_30 = local_12c;
          local_34 = L"ҍ譛茖숼甏Ｋ\xe875䑨恨贀풕\xfffe룿ǿ";
          FUN_00405330(&local_1c,3);
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0xf) {
          local_28 = local_1c;
          local_2c = L" ";
          local_30 = (undefined *)0x606604;
          FUN_00642c50(0x1ff,&local_130);
          local_30 = local_130;
          local_34 = L"ҍ譛茖숼甐Ｋ\xe875䑨恨贀킕\xfffe룿ȁ";
          FUN_00405330(&local_1c,3);
        }
        if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0x10) {
          local_28 = local_1c;
          local_2c = L" ";
          local_30 = (undefined *)0x60663a;
          FUN_00642c50(0x201,&local_134);
          local_30 = local_134;
          local_34 = L"綃წ㕽痿棠桌`痿棔桨`痿棜棔`痿棨棨`痿棘椀`䖍뫠\n";
          FUN_00405330(&local_1c,3);
        }
        if (iVar6 < 0x10) {
          local_28 = local_24;
          local_2c = L"<P align=\"";
          local_34 = L"\"><FONT color=\"#DFDF00\"  size=\"8\" face=\"Arial\"><B>";
          local_38 = local_24;
          local_3c = L"<shad>";
          local_40 = local_1c;
          local_44 = L" </shad>";
          local_48 = L"<P align=\"";
          local_4c = L"</b></font></p>";
          local_50 = (undefined *)0x606688;
          FUN_00405330(&local_24,10);
        }
        if (iVar6 == 0x10) {
          local_28 = 
          L"佃蔏\xf822\xffff䖋诼颀\x03謀\xe055퓨\xf3e9㏿嫀奙襤栐朮`薍ﻐ\xffffҺ";
          FUN_0040526c(&local_24,L"<FONT color=\"#DFDF00\">...</font>");
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = L"쀳奚摙ႉ⹨恧贀킅\xfffe뫿\x04";
  FUN_00545088(*(undefined4 *)(param_1 + 0x398),local_24);
  pwVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = L"幟譛工Ã";
  local_20 = (undefined1 *)0x6066d1;
  FUN_00405008(&local_134,4,pwVar3);
  local_20 = (undefined1 *)0x6066e1;
  FUN_004048f8(&local_124,0xe);
  local_20 = (undefined1 *)0x6066ec;
  FUN_00404ff0(&local_ec);
  local_20 = (undefined1 *)0x6066f7;
  FUN_004048d4(&local_e8);
  local_20 = (undefined1 *)0x606704;
  FUN_004048f8(&local_58,2);
  local_20 = (undefined1 *)0x60670c;
  FUN_00404ff0(&local_50);
  local_20 = (undefined1 *)0x606719;
  FUN_004048f8(&local_4c,5);
  local_20 = (undefined1 *)0x606726;
  FUN_00405008(&local_38,8);
  return;
}

