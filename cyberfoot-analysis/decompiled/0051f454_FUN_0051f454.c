// Address: 0051f454
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051f454(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6,
                 int param_7,int param_8,int param_9,int param_10,HDC param_11,int param_12,
                 int param_13)

{
  HGDIOBJ pvVar1;
  HBITMAP hbmMask;
  DWORD rop;
  HDC hdc;
  HDC hdc_00;
  HPALETTE hPal;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  
  if (((*(int *)PTR_DAT_0066b790 == 2) && (param_8 == param_13)) && (param_7 == param_12)) {
    CreateCompatibleBitmap(param_11,1,1);
    pvVar1 = (HGDIOBJ)FUN_00516840();
    hbmMask = SelectObject(param_6,pvVar1);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffbc;
    rop = FUN_00408098(0xaa0029,0xcc0020);
    MaskBlt(param_1,param_2,param_3,param_13,param_12,param_11,param_10,param_9,hbmMask,param_5,
            param_4,rop);
    *in_FS_OFFSET = uVar2;
    pvVar1 = SelectObject(param_6,hbmMask);
    DeleteObject(pvVar1);
    return;
  }
  CreateCompatibleDC(param_1);
  hdc = (HDC)FUN_00516840();
  *in_FS_OFFSET = &stack0xffffffbc;
  CreateCompatibleBitmap(param_1,param_8,param_7);
  pvVar1 = (HGDIOBJ)FUN_00516840();
  *in_FS_OFFSET = &stack0xffffffb0;
  SelectObject(hdc,pvVar1);
  *in_FS_OFFSET = &stack0xffffffa4;
  CreateCompatibleDC(param_1);
  hdc_00 = (HDC)FUN_00516840();
  *in_FS_OFFSET = &stack0xffffff98;
  CreateBitmap(param_8,param_7,1,1,(void *)0x0);
  pvVar1 = (HGDIOBJ)FUN_00516840();
  *in_FS_OFFSET = &stack0xffffff8c;
  pvVar1 = SelectObject(hdc_00,pvVar1);
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff80;
  BitBlt(hdc_00,param_10,param_9,param_8,param_7,param_6,param_10,param_9,0x330008);
  hPal = SelectPalette(param_11,*(HPALETTE *)PTR_DAT_0066ae28,0);
  SelectPalette(param_11,hPal,0);
  if (hPal == (HPALETTE)0x0) {
    SelectPalette(hdc,*(HPALETTE *)PTR_DAT_0066ae28,-1);
  }
  else {
    SelectPalette(hdc,hPal,-1);
  }
  RealizePalette(hdc);
  BitBlt(hdc,param_10,param_9,param_8,param_7,hdc_00,param_10,param_9,0xcc0020);
  BitBlt(hdc,param_10,param_9,param_8,param_7,param_11,param_10,param_9,0x8800c6);
  *in_FS_OFFSET = uVar2;
  if (pvVar1 != (HGDIOBJ)0x0) {
    SelectObject(hdc_00,pvVar1);
  }
  return;
}

