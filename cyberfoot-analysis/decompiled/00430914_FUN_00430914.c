// Address: 00430914
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00430914(undefined4 param_1,int *param_2,int param_3,undefined2 *param_4)

{
  WORD WVar1;
  uint uVar2;
  longlong lVar3;
  BITMAPINFO *pBVar4;
  int iVar5;
  undefined2 uVar7;
  undefined2 extraout_var;
  DWORD DVar6;
  HBITMAP h;
  HGDIOBJ ho;
  undefined2 extraout_var_00;
  uint uVar8;
  uint uVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_d4;
  undefined1 *puStack_d0;
  undefined1 *puStack_cc;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined2 local_ae;
  int local_ac;
  ushort local_48;
  ushort local_46;
  WORD local_44;
  WORD local_42;
  BITMAPINFO *local_40;
  int *local_3c;
  HPALETTE local_38;
  HPALETTE local_34;
  HGDIOBJ local_30;
  HBITMAP local_2c;
  byte local_25;
  DWORD local_24;
  int local_20;
  BITMAPINFO *local_1c;
  void *local_18;
  HDC local_14;
  HDC local_10;
  int *local_c;
  undefined4 local_8;
  
  local_34 = (HPALETTE)0x0;
  local_2c = (HBITMAP)0x0;
  local_3c = (int *)0x0;
  puStack_c0 = (undefined1 *)0x430947;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_2 + 0xc))(param_2,&local_24,4);
  local_25 = local_24 == 0xc;
  if ((bool)local_25) {
    local_24 = 0x28;
  }
  puStack_c0 = (undefined1 *)0x43096c;
  local_40 = (BITMAPINFO *)FUN_004027fc(local_24 + 0x40c);
  puStack_c4 = &LAB_00430e31;
  uStack_c8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c8;
  puStack_d0 = &LAB_00430e04;
  uStack_d4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d4;
  local_1c = local_40;
  if (local_25 == 0) {
    puStack_cc = &stack0xfffffffc;
    puStack_c0 = &stack0xfffffffc;
    (**(code **)(*local_c + 0xc))(local_c,&(local_40->bmiHeader).biWidth,local_24 - 4);
    param_3 = param_3 - local_24;
    DVar6 = (local_40->bmiHeader).biCompression;
    if ((DVar6 != 3) && (DVar6 != 0)) {
      local_3c = (int *)FUN_00403a54(PTR_PTR_0041c090,1);
      if (param_4 == (undefined2 *)0x0) {
        FUN_004032a8(&local_ae,0xe,0);
        local_ae = 0x4d42;
        local_ac = local_24 + param_3;
        param_4 = &local_ae;
      }
      (**(code **)(*local_3c + 0x10))(local_3c,param_4,0xe);
      (**(code **)(*local_3c + 0x10))(local_3c,&local_24,4);
      (**(code **)(*local_3c + 0x10))(local_3c,&(local_1c->bmiHeader).biWidth,local_24 - 4);
      FUN_00420b70(local_3c,local_c);
      (**(code **)(*local_3c + 0x14))(local_3c,-param_3,CONCAT22(extraout_var_00,2));
      local_c = local_3c;
    }
  }
  else {
    puStack_cc = &stack0xfffffffc;
    puStack_c0 = &stack0xfffffffc;
    (**(code **)(*local_c + 0xc))(local_c,&local_48,8);
    pBVar4 = local_40;
    FUN_004032a8(local_40,0x28,0);
    (pBVar4->bmiHeader).biWidth = (uint)local_48;
    (pBVar4->bmiHeader).biHeight = (uint)local_46;
    (pBVar4->bmiHeader).biPlanes = local_44;
    (pBVar4->bmiHeader).biBitCount = local_42;
    param_3 = param_3 + -0xc;
  }
  pBVar4 = local_40;
  (local_40->bmiHeader).biSize = local_24;
  iVar5 = (int)&(((BITMAPINFO *)(local_1c->bmiColors + -10))->bmiHeader).biSize + local_24;
  local_20 = iVar5;
  if ((local_40->bmiHeader).biPlanes != 1) {
    iVar5 = FUN_0042b880();
  }
  uVar7 = (undefined2)((uint)iVar5 >> 0x10);
  if (local_24 == 0x28) {
    WVar1 = (pBVar4->bmiHeader).biBitCount;
    if (((WVar1 == 0x10) || (WVar1 == 0x20)) && ((pBVar4->bmiHeader).biCompression == 3)) {
      FUN_00420b00(local_c,local_20,0xc);
      local_20 = local_20 + 0xc;
      param_3 = param_3 + -0xc;
      uVar7 = extraout_var;
    }
  }
  if ((pBVar4->bmiHeader).biClrUsed == 0) {
    DVar6 = FUN_0042bb10(CONCAT22(uVar7,(pBVar4->bmiHeader).biBitCount));
    (pBVar4->bmiHeader).biClrUsed = DVar6;
  }
  uVar9 = (uint)local_25;
  FUN_00420b00(local_c,local_20,(pBVar4->bmiHeader).biClrUsed * (uint)(byte)(&DAT_0066295c)[uVar9]);
  lVar3 = (longlong)(int)(pBVar4->bmiHeader).biClrUsed *
          (longlong)(int)(uint)(byte)(&DAT_0066295c)[uVar9];
  uVar8 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar9 = param_3 - (int)lVar3;
  if ((pBVar4->bmiHeader).biSizeImage == 0) {
    iVar5 = FUN_0042bb30((pBVar4->bmiHeader).biWidth,(pBVar4->bmiHeader).biBitCount,0x20);
    uVar2 = (pBVar4->bmiHeader).biHeight;
    uVar8 = (int)uVar2 >> 0x1f;
    (pBVar4->bmiHeader).biSizeImage = iVar5 * ((uVar2 ^ uVar8) - uVar8);
  }
  uVar2 = (pBVar4->bmiHeader).biSizeImage;
  if (uVar2 < uVar9) {
    uVar9 = uVar2;
  }
  if (local_25 != 0) {
    FUN_0042bdd8(local_20,uVar8);
  }
  GetDC((HWND)0x0);
  local_10 = (HDC)FUN_0042b9a0();
  uVar10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff20;
  DVar6 = (local_40->bmiHeader).biCompression;
  if (((DVar6 == 0) || (DVar6 == 3)) && (DAT_006626cc == '\0')) {
    local_2c = CreateDIBSection(local_10,local_1c,0,&local_18,(HANDLE)0x0,0);
    if ((local_2c == (HBITMAP)0x0) || (local_18 == (void *)0x0)) {
      DVar6 = GetLastError();
      if (DVar6 == 0) {
        FUN_0042b880();
      }
      else {
        FUN_0040f904();
      }
    }
    uVar11 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff14;
    FUN_00420b00(local_c,local_18,uVar9);
    *in_FS_OFFSET = uVar11;
    *in_FS_OFFSET = uVar10;
    ReleaseDC((HWND)0x0,local_10);
    return;
  }
  local_14 = (HDC)0x0;
  local_18 = (void *)FUN_004027fc(uVar9);
  *in_FS_OFFSET = &stack0xffffff14;
  FUN_00420b00(local_c,local_18,uVar9);
  CreateCompatibleDC(local_10);
  local_14 = (HDC)FUN_0042b9a0();
  h = CreateCompatibleBitmap(local_10,1,1);
  local_30 = SelectObject(local_14,h);
  local_38 = (HPALETTE)0x0;
  DVar6 = (local_40->bmiHeader).biClrUsed;
  if (DVar6 != 0) {
    local_34 = (HPALETTE)FUN_0042c090(0,local_20,DVar6);
    local_38 = SelectPalette(local_14,local_34,0);
    RealizePalette(local_14);
  }
  uVar10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff08;
  local_2c = CreateDIBitmap(local_14,&local_1c->bmiHeader,4,local_18,local_1c,0);
  if (local_2c == (HBITMAP)0x0) {
    DVar6 = GetLastError();
    if (DVar6 == 0) {
      FUN_0042b880();
    }
    else {
      FUN_0040f904();
    }
  }
  *in_FS_OFFSET = uVar10;
  if (local_38 != (HPALETTE)0x0) {
    SelectPalette(local_14,local_38,-1);
  }
  ho = SelectObject(local_14,local_30);
  DeleteObject(ho);
  return;
}

