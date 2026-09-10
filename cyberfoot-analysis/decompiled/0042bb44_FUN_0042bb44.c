// Address: 0042bb44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042bb44(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6,
                 int param_7,int param_8,int param_9,int param_10,HDC param_11,int param_12,
                 int param_13)

{
  HGDIOBJ pvVar1;
  HBITMAP hbmMask;
  DWORD rop;
  HDC hdc;
  HGDIOBJ h;
  HPALETTE hPal;
  COLORREF color;
  COLORREF color_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  HPALETTE local_28;
  
  if (((*(int *)PTR_DAT_0066b790 == 2) && (param_8 == param_13)) && (param_7 == param_12)) {
    CreateCompatibleBitmap(param_11,1,1);
    pvVar1 = (HGDIOBJ)FUN_0042b9a0();
    hbmMask = SelectObject(param_6,pvVar1);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffc0;
    rop = FUN_00408098(0xaa0029,0xcc0020);
    MaskBlt(param_1,param_2,param_3,param_13,param_12,param_11,param_10,param_9,hbmMask,param_5,
            param_4,rop);
    *in_FS_OFFSET = uVar2;
    pvVar1 = SelectObject(param_6,hbmMask);
    DeleteObject(pvVar1);
    return;
  }
  CreateCompatibleDC((HDC)0x0);
  hdc = (HDC)FUN_0042b9a0();
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc0;
  CreateCompatibleBitmap(param_11,param_8,param_7);
  pvVar1 = (HGDIOBJ)FUN_0042b9a0();
  h = SelectObject(hdc,pvVar1);
  hPal = SelectPalette(param_11,DAT_0066c894,0);
  SelectPalette(param_11,hPal,0);
  if (hPal == (HPALETTE)0x0) {
    local_28 = SelectPalette(hdc,DAT_0066c894,-1);
  }
  else {
    local_28 = SelectPalette(hdc,hPal,-1);
  }
  RealizePalette(hdc);
  StretchBlt(hdc,0,0,param_8,param_7,param_6,param_5,param_4,param_8,param_7,0xcc0020);
  StretchBlt(hdc,0,0,param_8,param_7,param_11,param_10,param_9,param_8,param_7,0x440328);
  color = SetTextColor(param_1,0);
  color_00 = SetBkColor(param_1,0xffffff);
  StretchBlt(param_1,param_2,param_3,param_13,param_12,param_6,param_5,param_4,param_8,param_7,
             0x8800c6);
  StretchBlt(param_1,param_2,param_3,param_13,param_12,hdc,0,0,param_8,param_7,0x660046);
  SetTextColor(param_1,color);
  SetBkColor(param_1,color_00);
  if (h != (HGDIOBJ)0x0) {
    SelectObject(hdc,h);
  }
  DeleteObject(pvVar1);
  *in_FS_OFFSET = uVar2;
  if (local_28 != (HPALETTE)0x0) {
    SelectPalette(hdc,local_28,0);
  }
  DeleteDC(hdc);
  return;
}

