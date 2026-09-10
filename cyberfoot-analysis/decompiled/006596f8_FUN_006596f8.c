// Address: 006596f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006596f8(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  wchar_t **ppwVar2;
  int iVar3;
  int iVar4;
  wchar_t *unaff_EBX;
  int iVar5;
  wchar_t *pwVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 local_cc;
  wchar_t *local_c8;
  undefined4 local_c4;
  wchar_t *local_c0;
  undefined4 local_bc;
  wchar_t *local_b8;
  undefined4 local_b4;
  wchar_t *local_b0;
  undefined4 local_ac;
  wchar_t *local_a8;
  char *local_a4;
  undefined4 local_a0;
  wchar_t *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *local_90;
  wchar_t *local_8c;
  wchar_t *local_88;
  undefined1 *local_84;
  wchar_t *local_80;
  wchar_t *local_7c;
  wchar_t *local_78;
  wchar_t *local_74;
  wchar_t *local_70;
  wchar_t *local_6c;
  wchar_t *local_68;
  wchar_t *local_64;
  wchar_t *local_60;
  wchar_t *local_5c;
  wchar_t *local_58;
  wchar_t *local_54;
  char *local_50;
  wchar_t *local_4c [4];
  wchar_t *local_3c;
  int local_38;
  wchar_t *local_34;
  int local_30;
  wchar_t *local_2c;
  wchar_t *local_28;
  undefined1 *local_24;
  char *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  bVar9 = 0;
  local_14 = (char *)0x18;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != (char *)0x0);
  LOCK();
  UNLOCK();
  local_8 = 0;
  local_24 = (undefined1 *)0x659724;
  FUN_00405628(&local_58,PTR_DAT_00488aa0);
  local_28 = (wchar_t *)&DAT_00659d7b;
  local_2c = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  *(undefined4 *)PTR_DAT_0066b394 = param_1;
  local_30 = 0x659741;
  local_24 = &stack0xfffffffc;
  FUN_00404ff0(&stack0xffffffe0);
  local_30 = 0x659749;
  FUN_00404ff0(&local_24);
  local_30 = 0x659751;
  FUN_00404ff0(&local_28);
  iVar5 = 5;
  ppwVar2 = local_4c;
  local_34 = (wchar_t *)param_2;
  do {
    *ppwVar2 = (wchar_t *)0x0;
    ppwVar2 = ppwVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_30 = 0x659772;
  iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b604);
  if (-1 < iVar5) {
    do {
      iVar3 = local_30;
      if (*(int *)(*(int *)PTR_DAT_0066b604 + iVar5 * 0x20) == *(int *)PTR_DAT_0066b394) {
        local_30 = 0x65979a;
        local_30 = FUN_00405eec(iVar3);
        local_30 = local_30 + 1;
        local_34 = (wchar_t *)0x6597af;
        FUN_004060a8(&local_30,PTR_DAT_006596d8,1);
        iVar3 = local_30;
        local_30 = 0x6597ba;
        iVar3 = FUN_00405ef4(iVar3);
        puVar7 = (undefined4 *)(*(int *)PTR_DAT_0066b604 + iVar5 * 0x20);
        puVar8 = (undefined4 *)(local_30 + iVar3 * 0x20);
        for (iVar4 = 8; local_30 = param_2, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
  }
  local_30 = 0x659d90;
  local_34 = L"痿梨鶬e喍뢤Ł";
  FUN_00642c50(0x140,&local_5c);
  local_34 = local_5c;
  local_38 = 0x659dac;
  local_3c = L"痿梤鷌e喍뢠T";
  FUN_00642c50(0x141,&local_60);
  local_3c = local_60;
  local_4c[3] = L"<IND x=\"173\">";
  local_4c[2] = L"痿梠鷬e䖍뫘\a";
  FUN_00642c50(0x54,&local_64);
  local_4c[2] = local_64;
  local_4c[1] = 
  L"<IND x=\"207\"><IMG src=\"idx:15\"><IND x=\"235\"><IMG src=\"idx:2\"><IND x=\"265\"><IMG src=\"idx:1\"><IND x=\"287\"><IMG src=\"idx:3\"><br>"
  ;
  local_4c[0] = (wchar_t *)0x659831;
  FUN_00405330(&local_2c,7);
  local_c = 0;
  local_10 = 0;
  local_4c[0] = (wchar_t *)0x659843;
  FUN_00404ff0(&local_14);
  local_4c[0] = (wchar_t *)0x65984b;
  FUN_00404ff0(&stack0xffffffe8);
  if (param_2 < 0) {
    local_34 = (wchar_t *)0x0;
  }
  pwVar6 = local_34;
  local_38 = 0;
  local_4c[0] = L"\xf88bשׂ谏ž";
  iVar5 = FUN_00405ef4(local_30);
  if ((int)pwVar6 <= iVar5) {
    iVar5 = (iVar5 - (int)pwVar6) + 1;
    do {
      local_38 = local_38 + 1;
      if (*(int *)(local_30 + 0x18 + (int)pwVar6 * 0x20) == local_10) {
        local_4c[0] = (wchar_t *)0x6598b4;
        FUN_00404ff0(&stack0xffffffe4);
      }
      else {
        local_4c[0] = (wchar_t *)0x65989f;
        FUN_00409dd8(*(int *)(local_30 + 0x18 + (int)pwVar6 * 0x20) + *(int *)PTR_DAT_0066b7c4,
                     &local_68);
        local_4c[0] = (wchar_t *)0x6598aa;
        FUN_004051d4(&stack0xffffffe4,local_68);
      }
      local_50 = local_14;
      local_58 = L"<IND x=\"40\">";
      local_5c = (wchar_t *)0x6598dd;
      local_54 = (wchar_t *)unaff_ESI;
      FUN_00405194(&local_6c,
                   *(int *)PTR_DAT_0066af70 + *(int *)(local_30 + 0x1c + (int)pwVar6 * 0x20) * 0x2f8
                  );
      local_5c = local_6c;
      local_60 = L"<IND x=\"173\">";
      local_64 = (wchar_t *)0x6598f4;
      FUN_00409dd8(*(undefined4 *)(local_30 + 0x10 + (int)pwVar6 * 0x20),&local_74);
      local_64 = (wchar_t *)0x6598ff;
      FUN_004051d4(&local_70,local_74);
      local_64 = local_70;
      local_68 = L"<IND x=\"207\">";
      local_6c = (wchar_t *)0x659916;
      FUN_00409dd8(*(undefined4 *)(local_30 + 4 + (int)pwVar6 * 0x20),&local_7c);
      local_6c = (wchar_t *)0x659921;
      FUN_004051d4(&local_78,local_7c);
      local_6c = local_78;
      local_70 = L"<IND x=\"238\">";
      local_74 = (wchar_t *)0x659938;
      FUN_00409dd8(*(undefined4 *)(local_30 + 8 + (int)pwVar6 * 0x20),&local_84);
      local_74 = (wchar_t *)0x659943;
      FUN_004051d4(&local_80,local_84);
      local_74 = local_80;
      local_78 = L"<IND x=\"268\">";
      local_7c = (wchar_t *)0x65995d;
      FUN_00409dd8(*(undefined4 *)(local_30 + 0xc + (int)pwVar6 * 0x20),&local_8c);
      local_7c = (wchar_t *)0x65996e;
      FUN_004051d4(&local_88,local_8c);
      local_7c = local_88;
      local_80 = L"<IND x=\"295\">";
      local_84 = (undefined1 *)0x65998b;
      FUN_00409dd8(*(undefined4 *)(local_30 + 0x14 + (int)pwVar6 * 0x20),&local_94);
      local_84 = (undefined1 *)0x65999c;
      FUN_004051d4(&local_90,local_94);
      local_84 = local_90;
      local_8c = L"<br>";
      local_90 = (undefined1 *)0x6599b7;
      local_88 = unaff_EBX;
      FUN_00405330(&stack0xffffffe0,0x11);
      if (*(int *)(local_30 + 0x18 + (int)pwVar6 * 0x20) == *(int *)(PTR_DAT_0066ac78 + 0xc0)) {
        local_c = local_c + 1;
      }
      local_10 = *(int *)(local_30 + 0x18 + (int)pwVar6 * 0x20);
      if (local_38 == 0x11) break;
      pwVar6 = (wchar_t *)((int)pwVar6 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_4c[0] = 
  L"\xf88bﾅ㹼㍇诛쇃ˠ喋诔쉔Đ롕喋诔쉔Ą뱕喋诔쉔Ĉ쁕喋诔쉔Č쑕喋诔쉄Ĕ졅佃앵綃Ð蔏\x9f"
  ;
  iVar5 = FUN_00405ef4(local_30);
  if (-1 < iVar5) {
    iVar5 = iVar5 + 1;
    iVar3 = 0;
    do {
      local_4c[1] = (wchar_t *)((int)local_4c[1] + *(int *)(local_30 + 4 + iVar3 * 0x20));
      local_4c[2] = (wchar_t *)((int)local_4c[2] + *(int *)(local_30 + 8 + iVar3 * 0x20));
      local_4c[3] = (wchar_t *)((int)local_4c[3] + *(int *)(local_30 + 0xc + iVar3 * 0x20));
      local_3c = (wchar_t *)((int)local_3c + *(int *)(local_30 + 0x14 + iVar3 * 0x20));
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (((local_34 == (wchar_t *)0x0) && (local_c == 0)) &&
     (-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066b394 * 0x130))) {
    local_4c[0] = (wchar_t *)0x659a81;
    FUN_00409dd8(*(int *)(PTR_DAT_0066ac78 + 0xc0) + *(int *)PTR_DAT_0066b7c4,&local_9c);
    local_4c[0] = local_9c;
    local_50 = "<IND x=\"40\">";
    local_54 = L"뗿､\xffff롨斟贀沅\xffff뫿\x04";
    FUN_00404b48(&local_a0,
                 *(int *)PTR_DAT_0066af70 +
                 *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066b394 * 0x130) *
                 0x2f8);
    local_54 = (wchar_t *)local_a0;
    local_58 = 
    L"<IND x=\"173\">0<IND x=\"207\">0<IND x=\"238\">0<IND x=\"268\">0<IND x=\"295\">0<br>";
    local_5c = L"開ｬ\xffff䖍\xe8e0뛳ￚࡨ斠贀悕\xffff룿ł";
    FUN_00404c64(&local_98,4);
    local_4c[0] = L"ࡨ斠贀悕\xffff룿ł";
    FUN_004051d4(&local_24,local_98);
  }
  local_4c[0] = L"<b>";
  local_50 = (char *)0x659af6;
  FUN_00642c50(0x142,&local_a4);
  local_50 = local_a4;
  local_54 = L":<IND x=\"173\">";
  local_58 = (wchar_t *)0x659b0f;
  FUN_00409dd8(local_4c[0],&local_ac);
  local_58 = (wchar_t *)0x659b20;
  FUN_004051d4(&local_a8,local_ac);
  local_58 = local_a8;
  local_5c = L"<IND x=\"207\">";
  local_60 = (wchar_t *)0x659b39;
  FUN_00409dd8(local_4c[1],&local_b4);
  local_60 = (wchar_t *)0x659b4a;
  FUN_004051d4(&local_b0,local_b4);
  local_60 = local_b0;
  local_64 = L"<IND x=\"238\">";
  local_68 = (wchar_t *)0x659b63;
  FUN_00409dd8(local_4c[2],&local_bc);
  local_68 = (wchar_t *)0x659b74;
  FUN_004051d4(&local_b8,local_bc);
  local_68 = local_b8;
  local_6c = L"<IND x=\"268\">";
  local_70 = (wchar_t *)0x659b8d;
  FUN_00409dd8(local_4c[3],&local_c4);
  local_70 = (wchar_t *)0x659b9e;
  FUN_004051d4(&local_c0,local_c4);
  local_70 = local_c0;
  local_74 = L" <IND x=\"295\">";
  local_78 = (wchar_t *)0x659bb7;
  FUN_00409dd8(local_3c,&local_cc);
  local_78 = (wchar_t *)0x659bc8;
  FUN_004051d4(&local_c8,local_cc);
  local_78 = local_c8;
  local_7c = L"</b>";
  local_80 = L"䖋\xe8d4쌄ￚ嶋菐ᓃ쌻վ嶉\xebac윇걅\xffff\xffff綃ǐॾ䗇ư";
  FUN_00405330(&local_28,0xd);
  local_80 = L"嶋菐ᓃ쌻վ嶉\xebac윇걅\xffff\xffff綃ǐॾ䗇ư";
  iVar5 = FUN_00405eec(local_30);
  local_58 = local_34 + 10;
  if (iVar5 <= (int)local_58) {
    local_58 = (wchar_t *)0xffffffff;
  }
  if ((int)local_34 < 2) {
    local_54 = (wchar_t *)0xffffffff;
  }
  else {
    local_54 = (wchar_t *)0x1;
  }
  local_80 = local_2c;
  local_84 = local_24;
  local_8c = local_28;
  local_90 = (undefined1 *)0x659c2d;
  FUN_00405330(&local_50,4);
  local_90 = (undefined1 *)0x0;
  local_94 = 0x659c42;
  FUN_004060a8(&local_30,PTR_DAT_006596d8,1);
  local_90 = (undefined1 *)0x659c56;
  FUN_0040595c(local_8,&local_58,PTR_DAT_00488aa0);
  puVar1 = local_84;
  *in_FS_OFFSET = local_8c;
  local_84 = (undefined1 *)0x659d85;
  local_88 = (wchar_t *)0x659c6e;
  FUN_004048d4(&local_cc,local_8c,puVar1);
  local_88 = (wchar_t *)0x659c79;
  FUN_00404ff0(&local_c8);
  local_88 = (wchar_t *)0x659c84;
  FUN_004048d4(&local_c4);
  local_88 = (wchar_t *)0x659c8f;
  FUN_00404ff0(&local_c0);
  local_88 = (wchar_t *)0x659c9a;
  FUN_004048d4(&local_bc);
  local_88 = (wchar_t *)0x659ca5;
  FUN_00404ff0(&local_b8);
  local_88 = (wchar_t *)0x659cb0;
  FUN_004048d4(&local_b4);
  local_88 = (wchar_t *)0x659cbb;
  FUN_00404ff0(&local_b0);
  local_88 = L"薍｜\xffffʺ";
  FUN_004048d4(&local_ac);
  local_88 = L"薍､\xffffҺ";
  FUN_00405008(&local_a8,2);
  local_88 = (wchar_t *)0x659ce6;
  FUN_004048f8(&local_a0,4);
  local_88 = (wchar_t *)0x659cf1;
  FUN_00404ff0(&local_90);
  local_88 = (wchar_t *)0x659cfc;
  FUN_004048d4(&local_8c);
  local_88 = 
  L"䖍\xe880ꯅￚ䖍\xe884닙ￚ䖍\xe888ꮵￚ䖍\xe88c닉ￚ䖍\xe890ꮥￚ䖍몔\x02";
  FUN_00404ff0(&local_88);
  local_88 = L"䖍\xe884닙ￚ䖍\xe888ꮵￚ䖍\xe88c닉ￚ䖍\xe890ꮥￚ䖍몔\x02";
  FUN_004048d4(&local_84);
  local_88 = L"䖍\xe888ꮵￚ䖍\xe88c닉ￚ䖍\xe890ꮥￚ䖍몔\x02";
  FUN_00404ff0(&local_80);
  local_88 = L"䖍\xe88c닉ￚ䖍\xe890ꮥￚ䖍몔\x02";
  FUN_004048d4(&local_7c);
  local_88 = L"䖍\xe890ꮥￚ䖍몔\x02";
  FUN_00404ff0(&local_78);
  local_88 = L"䖍몔\x02";
  FUN_004048d4(&local_74);
  local_88 = L"䖍\xe89cꮐￚ䖍몠\x03";
  FUN_00405008(&local_70,2);
  local_88 = L"䖍몠\x03";
  FUN_004048d4(&local_68);
  local_88 = (wchar_t *)0x659d51;
  FUN_00405008(&local_64,3);
  local_88 = (wchar_t *)0x659d5f;
  FUN_004056f8(&local_58,PTR_DAT_00488aa0);
  local_88 = L"䖍뫘\a";
  FUN_004061c8(&local_30,PTR_DAT_006596d8);
  local_88 = (wchar_t *)0x659d7a;
  FUN_00405008(&local_2c,7);
  return;
}

