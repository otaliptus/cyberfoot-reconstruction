// Address: 0042c188
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042c188(BITMAPINFOHEADER *param_1,undefined4 *param_2,undefined4 param_3,
                 undefined4 param_4)

{
  int iVar1;
  HDC hdc;
  HGDIOBJ ho;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  
  param_1->biHeight = (uint)param_1->biHeight >> 1;
  iVar1 = FUN_0042bb30(param_1->biWidth,param_1->biBitCount,0x20);
  param_1->biSizeImage = iVar1 * param_1->biHeight;
  iVar1 = FUN_0042bb10(param_1->biBitCount);
  puStack_2c = (undefined1 *)0x42c1d7;
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_0042b8a4();
  }
  puStack_2c = &LAB_0042c334;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  CreateDIBitmap(hdc,param_1,4,&param_1[1].biSize + iVar1,(BITMAPINFO *)param_1,0);
  ho = (HGDIOBJ)FUN_0042b9a0();
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc4;
  uVar2 = FUN_0042b9b0(ho,param_4,0);
  *param_2 = uVar2;
  *in_FS_OFFSET = uVar3;
  DeleteObject(ho);
  return;
}

