// Address: 00599988
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00599988(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined *local_b8;
  wchar_t *pwStack_b4;
  wchar_t *pwStack_b0;
  wchar_t *pwStack_ac;
  undefined *local_a8;
  undefined1 *puStack_a4;
  wchar_t *pwStack_a0;
  undefined *puStack_9c;
  undefined *local_98;
  wchar_t *local_94;
  undefined1 *local_90;
  undefined *local_8c;
  undefined4 local_88;
  wchar_t *local_84;
  wchar_t *local_80;
  wchar_t *local_7c;
  wchar_t *local_78;
  undefined *local_74;
  undefined1 *local_70;
  wchar_t *local_6c;
  wchar_t *local_68;
  wchar_t *local_64;
  wchar_t *local_60;
  wchar_t *local_5c;
  undefined4 local_58;
  wchar_t *local_54;
  wchar_t *local_50;
  wchar_t *local_4c;
  wchar_t *local_48;
  wchar_t *local_44;
  undefined **local_40;
  wchar_t *local_3c;
  wchar_t *local_38;
  undefined **local_34;
  undefined *local_30;
  undefined **local_2c;
  undefined **local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined **local_10;
  int local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = (undefined **)0x16;
  do {
    local_10 = (undefined **)((int)local_10 + -1);
  } while (local_10 != (undefined **)0x0);
  local_24 = &LAB_0059a1c5;
  local_28 = (undefined **)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_c = param_2;
  local_8 = param_1;
  if (DAT_006d23e4 == '\0') {
    local_2c = (undefined **)0x599f30;
    FUN_0043aa68(*(undefined4 *)(param_1 + 0x34c),0);
    local_2c = (undefined **)0x599f5f;
    FUN_0042d610(*(undefined4 *)(*(int *)(local_8 + 0x34c) + 0x168),
                 *(undefined4 *)
                  (*(int *)PTR_DAT_0066b3e0 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + local_c * 0x130) * 4));
    local_2c = (undefined **)0x599f6a;
    FUN_0059a454(local_8,local_c);
  }
  else {
    local_2c = (undefined **)0x5999cc;
    local_20 = &stack0xfffffffc;
    FUN_00466128(*(undefined4 *)(param_1 + 0x3e0),0);
    local_2c = (undefined **)0x5999d9;
    thunk_FUN_0040502c(&stack0xffffffec,&DAT_0059a1dc);
    local_2c = (undefined **)0x5999e6;
    thunk_FUN_0040502c(&local_24,L"<br>");
    local_2c = (undefined **)0x5999ee;
    FUN_00404ff0(&stack0xffffffe4);
    local_2c = (undefined **)0x5999f6;
    FUN_00404ff0(&local_20);
    iVar1 = local_c;
    if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + local_c * 0x130) == '\0') {
      local_2c = (undefined **)0x599a1f;
      FUN_00404ff0(&local_20);
    }
    else {
      local_2c = (undefined **)0x599a15;
      FUN_00642c50(0x137,&local_20);
    }
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar1 * 0x130) == 2) {
      local_2c = (undefined **)0x599a3d;
      FUN_00642c50(0x39,&local_28);
      local_2c = local_28;
      local_30 = &DAT_0059a1f8;
      local_34 = *(undefined ***)(*(int *)PTR_DAT_0066b5b8 + 0x74 + iVar1 * 0x130);
      local_38 = *(wchar_t **)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar1 * 0x130);
      local_3c = (wchar_t *)0x599a5c;
      FUN_0040d11c(&local_30);
      local_34 = (undefined **)0x599a67;
      FUN_004051d4(&local_2c,local_30);
      local_34 = local_2c;
      local_38 = (wchar_t *)0x599a77;
      FUN_00405330(&local_20,3);
    }
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar1 * 0x130) ==
        *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar1 * 0x130)) {
      local_30 = &LAB_00599b31;
      local_34 = (undefined **)*in_FS_OFFSET;
      *in_FS_OFFSET = &local_34;
      local_38 = L"쀳奚摙ႉ૫⻩\xe6a4\xe8ffꞑ￦嵫⛸ᖋ떸fኋᒍꇚ걸f肋\x88";
      local_2c = (undefined **)&stack0xfffffffc;
      thunk_FUN_0040502c(&stack0xffffffe8,
                         *(undefined4 *)
                          (PTR_DAT_0066b3a4 +
                          *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + local_c * 0x130) * 4));
      *in_FS_OFFSET = local_34;
      ppuVar4 = local_2c;
    }
    else {
      local_30 = &LAB_00599aec;
      local_34 = (undefined **)*in_FS_OFFSET;
      *in_FS_OFFSET = &local_34;
      local_38 = *(wchar_t **)
                  (PTR_DAT_0066b3a4 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + local_c * 0x130) * 4);
      local_3c = L"/";
      local_40 = *(undefined ***)
                  (PTR_DAT_0066b3a4 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + local_c * 0x130) * 4);
      local_44 = (wchar_t *)0x599ae2;
      local_2c = (undefined **)&stack0xfffffffc;
      FUN_00405330(&stack0xffffffe8,3);
      *in_FS_OFFSET = local_34;
      ppuVar4 = local_2c;
    }
    iVar1 = local_c;
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + local_c * 0x130 + 0x8c +
                *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 3) {
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + local_c * 0x130 + 0xb8 +
                  *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 1) {
        if (*(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <
            *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x68 + local_c * 0x130)) {
          local_2c = (undefined **)0x599c1d;
          FUN_00642c50(0x3e,&local_40,PTR_DAT_0066ac78);
          local_2c = local_40;
          local_30 = &DAT_0059a1f8;
          local_34 = *(undefined ***)(*(int *)PTR_DAT_0066b5b8 + 0x6c + iVar1 * 0x130);
          local_38 = *(wchar_t **)(*(int *)PTR_DAT_0066b5b8 + 0x68 + iVar1 * 0x130);
          local_3c = L"喋趼쁅跨\xe6b5\xffff쁵䖍뫨\x03";
          FUN_0040d11c(&local_48);
          local_34 = (undefined **)0x599c47;
          FUN_004051d4(&local_44,local_48);
          local_34 = (undefined **)local_44;
          local_38 = (wchar_t *)0x599c57;
          FUN_00405330(&stack0xffffffe4,3);
        }
      }
      else {
        local_2c = (undefined **)0x599b99;
        FUN_00642c50(0x3c,&local_34,PTR_DAT_0066ac78);
        local_2c = local_34;
        local_30 = &DAT_0059a1f8;
        local_34 = (undefined **)0x599bc6;
        FUN_00409dd8(*(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + iVar1 * 0x130 + 0xb8 +
                      *(int *)(PTR_DAT_0066ac78 + 0x88) * 4),&local_3c);
        local_34 = (undefined **)0x599bd1;
        FUN_004051d4(&local_38,local_3c);
        local_34 = (undefined **)local_38;
        local_38 = L" jogo(s)";
        local_3c = (wchar_t *)0x599be6;
        FUN_00405330(&stack0xffffffe4,4);
      }
    }
    else {
      local_2c = (undefined **)0x599b6c;
      FUN_00642c50(0x3b,&stack0xffffffe4,ppuVar4);
    }
    local_2c = (undefined **)0x59a220;
    local_30 = *(undefined **)
                (PTR_DAT_0066b660 + *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar1 * 0x130) * 4);
    local_34 = (undefined **)&DAT_0059a290;
    local_38 = L"痿梸ꊜY䖍뫴\x05";
    FUN_00405194(&local_4c,*(int *)PTR_DAT_0066b5b8 + iVar1 * 0x130);
    local_38 = local_4c;
    local_3c = L"</SHAD></FONT><br><br>";
    local_40 = (undefined **)0x599c9d;
    FUN_00405330(&local_10,5);
    local_40 = local_10;
    local_44 = L"<SHAD><B>";
    local_48 = (wchar_t *)0x599cb2;
    FUN_00642c50(0x31,&local_50);
    local_48 = local_50;
    local_4c = L":</B>";
    local_50 = L"喋趬끅ﳨ\xe6b4\xffff끵\xf868妢＀\xf075ၨ妣贀ꡕ㊸";
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar1 * 0x130),&local_58);
    local_50 = L"痿械ꋸY痿棰ꌐY喍뢨2";
    FUN_004051d4(&local_54,local_58);
    local_50 = local_54;
    local_54 = L"<IND x=\"";
    local_5c = L"\"><B>";
    local_60 = (wchar_t *)0x599cf5;
    FUN_00642c50(0x32,&local_5c);
    local_60 = local_5c;
    local_64 = L"</B>:";
    local_68 = L"喋趠ꑅ맨\xe6b4\xffffꑵと妣＀\xe075䁨妣贀鱕㎸";
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + iVar1 * 0x130),&local_64);
    local_68 = L"痿梤ꌰY痿棠ꍀY喍뢜3";
    FUN_004051d4(&local_60,local_64);
    local_68 = local_60;
    local_6c = L"<BR>";
    local_70 = local_24;
    local_74 = &DAT_0059a340;
    local_78 = (wchar_t *)0x599d38;
    FUN_00642c50(0x33,&local_68);
    local_78 = local_68;
    local_7c = L":</B>$";
    local_80 = L"喍\xe898腞\v痿梘ꋸY痿棰ꍤY喍뢔4";
    uVar3 = FUN_00402c38();
    local_80 = L"痿梘ꋸY痿棰ꍤY喍뢔4";
    FUN_00651ebc(uVar3,&local_6c);
    local_80 = local_6c;
    local_84 = L"<IND x=\"";
    local_8c = &DAT_0059a364;
    local_90 = (undefined1 *)0x599d7b;
    local_88 = unaff_EBX;
    FUN_00642c50(0x34,&local_70);
    local_90 = local_70;
    local_94 = L"</B>:";
    local_98 = &DAT_0059a370;
    puStack_9c = (undefined *)0x599d9e;
    uVar3 = FUN_00402c38();
    puStack_9c = (undefined *)0x599da6;
    FUN_00651ebc(uVar3,&local_74);
    puStack_9c = local_74;
    pwStack_a0 = L"<BR>";
    puStack_a4 = local_24;
    local_a8 = &DAT_0059a340;
    pwStack_ac = (wchar_t *)0x599dc3;
    FUN_00642c50(0x35,&local_78);
    pwStack_ac = local_78;
    pwStack_b0 = L":</B>";
    pwStack_b4 = (wchar_t *)0x599de1;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x10c + iVar1 * 0x130),&local_80);
    pwStack_b4 = 
    L"痿梈ꇸY硨妣ꄀ떸f\x8b蒋Ә\x01贀粕\xffff\xe8ffￆ￦開ｼ\xffff䖍\xe880뎴￦痿梀ꇸY끨妣欀\xf845謦렕暵謀贒숄ᖋ걸f銋\x88"
    ;
    FUN_004051d4(&local_7c,local_80);
    pwStack_b4 = local_7c;
    local_b8 = &DAT_0059a1f8;
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x104 + iVar1 * 0x130),&local_88);
    FUN_004051d4(&local_84,local_88);
    FUN_00409dd8(*(undefined4 *)
                  (*(int *)PTR_DAT_0066b5b8 + local_c * 0x130 + 0x8c +
                  *(int *)(PTR_DAT_0066ac78 + 0x88) * 4),&local_90);
    FUN_004051d4(&local_8c,local_90);
    FUN_00642c50(0x36,&local_94);
    FUN_00405330(&local_10,0x33);
    local_2c = (undefined **)0x599edf;
    FUN_00545088(*(undefined4 *)(local_8 + 0x3dc),local_10);
    local_2c = (undefined **)0x599eef;
    FUN_0043aa68(*(undefined4 *)(local_8 + 0x34c),0);
    local_2c = (undefined **)0x599f1e;
    FUN_0042d610(*(undefined4 *)(*(int *)(local_8 + 0x34c) + 0x168),
                 *(undefined4 *)
                  (*(int *)PTR_DAT_0066b3e0 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + local_c * 0x130) * 4));
  }
  iVar1 = *(int *)(PTR_DAT_0066ac78 + 8);
  if ((((iVar1 != *(int *)PTR_DAT_0066b2b4) &&
       ((float10)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + local_c * 0x130) <=
        (float10)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar1 * 0x2f8))) &&
      (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + iVar1 * 0x2f8) < *(int *)PTR_DAT_0066b610)) &&
     (uVar5 = *(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + local_c * 0x130) == '\0', !(bool)uVar5)) {
    local_2c = &local_98;
    piVar2 = *(int **)(local_8 + 0x318);
    local_30 = (undefined *)0x599ffe;
    uVar3 = (**(code **)(*piVar2 + 0x138))();
    local_2c = (undefined **)0x59a00d;
    FUN_00416244(&local_a8,uVar3,0xfc);
    local_2c = &local_a8;
    local_30 = (undefined *)0x59a024;
    FUN_00416478(&local_b8,"avenda");
    ppuVar4 = local_2c;
    local_2c = (undefined **)0x59a032;
    FUN_0050e448(piVar2,&local_b8,ppuVar4);
    local_2c = (undefined **)0x59a042;
    FUN_00405378(local_98,&DAT_0059a450);
    if ((bool)uVar5) {
      local_2c = (undefined **)0x59a054;
      (**(code **)(**(int **)(local_8 + 0x3cc) + 100))(*(int **)(local_8 + 0x3cc),1);
      goto LAB_0059a066;
    }
  }
  local_2c = (undefined **)0x59a066;
  (**(code **)(**(int **)(local_8 + 0x3cc) + 100))(*(int **)(local_8 + 0x3cc),0);
