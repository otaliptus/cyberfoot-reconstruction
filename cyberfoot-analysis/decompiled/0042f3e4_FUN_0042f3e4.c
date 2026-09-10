// Address: 0042f3e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HPALETTE FUN_0042f3e4(HBITMAP param_1,HPALETTE param_2,HPALETTE param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  UINT UVar3;
  HBRUSH hbr;
  COLORREF CVar4;
  HGDIOBJ h;
  uint uVar5;
  HPALETTE pHVar6;
  DWORD *pDVar7;
  LPBITMAPINFO ptVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  RECT local_9c;
  undefined1 local_8c [4];
  int local_88;
  int local_84;
  int local_78;
  int local_74;
  HPALETTE local_38;
  RGBQUAD local_34;
  undefined4 local_30;
  LPVOID local_2c;
  LPBITMAPINFO local_28;
  HDC local_24;
  HDC local_20;
  HDC local_1c;
  HGDIOBJ local_18;
  HPALETTE local_14;
  HPALETTE local_10;
  HPALETTE local_c;
  HBITMAP local_8;
  
  bVar9 = 0;
  puVar11 = &stack0xfffffffc;
  local_14 = (HPALETTE)0x0;
  if (((*(int *)(param_5 + 0x18) == 0) ||
      ((*(int *)(param_5 + 0x1c) != 0 && (*(int *)(param_5 + 0x20) != 0)))) &&
     ((*(int *)(param_5 + 0x18) != 0 ||
      ((*(int *)(param_5 + 4) != 0 && (*(int *)(param_5 + 8) != 0)))))) {
    local_10 = param_3;
    local_c = param_2;
    local_8 = param_1;
    FUN_0042efa0(param_1);
    local_74 = 0;
    if (local_8 != (HBITMAP)0x0) {
      iVar1 = GetObjectA(local_8,0x54,local_8c);
      if (iVar1 < 0x18) {
        FUN_0042b880();
      }
    }
    GetDC((HWND)0x0);
    local_1c = (HDC)FUN_0042b9a0();
    CreateCompatibleDC(local_1c);
    local_20 = (HDC)FUN_0042b9a0();
    *in_FS_OFFSET = &stack0xffffff4c;
    if (*(uint *)(param_5 + 0x18) < 0x28) {
      if ((*(ushort *)(param_5 + 0x10) | *(ushort *)(param_5 + 0x12)) == 1) {
        CreateBitmap(*(int *)(param_5 + 4),*(int *)(param_5 + 8),1,1,(void *)0x0);
        local_14 = (HPALETTE)FUN_0042b9a0();
      }
      else {
        CreateCompatibleBitmap(local_1c,*(int *)(param_5 + 4),*(int *)(param_5 + 8));
        local_14 = (HPALETTE)FUN_0042b9a0();
      }
      FUN_0042b9a0(local_14);
      SelectObject(local_20,local_14);
      local_18 = (HGDIOBJ)FUN_0042b9a0();
      *in_FS_OFFSET = &stack0xffffff40;
      *in_FS_OFFSET = &stack0xffffff34;
      local_38 = (HPALETTE)0x0;
      pHVar6 = (HPALETTE)0x0;
      if (local_10 != (HPALETTE)0x0) {
        local_38 = SelectPalette(local_20,local_10,0);
        RealizePalette(local_20);
      }
      uVar10 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffff28;
      if (param_4 == 0) {
        PatBlt(local_20,0,0,*(int *)(param_5 + 4),*(int *)(param_5 + 8),0xff0062);
      }
      else {
        hbr = (HBRUSH)FUN_0042aba0(*(undefined4 *)(param_4 + 0x14));
        FUN_0041c990(0,0,*(undefined4 *)(param_5 + 4));
        FillRect(local_20,&local_9c,hbr);
        CVar4 = FUN_00429e64(*(undefined4 *)(*(int *)(param_4 + 0xc) + 0x18));
        SetTextColor(local_20,CVar4);
        FUN_0042ab64(*(undefined4 *)(param_4 + 0x14));
        CVar4 = FUN_00429e64();
        SetBkColor(local_20,CVar4);
        if ((*(short *)(param_5 + 0x26) == 1) && (*(int *)(param_5 + 0x14) != 0)) {
          local_34 = (RGBQUAD)FUN_00429e64(*(undefined4 *)(*(int *)(param_4 + 0xc) + 0x18));
          FUN_0042ab64(*(undefined4 *)(param_4 + 0x14));
          local_30 = FUN_00429e64();
          SetDIBColorTable(local_20,0,2,&local_34);
        }
      }
      if (local_8 != (HBITMAP)0x0) {
        CreateCompatibleDC(local_1c);
        local_24 = (HDC)FUN_0042b9a0();
        uVar10 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffff1c;
        SelectObject(local_24,local_8);
        h = (HGDIOBJ)FUN_0042b9a0();
        if (local_c != (HPALETTE)0x0) {
          pHVar6 = SelectPalette(local_24,local_c,0);
          RealizePalette(local_24);
        }
        if (param_4 != 0) {
          CVar4 = FUN_00429e64(*(undefined4 *)(*(int *)(param_4 + 0xc) + 0x18));
          SetTextColor(local_24,CVar4);
          FUN_0042ab64(*(undefined4 *)(param_4 + 0x14));
          CVar4 = FUN_00429e64();
          SetBkColor(local_24,CVar4);
        }
        BitBlt(local_20,0,0,*(int *)(param_5 + 4),*(int *)(param_5 + 8),local_24,0,0,0xcc0020);
        if (local_c != (HPALETTE)0x0) {
          SelectPalette(local_24,pHVar6,-1);
        }
        SelectObject(local_24,h);
        FUN_0042b9a0();
        *in_FS_OFFSET = uVar10;
        pHVar6 = (HPALETTE)DeleteDC(local_24);
        return pHVar6;
      }
      pHVar6 = (HPALETTE)0x0;
      *in_FS_OFFSET = uVar10;
      if (local_10 != (HPALETTE)0x0) {
        pHVar6 = SelectPalette(local_20,local_38,-1);
      }
      return pHVar6;
    }
    local_28 = (LPBITMAPINFO)FUN_004027fc(0x42c);
    uVar10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff40;
    *(undefined4 *)(param_5 + 0x18) = 0x28;
    *(undefined2 *)(param_5 + 0x24) = 1;
    puVar12 = &stack0xfffffffc;
    if (*(short *)(param_5 + 0x26) == 0) {
      iVar1 = GetDeviceCaps(local_1c,0xc);
      iVar2 = GetDeviceCaps(local_1c,0xe);
      *(short *)(param_5 + 0x26) = (short)iVar1 * (short)iVar2;
      puVar12 = puVar11;
    }
    pDVar7 = (DWORD *)(param_5 + 0x18);
    ptVar8 = local_28;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      (ptVar8->bmiHeader).biSize = *pDVar7;
      pDVar7 = pDVar7 + (uint)bVar9 * -2 + 1;
      ptVar8 = (LPBITMAPINFO)((int)ptVar8 + (uint)bVar9 * -8 + 4);
    }
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 0x1c);
    *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 0x20);
    if (*(ushort *)(param_5 + 0x26) < 9) {
      if ((*(short *)(param_5 + 0x26) == 1) && ((local_8 == (HBITMAP)0x0 || (local_78 == 0)))) {
        local_28->bmiColors[0].rgbBlue = '\0';
        local_28->bmiColors[0].rgbGreen = '\0';
        local_28->bmiColors[0].rgbRed = '\0';
        local_28->bmiColors[0].rgbReserved = '\0';
        local_28[1].bmiHeader.biSize = 0xffffff;
      }
      else if (local_10 == (HPALETTE)0x0) {
        if (local_8 != (HBITMAP)0x0) {
          local_18 = SelectObject(local_20,local_8);
          if ((local_74 == 0) || (local_78 == 0)) {
            uVar5 = (int)*(uint *)(param_5 + 0x20) >> 0x1f;
            GetDIBits(local_20,local_8,0,(*(uint *)(param_5 + 0x20) ^ uVar5) - uVar5,(LPVOID)0x0,
                      local_28,0);
          }
          else {
            UVar3 = GetDIBColorTable(local_20,0,0x100,local_28->bmiColors);
            *(UINT *)(param_5 + 0x38) = UVar3;
          }
          SelectObject(local_20,local_18);
        }
      }
      else {
        FUN_0042c134(local_10,local_28->bmiColors,0xff);
      }
    }
    else if (((*(short *)(param_5 + 0x26) == 0x10) || (*(short *)(param_5 + 0x26) == 0x20)) &&
            ((*(byte *)(param_5 + 0x28) & 3) != 0)) {
      FUN_0042f398(param_5,param_5);
      FUN_00402a04(param_5 + 0x40,local_28->bmiColors,0xc);
    }
    CreateDIBSection(local_1c,local_28,0,&local_2c,(HANDLE)0x0,0);
    local_14 = (HPALETTE)FUN_0042b9a0();
    if (local_2c == (LPVOID)0x0) {
      FUN_0042b8f8();
    }
    if ((((local_8 == (HBITMAP)0x0) || (*(int *)(param_5 + 0x1c) != local_88)) ||
        (*(int *)(param_5 + 0x20) != local_84)) || (*(ushort *)(param_5 + 0x26) < 9)) {
      *in_FS_OFFSET = uVar10;
      pHVar6 = (HPALETTE)FUN_0040281c(local_28,uVar10,puVar12);
      return pHVar6;
    }
    uVar5 = (int)*(uint *)(param_5 + 0x20) >> 0x1f;
    GetDIBits(local_20,local_8,0,(*(uint *)(param_5 + 0x20) ^ uVar5) - uVar5,local_2c,local_28,0);
    FUN_004042fc();
    FUN_004042fc();
  }
  return local_14;
}

