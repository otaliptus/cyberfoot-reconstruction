// Address: 00431d3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00431d3c(void)

{
  HDC hdc;
  
  hdc = GetDC((HWND)0x0);
  DAT_0066c89c = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
  DAT_0066c894 = FUN_0042bee0(&DAT_0066296c,0xf);
  return;
}

