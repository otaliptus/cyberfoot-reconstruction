// Address: 0055c6d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055c6d8(int param_1)

{
  HDC hdc;
  HDC hdc_00;
  HWND hWnd;
  HDC hdcDst;
  POINT *pptDst;
  SIZE *psize;
  HDC hdcSrc;
  POINT *pptSrc;
  COLORREF crKey;
  BLENDFUNCTION *pblend;
  DWORD dwFlags;
  POINT local_28;
  POINT local_20;
  SIZE local_18;
  BLENDFUNCTION local_10;
  HGDIOBJ local_c;
  HGDIOBJ local_8;
  
  hdc = CreateCompatibleDC((HDC)0x0);
  hdc_00 = CreateCompatibleDC(hdc);
  FUN_004b1e24(*(undefined4 *)(param_1 + 0x304),0,&local_8);
  local_c = SelectObject(hdc_00,local_8);
  local_18.cx = *(LONG *)(param_1 + 0x48);
  local_18.cy = *(LONG *)(param_1 + 0x4c);
  FUN_004070b8(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),&local_20);
  FUN_004070b8(0,0,&local_28);
  local_10.BlendOp = '\0';
  local_10.BlendFlags = '\0';
  local_10.SourceConstantAlpha = 0xff;
  local_10.AlphaFormat = '\x01';
  dwFlags = 2;
  pblend = &local_10;
  crKey = 0;
  pptSrc = &local_28;
  psize = &local_18;
  pptDst = &local_20;
  hdcDst = hdc;
  hdcSrc = hdc_00;
  hWnd = (HWND)FUN_0046cae0(param_1);
  UpdateLayeredWindow(hWnd,hdcDst,pptDst,psize,hdcSrc,pptSrc,crKey,pblend,dwFlags);
  SelectObject(hdc_00,local_c);
  DeleteObject(local_8);
  DeleteDC(hdc_00);
  DeleteDC(hdc);
  return;
}

