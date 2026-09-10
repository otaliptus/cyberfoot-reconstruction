// Address: 0043794c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043794c(undefined4 param_1,byte param_2,ushort param_3)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  LPCSTR pCVar6;
  HDC pHVar7;
  int iVar8;
  HICON pHVar9;
  uint uVar10;
  int *piVar11;
  LONG LVar12;
  undefined **ppuVar13;
  int *in_FS_OFFSET;
  bool bVar14;
  int iVar15;
  tagRECT *ptVar16;
  int iVar17;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  tagRECT local_64;
  int *local_54;
  undefined **local_50;
  int *local_4c;
  int *local_48;
  byte local_42;
  byte local_41;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  ushort local_b;
  byte local_9;
  undefined4 local_8;
  
  puStack_84 = &stack0xfffffffc;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  puStack_88 = &LAB_00437ebc;
  puStack_8c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_8c;
  local_b = param_3;
  local_9 = param_2;
  local_8 = param_1;
  local_10 = (int *)FUN_00437474(PTR_PTR_004372fc,1,*(undefined4 *)PTR_DAT_0066b3ac);
  (**(code **)(*local_10 + 0x70))(local_10,*(undefined1 *)(*(int *)PTR_DAT_0066b3ac + 0x34));
  FUN_004811d8(local_10,3);
  uVar4 = FUN_00481490(local_10);
  FUN_0042b4a4(uVar4,local_10[0x1a]);
  *(undefined1 *)((int)local_10 + 0x22d) = 1;
  local_10[0x77] = (int)local_10;
  local_10[0x76] = (int)&LAB_00437504;
  uVar4 = FUN_00481490(local_10);
  FUN_004372a8(uVar4,&local_18);
  iVar15 = local_18;
  local_1c = MulDiv(8,local_18,4);
  iVar17 = local_14;
  local_20 = MulDiv(8,local_14,8);
  local_24 = MulDiv(10,iVar15,4);
  local_28 = MulDiv(10,iVar17,8);
  local_2c = MulDiv(0x32,iVar15,4);
  uVar10 = 0;
  piVar11 = &DAT_0066ca84;
  local_50 = &PTR_PTR_00662a30;
  do {
    bVar14 = (byte)uVar10 < 0xf;
    if ((byte)uVar10 < 0x10) {
      bVar14 = (*(byte *)((int)&local_b + ((int)(uVar10 & 0x7f) >> 3)) >> (uVar10 & 7) & 1) != 0;
    }
    if (bVar14) {
      if (*piVar11 == 0) {
        FUN_0041c990(0,0,0,&local_64,0);
        uVar5 = FUN_00468538(local_10);
        uVar5 = uVar5 | 0x420;
        ptVar16 = &local_64;
        iVar15 = -1;
        FUN_00406d44(*local_50,&local_68);
        pCVar6 = (LPCSTR)FUN_00404da4(local_68);
        FUN_00481490(local_10);
        pHVar7 = (HDC)FUN_0042b5a8();
        DrawTextA(pHVar7,pCVar6,iVar15,ptVar16,uVar5);
        *piVar11 = (local_64.right - local_64.left) + 8;
      }
      if (local_2c < *piVar11) {
        local_2c = *piVar11;
      }
    }
    uVar10 = uVar10 + 1;
    local_50 = local_50 + 1;
    piVar11 = piVar11 + 1;
  } while ((char)uVar10 != '\v');
  local_30 = MulDiv(0xe,local_14,8);
  local_34 = MulDiv(4,local_18,4);
  iVar17 = 0;
  uVar10 = FUN_00484e64(*(undefined4 *)PTR_DAT_0066b760);
  iVar15 = (int)uVar10 >> 1;
  if (iVar15 < 0) {
    iVar15 = iVar15 + (uint)((uVar10 & 1) != 0);
  }
  SetRect(&local_64,0,0,iVar15,iVar17);
  uVar10 = FUN_00468538(local_10);
  uVar10 = uVar10 | 0x450;
  ptVar16 = &local_64;
  iVar15 = FUN_00404ba4(local_8);
  iVar15 = iVar15 + 1;
  pCVar6 = (LPCSTR)FUN_00404da4(local_8);
  FUN_00481490(local_10);
  pHVar7 = (HDC)FUN_0042b5a8();
  DrawTextA(pHVar7,pCVar6,iVar15,ptVar16,uVar10);
  pCVar6 = *(LPCSTR *)(&DAT_006629f0 + (uint)local_9 * 4);
  local_38 = local_64.bottom;
  LVar12 = local_64.right;
  if ((pCVar6 != (LPCSTR)0x0) && (LVar12 = local_64.right + local_24 + 0x20, local_64.bottom < 0x20)
     ) {
    local_38 = 0x20;
  }
  iVar15 = 0;
  uVar10 = 0;
  do {
    bVar14 = (byte)uVar10 < 0xf;
    if ((byte)uVar10 < 0x10) {
      bVar14 = (*(byte *)((int)&local_b + ((int)(uVar10 & 0x7f) >> 3)) >> (uVar10 & 7) & 1) != 0;
    }
    if (bVar14) {
      iVar15 = iVar15 + 1;
    }
    uVar10 = uVar10 + 1;
  } while ((char)uVar10 != '\v');
  iVar17 = 0;
  if (iVar15 != 0) {
    iVar17 = local_2c * iVar15 + (iVar15 + -1) * local_34;
  }
  iVar15 = FUN_004323b8(LVar12,iVar17);
  FUN_004807f8(local_10,iVar15 + local_1c * 2);
  FUN_00480828(local_10,local_38 + local_30 + local_28 + local_20 * 2);
  uVar10 = FUN_00484e64(*(undefined4 *)PTR_DAT_0066b760);
  iVar15 = (int)uVar10 >> 1;
  if (iVar15 < 0) {
    iVar15 = iVar15 + (uint)((uVar10 & 1) != 0);
  }
  iVar8 = local_10[0x12] >> 1;
  if (iVar8 < 0) {
    iVar8 = iVar8 + (uint)((local_10[0x12] & 1U) != 0);
  }
  FUN_00465978(local_10,iVar15 - iVar8);
  uVar10 = FUN_00484e58(*(undefined4 *)PTR_DAT_0066b760);
  iVar15 = (int)uVar10 >> 1;
  if (iVar15 < 0) {
    iVar15 = iVar15 + (uint)((uVar10 & 1) != 0);
  }
  iVar8 = local_10[0x13] >> 1;
  if (iVar8 < 0) {
    iVar8 = iVar8 + (uint)((local_10[0x13] & 1U) != 0);
  }
  FUN_0046599c(local_10,iVar15 - iVar8);
  if (local_9 == 4) {
    FUN_00487008(*(undefined4 *)PTR_DAT_0066b3ac,&local_70);
    FUN_00466238(local_10,local_70);
  }
  else {
    FUN_00406d44((&PTR_PTR_006629dc)[local_9],&local_6c);
    FUN_00466238(local_10,local_6c);
  }
  if (pCVar6 != (LPCSTR)0x0) {
    local_48 = (int *)FUN_0043a67c(PTR_PTR_004386b8,1,local_10);
    (**(code **)(*local_48 + 0x18))(local_48,"Image");
    (**(code **)(*local_48 + 0x68))(local_48,local_10);
    pHVar9 = LoadIconA((HINSTANCE)0x0,pCVar6);
    uVar4 = FUN_0042d5e0(local_48[0x5a]);
    FUN_00431ca0(uVar4,pHVar9);
    (**(code **)(*local_48 + 0x84))(local_48,local_1c,local_20,0x20,0x20);
  }
  piVar11 = (int *)FUN_0045b76c(PTR_PTR_00457844,1,local_10);
  local_10[0xbe] = (int)piVar11;
  (**(code **)(*piVar11 + 0x18))(piVar11,"Message");
  (**(code **)(*piVar11 + 0x68))(piVar11,local_10);
  FUN_0045bc44(piVar11,1);
  FUN_00466238(piVar11,local_8);
  FUN_00465bc8(piVar11,&local_64);
  (**(code **)(*piVar11 + 0x70))(piVar11,*(undefined1 *)((int)local_10 + 0x5f));
  local_40 = (LVar12 - local_64.right) + local_1c;
  cVar2 = FUN_00403c80(piVar11);
  if (cVar2 != '\0') {
    iVar15 = FUN_00465c0c(local_10);
    local_40 = (iVar15 - local_40) - piVar11[0x12];
  }
  (**(code **)(*piVar11 + 0x84))(piVar11,local_40,local_20,local_64.bottom,local_64.right);
  if ((local_b & 4) == 0) {
    if ((local_b & 1) == 0) {
      local_41 = 5;
    }
    else {
      local_41 = 0;
    }
  }
  else {
    local_41 = 2;
  }
  if ((local_b & 8) == 0) {
    if ((local_b & 2) == 0) {
      local_42 = 2;
    }
    else {
      local_42 = 1;
    }
  }
  else {
    local_42 = 3;
  }
  iVar15 = FUN_00465c0c(local_10);
  local_3c = iVar15 - iVar17 >> 1;
  if (local_3c < 0) {
    local_3c = local_3c + (uint)((iVar15 - iVar17 & 1U) != 0);
  }
  uVar10 = 0;
  local_50 = &PTR_DAT_00662a04;
  ppuVar13 = &PTR_PTR_00662a30;
  local_54 = &DAT_00662a5c;
  iVar15 = local_64.bottom;
  do {
    bVar3 = (byte)uVar10;
    bVar14 = bVar3 < 0xf;
    if (bVar3 < 0x10) {
      bVar14 = (*(byte *)((int)&local_b + ((int)(uVar10 & 0x7f) >> 3)) >> (uVar10 & 7) & 1) != 0;
    }
    if (bVar14) {
      local_4c = (int *)FUN_0045f070(PTR_PTR_00459de4,1,local_10);
      (**(code **)(*local_4c + 0x18))(local_4c,*local_50);
      (**(code **)(*local_4c + 0x68))(local_4c,local_10);
      FUN_00406d44(*ppuVar13,&local_74);
      FUN_00466238(local_4c,local_74);
      local_4c[0x85] = *local_54;
      if (bVar3 == local_41) {
        FUN_0045f150(local_4c,1);
      }
      if (bVar3 == local_42) {
        *(undefined1 *)((int)local_4c + 0x211) = 1;
      }
      (**(code **)(*local_4c + 0x84))
                (local_4c,local_3c,local_38 + local_20 + local_28,local_30,local_2c);
      local_3c = local_3c + local_2c + local_34;
      if (bVar3 == 10) {
        local_4c[0x49] = (int)local_10;
        local_4c[0x48] = (int)&LAB_004374ec;
      }
    }
    puVar1 = puStack_8c;
    uVar10 = uVar10 + 1;
    local_54 = local_54 + 1;
    ppuVar13 = ppuVar13 + 1;
    local_50 = local_50 + 1;
  } while ((char)uVar10 != '\v');
  *in_FS_OFFSET = iVar15;
  puStack_8c = &LAB_00437ec3;
  FUN_004048f8(&local_74,4,puVar1);
  return;
}

