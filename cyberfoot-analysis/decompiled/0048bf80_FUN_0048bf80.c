// Address: 0048bf80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048bf80(void)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0xc);
  iVar2 = GetDeviceCaps(hdc,0xe);
  DAT_0066531f = iVar1 * iVar2 < 9;
  ReleaseDC((HWND)0x0,hdc);
  return;
}

