// Address: 00604468
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00604468(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined *unaff_EDI;
  undefined4 *puVar10;
  int *in_FS_OFFSET;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c [52];
  undefined1 local_e8 [52];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  wchar_t *local_9c;
  undefined4 local_98;
  wchar_t *local_94;
  undefined *local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  wchar_t *local_84;
  undefined4 local_80;
  undefined *local_7c;
  wchar_t *local_78;
  undefined4 local_74;
  wchar_t *local_70;
  undefined *local_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  wchar_t *local_58;
  undefined *local_54;
  wchar_t *local_50;
  wchar_t *local_4c;
  undefined *local_48;
  wchar_t *local_44;
  wchar_t *local_40;
  undefined *local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  undefined4 *local_30;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int *piVar11;
  int local_10;
  
  local_20 = &stack0xfffffffc;
  iVar7 = 0x24;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_24 = (undefined4 *)&LAB_00605329;
  local_28 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (int *)0x604497;
  FUN_00404ff0(&local_20);
  piVar11 = (int *)0x0;
  local_2c = (int *)0x6044a4;
  FUN_00404ff0(&stack0xffffffe4);
  local_10 = 0xb;
  puVar8 = &DAT_006d4140;
  puVar9 = &DAT_006d4188;
  puVar10 = &DAT_006d41d0;
  local_24 = &DAT_006d4218;
  do {
    local_2c = (int *)0x6044ca;
    FUN_00466128(*puVar8,1);
    local_2c = (int *)0x6044d3;
    FUN_00466128(*puVar9,1);
    local_2c = (int *)0x6044dc;
    FUN_00466128(*puVar10,0);
    local_2c = (int *)0x6044e8;
    FUN_00466128(*local_24,0);
    local_24 = local_24 + 1;
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8) ==
      '\0') {
    *(undefined4 *)
     (*(int *)PTR_DAT_0066af70 + 0x2e8 + *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8) = 1;
  }
  iVar7 = DAT_006d426c;
  if (param_2 == 1) {
    iVar7 = DAT_006d4268;
  }
  if (((param_2 == 2) && (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + DAT_006d4264 * 0x2f8) == '\0')
      ) && (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2e4 + DAT_006d4260 * 0x2f8) ==
            *(int *)(*(int *)PTR_DAT_0066af70 + 0x2e4 + DAT_006d4264 * 0x2f8))) {
    local_2c = (int *)0x60459f;
    cVar6 = FUN_006460a4(DAT_006d4264,2);
    if (cVar6 == '\0') {
      local_2c = (int *)0x6045ce;
      cVar6 = FUN_006460a4(DAT_006d4264,3);
      if (cVar6 != '\0') {
        *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x2e8 + DAT_006d4264 * 0x2f8) = 3;
      }
    }
    else {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x2e8 + DAT_006d4264 * 0x2f8) = 2;
    }
  }
  local_2c = (int *)0x60460f;
  cVar6 = FUN_006460a4(*(int *)(&DAT_006d425c + param_2 * 4),
                       *(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0x2e8 +
                        *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8));
  if (cVar6 == '\0') {
    local_2c = (int *)0x60473c;
    FUN_006462ac(*(undefined4 *)(&DAT_006d425c + param_2 * 4),&local_50);
    if (local_50 == (wchar_t *)0x0) {
      local_2c = (int *)0x604778;
      FUN_004ab2b0(DAT_006d412c,DAT_0066c668,"camisa1");
    }
    else {
      local_2c = (int *)0x604754;
      FUN_006462ac(*(undefined4 *)(&DAT_006d425c + param_2 * 4),&local_54);
      local_2c = (int *)0x604761;
      (**(code **)(*DAT_006d412c + 0x4c))(DAT_006d412c,local_54);
    }
  }
  else {
    iVar1 = *(int *)(&DAT_006d425c + param_2 * 4);
    uVar2 = *(uint *)(*(int *)PTR_DAT_0066af70 + 0x2e8 + iVar1 * 0x2f8);
    if (uVar2 < 2) {
      local_2c = (int *)0x604650;
      FUN_006462ac(iVar1,&local_38);
      if (local_38 == (wchar_t *)0x0) {
        local_2c = (int *)0x60468f;
        FUN_004ab2b0(DAT_006d412c,DAT_0066c668,"camisa1");
      }
      else {
        local_2c = (int *)0x604668;
        FUN_006462ac(*(undefined4 *)(&DAT_006d425c + param_2 * 4),&local_3c);
        local_2c = (int *)0x604675;
        (**(code **)(*DAT_006d412c + 0x4c))(DAT_006d412c,local_3c);
      }
    }
    else if (uVar2 == 2) {
      local_2c = (int *)0x60469e;
      FUN_006464c4(iVar1,&local_40);
      if (local_40 == (wchar_t *)0x0) {
        local_2c = (int *)0x6046dd;
        FUN_004ab2b0(DAT_006d412c,DAT_0066c668,"camisa1");
      }
      else {
        local_2c = (int *)0x6046b6;
        FUN_006464c4(*(undefined4 *)(&DAT_006d425c + param_2 * 4),&local_44);
        local_2c = (int *)0x6046c3;
        (**(code **)(*DAT_006d412c + 0x4c))(DAT_006d412c,local_44);
      }
    }
    else if (uVar2 == 3) {
      local_2c = (int *)0x6046ec;
      FUN_006466dc(iVar1,&local_48);
      if (local_48 == (undefined *)0x0) {
        local_2c = (int *)0x604728;
        FUN_004ab2b0(DAT_006d412c,DAT_0066c668,"camisa1");
      }
      else {
        local_2c = (int *)0x604704;
        FUN_006466dc(*(undefined4 *)(&DAT_006d425c + param_2 * 4),&local_4c);
        local_2c = (int *)0x604711;
        (**(code **)(*DAT_006d412c + 0x4c))(DAT_006d412c,local_4c);
      }
    }
  }
  local_10 = 0x12;
  local_28 = &DAT_006d4140;
  local_30 = &DAT_006d41d0;
  local_34 = (wchar_t *)&DAT_006d4218;
  do {
    local_2c = (undefined4 *)0x6047b1;
    (**(code **)(**(int **)(*local_28 + 0x168) + 8))(*(int **)(*local_28 + 0x168),DAT_006d4128);
    uVar3 = *local_2c;
    local_2c = (int *)0x6047bd;
    FUN_00545088(uVar3,0);
    local_2c = (int *)0x6047c9;
    FUN_004e1414(*local_30,0);
    local_2c = (int *)0x6047d5;
    FUN_004e1414(*(undefined4 *)local_34,0);
    local_34 = (wchar_t *)((int)local_34 + 4);
    local_30 = local_30 + 1;
    local_28 = local_28 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_10 = 1;
  do {
    local_2c = (int *)0xffffffff;
    local_28 = (int *)0xffffffff;
    local_34 = L"䗿菴\xf47d甌쟌\xf445\x01";
    FUN_006053e0(param_1,local_10,
                 *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x58 + local_10 * 4));
    local_10 = local_10 + 1;
  } while (local_10 != 0xc);
  local_10 = 1;
  local_34 = (wchar_t *)&DAT_006d41d0;
  local_30 = &DAT_006d4218;
  local_28 = &DAT_006d4188;
  do {
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + -4 + local_10 * 4);
    if (iVar1 < 1) {
      local_2c = (int *)0x604ae6;
      FUN_00545088(*local_28,0);
      local_2c = (int *)0x604af2;
      FUN_004e1414(*local_30,0);
      iVar1 = *local_2c;
      local_2c = (int *)0x604b08;
      (**(code **)(**(int **)(iVar1 + 0x168) + 8))(*(int **)(iVar1 + 0x168),DAT_006d4128);
    }
    else {
      local_2c = *(int **)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x58 + local_10 * 4);
      local_30 = (undefined4 *)0x604891;
      FUN_00605634(param_1,local_10,iVar1);
      if (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 +
                      *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + -4 + local_10 * 4) * 0x130)
         ) {
        local_30 = (undefined4 *)0x6048e3;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + 0x54 +
                      *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + -4 + local_10 * 4) * 0x130)
                     ,&local_5c);
        local_30 = (undefined4 *)0x6048ee;
        FUN_004051d4(&local_58,local_5c);
        local_30 = (undefined4 *)0x6048fb;
        FUN_004e1414(*(undefined4 *)local_34,local_58);
      }
      local_30 = (undefined4 *)0x604921;
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x78 +
                    *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + -4 + local_10 * 4) * 0x130),
                   &local_64);
      local_30 = (undefined4 *)0x60492e;
      FUN_00404bac(&local_64,&DAT_00605354);
      local_30 = (undefined4 *)0x604939;
      FUN_004051d4(&local_60,local_64);
      uVar3 = *local_30;
      local_30 = (undefined4 *)0x604946;
      FUN_004e1414(uVar3,local_60);
      local_30 = (undefined4 *)0x60494e;
      FUN_00404ff0(&stack0xffffffe4);
      local_34 = (wchar_t *)&LAB_006049d1;
      local_38 = (wchar_t *)*in_FS_OFFSET;
      *in_FS_OFFSET = (int)&local_38;
      local_3c = *(undefined **)
                  (PTR_DAT_0066b1c8 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c +
                          *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + -4 + local_10 * 4) *
                          0x130) * 4);
      local_40 = L"/";
      local_44 = *(wchar_t **)
                  (PTR_DAT_0066b1c8 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 +
                          *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + -4 + local_10 * 4) *
                          0x130) * 4);
      local_48 = (undefined *)0x6049c7;
      local_30 = (undefined4 *)&stack0xfffffffc;
      FUN_00405330(&stack0xffffffe4,3);
      puVar5 = local_3c;
      *in_FS_OFFSET = (int)local_44;
      local_3c = (undefined *)0x6049e8;
      FUN_00642c50(0x84,&local_6c,puVar5);
      local_3c = local_6c;
      local_40 = L":";
      local_44 = L"喋趐鑅ꧨ\xe007\xffff鑵汨恓贀豕ㆸ";
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x78 +
                    *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + -4 + local_10 * 4) * 0x130),
                   &local_74);
      local_44 = L"痿梔卬`喍뢌1";
      FUN_004051d4(&local_70,local_74);
      local_44 = local_70;
      local_48 = &DAT_0060536c;
      local_4c = (wchar_t *)0x604a40;
      FUN_00642c50(0x31,&local_78);
      local_4c = local_78;
      local_50 = L":";
      local_54 = (undefined *)0x604a6e;
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x28 +
                    *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + -4 + local_10 * 4) * 0x130),
                   &local_80);
      local_54 = (undefined *)0x604a79;
      FUN_004051d4(&local_7c,local_80);
      local_54 = local_7c;
      local_58 = L" ";
      local_60 = 0x604a91;
      local_5c = unaff_EDI;
      FUN_00405330(&local_68,9);
      local_2c = (int *)0x604a9e;
      FUN_004e14d4(*local_30,local_68);
      if (local_10 == 0xb) {
        iVar1 = *local_2c;
        local_2c = (int *)0x604aba;
        (**(code **)(**(int **)(iVar1 + 0x168) + 8))(*(int **)(iVar1 + 0x168),DAT_006d4130);
      }
      else if (local_10 < 0xb) {
        iVar1 = *local_2c;
        local_2c = (int *)0x604ad8;
        (**(code **)(**(int **)(iVar1 + 0x168) + 8))(*(int **)(iVar1 + 0x168),DAT_006d412c);
      }
    }
    local_10 = local_10 + 1;
    local_28 = local_28 + 1;
    local_30 = local_30 + 1;
    local_34 = (wchar_t *)((int)local_34 + 4);
  } while (local_10 != 0xc);
  local_10 = 1;
  local_28 = &DAT_006d4140;
  local_30 = &DAT_006d41d0;
  local_34 = (wchar_t *)&DAT_006d4218;
  do {
    if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 +
                 *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + -4 + local_10 * 4) * 0x130) ==
        '\0') {
      local_2c = (undefined4 *)0x604b83;
      FUN_00466128(*local_28,0);
      uVar3 = *local_2c;
      local_2c = (int *)0x604b8f;
      FUN_00466128(uVar3,0);
      local_2c = (int *)0x604b9b;
      FUN_00466128(*local_30,0);
      local_2c = (int *)0x604ba7;
      FUN_00466128(*(undefined4 *)local_34,0);
    }
    local_10 = local_10 + 1;
    local_34 = (wchar_t *)((int)local_34 + 4);
    local_30 = local_30 + 1;
    local_28 = local_28 + 1;
  } while (local_10 != 0xc);
  local_10 = 0xc;
  local_34 = (wchar_t *)&DAT_006d416c;
  local_30 = &DAT_006d4244;
  do {
    if (*(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x10 + local_10 * 4) < 1) {
      local_2c = (int *)0x604ecd;
      FUN_00466128(*(int *)local_34,0);
    }
    else {
      local_2c = (int *)0x604c14;
      (**(code **)(**(int **)(*(int *)local_34 + 0x168) + 8))
                (*(int **)(*(int *)local_34 + 0x168),DAT_006d4134);
      local_2c = (undefined4 *)0xffffffff;
      local_30 = (undefined4 *)0x604c32;
      FUN_00605634(param_1,local_10,
                   *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x10 + local_10 * 4));
      local_30 = (undefined4 *)0x604c3a;
      FUN_00404ff0(&stack0xffffffe4);
      local_34 = (wchar_t *)&LAB_00604cbd;
      local_38 = (wchar_t *)*in_FS_OFFSET;
      *in_FS_OFFSET = (int)&local_38;
      local_3c = *(undefined **)
                  (PTR_DAT_0066b1c8 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c +
                          *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x10 + local_10 * 4) *
                          0x130) * 4);
      local_40 = L"/";
      local_44 = *(wchar_t **)
                  (PTR_DAT_0066b1c8 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 +
                          *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x10 + local_10 * 4) *
                          0x130) * 4);
      local_48 = (undefined *)0x604cb3;
      local_30 = (undefined4 *)&stack0xfffffffc;
      FUN_00405330(&stack0xffffffe4,3);
      *in_FS_OFFSET = (int)local_44;
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x2c +
                  *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x10 + local_10 * 4) * 0x130)
          == 0) {
        local_40 = L" ";
        local_44 = L"痿趀\xe845κ";
        puVar5 = unaff_EDI;
        FUN_00642c50(0x99,&local_84,local_3c);
        local_3c = puVar5;
        local_44 = local_84;
        local_48 = (undefined *)0x604d17;
        FUN_00405330(&stack0xffffffe4,3);
      }
      else {
        local_40 = L" ";
        local_44 = L"뗿ｼ\xffff䖍뫨\x03";
        puVar5 = unaff_EDI;
        FUN_00642c50(0x99,&local_88,local_3c);
        local_3c = puVar5;
        local_44 = local_88;
        local_48 = (undefined *)0x604d44;
        FUN_00405330(&stack0xffffffe4,3);
      }
      local_48 = (undefined *)0x604d54;
      FUN_00642c50(0x84,&local_90);
      local_48 = local_90;
      local_4c = L":";
      local_50 = L"開ｬ\xffff薍ｰ\xffff㯨\xe004\xffff炵\xffff棿卬`閍ｨ\xffffㆸ";
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x78 +
                    *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x10 + local_10 * 4) * 0x130)
                   ,&local_98);
      local_50 = L"뗿ｰ\xffff汨恓贀梕\xffff룿1";
      FUN_004051d4(&local_94,local_98);
      local_50 = local_94;
      local_54 = &DAT_0060536c;
      local_58 = (wchar_t *)0x604db4;
      FUN_00642c50(0x31,&local_9c);
      local_58 = local_9c;
      local_5c = &DAT_00605364;
      local_60 = 0x604de8;
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x28 +
                    *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x10 + local_10 * 4) * 0x130)
                   ,&local_a4);
      local_60 = 0x604df9;
      FUN_004051d4(&local_a0,local_a4);
      local_60 = local_a0;
      local_64 = &DAT_00605378;
      local_6c = (undefined *)0x604e17;
      FUN_00405330(&local_8c,9);
      local_24 = (undefined4 *)0x604e27;
      FUN_004e14d4(*local_30,local_8c);
      local_24 = (undefined4 *)0x604e33;
      FUN_00466128(*(int *)local_34,1);
      if (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 +
                      *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x10 + local_10 * 4) *
                      0x130)) {
        local_24 = (undefined4 *)0x604e88;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + 0x54 +
                      *(int *)(*(int *)PTR_DAT_0066b238 + iVar7 * 0xf8 + 0x10 + local_10 * 4) *
                      0x130),&local_ac);
        local_24 = (undefined4 *)0x604e99;
        FUN_004051d4(&local_a8,local_ac);
        local_24 = (undefined4 *)0x604ea9;
        FUN_004e1414(*local_2c,local_a8);
      }
      piVar11 = (int *)((int)piVar11 + 1);
      local_24 = (undefined4 *)0xffffffff;
      local_2c = (int *)0x604ebf;
      local_28 = piVar11;
      FUN_006053e0(param_1,local_10,0);
    }
    local_10 = local_10 + 1;
    local_30 = local_30 + 1;
    local_34 = (wchar_t *)((int)local_34 + 4);
  } while (local_10 != 0x13);
  local_2c = (int *)0x604f0e;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x394),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x228 + *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8));
  local_2c = (int *)0x604f36;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x38c),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x220 + *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8));
  local_2c = (int *)0x604f5e;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x390),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x224 + *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8));
  local_2c = (int *)0x604f86;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x394),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x228 + *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8));
  local_2c = (int *)0x604fae;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x38c),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x220 + *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8));
  local_2c = (int *)0x604fd6;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x390),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0x224 + *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8));
  local_2c = (int *)0x604fe1;
  FUN_0064354c(iVar7,&local_20);
  local_2c = (int *)0x604ff1;
  FUN_004030d4(local_e8,&DAT_0060537c);
  local_2c = (int *)0x605014;
  FUN_004030a4(local_e8,*(int *)PTR_DAT_0066af70 + *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8,
               0x31);
  local_2c = (int *)0x605025;
  FUN_004030d4(local_11c,local_e8);
  local_2c = (int *)0x605037;
  FUN_004030a4(local_11c,&DAT_00605398,0x32);
  local_2c = (int *)0x605048;
  FUN_00405194(&local_b4,local_11c);
  local_2c = (int *)local_b4;
  local_30 = (undefined4 *)local_20;
  local_34 = L"</p></shad>";
  local_38 = 
  L"開ｔ\xffff䖋诼㢀\x03\xe800\x0e\xfff4䖋毸蔄䉜m譟瀕暯謀耒쉼9扴䖋诼钀\x03눀\xe801ႄ￦䖋诼貀\x03눀\xe801ၴ￦䖋诼邀\x03눀\xe801ၤ￦䖋诼㲀\x03㌀\xe8d2ၔ￦䖋诼䂀\x03㌀\xe8d2၄￦䖋诼䒀\x03㌀\xe8d2ဴ￦惫䖋诼钀\x03㌀\xe8d2ဢ￦䖋诼貀\x03㌀\xe8d2ဒ￦䖋诼邀\x03㌀\xe8d2ဂ￦䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
  ;
  FUN_00405330(&local_b0,3);
  local_38 = 
  L"䖋毸蔄䉜m譟瀕暯謀耒쉼9扴䖋诼钀\x03눀\xe801ႄ￦䖋诼貀\x03눀\xe801ၴ￦䖋诼邀\x03눀\xe801ၤ￦䖋诼㲀\x03㌀\xe8d2ၔ￦䖋诼䂀\x03㌀\xe8d2၄￦䖋诼䒀\x03㌀\xe8d2ဴ￦惫䖋诼钀\x03㌀\xe8d2ဢ￦䖋诼貀\x03㌀\xe8d2ဒ￦䖋诼邀\x03㌀\xe8d2ဂ￦䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
  ;
  FUN_00545088(*(undefined4 *)(param_1 + 0x338),local_b0);
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8) ==
      '\0') {
    local_38 = 
    L"䖋诼貀\x03㌀\xe8d2ဒ￦䖋诼邀\x03㌀\xe8d2ဂ￦䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x394),0);
    local_38 = 
    L"䖋诼邀\x03㌀\xe8d2ဂ￦䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x38c),0);
    local_38 = 
    L"䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x390),0);
    local_38 = 
    L"䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x33c),1);
    local_38 = 
    L"䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x340),1);
    local_38 = 
    L"뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03";
    FUN_00466128(*(undefined4 *)(param_1 + 0x344),1);
  }
  else {
    local_38 = 
    L"䖋诼貀\x03눀\xe801ၴ￦䖋诼邀\x03눀\xe801ၤ￦䖋诼㲀\x03㌀\xe8d2ၔ￦䖋诼䂀\x03㌀\xe8d2၄￦䖋诼䒀\x03㌀\xe8d2ဴ￦惫䖋诼钀\x03㌀\xe8d2ဢ￦䖋诼貀\x03㌀\xe8d2ဒ￦䖋诼邀\x03㌀\xe8d2ဂ￦䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x394),
                 CONCAT31((int3)((uint)*(int *)PTR_DAT_0066af70 >> 8),1));
    local_38 = 
    L"䖋诼邀\x03눀\xe801ၤ￦䖋诼㲀\x03㌀\xe8d2ၔ￦䖋诼䂀\x03㌀\xe8d2၄￦䖋诼䒀\x03㌀\xe8d2ဴ￦惫䖋诼钀\x03㌀\xe8d2ဢ￦䖋诼貀\x03㌀\xe8d2ဒ￦䖋诼邀\x03㌀\xe8d2ဂ￦䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x38c),1);
    local_38 = 
    L"䖋诼㲀\x03㌀\xe8d2ၔ￦䖋诼䂀\x03㌀\xe8d2၄￦䖋诼䒀\x03㌀\xe8d2ဴ￦惫䖋诼钀\x03㌀\xe8d2ဢ￦䖋诼貀\x03㌀\xe8d2ဒ￦䖋诼邀\x03㌀\xe8d2ဂ￦䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x390),1);
    local_38 = 
    L"䖋诼䂀\x03㌀\xe8d2၄￦䖋诼䒀\x03㌀\xe8d2ဴ￦惫䖋诼钀\x03㌀\xe8d2ဢ￦䖋诼貀\x03㌀\xe8d2ဒ￦䖋诼邀\x03㌀\xe8d2ဂ￦䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x33c),0);
    local_38 = 
    L"䖋诼䒀\x03㌀\xe8d2ဴ￦惫䖋诼钀\x03㌀\xe8d2ဢ￦䖋诼貀\x03㌀\xe8d2ဒ￦䖋诼邀\x03㌀\xe8d2ဂ￦䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x340),0);
    local_38 = 
    L"惫䖋诼钀\x03㌀\xe8d2ဢ￦䖋诼貀\x03㌀\xe8d2ဒ￦䖋诼邀\x03㌀\xe8d2ဂ￦䖋诼㲀\x03눀\xe801࿲￦䖋诼䂀\x03눀\xe801࿢￦䖋诼䒀\x03눀\xe801࿒￦뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⃂\x02謀㐕暵＀舴큨恓贀\xe485\xfffe뫿\x03"
    ;
    FUN_00466128(*(undefined4 *)(param_1 + 0x344),0);
  }
  local_38 = L"<shad>";
  local_3c = *(undefined **)
              (PTR_DAT_0066b534 +
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x220 +
                      *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8) * 4);
  local_40 = L"</shad>";
  local_44 = 
  L"開ﻤ\xffff䖋诼㲀\x03\xe800ﻡ\xfff3뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋Ⓜ\x02謀㐕暵＀艴栘叐`薍ﻠ\xffffκ"
  ;
  FUN_00405330(&local_120,3);
  local_44 = L"뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋Ⓜ\x02謀㐕暵＀艴栘叐`薍ﻠ\xffffκ";
  FUN_00545088(*(undefined4 *)(param_1 + 0x33c),local_120);
  local_44 = L"<shad>";
  local_48 = *(undefined **)
              (PTR_DAT_0066b534 +
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x224 +
                      *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8) * 4 + 0x18);
  local_4c = L"</shad>";
  local_50 = 
  L"開ﻠ\xffff䖋诼䂀\x03\xe800ﺏ\xfff3뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⣂\x02謀㐕暵＀艴栌叐`薍ﻜ\xffffκ"
  ;
  FUN_00405330(&local_124,3);
  local_50 = L"뱨恓謀\xf845ѫ岅浂开ᖋ꽰fኋ蒋⣂\x02謀㐕暵＀艴栌叐`薍ﻜ\xffffκ";
  FUN_00545088(*(undefined4 *)(param_1 + 0x340),local_124);
  local_50 = L"<shad>";
  local_54 = *(undefined **)
              (PTR_DAT_0066b534 +
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x228 +
                      *(int *)(&DAT_006d425c + param_2 * 4) * 0x2f8) * 4 + 0xc);
  local_58 = L"</shad>";
  local_5c = (undefined *)0x605237;
  FUN_00405330(&local_128,3);
  local_5c = (undefined *)0x60524b;
  FUN_00545088(*(undefined4 *)(param_1 + 0x344),local_128);
  pwVar4 = local_50;
  *in_FS_OFFSET = (int)local_58;
  local_50 = L"幟譛工Ã＀\xffff߿";
  local_54 = (undefined *)0x605268;
  FUN_00405008(&local_128,3,pwVar4);
  local_54 = (undefined *)0x605278;
  FUN_00405008(&local_b4,2);
  local_54 = (undefined *)0x605283;
  FUN_004048d4(&local_ac);
  local_54 = (undefined *)0x60528e;
  FUN_00404ff0(&local_a8);
  local_54 = (undefined *)0x605299;
  FUN_004048d4(&local_a4);
  local_54 = (undefined *)0x6052a9;
  FUN_00405008(&local_a0,2);
  local_54 = (undefined *)0x6052b4;
  FUN_004048d4(&local_98);
  local_54 = (undefined *)0x6052c4;
  FUN_00405008(&local_94,5);
  local_54 = (undefined *)0x6052cc;
  FUN_004048d4(&local_80);
  local_54 = (undefined *)0x6052d9;
  FUN_00405008(&local_7c,2);
  local_54 = (undefined *)0x6052e1;
  FUN_004048d4(&local_74);
  local_54 = (undefined *)0x6052ee;
  FUN_00405008(&local_70,3);
  local_54 = (undefined *)0x6052f6;
  FUN_004048d4(&local_64);
  local_54 = (undefined *)0x6052fe;
  FUN_00404ff0(&local_60);
  local_54 = (undefined *)0x605306;
  FUN_004048d4(&local_5c);
  local_54 = (undefined *)0x60530e;
  FUN_00404ff0(&local_58);
  local_54 = (undefined *)0x60531b;
  FUN_004048f8(&local_54,8);
  local_54 = (undefined *)0x605328;
  FUN_00405008(&local_20,2);
  return;
}

