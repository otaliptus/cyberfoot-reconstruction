// Address: 004ce5c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ce5c0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  HRGN pHVar4;
  HDC pHVar5;
  int iVar6;
  HWND pHVar7;
  undefined4 uVar8;
  WPARAM WVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar30;
  int *piVar31;
  int iVar32;
  undefined4 *puVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int *piVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  UINT UVar41;
  int iVar42;
  undefined4 uVar43;
  tagPOINT *ptVar44;
  LPARAM LVar45;
  HRGN pHVar46;
  int iVar47;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 local_8c [16];
  undefined1 local_7c [4];
  int local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int *local_4c;
  char local_47;
  byte local_46;
  byte local_45;
  undefined4 local_44;
  undefined4 local_40;
  tagPOINT local_3c;
  int local_34;
  int local_30;
  undefined1 local_29;
  int local_28;
  int local_24;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_9c = &stack0xfffffffc;
  local_40 = 0;
  local_44 = 0;
  puStack_a0 = &LAB_004cf9c9;
  uStack_a4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a4;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 0x2ed) == '\0') {
    *(undefined1 *)((int)param_1 + 0x2ed) = 1;
    puStack_ac = &LAB_004cf9a4;
    uStack_b0 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_b0;
    puStack_a8 = &stack0xfffffffc;
    puVar2 = &stack0xfffffffc;
    if ((*(char *)((int)param_1 + 0x23d) != '\0') &&
       (((*(char *)(param_1[0x95] + 0x89) != '\0' || (*(char *)((int)param_1 + 0x232) == '\0')) ||
        (puStack_a8 = &stack0xfffffffc, puVar2 = &stack0xfffffffc,
        *(char *)((int)param_1 + 0x329) != '\0')))) {
      puStack_a8 = &stack0xfffffffc;
      (**(code **)(*param_1 + 0x44))(param_1,&local_6c);
      pHVar4 = CreateRectRgn(local_6c,local_68,local_64,local_60);
      pHVar46 = pHVar4;
      pHVar5 = (HDC)FUN_0042b5a8(local_8[0x82]);
      SelectClipRgn(pHVar5,pHVar46);
      pHVar5 = (HDC)FUN_0042b5a8(local_8[0x82]);
      iVar6 = SaveDC(pHVar5);
      (**(code **)(*local_8 + 0x40))(local_8,&local_3c);
      ptVar44 = &local_3c;
      pHVar7 = (HWND)FUN_0046cae0(local_8[0xc]);
      ScreenToClient(pHVar7,ptVar44);
      local_3c.x = -local_3c.x;
      local_3c.y = -local_3c.y;
      uVar8 = FUN_0042b5a8(local_8[0x82]);
      FUN_00464b44(uVar8,local_3c.x,local_3c.y);
      LVar45 = 0;
      WVar9 = FUN_0042b5a8(local_8[0x82]);
      UVar41 = 0x14;
      pHVar7 = (HWND)FUN_0046cae0(local_8[0xc]);
      SendMessageA(pHVar7,UVar41,WVar9,LVar45);
      LVar45 = 0;
      WVar9 = FUN_0042b5a8(local_8[0x82]);
      UVar41 = 0xf;
      pHVar7 = (HWND)FUN_0046cae0(local_8[0xc]);
      SendMessageA(pHVar7,UVar41,WVar9,LVar45);
      iVar1 = local_8[0xc];
      cVar3 = FUN_00403c10(iVar1,PTR_PTR_004c622c);
      if (cVar3 != '\0') {
        uVar8 = FUN_0042b5a8(local_8[0x82]);
        uVar10 = FUN_00403c34(iVar1,PTR_PTR_004c622c);
        FUN_004ccabc(uVar10,uVar8,0);
      }
      pHVar5 = (HDC)FUN_0042b5a8(local_8[0x82]);
      RestoreDC(pHVar5,iVar6);
      pHVar46 = (HRGN)0x0;
      pHVar5 = (HDC)FUN_0042b5a8(local_8[0x82]);
      SelectClipRgn(pHVar5,pHVar46);
      DeleteObject(pHVar4);
      puVar2 = puStack_9c;
    }
    puStack_9c = puVar2;
    cVar3 = (**(code **)(*local_8 + 0x50))();
    if (cVar3 == '\0') {
      *(undefined1 *)(local_8 + 0x8c) = 1;
      *(undefined1 *)((int)local_8 + 0x235) = 0;
    }
    else if ((char)local_8[0x8c] == '\x01') {
      if ((*(char *)((int)local_8 + 0x233) == '\0') || (local_8[0x8e] == 0)) {
        *(undefined1 *)(local_8 + 0x8c) = 0;
      }
      else {
        *(undefined1 *)(local_8 + 0x8c) = 4;
      }
    }
    if ((*(char *)((int)local_8 + 0x236) == '\x01') && (*(char *)((int)local_8 + 0x233) != '\0')) {
      *(undefined1 *)(local_8 + 0x8c) = 2;
    }
    if (*(char *)((int)local_8 + 0x32a) != '\0') {
      *(undefined1 *)(local_8 + 0x8c) = 2;
      *(undefined1 *)((int)local_8 + 0x211) = 1;
    }
    iVar1 = local_8[0x95];
    local_1f = 0;
    if ((((char)local_8[0x8c] == '\x01') ||
        (cVar3 = (**(code **)(*local_8 + 0x50))(), cVar3 == '\0')) && ((char)local_8[0xa6] != '\0'))
    {
      local_c = *(int *)(iVar1 + 0x40);
      local_10 = *(undefined4 *)(iVar1 + 0x44);
      local_14 = *(int *)(iVar1 + 0x70);
      local_18 = *(undefined4 *)(iVar1 + 0x6c);
      local_1c = *(undefined4 *)(iVar1 + 0x38);
      local_1e = *(byte *)(iVar1 + 0x7d);
      local_1d = *(byte *)(iVar1 + 0x7f);
    }
    else if (((char)local_8[0x8c] == '\x02') &&
            ((*(char *)((int)local_8 + 0x236) != '\x01' || ((char)local_8[0x8c] != '\x02')))) {
      local_c = *(int *)(iVar1 + 0x24);
      local_10 = *(undefined4 *)(iVar1 + 0x28);
      local_14 = *(int *)(iVar1 + 0x5c);
      local_18 = *(undefined4 *)(iVar1 + 0x60);
      local_1c = *(undefined4 *)(iVar1 + 0x18);
      local_1e = *(byte *)(iVar1 + 100);
      local_1d = *(byte *)(iVar1 + 0x68);
      local_1f = 1;
    }
    else if (((char)local_8[0x8c] == '\x04') ||
            ((*(char *)((int)local_8 + 0x236) == '\x01' && ((char)local_8[0x8c] == '\x02')))) {
      local_c = *(int *)(iVar1 + 0x48);
      local_10 = *(undefined4 *)(iVar1 + 0x34);
      local_14 = *(int *)(iVar1 + 0x78);
      local_18 = *(undefined4 *)(iVar1 + 0x74);
      local_1c = *(undefined4 *)(iVar1 + 0x3c);
      local_1e = *(byte *)(iVar1 + 0x7c);
      local_1d = *(byte *)(iVar1 + 0x7e);
      if ((local_8[0x85] != 0) &&
         ((*(char *)((int)local_8 + 0x231) != '\0' ||
          ((*(char *)((int)local_8 + 0x236) != '\x01' &&
           ((local_8[0x8e] < 1 || ((char)local_8[0x8c] == '\x02')))))))) {
        local_c = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x24),
                               local_8[0x87]);
        local_10 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x28),
                                local_8[0x87]);
        local_14 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x78),*(undefined4 *)(iVar1 + 0x5c),
                                local_8[0x87]);
        local_18 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x74),*(undefined4 *)(iVar1 + 0x60),
                                local_8[0x87]);
      }
      if ((((local_8[0x85] != 0) && (*(char *)((int)local_8 + 0x232) != '\0')) &&
          (*(char *)((int)local_8 + 0x236) == '\x01')) && ((char)local_8[0x8c] == '\x02')) {
        local_c = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x24),
                               local_8[0x87]);
        local_10 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x28),
                                local_8[0x87]);
        local_14 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x78),*(undefined4 *)(iVar1 + 0x5c),
                                local_8[0x87]);
        local_18 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x74),*(undefined4 *)(iVar1 + 0x60),
                                local_8[0x87]);
      }
    }
    else if (*(char *)((int)local_8 + 0x34a) == '\0') {
      local_c = *(int *)(iVar1 + 0x1c);
      local_10 = *(undefined4 *)(iVar1 + 0x20);
      local_14 = *(int *)(iVar1 + 0x4c);
      local_18 = *(undefined4 *)(iVar1 + 0x50);
      local_1c = *(undefined4 *)(iVar1 + 0x10);
      local_1e = *(byte *)(iVar1 + 0x67);
      local_1d = *(byte *)(iVar1 + 0x65);
    }
    else {
      local_c = *(int *)(iVar1 + 0x2c);
      local_10 = *(undefined4 *)(iVar1 + 0x30);
      local_14 = *(int *)(iVar1 + 0x54);
      local_18 = *(undefined4 *)(iVar1 + 0x58);
      local_1c = *(undefined4 *)(iVar1 + 0x14);
      local_1e = *(byte *)(iVar1 + 0x69);
      local_1d = *(byte *)(iVar1 + 0x66);
      local_1f = 1;
    }
    if (local_14 == 0x1fffffff) {
      local_14 = local_c;
    }
    if (local_8[0x85] != 0) {
      if (((*(char *)((int)local_8 + 0x211) == '\0') && (*(char *)((int)local_8 + 0x23d) == '\0'))
         && (((char)local_8[0x8c] != '\x04' &&
             ((*(char *)((int)local_8 + 0x236) != '\x01' || ((char)local_8[0x8c] != '\x02')))))) {
        local_c = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x1c),
                               local_8[0x86]);
        local_10 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x20),
                                local_8[0x86]);
        local_14 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x4c),
                                local_8[0x86]);
        local_18 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x50),
                                local_8[0x86]);
        local_1c = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x10),
                                local_8[0x86]);
      }
      else if ((*(char *)((int)local_8 + 0x236) == '\x01') && ((char)local_8[0x8c] == '\x02')) {
        if (*(char *)((int)local_8 + 0x211) != '\0') {
          if (*(char *)((int)local_8 + 0x232) == '\0') {
            local_c = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x48),
                                   local_8[0x87]);
            local_10 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x34),
                                    local_8[0x87]);
            local_14 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(iVar1 + 0x78),
                                    local_8[0x87]);
            local_18 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x60),*(undefined4 *)(iVar1 + 0x74),
                                    local_8[0x87]);
          }
          else {
            local_c = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x24),
                                   local_8[0x87]);
            local_10 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x28),
                                    local_8[0x87]);
            local_14 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x78),*(undefined4 *)(iVar1 + 0x5c),
                                    local_8[0x87]);
            local_18 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x74),*(undefined4 *)(iVar1 + 0x60),
                                    local_8[0x87]);
          }
        }
      }
      else if (((*(char *)((int)local_8 + 0x211) != '\0') && ((char)local_8[0x8c] != '\x04')) &&
              (*(char *)((int)local_8 + 0x32a) == '\0')) {
        local_c = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x2c),
                               local_8[0x87]);
        local_10 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x30),
                                local_8[0x87]);
        local_14 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(iVar1 + 0x54),
                                local_8[0x87]);
        local_18 = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x60),*(undefined4 *)(iVar1 + 0x58),
                                local_8[0x87]);
        local_1c = FUN_004c7df4(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x14),
                                local_8[0x87]);
      }
    }
    cVar3 = (**(code **)(*local_8 + 0x50))();
    if ((cVar3 == '\0') && (local_8[0x96] != 0)) {
      local_24 = local_8[0x96];
      local_29 = 1;
    }
    else {
      if ((*(char *)((int)local_8 + 0x34a) == '\0') || (local_8[0x98] == 0)) {
        local_24 = local_8[0x8a];
      }
      else {
        local_24 = local_8[0x98];
      }
      local_29 = (**(code **)(*local_8 + 0x50))();
    }
    cVar3 = (**(code **)(*local_8 + 0x50))();
    if ((cVar3 == '\0') && (cVar3 = (**(code **)(*(int *)local_8[0x9a] + 0x1c))(), cVar3 == '\0')) {
      local_28 = local_8[0x9a];
    }
    else if ((*(char *)((int)local_8 + 0x34a) == '\0') ||
            (cVar3 = (**(code **)(*(int *)local_8[0x9b] + 0x1c))(), cVar3 != '\0')) {
      local_28 = local_8[0x99];
    }
    else {
      local_28 = local_8[0x9b];
    }
    if (local_24 == 0) {
      local_24 = local_8[0x97];
      local_29 = 1;
    }
    if ((char)local_8[0x9c] == '\0') {
      FUN_004048d4(&local_40);
      FUN_00404ff0(&local_44);
    }
    else {
      FUN_00466208(local_8,&local_40);
      thunk_FUN_0040502c(&local_44,local_8[0xb6]);
    }
    if (((*(char *)((int)local_8 + 0x231) == '\0') && (*(char *)((int)local_8 + 0x213) == '\0')) ||
       (*(char *)((int)local_8 + 0x23f) == '\0')) {
      local_45 = 0;
    }
    else if (*(char *)((int)local_8 + 0x27e) == '\0') {
      local_45 = 2;
    }
    else {
      local_45 = 1;
    }
    if ((((char)local_8[0xa0] != '\0') && (*(char *)((int)local_8 + 0x213) != '\0')) &&
       (*(byte *)((int)local_8 + 0x349) < 4)) {
      local_1c = *(undefined4 *)(iVar1 + 0x10);
    }
    if ((((char)local_8[0x8c] == '\x01') ||
        (cVar3 = (**(code **)(*local_8 + 0x50))(), cVar3 == '\0')) && ((char)local_8[0xa6] != '\0'))
    {
      local_c = *(int *)(iVar1 + 0x40);
      local_10 = *(undefined4 *)(iVar1 + 0x44);
      local_14 = *(int *)(iVar1 + 0x70);
      local_18 = *(undefined4 *)(iVar1 + 0x6c);
      local_1c = *(undefined4 *)(iVar1 + 0x38);
      local_1e = *(byte *)(iVar1 + 0x7d);
      local_1d = *(byte *)(iVar1 + 0x7f);
    }
    if ((((char)local_8[0xca] != '\0') && ((byte)(*(char *)((int)local_8 + 0x28a) - 1U) < 2)) &&
       (*(char *)((int)local_8 + 0x211) == '\0')) {
      local_c = *(int *)(iVar1 + 0x2c);
      local_10 = *(undefined4 *)(iVar1 + 0x30);
      local_14 = *(int *)(iVar1 + 0x54);
      local_18 = *(undefined4 *)(iVar1 + 0x58);
      local_1c = *(undefined4 *)(iVar1 + 0x14);
      local_1e = *(byte *)(iVar1 + 0x69);
      local_1d = *(byte *)(iVar1 + 0x66);
      local_1f = 1;
    }
    if (((char)local_8[0xca] == '\0') ||
       ((*(char *)((int)local_8 + 0x28a) != '\0' && (*(char *)((int)local_8 + 0x28a) != '\x02')))) {
      local_46 = 0;
    }
    else {
      local_46 = 1;
    }
    if (((char)local_8[0xca] == '\0') || (1 < (byte)(*(char *)((int)local_8 + 0x28a) - 1U))) {
      local_47 = '\0';
    }
    else {
      local_47 = '\x01';
    }
    piVar11 = (int *)FUN_0042a1cc(PTR_PTR_0042893c,1);
    (**(code **)(*piVar11 + 8))(piVar11,local_8[0x1a]);
    if (*(char *)((int)local_8 + 0x34a) != '\0') {
      FUN_0042a3a0(piVar11,*(undefined4 *)(local_8[0x95] + 0x80));
    }
    if ((char)local_8[0x8c] == '\x02') {
      FUN_0042a3a0(piVar11,*(undefined4 *)(local_8[0x95] + 0x84));
    }
    if ((*(char *)((int)local_8 + 0x236) == '\x01') && ((char)local_8[0x8c] == '\x02')) {
      FUN_0042a3a0(piVar11,*(undefined4 *)(local_8[0x95] + 0x8c));
    }
    if (*(char *)(local_8[0x95] + 0x88) != '\0') {
      cVar3 = FUN_004c08d8();
      if (cVar3 == '\0') {
        FUN_0042a5c8(piVar11,"Tahoma");
      }
      else {
        FUN_0042a5c8(piVar11,"Segoe UI");
      }
    }
    local_4c = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    (**(code **)(*local_4c + 0x40))(local_4c,1);
    (**(code **)(*local_4c + 0x34))(local_4c,1);
    (**(code **)(*local_8 + 0xd4))(local_8,local_4c);
    iVar6 = (**(code **)(*local_8 + 0x3c))();
    if (iVar6 != 0) {
      uVar8 = (**(code **)(*local_8 + 0x3c))();
      iVar6 = FUN_00403c34(uVar8,PTR_PTR_00472158);
      if (-1 < *(int *)(iVar6 + 0x80)) {
        uVar8 = (**(code **)(*local_8 + 0x3c))();
        iVar6 = FUN_00403c34(uVar8,PTR_PTR_00472158);
        iVar6 = *(int *)(iVar6 + 0x5c);
        if (((iVar6 != 0) && (cVar3 = FUN_00403c10(iVar6,PTR_PTR_00471e74), cVar3 != '\0')) &&
           (iVar6 = FUN_00403c34(iVar6,PTR_PTR_00471e74), *(int *)(iVar6 + 0x38) != 0)) {
          if ((local_24 == 0) || ((char)local_8[0xce] == '\0')) {
            uVar8 = (**(code **)(*local_8 + 0x3c))();
            iVar6 = FUN_00403c34(uVar8,PTR_PTR_00472158);
            local_24 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x38);
            local_29 = (**(code **)(*local_8 + 0x50))();
          }
          uVar8 = (**(code **)(*local_8 + 0x3c))();
          iVar6 = FUN_00403c34(uVar8,PTR_PTR_00472158);
          local_8[0x8b] = *(int *)(iVar6 + 0x80);
        }
      }
    }
    local_5c = 0;
    local_58 = 0;
    if ((char)local_8[0xb0] != '\0') {
      if (*(byte *)(local_8 + 0xbe) < 2) {
        local_5c = 0x10;
        local_58 = 0x10;
        if ((local_24 != 0) && (-1 < local_8[0x8b])) {
          local_28 = 0;
        }
      }
      if ((char)local_8[0xbe] == '\0') {
        FUN_004048d4(&local_40);
        FUN_00404ff0(&local_44);
      }
    }
    if ((*(char *)((int)local_8 + 0x2c2) != '\0') ||
       ((*(char *)((int)local_8 + 0x2c3) != '\0' && ((char)local_8[0xb0] != '\0')))) {
      (**(code **)(*local_8 + 0x44))(local_8,local_7c);
      local_70 = local_78 + 0x1000;
      uVar12 = (uint)local_1e;
      uVar13 = (uint)local_1d;
      uVar14 = (uint)*(byte *)(local_8 + 0xd3);
      iVar6 = local_8[0x96];
      iVar36 = local_8[0x8b];
      uVar15 = CONCAT31((int3)((uint)iVar36 >> 8),local_29);
      uVar16 = (uint)*(byte *)((int)local_8 + 0x23e);
      uVar17 = (uint)*(byte *)((int)local_8 + 0x23f);
      uVar18 = (uint)local_1f;
      iVar37 = local_24;
      piVar38 = piVar11;
      uVar8 = local_44;
      uVar10 = local_40;
      uVar39 = local_1c;
      uVar40 = local_18;
      iVar42 = local_14;
      uVar43 = local_10;
      iVar47 = local_c;
      uVar19 = (**(code **)(*local_8 + 0x50))();
      uVar20 = (uint)local_46;
      uVar21 = (uint)*(byte *)(local_8 + 0x94);
      iVar34 = local_8[0xd5];
      puVar33 = &local_5c;
      iVar32 = local_8[0x9d];
      uVar22 = (uint)*(byte *)((int)local_8 + 0x34b);
      uVar23 = (uint)local_45;
      if ((*(char *)((int)local_8 + 0x329) == '\0') &&
         (((*(char *)((int)local_8 + 0x23d) == '\0' ||
           (*(char *)((int)local_8 + 0x232) != '\0' || local_47 != '\0')) ||
          ((char)local_8[0x8c] == '\x02')))) {
        uVar24 = 0;
      }
      else {
        uVar24 = 1;
      }
      uVar25 = (uint)*(byte *)((int)local_8 + 0x232);
      uVar26 = (uint)*(byte *)(local_8 + 0xa0);
      uVar27 = (uint)*(byte *)(local_8 + 0x90);
      piVar31 = local_4c;
      iVar35 = local_28;
      uVar28 = (**(code **)(*local_8 + 0xe0))();
      if ((*(char *)(iVar1 + 0x89) == '\0') || (*(char *)((int)local_8 + 0x23d) == '\0')) {
        uVar29 = 0;
      }
      else {
        uVar29 = 1;
      }
      (**(code **)(*local_8 + 0x44))
                (local_8,local_8c,*local_8,&local_54,local_8[0xb1],local_8[0xb2],(char)local_8[0xd2]
                 ,uVar29,(char)local_8[0xae],*(undefined1 *)((int)local_8 + 0x233),local_8[0xc6],
                 local_8[0xc5],local_8[0xb7],local_8[0xaf],*(char *)((int)local_8 + 0x241) == '\0',
                 (char)local_8[0xb3],1,*(undefined1 *)((int)local_8 + 0x2c1),
                 *(undefined1 *)((int)local_8 + 0x2b9),uVar28,uVar27,uVar26,uVar25,uVar24,uVar23,
                 piVar31,uVar22,iVar32,puVar33,iVar34,iVar35,uVar21,uVar20,uVar19,uVar18,uVar17,
                 uVar16,uVar15,iVar36,iVar6,iVar37,piVar38,uVar14,uVar8,uVar10,uVar13,uVar12,uVar39,
                 uVar40,iVar42,uVar43,iVar47);
      FUN_004c9df4(local_8,local_8[0x82],local_8c);
      if ((char)local_8[0xb0] != '\0') {
        local_30 = local_8[0xaf] * 3 + local_54 + 2 + local_8[0xb2] * 2;
        cVar3 = *(char *)((int)local_8 + 0x23e);
        if (((cVar3 == '\x01') || (cVar3 == '\x03')) || ((byte)(cVar3 - 6U) < 2)) {
          local_34 = local_8[0xb1] * 2 + local_50;
        }
        else {
          local_34 = local_8[0xaf] * 2 + local_50 + local_8[0xb1] * 2;
        }
        if (*(char *)((int)local_8 + 0x23f) != '\0') {
          if ((char)local_8[0x94] == '\x01') {
            local_34 = local_34 + 0xe;
          }
          else {
            local_30 = local_30 + 0xe;
          }
        }
        if (*(short *)((int)local_8 + 0x302) != 0) {
          (*(code *)local_8[0xc0])(local_8[0xc1],local_8,&local_30,&local_34);
        }
        if (local_8[0x12] != local_30) {
          FUN_004659c4(local_8,local_30);
        }
        if (local_8[0x13] != local_34) {
          FUN_004659e8(local_8,local_34);
        }
      }
      *(undefined1 *)((int)local_8 + 0x2c3) = 0;
    }
    uVar12 = (uint)local_1e;
    uVar13 = (uint)local_1d;
    uVar14 = (uint)*(byte *)(local_8 + 0xd3);
    iVar6 = local_8[0x96];
    iVar36 = local_8[0x8b];
    uVar15 = CONCAT31((int3)((uint)iVar36 >> 8),local_29);
    uVar16 = (uint)*(byte *)((int)local_8 + 0x23e);
    uVar17 = (uint)*(byte *)((int)local_8 + 0x23f);
    uVar18 = (uint)local_1f;
    iVar37 = local_24;
    piVar38 = piVar11;
    uVar8 = local_44;
    uVar10 = local_40;
    uVar39 = local_1c;
    uVar40 = local_18;
    iVar42 = local_14;
    uVar43 = local_10;
    iVar47 = local_c;
    uVar19 = (**(code **)(*local_8 + 0x50))();
    uVar20 = (uint)local_46;
    uVar21 = (uint)*(byte *)(local_8 + 0x94);
    iVar34 = local_8[0xd5];
    puVar33 = &local_5c;
    iVar32 = local_8[0x9d];
    uVar22 = (uint)*(byte *)((int)local_8 + 0x34b);
    uVar23 = (uint)local_45;
    if ((*(char *)((int)local_8 + 0x329) == '\0') &&
       (((*(char *)((int)local_8 + 0x23d) == '\0' ||
         (*(char *)((int)local_8 + 0x232) != '\0' || local_47 != '\0')) ||
        ((char)local_8[0x8c] == '\x02')))) {
      uVar24 = 0;
    }
    else {
      uVar24 = 1;
    }
    uVar25 = (uint)*(byte *)((int)local_8 + 0x232);
    uVar26 = (uint)*(byte *)(local_8 + 0xa0);
    uVar27 = (uint)*(byte *)(local_8 + 0x90);
    piVar31 = local_4c;
    iVar35 = local_28;
    uVar28 = (**(code **)(*local_8 + 0xe0))();
    if ((*(char *)(iVar1 + 0x89) == '\0') || (*(char *)((int)local_8 + 0x23d) == '\0')) {
      uVar29 = 0;
    }
    else {
      uVar29 = 1;
    }
    (**(code **)(*local_8 + 0x44))
              (local_8,local_8c,*local_8,&local_54,local_8[0xb1],local_8[0xb2],(char)local_8[0xd2],
               uVar29,(char)local_8[0xae],*(undefined1 *)((int)local_8 + 0x233),local_8[0xc6],
               local_8[0xc5],local_8[0xb7],local_8[0xaf],*(char *)((int)local_8 + 0x241) == '\0',
               (char)local_8[0xb3],0,*(undefined1 *)((int)local_8 + 0x2c1),
               *(undefined1 *)((int)local_8 + 0x2b9),uVar28,uVar27,uVar26,uVar25,uVar24,uVar23,
               piVar31,uVar22,iVar32,puVar33,iVar34,iVar35,uVar21,uVar20,uVar19,uVar18,uVar17,uVar16
               ,uVar15,iVar36,iVar6,iVar37,piVar38,uVar14,uVar8,uVar10,uVar13,uVar12,uVar39,uVar40,
               iVar42,uVar43,iVar47);
    FUN_004c9df4(local_8,local_8[0x82],local_8c);
    (**(code **)(*local_8 + 0xd0))();
    uVar30 = *(char *)((int)local_8 + 0x232) != '\0';
    if ((char)local_8[0x8c] == '\x02') {
      uVar30 = 2;
    }
    if (*(short *)((int)local_8 + 0x2d2) != 0) {
      (**(code **)(*local_8 + 0x44))(local_8,local_8c);
      (*(code *)local_8[0xb4])(local_8[0xb5],local_8,local_8[0x82],uVar30,local_8c);
    }
    FUN_00403a84(piVar11);
    FUN_00403a84(local_4c);
    if (local_8[0xc] != 0) {
      if (((char)local_8[0xb3] != '\0') &&
         (((*(char *)((int)local_8 + 0x23d) == '\0' || (*(char *)((int)local_8 + 0x232) != '\0')) ||
          (((char)local_8[0x8c] == '\x02' || (*(char *)((int)local_8 + 0x34a) != '\0')))))) {
        (**(code **)(*local_8 + 0x44))(local_8,&local_6c);
        if (*(byte *)(local_8 + 0xa0) != 2) {
          if (*(byte *)(local_8 + 0xa0) < 2) {
            pHVar46 = CreateRectRgn(0,0,1,1);
          }
          else {
            pHVar46 = CreateRectRgn(local_64 + -1,0,local_64,1);
          }
          if ((char)local_8[0xa0] == '\0') {
            pHVar4 = CreateRectRgn(local_64 + -1,0,local_64,1);
            CombineRgn(pHVar46,pHVar46,pHVar4,2);
            DeleteObject(pHVar4);
          }
          if (*(byte *)(local_8 + 0xa0) < 2) {
            pHVar4 = CreateRectRgn(0,local_60 + -1,1,local_60);
            CombineRgn(pHVar46,pHVar46,pHVar4,2);
            DeleteObject(pHVar4);
          }
          if (((char)local_8[0xa0] == '\0') || ((char)local_8[0xa0] == '\x03')) {
            pHVar4 = CreateRectRgn(local_64 + -1,local_60 + -1,local_64,local_60);
            CombineRgn(pHVar46,pHVar46,pHVar4,2);
            DeleteObject(pHVar4);
          }
          pHVar4 = pHVar46;
          pHVar5 = (HDC)FUN_0042b5a8(local_8[0x82]);
          SelectClipRgn(pHVar5,pHVar4);
          pHVar5 = (HDC)FUN_0042b5a8(local_8[0x82]);
          iVar6 = SaveDC(pHVar5);
          (**(code **)(*local_8 + 0x40))(local_8,&local_3c);
          ptVar44 = &local_3c;
          pHVar7 = (HWND)FUN_0046cae0(local_8[0xc]);
          ScreenToClient(pHVar7,ptVar44);
          local_3c.x = -local_3c.x;
          local_3c.y = -local_3c.y;
          uVar8 = FUN_0042b5a8(local_8[0x82]);
          FUN_00464b44(uVar8,local_3c.x,local_3c.y);
          LVar45 = 0;
          WVar9 = FUN_0042b5a8(local_8[0x82]);
          UVar41 = 0x14;
          pHVar7 = (HWND)FUN_0046cae0(local_8[0xc]);
          SendMessageA(pHVar7,UVar41,WVar9,LVar45);
          LVar45 = 0;
          WVar9 = FUN_0042b5a8(local_8[0x82]);
          UVar41 = 0xf;
          pHVar7 = (HWND)FUN_0046cae0(local_8[0xc]);
          SendMessageA(pHVar7,UVar41,WVar9,LVar45);
          iVar1 = local_8[0xc];
          cVar3 = FUN_00403c10(iVar1,PTR_PTR_004c622c);
          if (cVar3 != '\0') {
            uVar8 = FUN_0042b5a8(local_8[0x82]);
            uVar10 = FUN_00403c34(iVar1,PTR_PTR_004c622c);
            FUN_004ccabc(uVar10,uVar8,0);
          }
          pHVar5 = (HDC)FUN_0042b5a8(local_8[0x82]);
          RestoreDC(pHVar5,iVar6);
          pHVar4 = (HRGN)0x0;
          pHVar5 = (HDC)FUN_0042b5a8(local_8[0x82]);
          SelectClipRgn(pHVar5,pHVar4);
          DeleteObject(pHVar46);
        }
      }
      *in_FS_OFFSET = uStack_b0;
      *(undefined1 *)((int)local_8 + 0x2ed) = 0;
      return;
    }
    FUN_004042fc();
    puVar2 = puStack_9c;
  }
  puStack_9c = puVar2;
  puVar2 = puStack_9c;
  *in_FS_OFFSET = uStack_a4;
  puStack_9c = &LAB_004cf9d0;
  puStack_a0 = (undefined1 *)0x4cf9c0;
  FUN_00404ff0(&local_44,uStack_a4,puVar2);
  puStack_a0 = (undefined1 *)0x4cf9c8;
  FUN_004048d4(&local_40);
  return;
}

