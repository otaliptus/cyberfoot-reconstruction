// Address: 0042bff8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0042bff8(int param_1)

{
  HDC hdc;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  
  if (DAT_0066c894 != (HPALETTE)0x0) {
    hdc = GetDC((HWND)0x0);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe4;
    iVar1 = GetDeviceCaps(hdc,0x68);
    if (0xf < iVar1) {
      GetPaletteEntries(DAT_0066c894,0,8,(LPPALETTEENTRY)(param_1 + 4));
      GetPaletteEntries(DAT_0066c894,8,8,
                        (LPPALETTEENTRY)(param_1 + -0x1c + (uint)*(ushort *)(param_1 + 2) * 4));
    }
    *in_FS_OFFSET = uVar2;
    iVar1 = ReleaseDC((HWND)0x0,hdc);
    return iVar1;
  }
  return 0;
}

