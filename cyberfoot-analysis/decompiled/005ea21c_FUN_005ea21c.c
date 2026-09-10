// Address: 005ea21c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ea21c(undefined4 param_1,int param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  wchar_t *pwStack_60;
  undefined4 uStack_5c;
  wchar_t *pwStack_58;
  undefined *puStack_50;
  undefined *local_4c;
  wchar_t *local_48;
  undefined4 *local_44;
  int local_40;
  wchar_t *local_3c;
  undefined **local_38;
  undefined4 *local_34;
  undefined4 **local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  int *local_24;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_24 = (int *)&stack0xfffffffc;
  local_14 = 8;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while ((undefined4 *)local_14 != (undefined4 *)0x0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_005ea5c7;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = (undefined4 **)0x5ea251;
  local_8 = local_14;
  local_24 = (int *)FUN_00403a54(PTR_PTR_0041bda0,1);
  local_30 = (undefined4 **)0x5ea26a;
  FUN_00405194(&local_c,*(undefined4 *)PTR_DAT_0066b5b8);
  local_30 = (undefined4 **)0x5ea272;
  FUN_00404ff0(&local_14);
  local_30 = (undefined4 **)0x5ea27a;
  FUN_00404ff0(&stack0xffffffe8);
  local_30 = (undefined4 **)0x5ea282;
  FUN_00404ff0(&local_8);
  local_30 = (undefined4 **)0x5ea28d;
  FUN_00404b6c(&local_2c,local_c);
  local_30 = (undefined4 **)0x5ea2a0;
  iVar2 = FUN_0042b3e4(*(undefined4 *)(DAT_006d3588 + 0x160),local_2c);
  if (iVar2 < 0x9c) {
    local_30 = (undefined4 **)0x5ea2b2;
    thunk_FUN_0040502c(&local_8,local_c);
  }
  else {
    local_30 = (undefined4 **)0x5ea2c1;
    iVar2 = FUN_00405574(&DAT_005ea5dc,local_c);
    if (iVar2 == 0) {
      local_30 = (undefined4 **)0x5ea2d5;
      thunk_FUN_0040502c(&local_8,local_c);
    }
    else {
      local_30 = &local_30;
      local_34 = (undefined4 *)0x5ea2e9;
      FUN_004053fc(local_c,0,iVar2 + -1);
      local_34 = (undefined4 *)&DAT_005ea5dc;
      local_38 = (undefined **)&local_34;
      local_3c = L"痿棐ꗤ^䖍뫼\x04";
      FUN_004053fc(local_c,iVar2 + 1,1);
      local_38 = (undefined **)local_34;
      local_3c = L".";
      local_40 = 0x5ea31b;
      FUN_00405330(&local_8,4);
    }
  }
  if (0 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54)) {
    local_30 = (undefined4 **)0x5ea340;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54),&local_3c);
    local_30 = (undefined4 **)0x5ea34d;
    FUN_00404bac(&local_3c,&DAT_005ea5f0);
    local_30 = (undefined4 **)0x5ea358;
    FUN_004051d4(&local_38,local_3c);
    local_30 = (undefined4 **)0x5ea366;
    FUN_004052cc(&local_8,local_38,local_8);
  }
  if (param_2 < 0xc) {
    local_30 = (undefined4 **)0x5ea38c;
    thunk_FUN_0040502c(&local_10,
                       *(undefined4 *)
                        (PTR_DAT_0066b6bc + *(int *)(&DAT_006d3668 + param_2 * 0x10) * 4 + -4));
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24) ==
        *(int *)(PTR_DAT_0066b734 + *(int *)(&DAT_006d3668 + param_2 * 0x10) * 0xc + -0xc)) {
      local_30 = (undefined4 **)0x5ea44a;
      FUN_004048d4((&DAT_006d34f4)[param_2] + 0x80);
    }
    else {
      local_30 = (undefined4 **)0x5ea3c2;
      thunk_FUN_0040502c(&local_14,L"<FONT color=\"#DFDF00\">");
      local_30 = (undefined4 **)0x5ea3cf;
      thunk_FUN_0040502c(&stack0xffffffe8,L"</font>");
      local_30 = *(undefined4 ***)(PTR_DAT_0066b660 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24) * 4)
      ;
      local_34 = (undefined4 *)&DAT_005ea5dc;
      local_38 = (undefined **)0x5ea3f9;
      FUN_00642c50(300,&local_44);
      local_38 = (undefined **)local_44;
      local_3c = L" ";
      local_40 = *(int *)(PTR_DAT_0066b6bc + *(int *)(&DAT_006d3668 + param_2 * 0x10) * 4 + -4);
      local_44 = (undefined **)0x5ea423;
      FUN_00405330(&local_40,5);
      local_30 = (undefined4 **)0x5ea437;
      FUN_00404b6c((&DAT_006d34f4)[param_2] + 0x80,local_40);
    }
    if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24) == 3) &&
       ((*(int *)(&DAT_006d3668 + param_2 * 0x10) == 10 ||
        (*(int *)(&DAT_006d3668 + param_2 * 0x10) == 0x11)))) {
      local_30 = (undefined4 **)0x5ea475;
      FUN_00404ff0(&local_14);
      local_30 = (undefined4 **)0x5ea47d;
      FUN_00404ff0(&stack0xffffffe8);
      local_30 = (undefined4 **)0x5ea48e;
      FUN_004048d4((&DAT_006d34f4)[param_2] + 0x80);
    }
  }
  else {
    local_30 = (undefined4 **)0x5ea4ad;
    thunk_FUN_0040502c(&local_10,
                       *(undefined4 *)
                        (PTR_DAT_0066b660 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24) * 4));
  }
  local_30 = (undefined4 **)&DAT_005ea644;
  local_34 = (undefined4 *)0x5ea4c9;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x78),&local_4c);
  local_34 = (undefined4 *)local_4c;
  local_38 = (undefined **)&DAT_005ea650;
  local_3c = (wchar_t *)0x5ea4de;
  FUN_00404c64(&local_48,3);
  local_3c = L"塨度＀\xf075痿棼Ꚕ^痿棴ꗜ^痿棨ꛄ^痿棬ꛘ^䖍뫜\n";
  FUN_004051d4(&stack0xffffffe4,local_48);
  local_3c = L"<P align=\"center\"><shad><B>";
  local_40 = local_14;
  local_44 = (undefined4 *)local_8;
  local_48 = L"</shad></B><BR><shad>";
  local_4c = local_10;
  puStack_50 = &DAT_005ea5dc;
  pwStack_58 = L"</shad>";
  pwStack_60 = L"</P>";
  puStack_64 = (undefined1 *)0x5ea51e;
  FUN_00405330(&local_28,10);
  puStack_64 = (undefined1 *)0x5ea52c;
  FUN_00545088((&DAT_006d34f4)[param_2],0);
  puStack_64 = (undefined1 *)0x5ea53b;
  FUN_00545088((&DAT_006d34f4)[param_2],local_28);
  puStack_64 = (undefined1 *)0x5ea543;
  (**(code **)(*local_24 + 0x44))();
  puStack_68 = &LAB_005ea563;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  puStack_64 = &stack0xfffffffc;
  FUN_00403a84(local_24);
  pwVar1 = pwStack_58;
  *in_FS_OFFSET = uStack_6c;
  *in_FS_OFFSET = pwStack_60;
  pwStack_58 = L"幟譛工Ã";
  uStack_5c = 0x5ea587;
  FUN_004048f8(&local_4c,2,pwVar1);
  uStack_5c = 0x5ea594;
  FUN_00405008(&local_44,2);
  uStack_5c = 0x5ea59c;
  FUN_004048d4(&local_3c);
  uStack_5c = 0x5ea5a9;
  FUN_00405008(&local_38,3);
  uStack_5c = 0x5ea5b1;
  FUN_004048d4(&local_2c);
  uStack_5c = 0x5ea5b9;
  FUN_00404ff0(&local_28);
  uStack_5c = 0x5ea5c6;
  FUN_00405008(&stack0xffffffe4,6);
  return;
}

