// Address: 004ab218
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ab218(int param_1,HBITMAP param_2,int param_3)

{
  HDC hdc;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_3 + 4);
  uVar1 = (int)*(uint *)(param_3 + 8) >> 0x1f;
  *(uint *)(param_1 + 0x45c) = (*(uint *)(param_3 + 8) ^ uVar1) - uVar1;
  if (*(ushort *)(param_3 + 0x12) < 0x10) {
    *(undefined1 *)(param_1 + 0x460) = *(undefined1 *)(param_3 + 0x12);
  }
  else {
    *(undefined1 *)(param_1 + 0x460) = 8;
  }
  if (*(ushort *)(param_3 + 0x12) < 0x10) {
    *(undefined1 *)(param_1 + 0x461) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x461) = 2;
  }
  *(undefined1 *)(param_1 + 0x462) = 0;
  *(undefined1 *)(param_1 + 0x464) = 0;
  FUN_004a716c(param_1);
  hdc = CreateCompatibleDC((HDC)0x0);
  GetDIBits(hdc,param_2,0,*(UINT *)(param_1 + 0x45c),*(LPVOID *)(param_1 + 0x450),
            (LPBITMAPINFO)(param_1 + 0x21),0);
  DeleteDC(hdc);
  return;
}

