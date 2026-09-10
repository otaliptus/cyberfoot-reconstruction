// Address: 005a6660
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005a6660(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [52];
  undefined4 local_74;
  wchar_t *pwStack_70;
  undefined1 *puStack_6c;
  wchar_t *pwStack_68;
  wchar_t *pwStack_60;
  undefined4 uStack_5c;
  wchar_t *pwStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  wchar_t *pwStack_4c;
  undefined4 uStack_48;
  wchar_t *local_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  wchar_t *pwStack_38;
  undefined *puStack_34;
  wchar_t *pwStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  
  local_20 = &stack0xfffffffc;
  iVar3 = 0x19;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  uVar4 = 0;
  UNLOCK();
  local_24 = &LAB_005a6b8f;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x5a6692;
  FUN_00404ff0(&stack0xffffffec);
  local_2c = 0x5a669a;
  FUN_00404ff0(&stack0xffffffe8);
  local_2c = 0x5a66a2;
  FUN_00404ff0(&stack0xffffffe4);
  local_2c = 0x5a66aa;
  FUN_00404ff0(&local_20);
  local_2c = 0x5a66b2;
  FUN_00404ff0(&local_24);
  local_10 = 0;
  if (param_2 != 3) {
    local_2c = 0x5a66c8;
    FUN_00466128(DAT_006d259c,0);
  }
  if (param_2 != 1) {
    local_2c = 0x5a66d9;
    FUN_00466128(DAT_006d25a0,0);
  }
  if (param_2 == 3) {
    local_2c = 0x5a66ea;
    FUN_00466128(DAT_006d259c,1);
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    local_2c = 0x5a6700;
    iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    if (1 < iVar3) {
      local_2c = 0x5a670f;
      FUN_00466128(DAT_006d25a0,1);
    }
  }
  if (param_2 != 1) {
    param_4 = 0xffffffff;
  }
  if ((param_2 == 2) || (param_2 == 1)) {
    uVar4 = *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d2590 * 0x294);
  }
  if (param_2 == 3) {
    local_2c = 0;
    pwStack_30 = (wchar_t *)0x1;
    puStack_34 = (undefined *)0x5a6770;
    local_c = FUN_0064dee4(3,0xffffffff,0xffffffff);
  }
  else {
    local_2c = 0xffffffff;
    pwStack_30 = (wchar_t *)0xffffffff;
    puStack_34 = (undefined *)0x5a6758;
    local_c = FUN_0064dee4(param_2,uVar4,param_4);
  }
  local_2c = 0x5a6786;
  FUN_00533bc0(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x22c),0);
  *(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x23c) = *(undefined4 *)(param_1 + 0x304);
  local_2c = 0x5a67a4;
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b058);
  if (0 < iVar3) {
    local_2c = 0x5a67b8;
    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b058);
    if (-1 < iVar3) {
      do {
        if ((*(int *)(*(int *)PTR_DAT_0066b058 + 4 + iVar3 * 0x14) == local_c) &&
           (*(int *)(*(int *)PTR_DAT_0066b058 + 0xc + iVar3 * 0x14) == 1)) {
          local_10 = local_10 + 0x14;
          local_2c = 0x5a67fa;
          FUN_00404ff0(&stack0xffffffe8);
          local_2c = 0x5a6802;
          FUN_00404ff0(&stack0xffffffe4);
          local_2c = 0x5a680a;
          FUN_00404ff0(&local_20);
          local_2c = 0x5a6812;
          FUN_00404ff0(&local_24);
          if (-1 < *(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + iVar3 * 0x14)) {
            local_2c = 0x5a682f;
            iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718);
            if (*(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + iVar3 * 0x14) < iVar2) {
              local_2c = 0x5a6862;
              FUN_00405194(&local_20,
                           *(int *)PTR_DAT_0066b718 +
                           *(int *)(*(int *)PTR_DAT_0066b058 + 0x10 + iVar3 * 0x14) * 0x80);
            }
          }
          local_2c = 0x5a6874;
          iVar2 = FUN_006575ac(local_c,*(undefined4 *)(*(int *)PTR_DAT_0066b058 + iVar3 * 0x14));
          if (-1 < iVar2) {
            local_2c = 0x5a68ab;
            FUN_004030d4(&local_44,
                         *(int *)PTR_DAT_0066b5b8 +
                         *(int *)(*(int *)PTR_DAT_0066b560 + 0xc + iVar2 * 0x1c) * 0x130);
            local_2c = 0x5a68ba;
            FUN_004030a4(&local_44,&DAT_005a6ba4,0x16);
            local_2c = 0x5a68c5;
            FUN_004030d4(&local_74,&local_44);
            local_2c = 0x5a68f1;
            FUN_004030a4(&local_74,
                         *(int *)PTR_DAT_0066af70 +
                         *(int *)(*(int *)PTR_DAT_0066b560 + 8 + iVar2 * 0x1c) * 0x2f8,0x2f);
            local_2c = 0x5a68ff;
            FUN_004030d4(local_a8,&local_74);
            local_2c = 0x5a6911;
            FUN_004030a4(local_a8,&DAT_005a6ba8,0x33);
            local_2c = 0x5a691f;
            FUN_00404b48(&local_2c,local_a8);
            pwStack_30 = L"뗿ｘ\xffff롨婫栀毄Z䖍뫜\x04";
            FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b560 + 0x14 + iVar2 * 0x1c),&local_ac);
            pwStack_30 = (wchar_t *)local_ac;
            puStack_34 = &DAT_005a6bb8;
            pwStack_38 = L"潧獬";
            puStack_3c = (undefined4 *)0x5a6960;
            FUN_00404c64(&local_28,4);
            local_2c = 0x5a696b;
            FUN_004051d4(&stack0xffffffe4,local_28);
          }
          pwStack_30 = L"<FONT color=\"#008040\">";
          puStack_34 = (undefined *)0x5a6990;
          FUN_00409dd8(*(int *)(*(int *)PTR_DAT_0066b058 + iVar3 * 0x14) + *(int *)PTR_DAT_0066b7c4,
                       &local_b4);
          puStack_34 = (undefined *)0x5a69a1;
          FUN_004051d4(&local_b0,local_b4);
          puStack_34 = (undefined *)local_b0;
          pwStack_38 = L"<IND x=\"38\"><IMG src=\"";
          puStack_3c = &local_bc;
          uStack_40 = 0x5a69ca;
          FUN_005a6d08(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b058 + 8 + iVar3 * 0x14),1);
          uStack_40 = 0x5a69db;
          FUN_004051d4(&local_b8,local_bc);
          uStack_40 = local_b8;
          local_44 = L"\"<IND x=\"45\">";
          uStack_48 = 0x5a6a09;
          FUN_00405194(&local_c0,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b058 + 8 + iVar3 * 0x14) * 0x2f8);
          uStack_48 = local_c0;
          pwStack_4c = L"<IND x=\"185\"><IMG src=\"";
          puStack_50 = &local_c8;
          uStack_54 = 0x5a6a32;
          FUN_005a6d08(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b058 + 0x1c + iVar3 * 0x14),2);
          uStack_54 = 0x5a6a43;
          FUN_004051d4(&local_c4,local_c8);
          uStack_54 = local_c4;
          pwStack_58 = L"\"><IND x=\"192\">";
          uStack_5c = 0x5a6a71;
          FUN_00405194(&local_cc,
                       *(int *)PTR_DAT_0066af70 +
                       *(int *)(*(int *)PTR_DAT_0066b058 + 0x1c + iVar3 * 0x14) * 0x2f8);
          uStack_5c = local_cc;
          pwStack_60 = L"<IND x=\"330\">";
          pwStack_68 = L"<IND x=\"580\">";
          puStack_6c = local_20;
          pwStack_70 = L"</FONT><br>";
          local_74 = 0x5a6a99;
          FUN_00405330(&stack0xffffffec,0x10);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  if (200 < local_10) {
    local_2c = 0x5a6abd;
    FUN_004659e8(*(undefined4 *)(param_1 + 0x30c),local_10 + 0x28);
  }
  local_2c = 0x5a6ada;
  FUN_0047eea0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x20c),
               *(int *)(*(int *)(param_1 + 0x30c) + 0x4c) + 2);
  local_2c = 0x5a6ae8;
  FUN_00404b6c(&local_d0,unaff_EBX);
  local_2c = 0x5a6aff;
  FUN_00533bc0(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x22c),local_d0);
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005a6b99;
  local_24 = (undefined1 *)0x5a6b17;
  FUN_004048d4(&local_d0,local_28,puVar1);
  local_24 = (undefined1 *)0x5a6b22;
  FUN_00404ff0(&local_cc);
  local_24 = (undefined1 *)0x5a6b2d;
  FUN_004048d4(&local_c8);
  local_24 = (undefined1 *)0x5a6b3d;
  FUN_00405008(&local_c4,2);
  local_24 = (undefined1 *)0x5a6b48;
  FUN_004048d4(&local_bc);
  local_24 = (undefined1 *)0x5a6b53;
  FUN_00404ff0(&local_b8);
  local_24 = (undefined1 *)0x5a6b5e;
  FUN_004048d4(&local_b4);
  local_24 = (undefined1 *)0x5a6b69;
  FUN_00404ff0(&local_b0);
  local_24 = (undefined1 *)0x5a6b74;
  FUN_004048d4(&local_ac);
  local_24 = (undefined1 *)0x5a6b81;
  FUN_004048f8(&local_2c,2);
  local_24 = (undefined1 *)0x5a6b8e;
  FUN_00405008(&local_24,5);
  return;
}

