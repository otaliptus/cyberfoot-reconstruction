// Address: 0042faac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

BOOL FUN_0042faac(HGDIOBJ param_1,HPALETTE param_2,COLORREF param_3)

{
  int iVar1;
  COLORREF color;
  BOOL BVar2;
  int *in_FS_OFFSET;
  int iVar3;
  undefined1 local_74 [4];
  int local_70;
  int local_6c;
  int local_60;
  undefined4 local_5c;
  HGDIOBJ local_20;
  HGDIOBJ local_1c;
  char local_15;
  HDC local_14;
  HDC local_10;
  HDC local_c;
  HBITMAP local_8;
  
  local_8 = (HBITMAP)0x0;
  if (param_1 != (HANDLE)0x0) {
    iVar1 = GetObjectA(param_1,0x54,local_74);
    if (iVar1 != 0) {
      FUN_0042efa0(param_1);
      local_c = (HDC)0x0;
      local_14 = (HDC)0x0;
      iVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&stack0xffffff74;
      GetDC((HWND)0x0);
      local_c = (HDC)FUN_0042b9a0();
      CreateCompatibleDC(local_c);
      local_14 = (HDC)FUN_0042b9a0();
      iVar3 = local_70;
      local_8 = CreateBitmap(local_70,local_6c,1,1,(void *)0x0);
      if (local_8 != (HBITMAP)0x0) {
        local_20 = SelectObject(local_14,local_8);
        if (param_3 != 0x1fffffff) {
          CreateCompatibleDC(local_c);
          local_10 = (HDC)FUN_0042b9a0();
          *in_FS_OFFSET = (int)&stack0xffffff68;
          if (local_60 == 0) {
            local_15 = '\0';
          }
          else {
            local_15 = '\x01';
            local_5c = 0;
            iVar3 = 0;
            param_1 = (HGDIOBJ)FUN_0042f3e4(param_1,param_2,param_2,0,local_74);
          }
          local_1c = SelectObject(local_10,param_1);
          if (param_2 != (HPALETTE)0x0) {
            SelectPalette(local_10,param_2,0);
            RealizePalette(local_10);
            SelectPalette(local_14,param_2,0);
            RealizePalette(local_14);
          }
          color = SetBkColor(local_10,param_3);
          BitBlt(local_14,0,0,local_70,local_6c,local_10,0,0,0xcc0020);
          SetBkColor(local_10,color);
          if (local_1c != (HGDIOBJ)0x0) {
            SelectObject(local_10,local_1c);
          }
          if (local_15 != '\0') {
            DeleteObject(param_1);
          }
          *in_FS_OFFSET = iVar3;
          BVar2 = DeleteDC(local_10);
          return BVar2;
        }
        PatBlt(local_14,0,0,local_70,local_6c,0x42);
        if (local_20 != (HGDIOBJ)0x0) {
          SelectObject(local_14,local_20);
        }
      }
      BVar2 = 0;
      *in_FS_OFFSET = iVar1;
      if (local_14 != (HDC)0x0) {
        BVar2 = DeleteDC(local_14);
      }
      if (local_c != (HDC)0x0) {
        BVar2 = ReleaseDC((HWND)0x0,local_c);
      }
      return BVar2;
    }
  }
  return (BOOL)local_8;
}

