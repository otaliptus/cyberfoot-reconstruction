// Address: 00605634
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00605634(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  wchar_t **ppwVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  wchar_t *local_a8;
  wchar_t *local_a4;
  undefined *local_a0;
  wchar_t *local_9c;
  undefined *local_98;
  wchar_t **local_94;
  wchar_t *local_90;
  wchar_t **local_8c;
  wchar_t *local_88;
  wchar_t *local_84;
  wchar_t **local_80;
  undefined *local_7c;
  wchar_t *local_78;
  wchar_t *local_74;
  undefined *local_70;
  wchar_t **local_6c;
  wchar_t *local_68;
  undefined *local_64;
  undefined *local_60;
  wchar_t *local_5c;
  wchar_t **local_58;
  wchar_t *local_54;
  undefined *local_50;
  undefined **local_4c;
  wchar_t **local_48;
  undefined *local_44;
  wchar_t **local_40;
  undefined *local_3c;
  wchar_t *local_38;
  undefined **local_34;
  wchar_t **local_30;
  wchar_t **local_2c;
  wchar_t *local_28;
  wchar_t *local_24;
  wchar_t **local_20;
  undefined *local_10;
  int local_c;
  int local_8;
  
  iVar3 = 0x14;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  local_c = 0;
  local_20 = (wchar_t **)0x605663;
  local_8 = param_2;
  FUN_00405658(&local_38,PTR_DAT_004010e8,2);
  local_24 = (wchar_t *)&LAB_00605d05;
  local_28 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_20 = (wchar_t **)&stack0xfffffffc;
  if (local_8 != 0) {
    local_2c = (wchar_t **)0x605688;
    local_20 = (wchar_t **)&stack0xfffffffc;
    FUN_00642c50(0x99,&local_3c);
    local_2c = (wchar_t **)0x605693;
    thunk_FUN_0040502c(&local_38,local_3c);
    local_2c = (wchar_t **)0x6056a0;
    FUN_00642c50(0x9b,&local_40);
    local_2c = (wchar_t **)0x6056ab;
    thunk_FUN_0040502c(&local_34,local_40);
    local_2c = (wchar_t **)0x6056b3;
    FUN_00404ff0(&stack0xffffffe4);
    local_2c = (wchar_t **)0x6056bf;
    local_28 = (wchar_t *)FUN_00403a54(PTR_PTR_0041bda0,1);
    iVar3 = local_c;
    local_2c = (wchar_t **)0x6056d9;
    FUN_00405194(&stack0xffffffec,*(int *)PTR_DAT_0066b5b8 + local_c * 0x130);
    local_2c = (wchar_t **)0x6056e1;
    FUN_00404ff0(&local_20);
    local_2c = (wchar_t **)0x6056e9;
    FUN_00404ff0(&local_24);
    local_2c = (wchar_t **)0x6056f1;
    FUN_00404ff0(&local_10);
    local_2c = (wchar_t **)0x6056fc;
    FUN_00404b6c(&local_44,unaff_EBX);
    local_2c = (wchar_t **)0x60570f;
    iVar2 = FUN_0042b3e4(*(undefined4 *)(DAT_006d41d0 + 0x160),local_44);
    if (iVar2 < 0x9c) {
      local_2c = (wchar_t **)0x605721;
      thunk_FUN_0040502c(&local_10,unaff_EBX);
    }
    else {
      local_2c = (wchar_t **)0x605730;
      iVar2 = FUN_00405574(&DAT_00605d1c,unaff_EBX);
      if (iVar2 == 0) {
        local_2c = (wchar_t **)0x605741;
        thunk_FUN_0040502c(&local_10,unaff_EBX);
      }
      else {
        local_2c = (wchar_t **)&local_48;
        local_30 = (wchar_t **)0x605754;
        FUN_004053fc(unaff_EBX,0,iVar2 + -1);
        local_2c = local_48;
        local_30 = (wchar_t **)&DAT_00605d1c;
        local_34 = (undefined **)&local_4c;
        local_38 = L"痿梸崤`䖍뫴\x04";
        FUN_004053fc(unaff_EBX,iVar2 + 1,1);
        local_34 = local_4c;
        local_38 = L".";
        local_3c = (undefined *)0x605785;
        FUN_00405330(&local_10,4);
      }
    }
    local_2c = (wchar_t **)0x60578d;
    FUN_00404ff0(&local_30);
    local_30 = (wchar_t **)&LAB_006057df;
    local_34 = (undefined **)*in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_34;
    local_38 = *(wchar_t **)
                (PTR_DAT_0066b1c8 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar3 * 0x130) * 4);
    local_3c = &DAT_00605d2c;
    local_40 = *(wchar_t ***)
                (PTR_DAT_0066b1c8 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar3 * 0x130) * 4);
    local_44 = (undefined *)0x6057d5;
    local_2c = (wchar_t **)&stack0xfffffffc;
    FUN_00405330(&local_30,3);
    iVar3 = local_c;
    *in_FS_OFFSET = (int)local_40;
    if (local_8 < 0xc) {
      local_38 = (wchar_t *)0x605808;
      thunk_FUN_0040502c(&stack0xffffffe8,*(undefined4 *)(PTR_DAT_0066b6bc + param_4 * 4 + -4));
      iVar3 = local_c;
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + local_c * 0x130) ==
          *(int *)(PTR_DAT_0066b734 + param_4 * 0xc + -0xc)) {
        local_38 = (wchar_t *)0x6058ef;
        FUN_00642c50(0x31,&local_68);
        local_38 = local_68;
        local_3c = &DAT_00605d7c;
        local_40 = (wchar_t **)0x60590a;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar3 * 0x130),&local_70);
        local_40 = (wchar_t **)0x605915;
        FUN_004051d4(&local_6c,local_70);
        local_40 = local_6c;
        local_44 = &DAT_00605d1c;
        local_48 = local_30;
        local_4c = (undefined **)&DAT_00605d1c;
        local_50 = &DAT_00605d1c;
        local_54 = (&local_38)[*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + iVar3 * 0x130)];
        local_58 = (wchar_t **)0x605946;
        FUN_00405330(&local_64,8);
        local_5c = (wchar_t *)0x60595d;
        FUN_00404b6c(*(int *)(&DAT_006d4184 + local_8 * 4) + 0x80,local_64);
      }
      else {
        local_38 = (wchar_t *)0x60583a;
        thunk_FUN_0040502c(&local_20,L"<FONT color=\"#DFDF00\">");
        local_38 = L"喍뢰1";
        thunk_FUN_0040502c(&local_24,L"</font>");
        local_38 = (wchar_t *)0x605854;
        FUN_00642c50(0x31,&local_54);
        local_38 = local_54;
        local_3c = &DAT_00605d7c;
        local_40 = (wchar_t **)0x60586f;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar3 * 0x130),&local_5c);
        local_40 = (wchar_t **)0x60587a;
        FUN_004051d4(&local_58,local_5c);
        local_40 = local_58;
        local_44 = &DAT_00605d84;
        local_48 = *(wchar_t ***)
                    (PTR_DAT_0066b660 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar3 * 0x130) * 4);
        local_4c = (undefined **)&DAT_00605d1c;
        local_50 = (undefined *)0x6058a8;
        FUN_00642c50(300,&local_60);
        local_50 = local_60;
        local_54 = L" ";
        local_58 = *(wchar_t ***)(PTR_DAT_0066b6bc + param_4 * 4 + -4);
        local_5c = L"喋讴ﱅҋ蒅流Ԁ\x80";
        FUN_00405330(&local_50,9);
        local_5c = L"篫喍뢜1";
        FUN_00404b6c(*(int *)(&DAT_006d4184 + local_8 * 4) + 0x80,local_50);
      }
      if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar3 * 0x130) == 3) &&
         ((param_4 == 10 || (param_4 == 0x11)))) {
        local_5c = L"䖍\xe8e0\xf661￟喍뢌1";
        FUN_00404ff0(&local_20);
        local_5c = L"喍뢌1";
        FUN_00404ff0(&local_24);
        local_5c = (wchar_t *)0x60599c;
        FUN_00642c50(0x31,&local_78);
        iVar3 = local_c;
        local_5c = local_78;
        local_60 = &DAT_00605d7c;
        local_64 = (undefined *)0x6059bb;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + local_c * 0x130),&local_80);
        local_64 = (undefined *)0x6059c6;
        FUN_004051d4(&local_7c,local_80);
        local_64 = local_7c;
        local_68 = L" ";
        local_6c = local_30;
        local_70 = &DAT_00605d1c;
        local_74 = L" ";
        local_78 = (&local_38)[*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + iVar3 * 0x130)];
        local_7c = (undefined *)0x6059f7;
        FUN_00405330(&local_74,8);
        local_5c = L"껩";
        FUN_00404b6c(*(int *)(&DAT_006d4184 + local_8 * 4) + 0x80,local_74);
      }
    }
    else {
      local_38 = L"閍ｼ\xffffㆸ";
      thunk_FUN_0040502c(&stack0xffffffe8,
                         *(undefined4 *)
                          (PTR_DAT_0066b660 +
                          *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + local_c * 0x130) * 4));
      local_38 = (wchar_t *)0x605a44;
      FUN_00642c50(0x31,&local_88);
      local_38 = local_88;
      local_3c = &DAT_00605d7c;
      local_40 = (wchar_t **)0x605a65;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar3 * 0x130),&local_90);
      local_40 = (wchar_t **)0x605a76;
      FUN_004051d4(&local_8c,local_90);
      local_40 = local_8c;
      local_44 = &DAT_00605d1c;
      local_48 = local_30;
      local_4c = (undefined **)&DAT_00605d1c;
      local_50 = &DAT_00605d1c;
      local_54 = (&local_38)[*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c + iVar3 * 0x130)];
      local_58 = (wchar_t **)0x605aaa;
      FUN_00405330(&local_84,8);
      local_5c = (wchar_t *)0x605ac1;
      FUN_00404b6c(*(int *)(&DAT_006d4184 + local_8 * 4) + 0x80,local_84);
    }
    iVar2 = local_c;
    iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + local_c * 0x130);
    if (0 < iVar3) {
      local_5c = (wchar_t *)0x605ae6;
      FUN_00409dd8(iVar3,&local_98);
      local_5c = (wchar_t *)0x605af6;
      FUN_00404bac(&local_98,&DAT_00605d94);
      local_5c = (wchar_t *)0x605b07;
      FUN_004051d4(&local_94,local_98);
      local_5c = L"ꁨ恝ꄀ떸f\x8b䒋磘閍､\xffffꗨ\xe042\xffff撵\xffff棿嶬`薍ｨ\xffffκ"
      ;
      FUN_004052cc(&local_10,local_94,local_10);
    }
    local_5c = L"(";
    local_60 = (undefined *)0x605b33;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + iVar2 * 0x130),&local_a0);
    local_60 = local_a0;
    local_64 = &DAT_00605dac;
    local_68 = 
    L"開ｨ\xffff䖍\xe8d8\xf678￟둨恝＀\xe475痿棴巰`痿棬崜`痿棘帠`痿棠帴`薍｜\xffff઺"
    ;
    FUN_00404c64(&local_9c,3);
    local_68 = L"둨恝＀\xe475痿棴巰`痿棬崜`痿棘帠`痿棠帴`薍｜\xffff઺";
    FUN_004051d4(&local_2c,local_9c);
    local_68 = L"<P align=\"center\"><shad><B>";
    local_6c = local_20;
    local_70 = local_10;
    local_74 = L"</shad></B><BR><shad>";
    local_7c = &DAT_00605d1c;
    local_80 = local_2c;
    local_84 = L"</shad>";
    local_88 = local_24;
    local_8c = (wchar_t **)0x605e34;
    local_90 = (wchar_t *)0x605b94;
    FUN_00405330(&local_a8,10);
    local_90 = L"開｠\xffff䖋诜（㡑둨恝＀\xe475痿棴巰`痿棬帠`痿棠帴`䖍뫨\b";
    FUN_00404b6c(&local_a4,local_a8);
    local_90 = L"둨恝＀\xe475痿棴巰`痿棬帠`痿棠帴`䖍뫨\b";
    (**(code **)(*(int *)local_28 + 0x38))(local_28,local_a4);
    local_90 = L"<P align=\"center\"><shad><B>";
    local_94 = local_20;
    local_98 = local_10;
    local_9c = L"</shad></B><BR><shad>";
    local_a4 = L"</shad>";
    local_a8 = local_24;
    FUN_00405330(&stack0xffffffe4,8);
    FUN_00545088(*(undefined4 *)(&DAT_006d4184 + local_8 * 4),0);
    FUN_00545088(*(undefined4 *)(&DAT_006d4184 + local_8 * 4),unaff_EDI);
    (**(code **)(*(int *)local_28 + 0x44))();
    local_30 = (wchar_t **)&LAB_00605c2b;
    local_34 = (undefined **)*in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_34;
    local_38 = (wchar_t *)0x605c21;
    local_2c = (wchar_t **)&stack0xfffffffc;
    FUN_00403a84(local_28);
    *in_FS_OFFSET = (int)local_34;
  }
  ppwVar1 = local_20;
  *in_FS_OFFSET = (int)local_28;
  local_20 = (wchar_t **)&LAB_00605d0f;
  local_24 = L"薍｠\xffffҺ";
  FUN_00404ff0(&local_a8,local_28,ppwVar1);
  local_24 = (wchar_t *)0x605c5d;
  FUN_004048f8(&local_a4,4);
  local_24 = (wchar_t *)0x605c68;
  FUN_00404ff0(&local_94);
  local_24 = L"薍ｸ\xffffκ";
  FUN_004048d4(&local_90);
  local_24 = L"䖍\xe884\xec49￟䖍몈\x03";
  FUN_00405008(&local_8c,3);
  local_24 = L"䖍몈\x03";
  FUN_004048d4(&local_80);
  local_24 = L"䖍\xe894\xec34￟䖍몘\x04";
  FUN_00405008(&local_7c,3);
  local_24 = L"䖍몘\x04";
  FUN_004048d4(&local_70);
  local_24 = L"䖍\xe8a8\xec1f￟䖍몬\x05";
  FUN_00405008(&local_6c,4);
  local_24 = L"䖍몬\x05";
  FUN_004048d4(&local_5c);
  local_24 = L"䖍\xe8c0\xec0a￟䖍뫄\x02";
  FUN_00405008(&local_58,5);
  local_24 = L"䖍뫄\x02";
  FUN_004048d4(&local_44);
  local_24 = L"䖍만\x02";
  FUN_00405008(&local_40,2);
  local_24 = L"䖍뫔\x02";
  FUN_00405744(&local_38,PTR_DAT_004010e8,2);
  local_24 = L"䖍뫠\x06";
  FUN_00405008(&local_30,2);
  local_24 = L"\xe9c3\xe50e￟㏩\xffff忿孞\xe58b쉝\x04\x02";
  FUN_00405008(&local_24,6);
  return;
}

