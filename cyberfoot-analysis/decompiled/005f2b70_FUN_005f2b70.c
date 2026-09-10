// Address: 005f2b70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f2b70(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  wchar_t *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  wchar_t *local_80;
  wchar_t *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined4 local_54;
  wchar_t *local_50;
  undefined1 *local_4c;
  undefined *local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined1 *local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  wchar_t *local_30;
  wchar_t *local_2c;
  wchar_t *local_28;
  undefined1 *local_24;
  wchar_t *local_20;
  int iVar8;
  
  puVar2 = PTR_DAT_0066b160;
  local_20 = (wchar_t *)&stack0xfffffffc;
  iVar6 = 0x12;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_005f31c3;
  local_28 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  iVar6 = 0;
  iVar8 = 0;
  local_2c = 
  L"䖍\xe8e8␳￡䖍\xe8dc␫￡䖍\xe8d8␣￡䖍\xe8d4␛￡ދშ\xe133诿仰\xf685谏ъ";
  FUN_00404ff0(&local_20);
  local_2c = L"䖍\xe8dc␫￡䖍\xe8d8␣￡䖍\xe8d4␛￡ދშ\xe133诿仰\xf685谏ъ";
  FUN_00404ff0(&stack0xffffffe4);
  local_2c = L"䖍\xe8d8␣￡䖍\xe8d4␛￡ދშ\xe133诿仰\xf685谏ъ";
  FUN_00404ff0(&local_28);
  local_2c = L"䖍\xe8d4␛￡ދშ\xe133诿仰\xf685谏ъ";
  FUN_00404ff0(&local_2c);
  local_2c = L"ދშ\xe133诿仰\xf685谏ъ";
  FUN_00404ff0(&local_30);
  local_2c = (wchar_t *)0x5f2bdc;
  iVar4 = FUN_00405eec(*(undefined4 *)puVar2);
  if (-1 < iVar4 + -1) {
    iVar7 = 0;
    do {
      if (*(int *)(*(int *)puVar2 + 0x14 + iVar7 * 0x18) == param_2) {
        iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
        if ((((iVar1 == 4) || (iVar1 == 0xe)) || (iVar1 == 0xf)) || (iVar1 == 8)) {
          if (*(int *)(*(int *)puVar2 + 4 + iVar7 * 0x18) == 0) {
            iVar6 = iVar6 + 1;
            local_2c = (wchar_t *)0x5f2c3a;
            thunk_FUN_0040502c(&local_34,L"<P align=\"left\">");
          }
          else {
            iVar8 = iVar8 + 1;
            local_2c = (wchar_t *)0x5f2c4c;
            thunk_FUN_0040502c(&local_34,L"<P align=\"right\">");
          }
          local_2c = (wchar_t *)0x5f2c54;
          FUN_00404ff0(&stack0xffffffe4);
          iVar1 = *(int *)(*(int *)puVar2 + iVar7 * 0x18);
          if (iVar1 == 8) {
            local_2c = (wchar_t *)0x5f2c96;
            thunk_FUN_0040502c(&stack0xffffffe4,&DAT_005f322c);
          }
          else if (iVar1 == 0xe) {
            local_2c = (wchar_t *)0x5f2c78;
            thunk_FUN_0040502c(&stack0xffffffe4,&DAT_005f322c);
          }
          else if (iVar1 == 0xf) {
            local_2c = L"෫䖍뫨㈬_뫨\xe123ꇿ걸f뢀Ý";
            thunk_FUN_0040502c(&stack0xffffffe4,&DAT_005f322c);
          }
          if (PTR_DAT_0066ac78[0xdd] != '\0') {
            if (*(int *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18) < 0x5d) {
              local_2c = 
              L"喍\xe8c0烆￡䖍뫀㈸_跨\xe11e诿쁕䖍\xe8c4⒪￡痿ￄ\xe875䁨弲贀\xe045κ"
              ;
              uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
              local_2c = L"䖍뫀㈸_跨\xe11e诿쁕䖍\xe8c4⒪￡痿ￄ\xe875䁨弲贀\xe045κ";
              FUN_00409dd8(uVar5,&local_44);
              local_2c = L"喋跀쑅ꫨ\xe124\xffff쑵痿棨㉀_䖍뫠\x03";
              FUN_00404bac(&local_44,&DAT_005f3238);
              local_2c = L"痿ￄ\xe875䁨弲贀\xe045κ";
              FUN_004051d4(&local_40,local_44);
              local_2c = local_40;
              local_34 = L"\'";
              local_38 = (wchar_t *)0x5f2d42;
              local_30 = unaff_EDI;
              FUN_00405330(&local_24,3);
            }
            else {
              local_2c = 
              L"喍\xe8c8焎￡䖍뫈㈸_헨\xe11e诿졕䖍\xe8cc⓲￡痿ￌ\xe875䁨弲贀\xe045κ"
              ;
              uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
              local_2c = L"䖍뫈㈸_헨\xe11e诿졕䖍\xe8cc⓲￡痿ￌ\xe875䁨弲贀\xe045κ";
              FUN_00409dd8(uVar5,&local_3c);
              local_2c = L"喋跈책\xf2e8\xe124\xffff챵痿棨㉀_䖍뫠\x03";
              FUN_00404bac(&local_3c,&DAT_005f3238);
              local_2c = L"痿ￌ\xe875䁨弲贀\xe045κ";
              FUN_004051d4(&local_38,local_3c);
              local_2c = local_38;
              local_34 = L"\'";
              local_38 = 
              L"䛫ҍ譛謗쉄\xe810\xf166\x05喍\xe8c0烆￡䖍뫀㈸_跨\xe11e诿쁕䖍\xe8c4⒪￡痿ￄ\xe875䁨弲贀\xe045κ"
              ;
              local_30 = unaff_EDI;
              FUN_00405330(&local_24,3);
            }
          }
          if (PTR_DAT_0066ac78[0xdd] == '\0') {
            if (*(int *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18) < 0x5d) {
              local_2c = 
              L"喍\xe8b0瀤￡䖍몰㉜_\xebe8\xe11d诿끕䖍\xe8b4␈￡喋趴\xe045䶋\xe8e8⓲￡痿￤큵喍讨\xf045\xede8\xe16f诿ꡕ䖍\xe8ac⏞￡痿梬㉨_喍讠\xec45쿨\xe16f诿ꁕ䖍\xe8a4⏀￡痿梤㈬_䖍趜嬔ྋ呫࣑謦렍暵謀贉턔寨\xe123\xffff鱵ⱨ弲＀\xe075灨弲贀\xe445઺"
              ;
              uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
              local_2c = 
              L"䖍몰㉜_\xebe8\xe11d诿끕䖍\xe8b4␈￡喋趴\xe045䶋\xe8e8⓲￡痿￤큵喍讨\xf045\xede8\xe16f诿ꡕ䖍\xe8ac⏞￡痿梬㉨_喍讠\xec45쿨\xe16f诿ꁕ䖍\xe8a4⏀￡痿梤㈬_䖍趜嬔ྋ呫࣑謦렍暵謀贉턔寨\xe123\xffff鱵ⱨ弲＀\xe075灨弲贀\xe445઺"
              ;
              FUN_00409dd8(uVar5,&local_54);
              local_2c = (wchar_t *)0x5f2dc1;
              FUN_00404bac(&local_54,&DAT_005f325c);
              local_2c = 
              L"喋趴\xe045䶋\xe8e8⓲￡痿￤큵喍讨\xf045\xede8\xe16f诿ꡕ䖍\xe8ac⏞￡痿梬㉨_喍讠\xec45쿨\xe16f诿ꁕ䖍\xe8a4⏀￡痿梤㈬_䖍趜嬔ྋ呫࣑謦렍暵謀贉턔寨\xe123\xffff鱵ⱨ弲＀\xe075灨弲贀\xe445઺"
              ;
              FUN_004051d4(&local_50,local_54);
              local_2c = 
              L"痿￤큵喍讨\xf045\xede8\xe16f诿ꡕ䖍\xe8ac⏞￡痿梬㉨_喍讠\xec45쿨\xe16f诿ꁕ䖍\xe8a4⏀￡痿梤㈬_䖍趜嬔ྋ呫࣑謦렍暵謀贉턔寨\xe123\xffff鱵ⱨ弲＀\xe075灨弲贀\xe445઺"
              ;
              FUN_004052cc(&local_24,local_50,unaff_EDI);
            }
            else {
              local_2c = 
              L"喍\xe8b8灢￡䖍몸㉌_⧨\xe11e诿롕䖍\xe8bc⑆￡喋趼\xe045䶋\xe8e8┰￡㳫ҍ譛謗쉄\xe810\xf0c4\x05喍\xe8b0瀤￡䖍몰㉜_\xebe8\xe11d诿끕䖍\xe8b4␈￡喋趴\xe045䶋\xe8e8⓲￡痿￤큵喍讨\xf045\xede8\xe16f诿ꡕ䖍\xe8ac⏞￡痿梬㉨_喍讠\xec45쿨\xe16f诿ꁕ䖍\xe8a4⏀￡痿梤㈬_䖍趜嬔ྋ呫࣑謦렍暵謀贉턔寨\xe123\xffff鱵ⱨ弲＀\xe075灨弲贀\xe445઺"
              ;
              uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
              local_2c = 
              L"䖍몸㉌_⧨\xe11e诿롕䖍\xe8bc⑆￡喋趼\xe045䶋\xe8e8┰￡㳫ҍ譛謗쉄\xe810\xf0c4\x05喍\xe8b0瀤￡䖍몰㉜_\xebe8\xe11d诿끕䖍\xe8b4␈￡喋趴\xe045䶋\xe8e8⓲￡痿￤큵喍讨\xf045\xede8\xe16f诿ꡕ䖍\xe8ac⏞￡痿梬㉨_喍讠\xec45쿨\xe16f诿ꁕ䖍\xe8a4⏀￡痿梤㈬_䖍趜嬔ྋ呫࣑謦렍暵謀贉턔寨\xe123\xffff鱵ⱨ弲＀\xe075灨弲贀\xe445઺"
              ;
              FUN_00409dd8(uVar5,&local_4c);
              local_2c = (wchar_t *)0x5f2d83;
              FUN_00404bac(&local_4c,&DAT_005f324c);
              local_2c = 
              L"喋趼\xe045䶋\xe8e8┰￡㳫ҍ譛謗쉄\xe810\xf0c4\x05喍\xe8b0瀤￡䖍몰㉜_\xebe8\xe11d诿끕䖍\xe8b4␈￡喋趴\xe045䶋\xe8e8⓲￡痿￤큵喍讨\xf045\xede8\xe16f诿ꡕ䖍\xe8ac⏞￡痿梬㉨_喍讠\xec45쿨\xe16f诿ꁕ䖍\xe8a4⏀￡痿梤㈬_䖍趜嬔ྋ呫࣑謦렍暵謀贉턔寨\xe123\xffff鱵ⱨ弲＀\xe075灨弲贀\xe445઺"
              ;
              FUN_004051d4(&local_48,local_4c);
              local_2c = 
              L"㳫ҍ譛謗쉄\xe810\xf0c4\x05喍\xe8b0瀤￡䖍몰㉜_\xebe8\xe11d诿끕䖍\xe8b4␈￡喋趴\xe045䶋\xe8e8⓲￡痿￤큵喍讨\xf045\xede8\xe16f诿ꡕ䖍\xe8ac⏞￡痿梬㉨_喍讠\xec45쿨\xe16f诿ꁕ䖍\xe8a4⏀￡痿梤㈬_䖍趜嬔ྋ呫࣑謦렍暵謀贉턔寨\xe123\xffff鱵ⱨ弲＀\xe075灨弲贀\xe445઺"
              ;
              FUN_004052cc(&local_24,local_48,unaff_EDI);
            }
          }
          local_2c = local_20;
          local_30 = local_34;
          local_34 = (wchar_t *)0x5f2deb;
          FUN_00409dd8(iVar6,&local_5c);
          local_34 = 
          L"痿梬㉨_喍讠\xec45쿨\xe16f诿ꁕ䖍\xe8a4⏀￡痿梤㈬_䖍趜嬔ྋ呫࣑謦렍暵謀贉턔寨\xe123\xffff鱵ⱨ弲＀\xe075灨弲贀\xe445઺"
          ;
          FUN_004051d4(&local_58,local_5c);
          local_34 = local_58;
          local_38 = L"x";
          local_3c = (undefined1 *)0x5f2e09;
          FUN_00409dd8(iVar8,&local_64);
          local_3c = (undefined1 *)0x5f2e14;
          FUN_004051d4(&local_60,local_64);
          local_3c = local_60;
          local_40 = L" ";
          local_44 = 0x5f2e39;
          FUN_00405194(&local_68,
                       *(int *)PTR_DAT_0066b5b8 +
                       *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130);
          local_44 = local_68;
          local_48 = &DAT_005f322c;
          local_4c = local_24;
          local_50 = L"</p>";
          local_54 = 0x5f2e56;
          FUN_00405330(&local_20,10);
        }
        else if (*(int *)(*(int *)puVar2 + iVar7 * 0x18) == 0xd) {
          iVar1 = *(int *)(*(int *)puVar2 + 0xc + iVar7 * 0x18);
          if (iVar1 == 1) {
            local_2c = (wchar_t *)0x5f2e8b;
            thunk_FUN_0040502c(&local_30,L"<IMG src=\"i_ca\">");
          }
          else if (iVar1 == 2) {
            local_2c = L"෫䖍뫔㋐_꟨\xe121ꇿ걸f뢀Ý";
            thunk_FUN_0040502c(&local_30,L"<IMG src=\"i_cv\">");
          }
          else if (iVar1 == 3) {
            local_2c = (wchar_t *)0x5f2ea9;
            thunk_FUN_0040502c(&local_30,L"<IMG src=\"i_cacv\">");
          }
          if (PTR_DAT_0066ac78[0xdd] != '\0') {
            if (*(int *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18) < 0x5d) {
              local_2c = (wchar_t *)0x5f2f01;
              uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
              local_2c = (wchar_t *)0x5f2f09;
              FUN_00409dd8(uVar5,&local_70);
              local_2c = L"喋趔\xe045돨\xe122ꇿ걸f뢀Ý";
              FUN_00404bac(&local_70,&DAT_005f3300);
              local_2c = (wchar_t *)0x5f2f21;
              FUN_004051d4(&local_24,local_70);
            }
            else {
              local_2c = (wchar_t *)0x5f2ed1;
              uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
              local_2c = (wchar_t *)0x5f2ed9;
              FUN_00409dd8(uVar5,&local_6c);
              local_2c = 
              L"喋趘\xe045\xe3e8\xe122\xebff贮嬄ឋ䒋Ⴢ濨ׯ贀鑕쿨\xe16e跿鑅º弳\xe800Ზ￡喋趔\xe045돨\xe122ꇿ걸f뢀Ý"
              ;
              FUN_00404bac(&local_6c,&DAT_005f3300);
              local_2c = (wchar_t *)0x5f2ef1;
              FUN_004051d4(&local_24,local_6c);
            }
          }
          if (PTR_DAT_0066ac78[0xdd] == '\0') {
            if (*(int *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18) < 0x5d) {
              local_2c = (wchar_t *)0x5f2f79;
              uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
              local_2c = (wchar_t *)0x5f2f81;
              FUN_00409dd8(uVar5,&local_78);
              local_2c = (wchar_t *)0x5f2f8e;
              FUN_00404bac(&local_78,&DAT_005f3318);
              local_2c = (wchar_t *)0x5f2f99;
              FUN_004051d4(&local_24,local_78);
            }
            else {
              local_2c = (wchar_t *)0x5f2f49;
              uVar5 = FUN_00651e70(*(undefined4 *)(*(int *)puVar2 + 0x10 + iVar7 * 0x18));
              local_2c = (wchar_t *)0x5f2f51;
              FUN_00409dd8(uVar5,&local_74);
              local_2c = (wchar_t *)0x5f2f5e;
              FUN_00404bac(&local_74,&DAT_005f330c);
              local_2c = (wchar_t *)0x5f2f69;
              FUN_004051d4(&local_24,local_74);
            }
          }
          if (*(int *)(*(int *)puVar2 + 4 + iVar7 * 0x18) == 0) {
            local_2c = local_28;
            local_34 = L"痿梈㈬_痿棠㌠_䖍뫜\x06";
            FUN_00405194(&local_7c,
                         *(int *)PTR_DAT_0066b5b8 +
                         *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130);
            local_34 = local_7c;
            local_38 = L" ";
            local_3c = local_24;
            local_40 = L"<br>";
            local_44 = 0x5f2fe7;
            FUN_00405330(&local_28,6);
          }
          else {
            local_34 = L"痿梄㈬_痿棠㌠_䖍뫘\x06";
            FUN_00405194(&local_80,
                         *(int *)PTR_DAT_0066b5b8 +
                         *(int *)(*(int *)puVar2 + 8 + iVar7 * 0x18) * 0x130);
            local_34 = local_80;
            local_38 = L" ";
            local_3c = local_24;
            local_40 = L"<br>";
            local_44 = 0x5f3029;
            FUN_00405330(&local_2c,6);
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_2c = L"<FONT size=\"8\" face=\"Arial\">";
  local_30 = local_20;
  local_34 = L"</font>";
  local_38 = L"開ｼ\xffff䖍\xe880ᬐ￡喋讀ﱅ肋θ";
  FUN_00405330(&local_88,3);
  local_38 = L"喋讀ﱅ肋θ";
  FUN_00404b6c(&local_84,local_88);
  local_38 = 
  L"薍ｴ\xffff䶋뫜㌠_䛨\xe122诿璕\xffff跿碅\xffff\xe8ff᫕￡開ｸ\xffff䖋诼\xe880\x03謀Ⲁ\x02\xe800ଏ\xfff4薍ｬ\xffff䶋뫘㌠_ࣨ\xe122诿沕\xffff跿炅\xffff\xe8ff᪗￡開ｰ\xffff䖋诼\xec80\x03謀Ⲁ\x02\xe800૑\xfff4쀳奚摙ႉ쵨弱贀沅\xffff\xe8ffứ￡薍ｰ\xffff싨\xe117跿璅\xffff\xe8ffồ￡薍ｸ\xffff골\xe117跿粅\xffff\xe8ffẽ￡䖍\xe880យ￡䖍몄\x02"
  ;
  FUN_00533bc0(*(undefined4 *)(*(int *)(param_1 + 0x3b8) + 0x22c),local_84);
  local_38 = L"開ｴ\xffff薍ｸ\xffff헨\xe11a诿碕\xffff诿ﱅ肋Ϩ";
  FUN_004052cc(&local_90,L"<br>",local_28);
  local_38 = 
  L"開ｸ\xffff䖋诼\xe880\x03謀Ⲁ\x02\xe800ଏ\xfff4薍ｬ\xffff䶋뫘㌠_ࣨ\xe122诿沕\xffff跿炅\xffff\xe8ff᪗￡開ｰ\xffff䖋诼\xec80\x03謀Ⲁ\x02\xe800૑\xfff4쀳奚摙ႉ쵨弱贀沅\xffff\xe8ffứ￡薍ｰ\xffff싨\xe117跿璅\xffff\xe8ffồ￡薍ｸ\xffff골\xe117跿粅\xffff\xe8ffẽ￡䖍\xe880យ￡䖍몄\x02"
  ;
  FUN_00404b6c(&local_8c,local_90);
  local_38 = 
  L"薍ｬ\xffff䶋뫘㌠_ࣨ\xe122诿沕\xffff跿炅\xffff\xe8ff᪗￡開ｰ\xffff䖋诼\xec80\x03謀Ⲁ\x02\xe800૑\xfff4쀳奚摙ႉ쵨弱贀沅\xffff\xe8ffứ￡薍ｰ\xffff싨\xe117跿璅\xffff\xe8ffồ￡薍ｸ\xffff골\xe117跿粅\xffff\xe8ffẽ￡䖍\xe880យ￡䖍몄\x02"
  ;
  FUN_00533bc0(*(undefined4 *)(*(int *)(param_1 + 1000) + 0x22c),local_8c);
  local_38 = L"開ｬ\xffff薍ｰ\xffff韨\xe11a诿炕\xffff诿ﱅ肋Ϭ";
  FUN_004052cc(&local_98,L"<br>",local_2c);
  local_38 = 
  L"開ｰ\xffff䖋诼\xec80\x03謀Ⲁ\x02\xe800૑\xfff4쀳奚摙ႉ쵨弱贀沅\xffff\xe8ffứ￡薍ｰ\xffff싨\xe117跿璅\xffff\xe8ffồ￡薍ｸ\xffff골\xe117跿粅\xffff\xe8ffẽ￡䖍\xe880យ￡䖍몄\x02"
  ;
  FUN_00404b6c(&local_94,local_98);
  local_38 = 
  L"쀳奚摙ႉ쵨弱贀沅\xffff\xe8ffứ￡薍ｰ\xffff싨\xe117跿璅\xffff\xe8ffồ￡薍ｸ\xffff골\xe117跿粅\xffff\xe8ffẽ￡䖍\xe880យ￡䖍몄\x02"
  ;
  FUN_00533bc0(*(undefined4 *)(*(int *)(param_1 + 0x3ec) + 0x22c),local_94);
  pwVar3 = local_2c;
  *in_FS_OFFSET = local_34;
  local_2c = L"幟譛工ӂ";
  local_30 = 
  L"薍ｰ\xffff싨\xe117跿璅\xffff\xe8ffồ￡薍ｸ\xffff골\xe117跿粅\xffff\xe8ffẽ￡䖍\xe880យ￡䖍몄\x02"
  ;
  FUN_00404ff0(&local_98,local_34,pwVar3);
  local_30 = 
  L"薍ｴ\xffff폨\xe11e跿碅\xffff\xe8ffឬ￡薍ｼ\xffff뷨\xe11e跿聅駨\xe117跿葅ʺ";
  FUN_004048d4(&local_94);
  local_30 = L"薍ｸ\xffff골\xe117跿粅\xffff\xe8ffẽ￡䖍\xe880យ￡䖍몄\x02";
  FUN_00404ff0(&local_90);
  local_30 = L"薍ｼ\xffff뷨\xe11e跿聅駨\xe117跿葅ʺ";
  FUN_004048d4(&local_8c);
  local_30 = L"䖍\xe880យ￡䖍몄\x02";
  FUN_00404ff0(&local_88);
  local_30 = L"䖍몄\x02";
  FUN_004048d4(&local_84);
  local_30 = L"䖍몌\x04";
  FUN_00405008(&local_80,2);
  local_30 = 
  L"䖍\xe89cẓ￡䖍\xe8a0ᝯ￡䖍\xe8a4ẃ￡䖍\xe8a8᝟￡䖍\xe8acṳ￡䖍\xe8b0ᝏ￡䖍\xe8b4ṣ￡䖍\xe8b8᜿￡䖍\xe8bcṓ￡䖍\xe8c0ᜯ￡䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b"
  ;
  FUN_004048f8(&local_78,4);
  local_30 = 
  L"䖍\xe8a0ᝯ￡䖍\xe8a4ẃ￡䖍\xe8a8᝟￡䖍\xe8acṳ￡䖍\xe8b0ᝏ￡䖍\xe8b4ṣ￡䖍\xe8b8᜿￡䖍\xe8bcṓ￡䖍\xe8c0ᜯ￡䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b"
  ;
  FUN_00404ff0(&local_68);
  local_30 = 
  L"䖍\xe8a4ẃ￡䖍\xe8a8᝟￡䖍\xe8acṳ￡䖍\xe8b0ᝏ￡䖍\xe8b4ṣ￡䖍\xe8b8᜿￡䖍\xe8bcṓ￡䖍\xe8c0ᜯ￡䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b"
  ;
  FUN_004048d4(&local_64);
  local_30 = 
  L"䖍\xe8a8᝟￡䖍\xe8acṳ￡䖍\xe8b0ᝏ￡䖍\xe8b4ṣ￡䖍\xe8b8᜿￡䖍\xe8bcṓ￡䖍\xe8c0ᜯ￡䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b"
  ;
  FUN_00404ff0(&local_60);
  local_30 = 
  L"䖍\xe8acṳ￡䖍\xe8b0ᝏ￡䖍\xe8b4ṣ￡䖍\xe8b8᜿￡䖍\xe8bcṓ￡䖍\xe8c0ᜯ￡䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b"
  ;
  FUN_004048d4(&local_5c);
  local_30 = 
  L"䖍\xe8b0ᝏ￡䖍\xe8b4ṣ￡䖍\xe8b8᜿￡䖍\xe8bcṓ￡䖍\xe8c0ᜯ￡䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b"
  ;
  FUN_00404ff0(&local_58);
  local_30 = 
  L"䖍\xe8b4ṣ￡䖍\xe8b8᜿￡䖍\xe8bcṓ￡䖍\xe8c0ᜯ￡䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b"
  ;
  FUN_004048d4(&local_54);
  local_30 = L"䖍\xe8b8᜿￡䖍\xe8bcṓ￡䖍\xe8c0ᜯ￡䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b";
  FUN_00404ff0(&local_50);
  local_30 = L"䖍\xe8bcṓ￡䖍\xe8c0ᜯ￡䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b";
  FUN_004048d4(&local_4c);
  local_30 = L"䖍\xe8c0ᜯ￡䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b";
  FUN_00404ff0(&local_48);
  local_30 = L"䖍\xe8c4ṃ￡䖍\xe8c8ᜟ￡䖍뫌\b";
  FUN_004048d4(&local_44);
  local_30 = L"䖍\xe8c8ᜟ￡䖍뫌\b";
  FUN_00404ff0(&local_40);
  local_30 = L"䖍뫌\b";
  FUN_004048d4(&local_3c);
  local_30 = L"\xe9c3ၐ￡⿩\xffff忿孞\xe58b쉝\x04";
  FUN_00405008(&local_38,8);
  return;
}

