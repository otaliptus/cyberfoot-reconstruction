// Address: 00431d74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

BYTE FUN_00431d74(void)

{
  HDC hdc;
  HGDIOBJ pvVar1;
  BOOL BVar2;
  BYTE BVar3;
  tagTEXTMETRICA tStack_40;
  
  BVar3 = '\x01';
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    pvVar1 = SelectObject(hdc,DAT_0066c8a8);
    if (pvVar1 != (HGDIOBJ)0x0) {
      BVar2 = GetTextMetricsA(hdc,&tStack_40);
      if (BVar2 != 0) {
        BVar3 = tStack_40.tmCharSet;
      }
    }
    ReleaseDC((HWND)0x0,hdc);
  }
  return BVar3;
}

