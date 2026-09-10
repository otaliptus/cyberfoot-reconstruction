// Address: 005936e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005936e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_484;
  int local_480;
  undefined *local_47c;
  wchar_t *local_478;
  undefined4 local_474;
  int local_470;
  undefined *local_46c;
  wchar_t *local_468;
  undefined4 local_464;
  int local_460;
  undefined *local_45c;
  wchar_t *local_458;
  undefined4 local_454;
  undefined *local_450;
  undefined4 local_44c;
  undefined *local_448;
  wchar_t *local_444;
  undefined4 local_440;
  int local_43c;
  undefined *local_438;
  undefined4 local_434;
  int local_430;
  undefined *local_42c;
  wchar_t *local_428;
  undefined4 local_424;
  undefined *local_420;
  wchar_t *local_41c;
  undefined4 local_418;
  undefined *local_414;
  wchar_t *local_410;
  undefined4 local_40c;
  undefined *local_408;
  wchar_t *local_404;
  undefined4 local_400;
  undefined *local_3fc;
  wchar_t *local_3f8;
  undefined4 local_3f4;
  undefined *local_3f0;
  wchar_t *local_3ec;
  undefined4 local_3e8;
  undefined *local_3e4;
  wchar_t *local_3e0;
  undefined4 local_3dc;
  undefined *local_3d8;
  wchar_t *local_3d4;
  undefined4 local_3d0;
  undefined *local_3cc;
  wchar_t *local_3c8;
  undefined4 local_3c4;
  undefined *local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined *local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined *local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined *local_39c;
  undefined1 *local_398;
  int local_394 [203];
  int local_68 [5];
  undefined *local_54;
  undefined *local_50 [3];
  int local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  wchar_t *local_34;
  undefined1 *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  int local_10;
  
  local_24 = &stack0xfffffffc;
  iVar6 = 0x8f;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_005944ed;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  local_10 = 9;
  ppuVar3 = local_50;
  do {
    ppuVar3 = ppuVar3 + 1;
    *ppuVar3 = (undefined *)0x0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_10 = 3;
  piVar4 = local_68 + 4;
  do {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_10 = 2;
  piVar4 = local_68;
  do {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_10 = 2;
  puVar5 = (undefined4 *)&stack0xffffffe8;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_10 = 0xcb;
  piVar4 = local_394;
  do {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_30 = (undefined1 *)0x593784;
  FUN_00404ff0(&local_24);
  local_30 = (undefined1 *)0x593790;
  iVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b058);
  local_14 = 0;
  if (-1 < iVar6) {
    local_28 = (undefined1 *)(iVar6 + 1);
    local_10 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + local_10 * 0x14) == param_2) &&
         (*(int *)(*(int *)PTR_DAT_0066b058 + 0xc + local_10 * 0x14) == 1)) {
        local_30 = &stack0xfffffffc;
        local_34 = 
        L"諩\xe706\xe8ff৭￧툳桕㦱Y､搲⊉䖋跴耄ᖋ끘fኋ䒋҂ҍ譀강暶謀茒舼༄鎅"
        ;
        local_38 = (undefined *)*in_FS_OFFSET;
        *in_FS_OFFSET = (int)&local_38;
        iVar6 = *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14);
        if ((*(int *)(*(int *)PTR_DAT_0066b6ac + iVar6 * 0xc) == 1) &&
           (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar6 * 0xc) == 1)) {
          local_50[1] = local_50[1] + 1;
        }
        else {
          iVar6 = *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14);
          if (((*(int *)(*(int *)PTR_DAT_0066b6ac + iVar6 * 0xc) == 1) &&
              (1 < *(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar6 * 0xc))) &&
             (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar6 * 0xc) < 5)) {
            local_68[*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar6 * 0xc) + 2] =
                 local_68[*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar6 * 0xc) + 2] + 1;
          }
          else if (1 < *(int *)(*(int *)PTR_DAT_0066b6ac +
                               *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14) * 0xc)) {
            local_50[*(int *)(*(int *)PTR_DAT_0066b6ac +
                             *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14) * 0xc)] =
                 local_50[*(int *)(*(int *)PTR_DAT_0066b6ac +
                                  *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14) * 0xc)] +
                 1;
          }
        }
        *in_FS_OFFSET = (int)local_38;
        iVar6 = *in_FS_OFFSET;
        *in_FS_OFFSET = (int)&local_38;
        iVar1 = *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14);
        if (*(int *)(*(int *)PTR_DAT_0066b6ac + iVar1 * 0xc) == 4) {
          if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar1 * 0xc) == 1) {
            local_68[0] = local_68[0] + 1;
          }
          else if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 +
                           *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14) * 0xc) == 0) {
            local_68[1] = local_68[1] + 1;
          }
          else if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 +
                           *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14) * 0xc) == 2) {
            local_68[2] = local_68[2] + 1;
          }
          else if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 +
                           *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14) * 0xc) == 3) {
            local_68[3] = local_68[3] + 1;
          }
        }
        *in_FS_OFFSET = iVar6;
        local_34 = 
        L"⣩\xe705\xe8ffࢋ￧䖋跴耄ᖋ끘fኋ䒋҂ҍ譀강暶謀茒舼甊㌸嗒鉨夺搀㋿襤謢堕暰謀강暶謀謒艄（蕄㏤嫀奙襤\xeb10\xe90aӍ￧ヨ\xe708诿\xf455ᒍꆒ끘f\x8b䒋Ґҍ譀갍暶謀茉脼甁譖堍暰謀갍暶謀茉腼Ĉ䅵쀳桕㬊Y､搰₉墡暰謀欀遄弈ᖋ꽰fኋ䒋㳂蓿炅￼㏿嫀奙襤\xeb10\xe90aѕ￧루\xe707\xffff\xf445䷿࿜莅￼菿큽縀赒沕￼룿ņ"
        ;
        local_38 = (undefined *)*in_FS_OFFSET;
        *in_FS_OFFSET = (int)&local_38;
        iVar6 = *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14);
        if (*(int *)(*(int *)PTR_DAT_0066b6ac + iVar6 * 0xc) == 6) {
          if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar6 * 0xc) == 1) {
            unaff_EBX = unaff_EBX + 1;
          }
          else if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 +
                           *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14) * 0xc) == 0) {
            local_14 = local_14 + 1;
          }
        }
        *in_FS_OFFSET = (int)local_38;
        iVar6 = *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14);
        local_30 = &stack0xfffffffc;
        if (*(int *)(*(int *)PTR_DAT_0066b6ac + iVar6 * 0xc) == 10) {
          local_30 = &stack0xfffffffc;
          local_34 = (wchar_t *)&LAB_00593a92;
          local_38 = (undefined *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&local_38;
          *(int *)(&stack0xffffffe0 + *(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar6 * 0xc) * 4) =
               *(int *)(&stack0xffffffe0 + *(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar6 * 0xc) * 4)
               + 1;
          *in_FS_OFFSET = (int)local_38;
        }
        iVar6 = *(int *)(*(int *)PTR_DAT_0066b058 + 4 + local_10 * 0x14);
        if ((*(int *)(*(int *)PTR_DAT_0066b6ac + iVar6 * 0xc) == 1) &&
           (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar6 * 0xc) == 1)) {
          local_30 = &stack0xfffffffc;
          local_34 = (wchar_t *)&LAB_00593b0a;
          local_38 = (undefined *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&local_38;
          local_394[*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c +
                            *(int *)(*(int *)PTR_DAT_0066b058 + 8 + local_10 * 0x14) * 0x2f8)] =
               local_394[*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c +
                                 *(int *)(*(int *)PTR_DAT_0066b058 + 8 + local_10 * 0x14) * 0x2f8)]
               + 1;
          *in_FS_OFFSET = (int)local_38;
        }
      }
      local_10 = local_10 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != (undefined1 *)0x0);
  }
  if (0 < (int)local_34) {
    local_30 = (undefined1 *)0x593b36;
    FUN_00642c50(0x146,&local_398);
    local_30 = local_398;
    local_34 = L":";
    local_38 = (undefined *)0x593b4f;
    FUN_00409dd8(&DAT_00594504,&local_3a0);
    local_38 = (undefined *)0x593b60;
    FUN_004051d4(&local_39c,local_3a0);
    local_38 = local_39c;
    local_3c = &DAT_0059450c;
    local_40 = (undefined *)0x593b78;
    FUN_00405330(&local_24,4);
  }
  if (0 < (int)local_30) {
    local_30 = (undefined1 *)0x593b8e;
    FUN_00642c50(0x147,&local_3a4);
    local_30 = (undefined1 *)local_3a4;
    local_34 = L":";
    local_38 = (undefined *)0x593ba7;
    FUN_00409dd8(local_3a4,&local_3ac);
    local_38 = (undefined *)0x593bb8;
    FUN_004051d4(&local_3a8,local_3ac);
    local_38 = local_3a8;
    local_3c = &DAT_0059450c;
    local_40 = (undefined *)0x593bd0;
    FUN_00405330(&local_24,4);
  }
  if (0 < local_2c) {
    local_30 = (undefined1 *)0x593be6;
    FUN_00642c50(0x148,&local_3b0);
    local_30 = (undefined1 *)local_3b0;
    local_34 = L":";
    local_38 = (undefined *)0x593bff;
    FUN_00409dd8(local_2c,&local_3b8);
    local_38 = (undefined *)0x593c10;
    FUN_004051d4(&local_3b4,local_3b8);
    local_38 = local_3b4;
    local_3c = &DAT_0059450c;
    local_40 = (undefined *)0x593c28;
    FUN_00405330(&local_24,4);
  }
  if (0 < (int)local_3c) {
    local_30 = (undefined1 *)0x593c3e;
    FUN_00642c50(0xe0,&local_3bc);
    local_30 = (undefined1 *)local_3bc;
    local_34 = L":";
    local_38 = (undefined *)0x593c57;
    FUN_00409dd8(local_3c,&local_3c4);
    local_38 = (undefined *)0x593c68;
    FUN_004051d4(&local_3c0,local_3c4);
    local_38 = local_3c0;
    local_3c = &DAT_0059450c;
    local_40 = (undefined *)0x593c80;
    FUN_00405330(&local_24,4);
  }
  if ((PTR_DAT_0066ac78[0x171] != '\0') && (0 < (int)local_40)) {
    if (0 < local_68[0]) {
      local_30 = local_24;
      local_34 = 
      L"뗿ﰼ\xffffѨ奅贀㒕￼诿鱅૨\xe761诿㒕￼跿㢅￼\xe8ffᓵ￧뗿ﰸ\xffff౨奅贀\xe045ֺ"
      ;
      FUN_00642c50(0xde,&local_3c8);
      local_34 = local_3c8;
      local_38 = &DAT_00594504;
      local_3c = (undefined *)0x593cce;
      FUN_00409dd8(local_68[0],&local_3d0);
      local_3c = (undefined *)0x593cdf;
      FUN_004051d4(&local_3cc,local_3d0);
      local_3c = local_3cc;
      local_40 = &DAT_0059450c;
      local_44 = 0x593cf7;
      FUN_00405330(&local_24,5);
    }
    if (0 < local_68[1]) {
      local_30 = local_24;
      local_34 = 
      L"뗿ﰰ\xffffѨ奅贀⢕￼诿ꁅ꿨\xe760诿⢕￼跿ⲅ￼\xe8ffᒚ￧뗿ﰬ\xffff౨奅贀\xe045ֺ"
      ;
      FUN_00642c50(0xdc,&local_3d4);
      local_34 = local_3d4;
      local_38 = &DAT_00594504;
      local_3c = (undefined *)0x593d29;
      FUN_00409dd8(local_68[1],&local_3dc);
      local_3c = (undefined *)0x593d3a;
      FUN_004051d4(&local_3d8,local_3dc);
      local_3c = local_3d8;
      local_40 = &DAT_0059450c;
      local_44 = 0x593d52;
      FUN_00405330(&local_24,5);
    }
    if (0 < local_68[2]) {
      local_30 = local_24;
      local_34 = 
      L"뗿ﰤ\xffffѨ奅贀Ვ￼诿ꑅ哨\xe760诿Ვ￼跿₅￼\xe8ffᐿ￧뗿ﰠ\xffff౨奅贀\xe045ֺ"
      ;
      FUN_00642c50(0x3e2,&local_3e0);
      local_34 = local_3e0;
      local_38 = &DAT_00594504;
      local_3c = (undefined *)0x593d84;
      FUN_00409dd8(local_68[2],&local_3e8);
      local_3c = (undefined *)0x593d95;
      FUN_004051d4(&local_3e4,local_3e8);
      local_3c = local_3e4;
      local_40 = &DAT_0059450c;
      local_44 = 0x593dad;
      FUN_00405330(&local_24,5);
    }
    if (0 < local_68[3]) {
      local_30 = local_24;
      local_34 = 
      L"뗿ﰘ\xffffѨ奅贀႕￼诿ꡅ裡\xe75f诿႕￼跿ᒅ￼\xe8ffᏤ￧뗿ﰔ\xffff౨奅贀\xe045ֺ"
      ;
      FUN_00642c50(0x3e3,&local_3ec);
      local_34 = local_3ec;
      local_38 = &DAT_00594504;
      local_3c = (undefined *)0x593ddf;
      FUN_00409dd8(local_68[3],&local_3f4);
      local_3c = (undefined *)0x593df0;
      FUN_004051d4(&local_3f0,local_3f4);
      local_3c = local_3f0;
      local_40 = &DAT_0059450c;
      local_44 = 0x593e08;
      FUN_00405330(&local_24,5);
    }
  }
  if ((PTR_DAT_0066ac78[0x172] != '\0') && (0 < (int)local_38)) {
    if (0 < unaff_EBX) {
      local_30 = local_24;
      local_34 = 
      L"뗿ﰌ\xffffѨ奅贀ҕ￼诿\xec45苨\xe75f诿ҕ￼跿ࢅ￼\xe8ff፭￧뗿ﰈ\xffff౨奅贀\xe045ֺ"
      ;
      FUN_00642c50(0xdf,&local_3f8);
      local_34 = local_3f8;
      local_38 = &DAT_00594504;
      local_3c = (undefined *)0x593e56;
      FUN_00409dd8(unaff_EBX,&local_400);
      local_3c = (undefined *)0x593e67;
      FUN_004051d4(&local_3fc,local_400);
      local_3c = local_3fc;
      local_40 = &DAT_0059450c;
      local_44 = 0x593e7f;
      FUN_00405330(&local_24,5);
    }
    if (0 < local_14) {
      local_30 = local_24;
      local_34 = 
      L"뗿ﰀ\xffffѨ奅贀\xf895\xfffb诿\xf045⟨\xe75f诿\xf895\xfffb跿ﲅ\xfffb\xe8ffጒ￧뗿ﯼ\xffff౨奅贀\xe045ֺ"
      ;
      FUN_00642c50(0xdd,&local_404);
      local_34 = local_404;
      local_38 = &DAT_00594504;
      local_3c = (undefined *)0x593eb1;
      FUN_00409dd8(local_14,&local_40c);
      local_3c = (undefined *)0x593ec2;
      FUN_004051d4(&local_408,local_40c);
      local_3c = local_408;
      local_40 = &DAT_0059450c;
      local_44 = 0x593eda;
      FUN_00405330(&local_24,5);
    }
  }
  if (((PTR_DAT_0066ac78[0x171] != '\0') && (PTR_DAT_0066ac78[0x172] != '\0')) && (0 < unaff_EDI)) {
    local_30 = local_24;
    local_34 = 
    L"뗿ﯴ\xffffѨ奅贀\xec95\xfffb诿\xe8c3庰￧開ﯬ\xffff薍ﯰ\xffff鯨\xe712\xffff\xf0b5\xfffb棿䔌Y䖍뫠\x05"
    ;
    FUN_00642c50(0x3e5,&local_410);
    local_34 = local_410;
    local_38 = &DAT_00594504;
    local_3c = (undefined *)0x593f28;
    FUN_00409dd8(unaff_EDI,&local_418);
    local_3c = (undefined *)0x593f39;
    FUN_004051d4(&local_414,local_418);
    local_3c = local_414;
    local_40 = &DAT_0059450c;
    local_44 = 0x593f51;
    FUN_00405330(&local_24,5);
  }
  if (((PTR_DAT_0066ac78[0x171] != '\0') && (PTR_DAT_0066ac78[0x172] != '\0')) && (0 < unaff_ESI)) {
    local_30 = local_24;
    local_34 = 
    L"뗿ﯨ\xffffѨ奅贀\xe095\xfffb诿\xe8c3帹￧開ﯠ\xffff薍ﯤ\xffffⓨ\xe712\xffff\xe4b5\xfffb棿䔌Y䖍뫠\x05"
    ;
    FUN_00642c50(0x3e4,&local_41c);
    local_34 = local_41c;
    local_38 = &DAT_00594504;
    local_3c = (undefined *)0x593f9f;
    FUN_00409dd8(unaff_ESI,&local_424);
    local_3c = (undefined *)0x593fb0;
    FUN_004051d4(&local_420,local_424);
    local_3c = local_420;
    local_40 = &DAT_0059450c;
    local_44 = 0x593fc8;
    FUN_00405330(&local_24,5);
  }
  if (0 < (int)local_50[1]) {
    local_30 = local_24;
    local_34 = (wchar_t *)0x593fe5;
    FUN_00642c50(0x155,&local_428);
    local_34 = local_428;
    local_38 = &DAT_00594518;
    local_3c = (undefined *)0x594000;
    FUN_00642c50(0x23,&local_42c);
    local_3c = local_42c;
    local_40 = &DAT_00594504;
    local_44 = 0x594019;
    FUN_00409dd8(local_50[1],&local_434);
    local_44 = 0x59402a;
    FUN_004051d4(&local_430,local_434);
    local_44 = local_430;
    local_50[2] = &DAT_00594520;
    local_50[1] = (undefined *)0x594042;
    FUN_00405330(&local_24,7);
    if (0 < (int)local_50[1]) {
      local_10 = 0;
      piVar4 = local_394;
      do {
        if (0 < *piVar4) {
          local_50[1] = local_24;
          local_50[0] = (undefined *)0x594069;
          FUN_00645c68(local_10,&local_438);
          local_50[0] = local_438;
          local_54 = &DAT_00594504;
          local_68[4] = 0x594081;
          FUN_00409dd8(*piVar4,&local_440);
          local_68[4] = 0x594092;
          FUN_004051d4(&local_43c,local_440);
          local_68[4] = local_43c;
          local_68[3] = 0x5940a5;
          FUN_00405330(&local_24,4);
        }
        local_10 = local_10 + 1;
        piVar4 = piVar4 + 1;
      } while (local_10 != 0xcb);
    }
    local_50[1] = local_24;
    local_50[0] = &DAT_0059452c;
    local_54 = &DAT_0059450c;
    local_68[4] = 0x5940ce;
    FUN_00405330(&local_24,3);
  }
  if (0 < (int)local_50[2]) {
    local_30 = local_24;
    local_34 = (wchar_t *)0x5940e7;
    FUN_00642c50(0x156,&local_444);
    local_34 = local_444;
    local_38 = &DAT_00594504;
    local_3c = (undefined *)0x594100;
    FUN_00409dd8(local_50[2],&local_44c);
    local_3c = (undefined *)0x594111;
    FUN_004051d4(&local_448,local_44c);
    local_3c = local_448;
    local_40 = &DAT_0059450c;
    local_44 = 0x594129;
    FUN_00405330(&local_24,5);
  }
  if (0 < local_44) {
    local_30 = local_24;
    local_34 = L"Estadual:";
    local_38 = (undefined *)0x594145;
    FUN_00409dd8(local_44,&local_454);
    local_38 = (undefined *)0x594156;
    FUN_004051d4(&local_450,local_454);
    local_38 = local_450;
    local_3c = &DAT_0059450c;
    local_40 = (undefined *)0x59416e;
    FUN_00405330(&local_24,4);
  }
  if (0 < local_68[4]) {
    local_30 = local_24;
    local_34 = L"뗿ﮬ\xffffᡨ奅贀ꢕ\xfffb룿$";
    FUN_00642c50(0x155,&local_458);
    local_34 = local_458;
    local_38 = &DAT_00594518;
    local_3c = (undefined *)0x5941a2;
    FUN_00642c50(0x24,&local_45c);
    local_3c = local_45c;
    local_40 = &DAT_00594504;
    local_44 = 0x5941bb;
    FUN_00409dd8(local_68[4],&local_464);
    local_44 = 0x5941cc;
    FUN_004051d4(&local_460,local_464);
    local_44 = local_460;
    local_50[2] = &DAT_0059450c;
    local_50[1] = (undefined1 *)0x5941e4;
    FUN_00405330(&local_24,7);
  }
  if (0 < (int)local_54) {
    local_30 = local_24;
    local_34 = L"뗿ﮜ\xffffᡨ奅贀颕\xfffb룿%";
    FUN_00642c50(0x155,&local_468);
    local_34 = local_468;
    local_38 = &DAT_00594518;
    local_3c = (undefined *)0x594218;
    FUN_00642c50(0x25,&local_46c);
    local_3c = local_46c;
    local_40 = &DAT_00594504;
    local_44 = 0x594231;
    FUN_00409dd8(local_54,&local_474);
    local_44 = 0x594242;
    FUN_004051d4(&local_470,local_474);
    local_44 = local_470;
    local_50[2] = &DAT_0059450c;
    local_50[1] = (undefined1 *)0x59425a;
    FUN_00405330(&local_24,7);
  }
  if (0 < (int)local_50[0]) {
    local_30 = local_24;
    local_34 = L"뗿ﮌ\xffffᡨ奅贀袕\xfffb룿&";
    FUN_00642c50(0x155,&local_478);
    local_34 = local_478;
    local_38 = &DAT_00594518;
    local_3c = (undefined *)0x59428e;
    FUN_00642c50(0x26,&local_47c);
    local_3c = local_47c;
    local_40 = &DAT_00594504;
    local_44 = 0x5942a7;
    FUN_00409dd8(local_50[0],&local_484);
    local_44 = 0x5942b8;
    FUN_004051d4(&local_480,local_484);
    local_44 = local_480;
    local_50[2] = &DAT_0059450c;
    local_50[1] = (undefined1 *)0x5942d0;
    FUN_00405330(&local_24,7);
  }
  local_30 = (undefined1 *)0x5942db;
  FUN_0040502c(0,local_24);
  puVar2 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_005944f7;
  local_28 = (undefined1 *)0x5942f3;
  FUN_004048d4(&local_484,local_2c,puVar2);
  local_28 = (undefined1 *)0x594303;
  FUN_00405008(&local_480,3);
  local_28 = (undefined1 *)0x59430e;
  FUN_004048d4(&local_474);
  local_28 = (undefined1 *)0x59431e;
  FUN_00405008(&local_470,3);
  local_28 = (undefined1 *)0x594329;
  FUN_004048d4(&local_464);
  local_28 = (undefined1 *)0x594339;
  FUN_00405008(&local_460,3);
  local_28 = (undefined1 *)0x594344;
  FUN_004048d4(&local_454);
  local_28 = (undefined1 *)0x59434f;
  FUN_00404ff0(&local_450);
  local_28 = (undefined1 *)0x59435a;
  FUN_004048d4(&local_44c);
  local_28 = (undefined1 *)0x59436a;
  FUN_00405008(&local_448,2);
  local_28 = (undefined1 *)0x594375;
  FUN_004048d4(&local_440);
  local_28 = (undefined1 *)0x594385;
  FUN_00405008(&local_43c,2);
  local_28 = (undefined1 *)0x594390;
  FUN_004048d4(&local_434);
  local_28 = (undefined1 *)0x5943a0;
  FUN_00405008(&local_430,3);
  local_28 = (undefined1 *)0x5943ab;
  FUN_004048d4(&local_424);
  local_28 = (undefined1 *)0x5943bb;
  FUN_00405008(&local_420,2);
  local_28 = (undefined1 *)0x5943c6;
  FUN_004048d4(&local_418);
  local_28 = (undefined1 *)0x5943d6;
  FUN_00405008(&local_414,2);
  local_28 = (undefined1 *)0x5943e1;
  FUN_004048d4(&local_40c);
  local_28 = (undefined1 *)0x5943f1;
  FUN_00405008(&local_408,2);
  local_28 = (undefined1 *)0x5943fc;
  FUN_004048d4(&local_400);
  local_28 = (undefined1 *)0x59440c;
  FUN_00405008(&local_3fc,2);
  local_28 = (undefined1 *)0x594417;
  FUN_004048d4(&local_3f4);
  local_28 = (undefined1 *)0x594427;
  FUN_00405008(&local_3f0,2);
  local_28 = (undefined1 *)0x594432;
  FUN_004048d4(&local_3e8);
  local_28 = (undefined1 *)0x594442;
  FUN_00405008(&local_3e4,2);
  local_28 = (undefined1 *)0x59444d;
  FUN_004048d4(&local_3dc);
  local_28 = (undefined1 *)0x59445d;
  FUN_00405008(&local_3d8,2);
  local_28 = (undefined1 *)0x594468;
  FUN_004048d4(&local_3d0);
  local_28 = (undefined1 *)0x594478;
  FUN_00405008(&local_3cc,2);
  local_28 = (undefined1 *)0x594483;
  FUN_004048d4(&local_3c4);
  local_28 = (undefined1 *)0x594493;
  FUN_00405008(&local_3c0,2);
  local_28 = (undefined1 *)0x59449e;
  FUN_004048d4(&local_3b8);
  local_28 = (undefined1 *)0x5944ae;
  FUN_00405008(&local_3b4,2);
  local_28 = (undefined1 *)0x5944b9;
  FUN_004048d4(&local_3ac);
  local_28 = (undefined1 *)0x5944c9;
  FUN_00405008(&local_3a8,2);
  local_28 = (undefined1 *)0x5944d4;
  FUN_004048d4(&local_3a0);
  local_28 = (undefined1 *)0x5944e4;
  FUN_00405008(&local_39c,2);
  local_28 = (undefined1 *)0x5944ec;
  FUN_00404ff0(&local_24);
  return;
}

