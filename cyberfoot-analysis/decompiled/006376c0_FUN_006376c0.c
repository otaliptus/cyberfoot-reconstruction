// Address: 006376c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006376c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined *puVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined *puVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined *puVar15;
  wchar_t *local_b4;
  wchar_t *local_b0;
  undefined *local_ac;
  undefined *local_a8;
  undefined1 *local_a4;
  wchar_t *local_a0;
  wchar_t *local_9c;
  undefined *local_98;
  wchar_t *local_94;
  undefined4 local_90;
  wchar_t *local_8c;
  undefined *local_88;
  wchar_t *local_84;
  wchar_t *local_80;
  wchar_t *local_7c;
  undefined *local_78;
  undefined *local_74;
  wchar_t *local_70;
  wchar_t *local_6c;
  wchar_t *local_68;
  wchar_t *local_64;
  wchar_t *local_60;
  wchar_t *local_5c;
  undefined *local_58;
  wchar_t *local_54;
  undefined *local_50;
  wchar_t *local_4c;
  wchar_t *local_48;
  wchar_t *local_44;
  wchar_t *local_40;
  wchar_t *local_3c;
  undefined *local_38;
  undefined *local_34;
  wchar_t *local_30;
  wchar_t *local_2c;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  local_1c = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  puVar16 = &stack0xfffffffc;
  puVar17 = &stack0xfffffffc;
  iVar2 = 0x16;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_20 = &LAB_00637ef8;
  local_24 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  FUN_00466128(*(undefined4 *)(param_1 + 0x3e0),0);
  FUN_00466128(*(undefined4 *)(param_1 + 0x3a0),1);
  FUN_00404ff0(&local_20);
  thunk_FUN_0040502c(&local_24,&DAT_00637f10);
  local_2c = (wchar_t *)0x637722;
  iVar2 = GetSystemMetrics(1);
  if (600 < iVar2) {
    thunk_FUN_0040502c(&local_20,L"<br>");
    thunk_FUN_0040502c(&local_24,&DAT_00637f2c);
  }
  FUN_00404ff0(&stack0xfffffff0);
  FUN_00404ff0(&stack0xffffffec);
  FUN_00404ff0(&stack0xffffffe8);
  FUN_00404ff0(&local_1c);
  FUN_00466128(*(undefined4 *)(param_1 + 0x378),1);
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + param_2 * 0x130) ==
      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + param_2 * 0x130)) {
    local_2c = (wchar_t *)&LAB_00637832;
    local_30 = (wchar_t *)*in_FS_OFFSET;
    *in_FS_OFFSET = &local_30;
    local_34 = (undefined *)0x637828;
    thunk_FUN_0040502c(&stack0xffffffec,
                       *(undefined4 *)
                        (PTR_DAT_0066b3a4 +
                        *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + param_2 * 0x130) * 4));
    *in_FS_OFFSET = local_30;
  }
  else {
    local_2c = (wchar_t *)&LAB_006377ed;
    local_30 = (wchar_t *)*in_FS_OFFSET;
    *in_FS_OFFSET = &local_30;
    local_34 = *(undefined **)
                (PTR_DAT_0066b3a4 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + param_2 * 0x130) * 4)
    ;
    local_38 = &DAT_00637f38;
    local_3c = *(wchar_t **)
                (PTR_DAT_0066b3a4 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + param_2 * 0x130) * 4)
    ;
    local_40 = (wchar_t *)0x6377e3;
    puVar3 = &stack0xfffffffc;
    FUN_00405330(&stack0xffffffec,3);
    *in_FS_OFFSET = local_30;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130 + 0x8c +
              *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 3) {
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130 + 0xb8 +
                *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 1) {
      if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x68 + param_2 * 0x130) <=
          *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
        FUN_00404ff0(&stack0xffffffe8,PTR_DAT_0066b574,PTR_DAT_0066ac78);
      }
      else {
        FUN_00642c50(0x3e,&local_38);
        local_2c = L" ";
        local_30 = *(wchar_t **)(*(int *)PTR_DAT_0066b5b8 + 0x6c + param_2 * 0x130);
        local_34 = *(undefined **)(*(int *)PTR_DAT_0066b5b8 + 0x68 + param_2 * 0x130);
        local_38 = (undefined *)0x63794d;
        FUN_0040d11c(&local_40);
        local_30 = L"痿跈\xec45κ";
        FUN_004051d4(&local_3c,local_40);
        local_30 = local_3c;
        local_34 = (undefined *)0x637968;
        FUN_00405330(&stack0xffffffe8,3);
      }
    }
    else {
      FUN_00642c50(0x3c,&stack0xffffffd8);
      local_2c = L" ";
      local_30 = (wchar_t *)0x6378c7;
      FUN_00409dd8(*(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130 + 0xb8 +
                    *(int *)(PTR_DAT_0066ac78 + 0x88) * 4),&local_30);
      pwVar5 = local_30;
      local_30 = L"痿棘罀c喍룐=";
      FUN_004051d4(&local_2c,pwVar5);
      local_30 = local_2c;
      local_34 = &DAT_00637f40;
      local_38 = (undefined *)0x6378e7;
      FUN_00642c50(0x3d,&local_34);
      local_38 = local_34;
      local_3c = (wchar_t *)0x6378f7;
      FUN_00405330(&stack0xffffffe8,5);
    }
  }
  else {
    FUN_00642c50(0x3b,&stack0xffffffe8,puVar3);
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + param_2 * 0x130) == 2) {
    FUN_00642c50(0x39,&local_44);
    local_2c = L":";
    local_30 = *(wchar_t **)(*(int *)PTR_DAT_0066b5b8 + 0x74 + param_2 * 0x130);
    local_34 = *(undefined **)(*(int *)PTR_DAT_0066b5b8 + 0x70 + param_2 * 0x130);
    local_38 = (undefined *)0x6379af;
    FUN_0040d11c(&local_4c);
    local_30 = L"痿趼\xe845κ";
    FUN_004051d4(&local_48,local_4c);
    local_30 = local_48;
    local_34 = (undefined *)0x6379ca;
    FUN_00405330(&local_1c,3);
  }
  else if (*(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <=
           *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + param_2 * 0x130)) {
    FUN_00642c50(0x37,&local_50);
    local_2c = L":";
    local_30 = *(wchar_t **)(*(int *)PTR_DAT_0066b5b8 + 0x74 + param_2 * 0x130);
    local_34 = *(undefined **)(*(int *)PTR_DAT_0066b5b8 + 0x70 + param_2 * 0x130);
    local_38 = (undefined *)0x637a2f;
    FUN_0040d11c(&local_58);
    local_30 = L"痿趰\xe845κ";
    FUN_004051d4(&local_54,local_58);
    local_30 = local_54;
    local_34 = (undefined *)0x637a4a;
    FUN_00405330(&local_1c,3);
  }
  else {
    FUN_00642c50(0x38,&local_1c);
  }
  local_2c = (wchar_t *)&LAB_00637a72;
  local_30 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  local_34 = (undefined *)0x637a68;
  FUN_0043aa68(*(undefined4 *)(param_1 + 0x378),0);
  *in_FS_OFFSET = local_30;
  local_2c = (wchar_t *)&LAB_00637ac3;
  local_30 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  local_34 = (undefined *)0x637ab9;
  FUN_0042d610(*(undefined4 *)(*(int *)(param_1 + 0x378) + 0x168),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066b3e0 +
                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + param_2 * 0x130) * 4),puVar16);
  *in_FS_OFFSET = local_30;
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x85 + param_2 * 0x130) != '\0') {
    FUN_00642c50(0x3a,&local_1c,puVar17);
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + param_2 * 0x130) < 1) {
    FUN_00405194(&stack0xfffffff0,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130);
  }
  else {
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + param_2 * 0x130),&local_60);
    local_2c = L"ⴠ \x12";
    local_30 = L"痿趠ꡅκ";
    FUN_00404b48(&local_64,*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130);
    local_30 = local_64;
    local_34 = (undefined *)0x637b40;
    FUN_00404c64(&local_5c,3);
    FUN_004051d4(&stack0xfffffff0,local_5c);
  }
  local_30 = L"<IND x=\"";
  local_34 = local_24;
  local_38 = &DAT_00637f8c;
  local_3c = *(wchar_t **)
              (PTR_DAT_0066b660 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + param_2 * 0x130) * 4);
  local_40 = L"</SHAD></B>";
  local_44 = L"喋讜ﱅ肋τ";
  FUN_00405330(&local_68,7);
  local_44 = L"둨捿贀鑕ㆸ";
  FUN_00545088(*(undefined4 *)(param_1 + 0x3c4),local_68);
  local_44 = L"<SHAD><B>";
  local_48 = (wchar_t *)0x637bbe;
  FUN_00642c50(0x31,&local_70);
  local_48 = local_70;
  local_4c = L":</B>";
  local_50 = (undefined *)0x637bd9;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_2 * 0x130),&local_78);
  local_50 = (undefined *)0x637be4;
  FUN_004051d4(&local_74,local_78);
  local_50 = local_74;
  local_54 = L"<IND x=\"";
  local_58 = local_24;
  local_5c = L"\"><B>";
  local_60 = (wchar_t *)0x637c01;
  FUN_00642c50(0x32,&local_7c);
  local_60 = local_7c;
  local_64 = L"</B>:";
  local_68 = (wchar_t *)0x637c1c;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_2 * 0x130),&local_84);
  local_68 = L"痿梄翼c痿棤而c閍ｼ\xffff㎸";
  FUN_004051d4(&local_80,local_84);
  local_68 = local_80;
  local_6c = L"<BR>";
  local_70 = (wchar_t *)local_20;
  local_74 = &DAT_0063800c;
  local_78 = (undefined *)0x637c47;
  FUN_00642c50(0x33,&local_88);
  local_78 = local_88;
  local_7c = L":</B>$";
  local_80 = L"閍ｸ\xffff䧨Ƣ＀碵\xffff棿罴c痿棠翜c閍ｴ\xffff㒸";
  uVar1 = FUN_00402c38();
  local_80 = (wchar_t *)0x637c73;
  FUN_00651ebc(uVar1,&local_8c);
  local_80 = local_8c;
  local_84 = L"<IND x=\"";
  local_88 = local_24;
  local_8c = L"\"><B>";
  local_90 = 0x637c96;
  FUN_00642c50(0x34,&local_90);
  local_94 = L"</B>:";
  local_98 = &DAT_00638030;
  local_9c = L"閍ｰ\xffff\xf5e8ơ＀炵\xffff棿翼c痿棤而c閍ｬ\xffff㖸";
  uVar1 = FUN_00402c38();
  local_9c = L"뗿ｰ\xffffﱨ捿＀\xe475౨掀贀沕\xffff룿5";
  FUN_00651ebc(uVar1,&local_94);
  local_9c = local_94;
  local_a0 = L"<BR>";
  local_a4 = local_20;
  local_a8 = &DAT_0063800c;
  local_ac = (undefined *)0x637cea;
  FUN_00642c50(0x35,&local_98);
  local_ac = local_98;
  local_b0 = L":</B>";
  local_b4 = (wchar_t *)0x637d00;
  uVar1 = FUN_0063b738(param_1,param_2);
  local_b4 = (wchar_t *)0x637d0b;
  FUN_00409dd8(uVar1,&local_a0);
  local_b4 = (wchar_t *)0x637d1c;
  FUN_004051d4(&local_9c,local_a0);
  local_b4 = local_9c;
  uVar1 = FUN_0063b704(param_1,param_2);
  FUN_00409dd8(uVar1,&local_a8);
  FUN_004051d4(&local_a4,local_a8);
  FUN_00409dd8(*(undefined4 *)
                (*(int *)PTR_DAT_0066b5b8 + param_2 * 0x130 + 0x8c +
                *(int *)(PTR_DAT_0066ac78 + 0x88) * 4),&local_b0);
  FUN_004051d4(&local_ac,local_b0);
  pwVar14 = L"<BR>";
  puVar12 = &DAT_0063800c;
  pwVar13 = (wchar_t *)local_20;
  puVar15 = local_ac;
  FUN_00642c50(0x36,&local_b4);
  pwVar10 = L":</B>";
  pwVar9 = L"<BR>";
  puVar7 = &DAT_0063800c;
  pwVar6 = L"<BR>";
  pwVar4 = L"</shad><shad><B>";
  pwVar5 = (wchar_t *)local_20;
  puVar3 = local_1c;
  pwVar8 = (wchar_t *)local_20;
  pwVar11 = local_b4;
  FUN_00405330(&local_6c,0x32);
  FUN_00545088(*(undefined4 *)(param_1 + 0x3b4),local_6c);
  *in_FS_OFFSET = L"</B></SHAD>";
  FUN_00404ff0(&local_b4,L"</B></SHAD>",pwVar4,&LAB_00637f02,pwVar5,pwVar6,puVar3,puVar7,pwVar8,
               pwVar9,unaff_ESI,pwVar10,pwVar11,puVar12,pwVar13,pwVar14,puVar15);
  FUN_004048d4(&local_b0);
  FUN_00404ff0(&local_ac);
  FUN_004048d4(&local_a8);
  FUN_00404ff0(&local_a4);
  FUN_004048d4(&local_a0);
  FUN_00405008(&local_9c,6);
  FUN_004048d4(&local_84);
  FUN_00405008(&local_80,2);
  FUN_004048d4(&local_78);
  FUN_00405008(&local_74,4);
  FUN_004048f8(&local_64,4);
  FUN_00405008(&local_54,2);
  FUN_004048d4(&local_4c);
  FUN_00405008(&local_48,2);
  FUN_004048d4(&local_40);
  FUN_00405008(&local_3c,3);
  FUN_004048d4(&local_30);
  FUN_00405008(&local_2c,8);
  return;
}

