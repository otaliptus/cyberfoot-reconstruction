// Address: 0043e0ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0043e0ac(int param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  HDC pHVar7;
  HDC pHVar8;
  int iVar9;
  byte bVar10;
  undefined4 *in_FS_OFFSET;
  int iVar11;
  int iVar12;
  int x1;
  int iVar13;
  int y1;
  undefined1 *puVar14;
  DWORD DVar15;
  COLORREF CVar16;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  byte local_9;
  int local_8;
  
  local_9 = param_2;
  if ((param_2 == 2) && (*(byte *)(param_1 + 0x20) < 3)) {
    local_9 = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc + (uint)local_9 * 4);
  if (iVar2 != -1) {
    return iVar2;
  }
  puStack_4c = (undefined1 *)0x43e0ee;
  local_8 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  puStack_4c = (undefined1 *)0x43e0fb;
  iVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
  if (iVar2 == 0 && iVar3 == 0) {
    return -1;
  }
  puStack_4c = (undefined1 *)0x43e10e;
  iVar2 = (**(code **)(**(int **)(local_8 + 4) + 0x2c))();
  iVar2 = iVar2 / (int)(uint)*(byte *)(local_8 + 0x20);
  puStack_4c = (undefined1 *)0x43e127;
  iVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
  if (*(int *)(local_8 + 8) == 0) {
    if (DAT_00662c9c == 0) {
      puStack_4c = (undefined1 *)0x43e147;
      DAT_00662c9c = FUN_0043dda4(PTR_DAT_0043dbc4,1);
    }
    puStack_4c = (undefined1 *)0x43e15a;
    uVar4 = FUN_0043de18(DAT_00662c9c,iVar2,iVar3);
    *(undefined4 *)(local_8 + 8) = uVar4;
  }
  puStack_4c = (undefined1 *)0x43e16c;
  local_10 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_50 = &LAB_0043e65b;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_58 = (undefined1 *)0x43e187;
  puStack_4c = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x40))(local_10,iVar2);
  puStack_58 = (undefined1 *)0x43e191;
  (**(code **)(*local_10 + 0x34))(local_10,iVar3);
  puStack_5c = local_2c;
  uStack_60 = 0x43e1a1;
  puStack_58 = (undefined1 *)iVar3;
  FUN_0041c990(0,0,iVar2);
  puStack_58 = (undefined1 *)0x43e1a9;
  iVar5 = FUN_00430280(local_10);
  puStack_58 = (undefined1 *)0x43e1b6;
  FUN_0042ab6c(*(undefined4 *)(iVar5 + 0x14),0xff00000f);
  puStack_58 = (undefined1 *)0x43e1c1;
  (**(code **)(**(int **)(local_8 + 4) + 0x24))();
  puStack_58 = (undefined1 *)0x43e1c6;
  uVar4 = FUN_0042fa48();
  puStack_58 = (undefined1 *)0x43e1d0;
  (**(code **)(*local_10 + 0x38))(local_10,uVar4);
  bVar10 = local_9;
  if (*(char *)(local_8 + 0x20) <= (char)local_9) {
    bVar10 = 0;
  }
  puStack_5c = local_3c;
  uStack_60 = 0x43e1f7;
  puStack_58 = (undefined1 *)iVar3;
  FUN_0041c990((uint)bVar10 * iVar2,0,(bVar10 + 1) * iVar2);
  if (local_9 != 0) {
    if (local_9 == 1) {
      local_18 = (int *)0x0;
      local_14 = (int *)0x0;
      puStack_5c = &LAB_0043e61f;
      uStack_60 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_60;
      puStack_58 = &stack0xfffffffc;
      local_18 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
      local_14 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
      (**(code **)(*local_14 + 8))(local_14,*(undefined4 *)(local_8 + 4));
      (**(code **)(*local_14 + 0x6c))(local_14,1);
      if (*(byte *)(local_8 + 0x20) < 2) {
        (**(code **)(*local_18 + 8))(local_18,*(undefined4 *)(local_8 + 4));
        (**(code **)(*local_18 + 0x6c))(local_18,1);
        iVar5 = FUN_00430280(local_18);
        FUN_0042ab6c(*(undefined4 *)(iVar5 + 0x14),0);
        (**(code **)(*local_18 + 0x40))(local_18,iVar2);
        cVar1 = FUN_0043033c(local_18);
        if (cVar1 != '\0') {
          iVar5 = FUN_00430280(local_18);
          FUN_0042a3a0(*(undefined4 *)(iVar5 + 0xc),0xffffff);
          FUN_0043113c(local_18,0);
          iVar5 = FUN_00430280(local_18);
          FUN_0042ab6c(*(undefined4 *)(iVar5 + 0x14),0xffffff);
        }
        FUN_0043113c(local_18,1);
        iVar9 = FUN_00430280(local_10);
        FUN_0042ab6c(*(undefined4 *)(iVar9 + 0x14),0xff00000f);
        FUN_0042af8c(iVar9,local_2c);
        FUN_0042ab6c(*(undefined4 *)(iVar9 + 0x14),0xff000014);
        CVar16 = 0;
        pHVar7 = (HDC)FUN_0042b5a8(iVar9);
        SetTextColor(pHVar7,CVar16);
        CVar16 = 0xffffff;
        pHVar7 = (HDC)FUN_0042b5a8(iVar9);
        SetBkColor(pHVar7,CVar16);
        DVar15 = 0xe20746;
        y1 = 0;
        x1 = 0;
        FUN_00430280(local_18);
        pHVar7 = (HDC)FUN_0042b5a8();
        iVar12 = 1;
        iVar11 = 1;
        iVar5 = iVar2;
        iVar13 = iVar3;
        pHVar8 = (HDC)FUN_0042b5a8(iVar9);
        BitBlt(pHVar8,iVar11,iVar12,iVar5,iVar13,pHVar7,x1,y1,DVar15);
        FUN_0042ab6c(*(undefined4 *)(iVar9 + 0x14),0xff000010);
        CVar16 = 0;
        pHVar7 = (HDC)FUN_0042b5a8(iVar9);
        SetTextColor(pHVar7,CVar16);
        CVar16 = 0xffffff;
        pHVar7 = (HDC)FUN_0042b5a8(iVar9);
        SetBkColor(pHVar7,CVar16);
        DVar15 = 0xe20746;
        iVar12 = 0;
        iVar11 = 0;
        FUN_00430280(local_18);
        pHVar7 = (HDC)FUN_0042b5a8();
        iVar13 = 0;
        iVar5 = 0;
        pHVar8 = (HDC)FUN_0042b5a8(iVar9);
        BitBlt(pHVar8,iVar5,iVar13,iVar2,iVar3,pHVar7,iVar11,iVar12,DVar15);
      }
      else {
        local_1c = FUN_00430280(local_10);
        puVar14 = local_3c;
        uVar4 = FUN_00430280(local_14);
        FUN_0042addc(local_1c,local_2c,uVar4,puVar14);
        FUN_0043113c(local_18,1);
        (**(code **)(*local_18 + 0x40))(local_18,iVar2);
        (**(code **)(*local_18 + 0x34))(local_18,iVar3);
        iVar5 = FUN_00430280(local_14);
        FUN_0042ab6c(*(undefined4 *)(iVar5 + 0x14),0xffffff);
        puVar14 = local_3c;
        uVar4 = FUN_00430280(local_14);
        uVar6 = FUN_00430280(local_18);
        FUN_0042addc(uVar6,local_2c,uVar4,puVar14);
        FUN_0042ab6c(*(undefined4 *)(local_1c + 0x14),0xff000014);
        pHVar7 = (HDC)FUN_0042b5a8(local_1c);
        SetTextColor(pHVar7,0);
        SetBkColor(pHVar7,0xffffff);
        DVar15 = 0xe20746;
        iVar13 = 0;
        iVar5 = 0;
        FUN_00430280(local_18);
        pHVar8 = (HDC)FUN_0042b5a8();
        BitBlt(pHVar7,0,0,iVar2,iVar3,pHVar8,iVar5,iVar13,DVar15);
        iVar5 = FUN_00430280(local_14);
        FUN_0042ab6c(*(undefined4 *)(iVar5 + 0x14),0x808080);
        puVar14 = local_3c;
        uVar4 = FUN_00430280(local_14);
        uVar6 = FUN_00430280(local_18);
        FUN_0042addc(uVar6,local_2c,uVar4,puVar14);
        FUN_0042ab6c(*(undefined4 *)(local_1c + 0x14),0xff000010);
        pHVar7 = (HDC)FUN_0042b5a8(local_1c);
        SetTextColor(pHVar7,0);
        SetBkColor(pHVar7,0xffffff);
        DVar15 = 0xe20746;
        iVar13 = 0;
        iVar5 = 0;
        FUN_00430280(local_18);
        pHVar8 = (HDC)FUN_0042b5a8();
        BitBlt(pHVar7,0,0,iVar2,iVar3,pHVar8,iVar5,iVar13,DVar15);
        uVar4 = FUN_00429e64(*(undefined4 *)(local_8 + 0x1c));
        iVar5 = FUN_00430280(local_14);
        FUN_0042ab6c(*(undefined4 *)(iVar5 + 0x14),uVar4);
        puVar14 = local_3c;
        uVar4 = FUN_00430280(local_14);
        uVar6 = FUN_00430280(local_18);
        FUN_0042addc(uVar6,local_2c,uVar4,puVar14);
        FUN_0042ab6c(*(undefined4 *)(local_1c + 0x14),0xff00000f);
        pHVar7 = (HDC)FUN_0042b5a8(local_1c);
        SetTextColor(pHVar7,0);
        SetBkColor(pHVar7,0xffffff);
        DVar15 = 0xe20746;
        iVar13 = 0;
        iVar5 = 0;
        FUN_00430280(local_18);
        pHVar8 = (HDC)FUN_0042b5a8();
        BitBlt(pHVar7,0,0,iVar2,iVar3,pHVar8,iVar5,iVar13,DVar15);
      }
      puVar14 = puStack_58;
      *in_FS_OFFSET = uStack_60;
      puStack_58 = &DAT_0043e626;
      puStack_5c = (undefined1 *)0x43e616;
      FUN_00403a84(local_14,uStack_60,puVar14);
      puStack_5c = (undefined1 *)0x43e61e;
      iVar2 = FUN_00403a84(local_18);
      return iVar2;
    }
    if (1 < (byte)(local_9 - 2)) goto LAB_0043e645;
  }
  puStack_58 = local_3c;
  puStack_5c = (undefined1 *)0x43e218;
  puStack_5c = (undefined1 *)FUN_00430280(*(undefined4 *)(local_8 + 4));
  uStack_60 = 0x43e221;
  uVar4 = FUN_00430280(local_10);
  puVar14 = puStack_5c;
  puStack_5c = (undefined1 *)0x43e22a;
  FUN_0042addc(uVar4,local_2c,puVar14);
  if (*(char *)(*(int *)(local_8 + 4) + 0x38) == '\x01') {
    puStack_58 = (undefined1 *)0x43e24a;
    uVar4 = FUN_0043dd48(*(undefined4 *)(local_8 + 8),local_10,*(undefined4 *)(local_8 + 0x1c));
    *(undefined4 *)(local_8 + 0xc + (uint)local_9 * 4) = uVar4;
  }
  else {
    puStack_58 = (undefined1 *)0x43e26e;
    uVar4 = FUN_0043dd48(*(undefined4 *)(local_8 + 8),local_10,0x20000000);
    *(undefined4 *)(local_8 + 0xc + (uint)local_9 * 4) = uVar4;
  }
LAB_0043e645:
  puVar14 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &DAT_0043e662;
  puStack_50 = (undefined1 *)0x43e65a;
  iVar2 = FUN_00403a84(local_10,uStack_54,puVar14);
  return iVar2;
}

