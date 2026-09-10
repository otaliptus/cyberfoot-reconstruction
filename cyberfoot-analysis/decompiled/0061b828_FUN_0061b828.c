// Address: 0061b828
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061b828(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [44];
  undefined1 local_5c [16];
  undefined4 uStack_4c;
  wchar_t *pwStack_48;
  undefined *local_44;
  undefined1 *puStack_40;
  undefined *puStack_3c;
  undefined1 *puStack_34;
  wchar_t *pwStack_30;
  undefined *local_2c;
  wchar_t *local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int iVar8;
  int local_c;
  
  puVar3 = PTR_DAT_0066ac7c;
  local_1c = &stack0xfffffffc;
  iVar7 = 0x14;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = &LAB_0061bf9d;
  local_24 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (wchar_t *)0x61b85b;
  FUN_00404ff0(&stack0xffffffe8);
  local_28 = L"ҍ譛謗쉴欔濆ᖋ뎸fኋ䒋ࢂᒍ譛㬏텄甄윐\xf845\x01";
  thunk_FUN_0040502c(&local_24,L"#DFDF00");
  iVar7 = *(int *)(*(int *)puVar3 + 0x14 + param_2 * 0x18);
  if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar7 * 0x1bc) ==
      *(int *)(*(int *)puVar3 + 4 + param_2 * 0x18)) {
    local_c = 1;
    iVar8 = 2;
  }
  else {
    local_c = 2;
    iVar8 = 1;
  }
  local_28 = (wchar_t *)0x61b8b1;
  FUN_00404ff0(&local_1c);
  iVar1 = *(int *)(*(int *)puVar3 + param_2 * 0x18);
  if (((iVar1 == 4) || (iVar1 == 0xe)) || (iVar1 == 0xf)) {
    local_28 = (wchar_t *)0x61b8d5;
    thunk_FUN_0040502c(&local_1c,L"i_gol");
  }
  if ((*(int *)(*(int *)puVar3 + param_2 * 0x18) == 8) ||
     (*(int *)(*(int *)puVar3 + param_2 * 0x18) == 0x10)) {
    local_28 = (wchar_t *)0x61b8f8;
    thunk_FUN_0040502c(&local_1c,L"i_golv");
  }
  if (*(int *)(*(int *)puVar3 + param_2 * 0x18) == 0xd) {
    if (*(int *)(*(int *)puVar3 + 0xc + param_2 * 0x18) == 1) {
      local_28 = (wchar_t *)0x61b91c;
      thunk_FUN_0040502c(&local_1c,L"i_ca");
    }
    else if (*(int *)(*(int *)puVar3 + 0xc + param_2 * 0x18) == 2) {
      local_28 = (wchar_t *)0x61b937;
      thunk_FUN_0040502c(&local_1c,L"i_cv");
    }
    else if (*(int *)(*(int *)puVar3 + 0xc + param_2 * 0x18) == 3) {
      local_28 = (wchar_t *)0x61b952;
      thunk_FUN_0040502c(&local_1c,L"i_cacv");
    }
  }
  if (*(int *)(*(int *)puVar3 + param_2 * 0x18) == 0x12) {
    local_28 = (wchar_t *)0x61b96a;
    thunk_FUN_0040502c(&local_1c,L"i_ct");
  }
  iVar1 = *(int *)(*(int *)puVar3 + param_2 * 0x18);
  if ((iVar1 == 0x13) || (iVar1 == 0x14)) {
    local_28 = L"좡暶耀8蔏\xa0";
    thunk_FUN_0040502c(&local_1c,L"i_sub");
  }
  if ((*PTR_DAT_0066b6c8 == '\0') && (PTR_DAT_0066ac78[0xdc] != '\0')) {
    if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                 *(int *)(*(int *)PTR_DAT_0066b3b8 + iVar7 * 0x1bc + 4 + local_c * 4) * 0x2f8) ==
        '\0') {
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                    *(int *)(*(int *)PTR_DAT_0066b3b8 + iVar7 * 0x1bc + 4 + iVar8 * 4) * 0x2f8) !=
           '\0') &&
         (((iVar8 = *(int *)(*(int *)puVar3 + param_2 * 0x18), iVar8 == 4 || (iVar8 == 0xe)) ||
          (iVar8 == 8)))) {
        local_28 = (wchar_t *)0x61ba37;
        FUN_0055d080("goladv");
      }
    }
    else {
      iVar8 = *(int *)(*(int *)puVar3 + param_2 * 0x18);
      if (((iVar8 == 4) || (iVar8 == 0xe)) || (iVar8 == 8)) {
        local_28 = (wchar_t *)0x61b9ef;
        FUN_0055d080(&DAT_0061c040);
      }
    }
  }
  local_28 = (wchar_t *)0x61ba4e;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + iVar7 * 0x1bc),&local_28);
  pwVar5 = local_28;
  local_28 = (wchar_t *)0x61ba5e;
  FUN_00466238(*(undefined4 *)(DAT_006d4774 + iVar7 * 4),pwVar5);
  local_28 = L"喋ꇘ䝸mҋ\xe8b0Ꭓ￤ҍ譛謗쉄\xe810揝\x03䖉跰嬄ឋҋ菂ᏸॴ\xf883༔蚅";
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + iVar7 * 0x1bc),&local_2c);
  local_28 = L"ҍ譛謗쉄\xe810揝\x03䖉跰嬄ឋҋ菂ᏸॴ\xf883༔蚅";
  FUN_00466238(*(undefined4 *)(DAT_006d4778 + iVar7 * 4),local_2c);
  local_28 = L"䖉跰嬄ឋҋ菂ᏸॴ\xf883༔蚅";
  uVar6 = FUN_00651e70(*(undefined4 *)(*(int *)puVar3 + 0x10 + param_2 * 0x18));
  iVar8 = *(int *)(*(int *)puVar3 + param_2 * 0x18);
  if ((iVar8 == 0x13) || (iVar8 == 0x14)) {
    local_28 = (wchar_t *)0x61bab9;
    FUN_004030d4(&local_44,&DAT_0061c054);
    local_28 = (wchar_t *)0x61bad8;
    FUN_004030a4(&local_44,
                 *(int *)PTR_DAT_0066b5b8 + *(int *)(*(int *)puVar3 + 8 + param_2 * 0x18) * 0x130,
                 0x15);
    local_28 = (wchar_t *)0x61bae3;
    FUN_004030d4(local_5c,&local_44);
    local_28 = (wchar_t *)0x61baf2;
    FUN_004030a4(local_5c,&DAT_0061c058,0x17);
    local_28 = (wchar_t *)0x61bb00;
    FUN_004030d4(local_88,local_5c);
    local_28 = (wchar_t *)0x61bb22;
    FUN_004030a4(local_88,*(int *)PTR_DAT_0066b5b8 +
                          *(int *)(*(int *)puVar3 + 0xc + param_2 * 0x18) * 0x130,0x2b);
    local_28 = (wchar_t *)0x61bb30;
    FUN_00405194(&stack0xffffffe8,local_88);
  }
  else {
    local_28 = L"ҍ譛茗숼甈Ｋ\xec75恨懀贀碕\xffff룿Ǿ";
    FUN_00405194(&stack0xffffffe8,
                 *(int *)PTR_DAT_0066b5b8 + *(int *)(*(int *)puVar3 + 8 + param_2 * 0x18) * 0x130);
  }
  if (*(int *)(*(int *)puVar3 + param_2 * 0x18) == 8) {
    local_2c = &DAT_0061c060;
    pwStack_30 = L"뗿ｸ\xffff䖍뫬\x03";
    FUN_00642c50(0x1fe,&local_8c);
    pwStack_30 = (wchar_t *)local_8c;
    puStack_34 = (undefined1 *)0x61bb85;
    FUN_00405330(&stack0xffffffe8,3);
  }
  if (*(int *)(*(int *)puVar3 + param_2 * 0x18) == 0xe) {
    local_2c = &DAT_0061c060;
    pwStack_30 = L"뗿ｴ\xffff䖍뫬\x03";
    FUN_00642c50(0x200,&local_90);
    pwStack_30 = (wchar_t *)local_90;
    puStack_34 = (undefined1 *)0x61bbbb;
    FUN_00405330(&stack0xffffffe8,3);
  }
  if (*(int *)(*(int *)puVar3 + param_2 * 0x18) == 0xf) {
    local_2c = &DAT_0061c060;
    pwStack_30 = L"뗿ｰ\xffff䖍뫬\x03";
    FUN_00642c50(0x1ff,&local_94);
    pwStack_30 = (wchar_t *)local_94;
    puStack_34 = (undefined1 *)0x61bbf1;
    FUN_00405330(&stack0xffffffe8,3);
  }
  if (*(int *)(*(int *)puVar3 + param_2 * 0x18) == 0x10) {
    local_2c = &DAT_0061c060;
    pwStack_30 = L"뗿ｬ\xffff䖍뫬\x03";
    FUN_00642c50(0x201,&local_98);
    pwStack_30 = (wchar_t *)local_98;
    puStack_34 = (undefined1 *)0x61bc27;
    FUN_00405330(&stack0xffffffe8,3);
  }
  local_28 = (wchar_t *)0x61bc2f;
  FUN_00404ff0(&local_20);
  if (local_c == 1) {
    local_28 = L"ҍ譛謗숄\xf883眔詸岀憼＀蔤뱱a";
    thunk_FUN_0040502c(&local_20,&DAT_0061c068);
  }
  switch(*(undefined4 *)(*(int *)puVar3 + param_2 * 0x18)) {
  case 4:
  case 0xe:
  case 0xf:
  case 0x13:
    local_28 = (wchar_t *)0x61bcc7;
    thunk_FUN_0040502c(&local_24,L"clwhite");
    break;
  case 0xd:
    if (*(int *)(*(int *)puVar3 + 0xc + param_2 * 0x18) == 1) {
      local_28 = (wchar_t *)0x61bc9a;
      thunk_FUN_0040502c(&local_24,L"clyellow");
    }
    else {
      local_28 = (wchar_t *)0x61bca9;
      thunk_FUN_0040502c(&local_24,L"clred");
    }
    break;
  case 0x12:
  case 0x14:
    local_28 = (wchar_t *)0x61bcb8;
    thunk_FUN_0040502c(&local_24,L"clred");
  }
  local_28 = L"<FONT color=\"";
  local_2c = local_24;
  pwStack_30 = L"\"  size=\"11\" face=\"Arial\"><shad>";
  puStack_34 = local_20;
  puStack_3c = &DAT_0061c060;
  puStack_40 = (undefined1 *)0x61bced;
  FUN_00409dd8(uVar6,&local_a4);
  puStack_40 = (undefined1 *)0x61bcfe;
  FUN_004051d4(&local_a0,local_a4);
  puStack_40 = (undefined1 *)local_a0;
  local_44 = &DAT_0061c118;
  pwStack_48 = L"</shad></font>";
  uStack_4c = 0x61bd1e;
  FUN_00405330(&local_9c,9);
  uStack_4c = 0x61bd31;
  FUN_00545088(*(undefined4 *)(DAT_006d4784 + iVar7 * 4),local_9c);
  uStack_4c = 0x61bd40;
  FUN_0043aa68(*(undefined4 *)(DAT_006d492c + iVar7 * 4),0);
  switch(*(undefined4 *)(*(int *)puVar3 + param_2 * 0x18)) {
  case 4:
  case 0xe:
  case 0xf:
    piVar2 = *(int **)(*(int *)(DAT_006d492c + iVar7 * 4) + 0x168);
    uStack_4c = 0x61bda4;
    (**(code **)(*piVar2 + 8))(piVar2,DAT_006d48f8);
    break;
  case 8:
  case 0x10:
    piVar2 = *(int **)(*(int *)(DAT_006d492c + iVar7 * 4) + 0x168);
    uStack_4c = 0x61bdc2;
    (**(code **)(*piVar2 + 8))(piVar2,DAT_006d48fc);
    break;
  case 0xd:
    if (*(int *)(*(int *)puVar3 + 0xc + param_2 * 0x18) == 1) {
      piVar2 = *(int **)(*(int *)(DAT_006d492c + iVar7 * 4) + 0x168);
      uStack_4c = 0x61bdec;
      (**(code **)(*piVar2 + 8))(piVar2,DAT_006d4900);
    }
    else if (*(int *)(*(int *)puVar3 + 0xc + param_2 * 0x18) == 2) {
      piVar2 = *(int **)(*(int *)(DAT_006d492c + iVar7 * 4) + 0x168);
      uStack_4c = 0x61be13;
      (**(code **)(*piVar2 + 8))(piVar2,DAT_006d4904);
    }
    else {
      piVar2 = *(int **)(*(int *)(DAT_006d492c + iVar7 * 4) + 0x168);
      uStack_4c = 0x61be2e;
      (**(code **)(*piVar2 + 8))(piVar2,DAT_006d490c);
    }
    break;
  case 0x12:
    piVar2 = *(int **)(*(int *)(DAT_006d492c + iVar7 * 4) + 0x168);
    uStack_4c = 0x61be49;
    (**(code **)(*piVar2 + 8))(piVar2,DAT_006d4908);
    break;
  case 0x13:
  case 0x14:
    piVar2 = *(int **)(*(int *)(DAT_006d492c + iVar7 * 4) + 0x168);
    uStack_4c = 0x61be64;
    (**(code **)(*piVar2 + 8))(piVar2,DAT_006d4910);
  }
  uStack_4c = 0x61be70;
  FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
  if ((((*PTR_DAT_0066b6c8 == '\0') && (*(int *)(*(int *)puVar3 + param_2 * 0x18) == 0xd)) &&
      (1 < *(int *)(*(int *)puVar3 + 0xc + param_2 * 0x18))) &&
     (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
               *(int *)(*(int *)puVar3 + 4 + param_2 * 0x18) * 0x2f8) != '\0')) {
    *(int *)PTR_DAT_0066ad84 = iVar7;
    if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar7 * 0x1bc) ==
        *(int *)(*(int *)puVar3 + 4 + param_2 * 0x18)) {
      *(undefined4 *)PTR_DAT_0066b5ec = 1;
    }
    else {
      *(undefined4 *)PTR_DAT_0066b5ec = 2;
    }
    uStack_4c = 0x61bf03;
    FUN_0043b234(*(undefined4 *)(param_1 + 0x300),0);
    uStack_4c = 0x61bf0f;
    FUN_0043b234(DAT_006d4918,0);
    if (PTR_DAT_0066ac78[0xdc] != '\0') {
      uStack_4c = 0x61bf27;
      FUN_0055d080("expulsao");
    }
    uStack_4c = 0x61bf3f;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_006004f8,PTR_DAT_0066b090);
    uStack_4c = 0x61bf4e;
    (**(code **)(**(int **)PTR_DAT_0066b090 + 0xec))();
  }
  uStack_4c = 0x61bf5a;
  FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
  puVar4 = puStack_40;
  *in_FS_OFFSET = pwStack_48;
  puStack_40 = &LAB_0061bfa4;
  local_44 = (undefined *)0x61bf72;
  FUN_004048d4(&local_a4,pwStack_48,puVar4);
  local_44 = (undefined *)0x61bf82;
  FUN_00405008(&local_a0,6);
  local_44 = (undefined *)0x61bf8f;
  FUN_004048f8(&local_2c,2);
  local_44 = (undefined *)0x61bf9c;
  FUN_00405008(&local_24,4);
  return;
}