LAB_0059a066:
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0xa0 + *(int *)PTR_DAT_0066b2b4 * 0x2f8) < 0xb) {
    local_2c = (undefined **)0x59a090;
    (**(code **)(**(int **)(local_8 + 0x3cc) + 100))(*(int **)(local_8 + 0x3cc),0);
  }
  if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + local_c * 0x130) == 0) &&
     (*(int *)(*(int *)PTR_DAT_0066af70 + 0x68 + *(int *)PTR_DAT_0066b2b4 * 0x2f8) == 1)) {
    local_2c = (undefined **)0x59a0ca;
    (**(code **)(**(int **)(local_8 + 0x3cc) + 100))(*(int **)(local_8 + 0x3cc),0);
  }
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0059a1cf;
  local_24 = (undefined1 *)0x59a10d;
  FUN_00405744(&local_b8,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x59a11d;
  FUN_00405008(&local_98,2);
  local_24 = (undefined1 *)0x59a128;
  FUN_004048d4(&local_90);
  local_24 = (undefined1 *)0x59a133;
  FUN_00404ff0(&local_8c);
  local_24 = (undefined1 *)0x59a13e;
  FUN_004048d4(&local_88);
  local_24 = (undefined1 *)0x59a146;
  FUN_00404ff0(&local_84);
  local_24 = (undefined1 *)0x59a14e;
  FUN_004048d4(&local_80);
  local_24 = (undefined1 *)0x59a15b;
  FUN_00405008(&local_7c,6);
  local_24 = (undefined1 *)0x59a163;
  FUN_004048d4(&local_64);
  local_24 = (undefined1 *)0x59a170;
  FUN_00405008(&local_60,2);
  local_24 = (undefined1 *)0x59a178;
  FUN_004048d4(&local_58);
  local_24 = (undefined1 *)0x59a185;
  FUN_00405008(&local_54,3);
  local_24 = (undefined1 *)0x59a18d;
  FUN_004048d4(&local_48);
  local_24 = (undefined1 *)0x59a19a;
  FUN_00405008(&local_44,2);
  local_24 = (undefined1 *)0x59a1a2;
  FUN_004048d4(&local_3c);
  local_24 = (undefined1 *)0x59a1af;
  FUN_00405008(&local_38,2);
  local_24 = (undefined1 *)0x59a1b7;
  FUN_004048d4(&local_30);
  local_24 = (undefined1 *)0x59a1c4;
  FUN_00405008(&local_2c,8);
  return;
}

