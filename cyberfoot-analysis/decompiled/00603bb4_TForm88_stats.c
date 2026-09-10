// Address: 00603bb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm88_stats(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_d0;
  wchar_t *local_cc;
  wchar_t *local_c8;
  char *local_c4;
  char *local_c0;
  wchar_t *local_bc;
  wchar_t *local_b8;
  wchar_t *local_b4;
  wchar_t *local_b0;
  wchar_t *local_ac;
  wchar_t *local_a8;
  wchar_t *local_a4;
  wchar_t *local_a0;
  wchar_t *local_9c;
  wchar_t *local_98;
  wchar_t *local_94;
  undefined4 local_90;
  wchar_t *local_8c;
  undefined4 local_88;
  wchar_t *local_84;
  wchar_t *local_80;
  wchar_t *local_7c;
  wchar_t *local_78;
  wchar_t *local_74;
  wchar_t *local_70;
  char *local_6c;
  wchar_t *local_68;
  wchar_t *local_64;
  char *local_60;
  wchar_t *local_5c;
  wchar_t *local_58;
  wchar_t *local_54;
  char *local_50;
  wchar_t *local_4c;
  wchar_t *local_48;
  wchar_t *local_44;
  wchar_t *local_40;
  wchar_t *local_3c;
  char *local_38;
  char *local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_10;
  int local_c;
  int local_8;
  
  local_10 = (char *)0x19;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != (char *)0x0);
  local_20 = 0x603bdd;
  local_8 = param_1;
  FUN_00405658(&stack0xffffffec,PTR_DAT_004010dc,2);
  *in_FS_OFFSET = &local_28;
  iVar1 = *(int *)PTR_DAT_0066ad84;
  uVar2 = *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xa0 + iVar1 * 0x1bc);
  uVar3 = *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xa4 + iVar1 * 0x1bc);
  local_24 = *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x90 + iVar1 * 0x1bc);
  local_20 = *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x94 + iVar1 * 0x1bc);
  local_28 = *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x9c + iVar1 * 0x1bc);
  local_34 = *(char **)(*(int *)PTR_DAT_0066b3b8 + 0xa8 + iVar1 * 0x1bc);
  local_30 = *(undefined1 **)(*(int *)PTR_DAT_0066b3b8 + 0xac + iVar1 * 0x1bc);
  iVar7 = *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x88 + iVar1 * 0x1bc);
  iVar6 = *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x8c + iVar1 * 0x1bc);
  if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + iVar1 * 0x1bc) <
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + iVar1 * 0x1bc)) {
    local_2c = (char *)0x603cfb;
    local_38 = (char *)iVar6;
    iVar6 = FUN_00402c38();
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + *(int *)PTR_DAT_0066ad84 * 0x1bc) <
           *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + *(int *)PTR_DAT_0066ad84 * 0x1bc)) {
    local_2c = (char *)0x603d3d;
    local_38 = (char *)iVar7;
    iVar7 = FUN_00402c38();
  }
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x220 +
              *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar1 * 0x1bc) * 0x2f8) == 2) {
    local_2c = (char *)0x603d75;
    local_38 = (char *)iVar7;
    iVar7 = FUN_00402c38();
  }
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x220 +
              *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar1 * 0x1bc) * 0x2f8) == 2) {
    local_2c = (char *)0x603dad;
    local_38 = (char *)iVar6;
    iVar6 = FUN_00402c38();
  }
  if ((iVar7 == 0) && (iVar6 == 0)) {
    iVar7 = 1;
    iVar6 = 1;
  }
  local_30 = &LAB_00603df4;
  local_34 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_3c = (wchar_t *)(iVar6 + iVar7);
  local_38 = (char *)0x603de7;
  local_2c = &stack0xfffffffc;
  local_c = FUN_00402c38();
  pcVar5 = local_2c;
  *in_FS_OFFSET = local_34;
  local_2c = (char *)0x603e09;
  FUN_00409dd8(local_c,&local_40,pcVar5);
  local_2c = (char *)0x603e19;
  FUN_00404bf0(&stack0xffffffec,local_40,&DAT_006042ac);
  local_c = 100 - local_c;
  local_2c = (char *)0x603e2f;
  FUN_00409dd8(local_c,&local_44);
  local_2c = (char *)0x603e3f;
  FUN_00404bf0(&local_10,local_44,&DAT_006042ac);
  local_30 = (undefined1 *)unaff_EBX;
  if (*PTR_DAT_0066b700 == '\0') {
    local_2c = "<shad>";
    local_34 = "<IND x=\"40\">";
    local_38 = (char *)0x603e67;
    FUN_00404c64(&local_54,3);
    local_38 = (char *)0x603e72;
    FUN_004051d4(&local_50,local_54);
    local_38 = local_50;
    local_3c = 
    L"痿梬䋜`䖍讨\xf455㿨\xe013\xffff꡵ﱨ恂栀䌘`喍讠\xe045⯨\xe05f诿ꁕ䖍\xe8a4ጜ￠痿梤䌬`喍뢜ʒ"
    ;
    FUN_00642c50(0x291,&local_58);
    local_3c = local_58;
    local_40 = L"<IND x=\"150\">";
    local_44 = (wchar_t *)0x603e95;
    FUN_004051d4(&local_5c,local_10);
    local_44 = local_5c;
    local_48 = L"</shad><BR>";
    local_4c = L"<shad>";
    local_50 = (char *)0x603ead;
    FUN_00409dd8(local_24,&local_64);
    local_50 = (char *)0x603eb8;
    FUN_004051d4(&local_60,local_64);
    local_50 = local_60;
    local_54 = L"<IND x=\"45\">";
    local_58 = (wchar_t *)0x603ecd;
    FUN_00642c50(0x292,&local_68);
    local_58 = local_68;
    local_5c = L"<IND x=\"150\">";
    local_60 = (char *)0x603ee0;
    FUN_00409dd8(local_20,&local_70);
    local_60 = (char *)0x603eeb;
    FUN_004051d4(&local_6c,local_70);
    local_60 = local_6c;
    local_64 = L"</shad><BR>";
    local_68 = L"<shad>";
    local_6c = (char *)0x603f03;
    FUN_00409dd8(local_2c,&local_78);
    local_6c = (char *)0x603f0e;
    FUN_004051d4(&local_74,local_78);
    local_6c = (char *)local_74;
    local_70 = L"<IND x=\"40\">";
    local_74 = (wchar_t *)0x603f23;
    FUN_00642c50(0x293,&local_7c);
    local_74 = local_7c;
    local_78 = L"<IND x=\"150\">";
    local_7c = (wchar_t *)0x603f36;
    FUN_00409dd8(local_28,&local_84);
    local_7c = 
    L"痿梄䋼`ᡨ恃贀碕\xffff诿\xe845糨\xe05e诿碕\xffff跿粅\xffff\xe8ffቧ￠뗿ｼ\xffff䱨恃贀璕\xffff룿ʔ"
    ;
    FUN_004051d4(&local_80,local_84);
    local_7c = local_80;
    local_80 = L"</shad><BR>";
    local_84 = L"<shad>";
    local_88 = 0x603f5c;
    FUN_00409dd8(uVar2,&local_8c);
    local_88 = 0x603f6d;
    FUN_004051d4(&local_88,local_8c);
    local_8c = L"<IND x=\"40\">";
    local_90 = 0x603f88;
    FUN_00642c50(0x294,&local_90);
    local_94 = L"<IND x=\"150\">";
    local_98 = 
    L"開ｬ\xffff薍ｰ\xffff⋨\xe012\xffff炵\xffff棿䋼`ᡨ恃贀撕\xffff诿큅ࣨ\xe05e诿撕\xffff跿梅\xffff\xe8ffᇳ￠뗿ｨ\xffff䱨恃贀悕\xffff룿ʕ"
    ;
    FUN_00409dd8(uVar3,&local_98);
    pwVar4 = local_98;
    local_98 = (wchar_t *)0x603fb2;
    FUN_004051d4(&local_94,pwVar4);
    local_98 = local_94;
    local_9c = L"</shad><BR>";
    local_a0 = L"<shad>";
    local_a4 = (wchar_t *)0x603fd0;
    FUN_00409dd8(local_34,&local_a0);
    local_a4 = L"뗿ｨ\xffff䱨恃贀悕\xffff룿ʕ";
    FUN_004051d4(&local_9c,local_a0);
    local_a4 = local_9c;
    local_a8 = L"<IND x=\"40\">";
    local_ac = (wchar_t *)0x603ffc;
    FUN_00642c50(0x295,&local_a4);
    local_ac = local_a4;
    local_b0 = L"<IND x=\"150\">";
    local_b4 = L"開ｘ\xffff薍｜\xffff껨\xe011\xffff岵\xffff棿䋼`䖍몸!";
    FUN_00409dd8(local_30,&local_ac);
    local_b4 = L"뗿｜\xffffﱨ恂贀롅↺";
    FUN_004051d4(&local_a8,local_ac);
    local_b4 = local_a8;
    local_b8 = L"</shad><BR>";
    local_bc = L"喋趸뱅⏨\xe00b诿뱕䖋诼沀\x03謀ꢀ";
    FUN_00405330(&local_4c,0x21);
    local_bc = L"喋讼ﱅ肋ͬ";
    FUN_00404b6c(&local_48,local_4c);
    local_bc = (wchar_t *)0x604060;
    FUN_0055ca6c(*(undefined4 *)(*(int *)(local_8 + 0x36c) + 0xa8),local_48);
  }
  else {
    local_2c = "<shad>";
    local_34 = "<IND x=\"40\">Ball possession<IND x=\"150\">";
    local_38 = local_10;
    local_3c = L"</shad><BR>";
    local_40 = L"<shad>";
    local_44 = (wchar_t *)0x60408d;
    FUN_00409dd8(local_24,&local_b4);
    local_44 = local_b4;
    local_48 = L"<IND x=\"45\">Shots<IND x=\"150\">";
    local_4c = (wchar_t *)0x6040a6;
    FUN_00409dd8(local_20,&local_b8);
    local_4c = local_b8;
    local_50 = "</shad><BR>";
    local_54 = L"<shad>";
    local_58 = (wchar_t *)0x6040c4;
    FUN_00409dd8(local_2c,&local_bc);
    local_58 = local_bc;
    local_5c = L"<IND x=\"40\">Tackles<IND x=\"150\">";
    local_60 = (char *)0x6040dd;
    FUN_00409dd8(local_28,&local_c0);
    local_60 = local_c0;
    local_64 = L"</shad><BR>";
    local_68 = L"<shad>";
    local_6c = (char *)0x6040fb;
    FUN_00409dd8(uVar2,&local_c4);
    local_6c = local_c4;
    local_70 = L"<IND x=\"40\">Wrong Passes<IND x=\"150\">";
    local_74 = 
    L"뗿＼\xffffꑨ恃栀䊸`閍Ｘ\xffff䖋\xe8d0岦￠뗿Ｘ\xffff㱨恄贀㒕\xffff诿푅跨\xe05c\xffff㒵\xffff棿䎤`薍ｔ\xffffᦺ"
    ;
    FUN_00409dd8(uVar3,&local_c8);
    local_74 = local_c8;
    local_78 = L"</shad><BR>";
    local_7c = L"<shad>";
    local_80 = L"뗿Ｘ\xffff㱨恄贀㒕\xffff诿푅跨\xe05c\xffff㒵\xffff棿䎤`薍ｔ\xffffᦺ"
    ;
    FUN_00409dd8(local_34,&local_cc);
    local_80 = local_cc;
    local_84 = L"<IND x=\"40\">Fouls committed<IND x=\"150\">";
    local_88 = 0x60414b;
    FUN_00409dd8(local_30,&local_d0);
    local_88 = local_d0;
    local_8c = L"</shad><BR>";
    local_90 = 0x604166;
    FUN_00404c64(&local_b0,0x19);
    local_bc = L"쀳奚摙ႉ荨恂贀㒅\xffff뫿\n";
    FUN_0055ca6c(*(undefined4 *)(*(int *)(local_8 + 0x36c) + 0xa8),local_b0);
  }
  pwVar4 = local_b0;
  *in_FS_OFFSET = local_b8;
  local_b0 = L"幟譛工Ã昀晦晦晦ﻦ?㌀㌳㌳㌳ﺳ?＀\xffffǿ";
  local_b4 = L"薍｜\xffffʺ";
  FUN_004048f8(&local_d0,10,pwVar4);
  local_b4 = L"薍､\xffff᳨\xe007跿梅\xffff\xe8ffอ￠薍ｬ\xffffۨ\xe007跿炅\xffff뫿\x02"
  ;
  FUN_00405008(&local_a8,2);
  local_b4 = L"薍ｨ\xffffⷨ\xe00e跿沅\xffff\xe8ff܆￠薍ｰ\xffffʺ";
  FUN_004048d4(&local_a0);
  local_b4 = L"薍ｬ\xffffۨ\xe007跿炅\xffff뫿\x02";
  FUN_00404ff0(&local_9c);
  local_b4 = L"薍ｰ\xffffʺ";
  FUN_004048d4(&local_98);
  local_b4 = L"薍ｸ\xffff\xebe8\xe006跿粅\xffff\xe8ff෼￠䖍\xe880ۘ￠䖍몄\x02";
  FUN_00405008(&local_94,2);
  local_b4 = (wchar_t *)0x6041e9;
  FUN_004048d4(&local_8c);
  local_b4 = L"䖍\xe880ۘ￠䖍몄\x02";
  FUN_00404ff0(&local_88);
  local_b4 = L"䖍몄\x02";
  FUN_004048d4(&local_84);
  local_b4 = L"䖍\xe88cۃ￠䖍\xe890෗￠䖍\xe894ڳ￠䖍몘\x02";
  FUN_00405008(&local_80,2);
  local_b4 = L"䖍\xe890෗￠䖍\xe894ڳ￠䖍몘\x02";
  FUN_004048d4(&local_78);
  local_b4 = L"䖍\xe894ڳ￠䖍몘\x02";
  FUN_00404ff0(&local_74);
  local_b4 = L"䖍몘\x02";
  FUN_004048d4(&local_70);
  local_b4 = L"䖍\xe8a0ڞ￠䖍몤\x03";
  FUN_00405008(&local_6c,2);
  local_b4 = L"䖍몤\x03";
  FUN_004048d4(&local_64);
  local_b4 = L"䖍\xe8b0ډ￠䖍몴\x02";
  FUN_00405008(&local_60,3);
  local_b4 = L"䖍몴\x02";
  FUN_004048d4(&local_54);
  local_b4 = L"䖍몼\x03";
  FUN_00405008(&local_50,2);
  local_b4 = L"䖍맰\x02";
  FUN_004048f8(&local_48,3);
  local_b4 = L"\xe9c3ﾚ￟૩\xffff忿孞\xe58b썝";
  FUN_00405744(&stack0xffffffec,PTR_DAT_004010dc,2);
  return;
}

