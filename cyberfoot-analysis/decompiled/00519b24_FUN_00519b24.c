// Address: 00519b24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00519b24(void)

{
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  
  GetDC((HWND)0x0);
  hdc = (HDC)FUN_00516840();
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffe8;
  CreateHalftonePalette(hdc);
  *in_FS_OFFSET = uVar1;
  ReleaseDC((HWND)0x0,hdc);
  return;
}

