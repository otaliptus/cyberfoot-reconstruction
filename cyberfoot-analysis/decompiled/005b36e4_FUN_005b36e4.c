// Address: 005b36e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005b36e4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_c0;
  int *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  wchar_t *pwStack_9c;
  int *local_98;
  int *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  wchar_t *local_84;
  int *local_80;
  int *local_7c;
  undefined4 local_78;
  int *local_74;
  undefined4 local_70;
  int *local_6c;
  int *local_68;
  undefined4 local_64;
  int *local_60;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  int *local_38;
  wchar_t *local_34;
  int *local_30;
  wchar_t *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  
  local_20 = &stack0xfffffffc;
  iVar2 = 0x17;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_24 = &LAB_005b43d6;
  local_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 
  L"䖋诼䢀\x03㌀\xe8d2⧱￫䖋诼䂀\x03㌀\xe8d2⧡￫䖋诼⢀\x03㌀\xe8d2⧑￫䖋诼Ⲁ\x03㌀\xe8d2⧁￫䖋诼む\x03㌀\xe8d2⦱￫䖋诼㒀\x03㌀\xe8d2⦡￫툳풡津\xe800⦕￫碡暬耀炸\x01"
  ;
  FUN_00466128(*(undefined4 *)(param_1 + 0x338),0);
  local_2c = 
  L"䖋诼䂀\x03㌀\xe8d2⧡￫䖋诼⢀\x03㌀\xe8d2⧑￫䖋诼Ⲁ\x03㌀\xe8d2⧁￫䖋诼む\x03㌀\xe8d2⦱￫䖋诼㒀\x03㌀\xe8d2⦡￫툳풡津\xe800⦕￫碡暬耀炸\x01"
  ;
  FUN_00466128(*(undefined4 *)(param_1 + 0x348),0);
  local_2c = 
  L"䖋诼⢀\x03㌀\xe8d2⧑￫䖋诼Ⲁ\x03㌀\xe8d2⧁￫䖋诼む\x03㌀\xe8d2⦱￫䖋诼㒀\x03㌀\xe8d2⦡￫툳풡津\xe800⦕￫碡暬耀炸\x01"
  ;
  FUN_00466128(*(undefined4 *)(param_1 + 0x340),0);
  local_2c = 
  L"䖋诼Ⲁ\x03㌀\xe8d2⧁￫䖋诼む\x03㌀\xe8d2⦱￫䖋诼㒀\x03㌀\xe8d2⦡￫툳풡津\xe800⦕￫碡暬耀炸\x01"
  ;
  FUN_00466128(*(undefined4 *)(param_1 + 0x328),0);
  local_2c = 
  L"䖋诼む\x03㌀\xe8d2⦱￫䖋诼㒀\x03㌀\xe8d2⦡￫툳풡津\xe800⦕￫碡暬耀炸\x01";
  FUN_00466128(*(undefined4 *)(param_1 + 0x32c),0);
  local_2c = L"䖋诼㒀\x03㌀\xe8d2⦡￫툳풡津\xe800⦕￫碡暬耀炸\x01";
  FUN_00466128(*(undefined4 *)(param_1 + 0x330),0);
  local_2c = L"툳풡津\xe800⦕￫碡暬耀炸\x01";
  FUN_00466128(*(undefined4 *)(param_1 + 0x334),0);
  local_2c = L"碡暬耀炸\x01";
  FUN_00466128(DAT_006d25d4,0);
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    local_2c = L"㶃◠m༄\xf685\x01茀尽洦";
    FUN_00466128(DAT_006d25d0,0);
  }
  if (DAT_006d25e0 == 4) {
    if (DAT_006d265c == 0) {
      local_2c = L"<P align=\"center\"><shad> ";
      local_30 = (int *)0x5b37d5;
      FUN_00642c50(0xde,&local_38);
      local_30 = local_38;
      local_34 = L"</shad></p>";
      local_38 = (int *)0x5b37ea;
      FUN_00405330(&local_34,3);
      local_2c = L"쫩";
      FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_34);
    }
    else if (DAT_006d265c == 1) {
      local_2c = L"<P align=\"center\"> ";
      local_30 = (int *)0x5b381b;
      FUN_00642c50(0xdc,&local_40);
      local_30 = local_40;
      local_34 = L"</p>";
      local_38 = (int *)0x5b3830;
      FUN_00405330(&local_3c,3);
      local_2c = L"蓩";
      FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_3c);
    }
    else if (DAT_006d265c == 2) {
      local_2c = L"<P align=\"center\"> ";
      local_30 = (int *)0x5b3861;
      FUN_00642c50(0x3e2,&local_48);
      local_30 = local_48;
      local_34 = L"</p>";
      local_38 = (int *)0x5b3876;
      FUN_00405330(&local_44,3);
      local_2c = L"䇫㶃♜m甃核䐼[喍뢴ϣ";
      FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_44);
    }
    else if (DAT_006d265c == 3) {
      local_2c = L"<P align=\"center\"> ";
      local_30 = (int *)0x5b38a4;
      FUN_00642c50(0x3e3,&local_50);
      local_30 = local_50;
      local_34 = L"</p>";
      local_38 = (int *)0x5b38b9;
      FUN_00405330(&local_4c,3);
      local_2c = L"㶃♜m甀謜ﱅ肋̌";
      FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_4c);
    }
    if (DAT_006d265c == 0) {
      local_2c = L"淫㶃♜m甁謜ﱅ肋̐";
      FUN_00465978(*(undefined4 *)(param_1 + 0x308),
                   *(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x40));
    }
    else if (DAT_006d265c == 1) {
      local_2c = L"䣫㶃♜m甂謜ﱅ肋̔";
      FUN_00465978(*(undefined4 *)(param_1 + 0x308),
                   *(undefined4 *)(*(int *)(param_1 + 0x310) + 0x40));
    }
    else if (DAT_006d265c == 2) {
      local_2c = L"⏫㶃♜m甃謚ﱅ肋̘";
      FUN_00465978(*(undefined4 *)(param_1 + 0x308),
                   *(undefined4 *)(*(int *)(param_1 + 0x314) + 0x40));
    }
    else if (DAT_006d265c == 3) {
      local_2c = L"碡暬茀삸";
      FUN_00465978(*(undefined4 *)(param_1 + 0x308),
                   *(undefined4 *)(*(int *)(param_1 + 0x318) + 0x40));
    }
    if ((*(int *)(PTR_DAT_0066ac78 + 0xc0) == 1) && (PTR_DAT_0066ac78[0x75d] == '\0')) {
      local_2c = L"<P align=\"center\"> ";
      local_30 = (int *)0x5b398a;
      FUN_00642c50(0x1de,&local_58);
      local_30 = local_58;
      local_34 = L"</p>";
      local_38 = (int *)0x5b399f;
      FUN_00405330(&local_54,3);
      local_2c = (wchar_t *)0x5b39b0;
      FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_54);
    }
  }
  if (DAT_006d25e0 == 6) {
    if (DAT_006d265c == 0) {
      local_2c = L"<P align=\"center\"> ";
      local_30 = (int *)0x5b39d8;
      FUN_00642c50(0xdd,&local_60);
      local_30 = local_60;
      local_34 = L"</p>";
      local_38 = (int *)0x5b39ed;
      FUN_00405330(&local_5c,3);
      local_2c = (wchar_t *)0x5b39fe;
      FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_5c);
    }
    else {
      local_2c = L"<P align=\"center\"> ";
      local_30 = (int *)0x5b3a12;
      FUN_00642c50(0xdd,&local_68);
      local_30 = local_68;
      local_34 = L"</p>";
      local_38 = (int *)0x5b3a27;
      FUN_00405330(&local_64,3);
      local_2c = L"㶃♜m甁謚ﱅ肋̠";
      FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_64);
    }
    if (DAT_006d265c == 1) {
      local_2c = L"碡暬茀삸";
      FUN_00465978(*(undefined4 *)(param_1 + 0x308),*(undefined4 *)(*(int *)(param_1 + 800) + 0x40))
      ;
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0xc0) == 1) {
      local_2c = L"䶋趔顅確孄\xe800ᡆ￥喋讘ﱅ肋˼";
      FUN_00642c50(0x1de,&local_70);
      local_2c = L"喋讘ﱅ肋˼";
      FUN_004052cc(&local_6c,&DAT_005b4478,local_70);
      local_2c = L"㶃◠m甆ꄒ걸f뢃À";
      FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),local_6c);
    }
  }
  if (((DAT_006d25e0 != 6) || (*(int *)(PTR_DAT_0066ac78 + 0xc0) != 1)) &&
     ((*(int *)(PTR_DAT_0066ac78 + 0xc0) != 1 ||
      ((DAT_006d25e0 != 4 || (PTR_DAT_0066ac78[0x75d] != '\0')))))) {
    local_2c = (wchar_t *)0x4;
    local_30 = DAT_00669fa8;
    local_34 = DAT_0066a004;
    local_38 = (int *)0x5b3af1;
    FUN_00642c50(0x1dd,&local_74);
    local_38 = (int *)0x5b3afe;
    FUN_0040526c(&local_74,&DAT_005b4480);
    local_38 = local_74;
    local_3c = 1;
    local_40 = (int *)0x5b3b16;
    FUN_005b1514(param_1,1,1);
    local_40 = (int *)0x8;
    local_44 = DAT_00669fa8;
    local_48 = DAT_00669ff8;
    local_4c = 0x5b3b2c;
    FUN_00642c50(0x1dd,&local_78);
    local_4c = 0x5b3b39;
    FUN_0040526c(&local_78,&DAT_005b448c);
    local_4c = local_78;
    local_50 = (int *)0x0;
    local_54 = 0x5b3b51;
    FUN_005b1514(param_1,2,5);
    local_54 = 0xc;
    local_58 = DAT_00669fa8;
    local_5c = DAT_00669ffc;
    local_60 = (int *)0x5b3b67;
    FUN_00642c50(0x1dd,&local_7c);
    local_60 = (int *)0x5b3b74;
    FUN_0040526c(&local_7c,&DAT_005b4498);
    local_60 = local_7c;
    local_64 = 0;
    local_68 = (int *)0x5b3b8c;
    FUN_005b1514(param_1,3,9);
    local_68 = (int *)0x10;
    local_6c = DAT_00669fa8;
    local_70 = DAT_0066a000;
    local_74 = (int *)0x5b3ba2;
    FUN_00642c50(0x1dd,&local_80);
    local_74 = (int *)0x5b3baf;
    FUN_0040526c(&local_80,&DAT_005b44a4);
    local_74 = local_80;
    local_78 = 0;
    local_7c = (int *)0x5b3bc7;
    FUN_005b1514(param_1,4,0xd);
    local_7c = (int *)0x14;
    local_80 = DAT_00669fac;
    local_84 = DAT_0066a004;
    local_88 = L"䖍몀䒰[臨\xe516诿聅橐뤀\x11";
    FUN_00642c50(0x1dd,&local_84);
    local_88 = L"䖋傀jᆹ";
    FUN_0040526c(&local_84,&DAT_005b44b0);
    local_88 = local_84;
    local_8c = 0;
    local_90 = 0x5b3c03;
    FUN_005b1514(param_1,5,0x11);
    local_90 = 0x18;
    local_94 = DAT_00669fac;
    local_98 = DAT_00669ff8;
    pwStack_9c = L"薍ｼ\xffff벺孄\xe800ᘿ￥薋ｼ\xffff橐뤀\x15";
    FUN_00642c50(0x1dd,&local_88);
    pwStack_9c = L"薋ｼ\xffff橐뤀\x15";
    FUN_0040526c(&local_88,&DAT_005b44bc);
    pwStack_9c = local_88;
    uStack_a0 = 0;
    uStack_a4 = 0x5b3c48;
    FUN_005b1514(param_1,6,0x15);
    uStack_a4 = 0x1c;
    piStack_a8 = DAT_00669fac;
    uStack_ac = DAT_00669ffc;
    uStack_b0 = 0x5b3c62;
    FUN_00642c50(0x1dd,&local_8c);
    uStack_b0 = 0x5b3c72;
    FUN_0040526c(&local_8c,&DAT_005b44c8);
    uStack_b0 = local_8c;
    local_b4 = 0;
    local_b8 = 0x5b3c8d;
    FUN_005b1514(param_1,7,0x19);
    local_b8 = 0x20;
    local_bc = DAT_00669fac;
    local_c0 = DAT_0066a000;
    FUN_00642c50(0x1dd,&local_90);
    FUN_0040526c(&local_90,&DAT_005b44d4);
    FUN_005b1514(param_1,8,0x1d,0,local_90);
    local_20 = (undefined1 *)0x1;
    local_10 = 8;
    local_28 = PTR_DAT_0066ac78 + 0x1ac;
    do {
      if (DAT_006d25e0 == 4) {
        piVar3 = (int *)0x0;
        iVar2 = 4;
        do {
          piVar3 = (int *)((int)piVar3 + 1);
          local_30 = (int *)0x5b3d1b;
          local_2c = (wchar_t *)piVar3;
          FUN_004060a8(&DAT_006d25d8,PTR_DAT_005ae25c,1);
          if (DAT_006d265c == 0) {
            *(int *)(DAT_006d25d8 + -0x28 + (int)piVar3 * 0x28) = *(int *)local_2c;
            unaff_EDI = *(int *)local_2c;
          }
          else if (DAT_006d265c == 1) {
            *(int *)(DAT_006d25d8 + -0x28 + (int)piVar3 * 0x28) = *(int *)((int)local_2c + 0x80);
            unaff_EDI = *(int *)((int)local_2c + 0x80);
          }
          else if (DAT_006d265c == 2) {
            *(int *)(DAT_006d25d8 + -0x28 + (int)piVar3 * 0x28) = *(int *)((int)local_2c + 0x200);
            unaff_EDI = *(int *)((int)local_2c + 0x200);
          }
          else if (DAT_006d265c == 3) {
            *(int *)(DAT_006d25d8 + -0x28 + (int)piVar3 * 0x28) = *(int *)((int)local_2c + 0x280);
            unaff_EDI = *(int *)((int)local_2c + 0x280);
          }
          *(undefined4 *)(DAT_006d25d8 + -0x24 + (int)piVar3 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xc4 + unaff_EDI * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x20 + (int)piVar3 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xec + unaff_EDI * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x1c + (int)piVar3 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x114 + unaff_EDI * 0x2f8);
          *(int *)(DAT_006d25d8 + -0x18 + (int)piVar3 * 0x28) =
               *(int *)(*(int *)PTR_DAT_0066af70 + 0xec + unaff_EDI * 0x2f8) -
               (*(int *)(*(int *)PTR_DAT_0066af70 + 0x114 + unaff_EDI * 0x2f8) +
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x13c + unaff_EDI * 0x2f8));
          *(undefined4 *)(DAT_006d25d8 + -0x14 + (int)piVar3 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x13c + unaff_EDI * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x10 + (int)piVar3 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x164 + unaff_EDI * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0xc + (int)piVar3 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x18c + unaff_EDI * 0x2f8);
          *(int *)(DAT_006d25d8 + -8 + (int)piVar3 * 0x28) =
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x164 + unaff_EDI * 0x2f8) -
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x18c + unaff_EDI * 0x2f8);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        local_2c = L"咣洦ꄀ♔m偈遨嫣㌀뫉(";
        DAT_006d2654 = FUN_00405eec(DAT_006d25d8);
        local_2c = (wchar_t *)(DAT_006d2654 + -1);
        local_30 = (int *)&LAB_005ae390;
        local_34 = L"㶃◠m༆뒅\x01㌀믶\x04";
        FUN_004bcdb0(DAT_006d25d8,0x28,0);
      }
      if (DAT_006d25e0 == 6) {
        iVar4 = 0;
        iVar2 = 4;
        do {
          iVar4 = iVar4 + 1;
          local_30 = (int *)0x5b3f37;
          local_2c = (wchar_t *)iVar4;
          FUN_004060a8(&DAT_006d25d8,PTR_DAT_005ae25c,1);
          if (DAT_006d265c == 0) {
            *(int *)(DAT_006d25d8 + -0x28 + iVar4 * 0x28) = *local_30;
            unaff_EDI = *local_30;
          }
          else {
            *(int *)(DAT_006d25d8 + -0x28 + iVar4 * 0x28) = local_30[0x20];
            unaff_EDI = local_30[0x20];
          }
          *(undefined4 *)(DAT_006d25d8 + -0x24 + iVar4 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xcc + unaff_EDI * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x20 + iVar4 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xf4 + unaff_EDI * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x1c + iVar4 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x11c + unaff_EDI * 0x2f8);
          *(int *)(DAT_006d25d8 + -0x18 + iVar4 * 0x28) =
               *(int *)(*(int *)PTR_DAT_0066af70 + 0xf4 + unaff_EDI * 0x2f8) -
               (*(int *)(*(int *)PTR_DAT_0066af70 + 0x11c + unaff_EDI * 0x2f8) +
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x144 + unaff_EDI * 0x2f8));
          *(undefined4 *)(DAT_006d25d8 + -0x14 + iVar4 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x144 + unaff_EDI * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0x10 + iVar4 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x16c + unaff_EDI * 0x2f8);
          *(undefined4 *)(DAT_006d25d8 + -0xc + iVar4 * 0x28) =
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x194 + unaff_EDI * 0x2f8);
          *(int *)(DAT_006d25d8 + -8 + iVar4 * 0x28) =
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x16c + unaff_EDI * 0x2f8) -
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x194 + unaff_EDI * 0x2f8);
          local_30 = local_30 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        local_2c = L"咣洦ꄀ♔m偈遨嫣㌀뫉(";
        DAT_006d2654 = FUN_00405eec(DAT_006d25d8);
        local_2c = (wchar_t *)(DAT_006d2654 + -1);
        local_28 = &LAB_005ae390;
        local_34 = L"ދ삃먤䓤[哨\xe508诿\xe807ḑ￥\xf08b욋蕈࿀馎";
        FUN_004bcdb0(DAT_006d25d8,0x28,0);
      }
      local_2c = L"ދᇨ\xe51e诿诰䣆삅踏\x99";
      FUN_00404928(DAT_006d25d8 + 0x24,&DAT_005b44e4);
      local_2c = L"\xf08b욋蕈࿀馎";
      puVar1 = (undefined1 *)FUN_00405eec(DAT_006d25d8);
      if (0 < (int)(puVar1 + -1)) {
        iVar2 = 1;
        local_24 = puVar1 + -1;
        do {
          if ((((*(int *)(DAT_006d25d8 + 4 + iVar2 * 0x28) ==
                 *(int *)(DAT_006d25d8 + -0x24 + iVar2 * 0x28)) &&
               (*(int *)(DAT_006d25d8 + 0x20 + iVar2 * 0x28) ==
                *(int *)(DAT_006d25d8 + -8 + iVar2 * 0x28))) &&
              (*(int *)(DAT_006d25d8 + 0x18 + iVar2 * 0x28) ==
               *(int *)(DAT_006d25d8 + -0x10 + iVar2 * 0x28))) &&
             (*(int *)(DAT_006d25d8 + 0xc + iVar2 * 0x28) ==
              *(int *)(DAT_006d25d8 + -0x1c + iVar2 * 0x28))) {
            local_2c = 
            L"⟫閍ｰ\xffff䎍\xe801屺￥開ｰ\xffffҍ讛贏셄뤤䓰[秨\xe50a䏿䷿࿠澅\xffff仿\xf685谏Ŋ"
            ;
            FUN_004048d4(DAT_006d25d8 + 0x24 + iVar2 * 0x28);
          }
          else {
            local_2c = L"開ｰ\xffffҍ讛贏셄뤤䓰[秨\xe50a䏿䷿࿠澅\xffff仿\xf685谏Ŋ";
            FUN_00409dd8(iVar2 + 1,&local_94);
            local_2c = 
            L"ｃ\xe04d蔏ｯ\xffff蕎࿶䪌\x01䘀疉㏠跛鬄ឋᒋ观\xf055ឋ䒋Ⓜ譐\xe475㒍ꆶ♠mҋ嫰苨\xeb20뫿䓴[薍ｐ\xffff໨\xe4ef毿\xf045譟瀕暯謀贒숔薍ｐ\xffff᪱싨\xe4ee跿傕\xffff跿沅\xffff\xe8ffॕ￥開ｬ\xffff悡洦謀\xf044\xe804‱￫䕫忰ᖋ꽰fኋ粃㳂縀ꄬ♠m䒋Ӱ者"
            ;
            FUN_00404bf0(DAT_006d25d8 + 0x24 + iVar2 * 0x28,local_94,&DAT_005b44f0);
          }
          iVar2 = iVar2 + 1;
          local_24 = local_24 + -1;
        } while (local_24 != (undefined1 *)0x0);
      }
      if (-1 < (int)(puVar1 + -1)) {
        iVar2 = 0;
        local_24 = puVar1;
        do {
          puVar1 = local_20;
          iVar4 = *(int *)(DAT_006d25d8 + iVar2 * 0x28);
          local_2c = 
          L"\xf4ba孄贀傅\xffff\xe8ff\xef0e￤䕫忰ᖋ꽰fኋᒍ跂傅\xffff뇿\xe81a\xeec2￤閍ｐ\xffff薍ｬ\xffff嗨\xe509诿沕\xffffꇿ♠m䒋Ӱ㇨\xeb20毿\xf045譟瀕暯謀茒쉼<Ȿ悡洦謀\xf044Ԅ\x80"
          ;
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + (int)local_20 * 0x28),
                       *(undefined4 *)(DAT_006d25d8 + 0x24 + iVar2 * 0x28));
          local_2c = 
          L"䕫忰ᖋ꽰fኋᒍ跂傅\xffff뇿\xe81a\xeec2￤閍ｐ\xffff薍ｬ\xffff嗨\xe509诿沕\xffffꇿ♠m䒋Ӱ㇨\xeb20毿\xf045譟瀕暯謀茒쉼<Ȿ悡洦謀\xf044Ԅ\x80"
          ;
          FUN_004030d4(&local_b4,&LAB_005b44f4);
          local_2c = 
          L"閍ｐ\xffff薍ｬ\xffff嗨\xe509诿沕\xffffꇿ♠m䒋Ӱ㇨\xeb20毿\xf045譟瀕暯謀茒쉼<Ȿ悡洦謀\xf044Ԅ\x80"
          ;
          FUN_004030a4(&local_b4,*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8,0x1a);
          local_2c = 
          L"開ｬ\xffff悡洦謀\xf044\xe804‱￫䕫忰ᖋ꽰fኋ粃㳂縀ꄬ♠m䒋Ӱ者";
          FUN_00404b48(&local_98,&local_b4);
          local_2c = L"䕫忰ᖋ꽰fኋ粃㳂縀ꄬ♠m䒋Ӱ者";
          FUN_00466238(*(undefined4 *)(DAT_006d2660 + 4 + (int)puVar1 * 0x28),local_98);
          if (0 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8)) {
            local_2c = L"ξ";
            FUN_00404b6c(*(int *)(DAT_006d2660 + 4 + (int)puVar1 * 0x28) + 0x80,
                         *(undefined4 *)
                          (PTR_DAT_0066b294 +
                          *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8) * 4));
          }
          iVar5 = 3;
          do {
            local_2c = 
            L"開ｌ\xffff䖋跤耄උ♠mҍ证끄\xe8fcᾸ￫荆௾앵閍ｈ\xffff䖋\xe8f0ቴ\t붃ｈ\xffff琀贪䒕\xffff诿\xf045巨ऒ謀䒕\xffffꇿ⩰m䶋诤蠄肋Ũ"
            ;
            FUN_00409dd8(*(undefined4 *)(DAT_006d25d8 + iVar2 * 0x28 + -8 + iVar5 * 4),&local_b8);
            local_2c = 
            L"荆௾앵閍ｈ\xffff䖋\xe8f0ቴ\t붃ｈ\xffff琀贪䒕\xffff诿\xf045巨ऒ謀䒕\xffffꇿ⩰m䶋诤蠄肋Ũ"
            ;
            FUN_00466238(*(undefined4 *)(DAT_006d2660 + (int)local_20 * 0x28 + -4 + iVar5 * 4),
                         local_b8);
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0xb);
          local_2c = L"붃ｈ\xffff琀贪䒕\xffff诿\xf045巨ऒ謀䒕\xffffꇿ⩰m䶋诤蠄肋Ũ";
          FUN_00645508(iVar4,&local_bc);
          if (local_bc != (int *)0x0) {
            local_2c = 
            L"開ｄ\xffff炡洪謀\xe44dҋ讈梀\x01\xe800鏹￧䗿䏤䷿࿠벅\xfffe櫿謀맇\x01"
            ;
            FUN_00645508(iVar4,&local_c0);
            local_2c = L"䗿䏤䷿࿠벅\xfffe櫿謀맇\x01";
            FUN_0042d6c0(*(undefined4 *)(*(int *)(DAT_006d2a70 + (int)local_20 * 4) + 0x168),
                         local_c0);
          }
          local_20 = local_20 + 1;
          iVar2 = iVar2 + 1;
          local_24 = local_24 + -1;
        } while (local_24 != (undefined1 *)0x0);
      }
      local_2c = (wchar_t *)0x0;
      local_30 = (int *)0x5b42e8;
      FUN_004060a8(&DAT_006d25d8,PTR_DAT_005ae25c,1);
      local_28 = local_28 + 0x10;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    local_2c = (wchar_t *)0x4;
    local_30 = (int *)0x5b430c;
    FUN_005ae33c(param_1,1,2);
    local_2c = (wchar_t *)0x4;
    local_30 = (int *)0x5b4320;
    FUN_005ae33c(param_1,5,6);
    local_2c = (wchar_t *)0x4;
    local_30 = (int *)0x5b4334;
    FUN_005ae33c(param_1,9,10);
    local_2c = (wchar_t *)0x4;
    local_30 = (int *)0x5b4348;
    FUN_005ae33c(param_1,0xd,0xe);
    local_2c = (wchar_t *)0x4;
    local_30 = (int *)0x5b435c;
    FUN_005ae33c(param_1,0x11,0x12);
    local_2c = (wchar_t *)0x4;
    local_30 = (int *)0x5b4370;
    FUN_005ae33c(param_1,0x15,0x16);
    local_2c = (wchar_t *)0x4;
    local_30 = (int *)0x5b4384;
    FUN_005ae33c(param_1,0x19,0x1a);
    local_2c = (wchar_t *)0x4;
    local_30 = (int *)0x5b4398;
    FUN_005ae33c(param_1,0x1d,0x1e);
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005b43dd;
  local_24 = (undefined1 *)0x5b43b5;
  FUN_004048f8(&local_c0,3,puVar1);
  local_24 = (undefined1 *)0x5b43c5;
  FUN_004048f8(&local_98,2);
  local_24 = (undefined1 *)0x5b43d5;
  FUN_00405008(&local_90,0x18);
  return;
}

