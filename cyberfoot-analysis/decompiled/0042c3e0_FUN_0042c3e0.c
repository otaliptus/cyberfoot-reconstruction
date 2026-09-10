// Address: 0042c3e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042c3e0(int *param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  
  puStack_84 = (undefined1 *)0x42c406;
  uVar1 = FUN_0040952c(param_3 << 4);
  puStack_88 = &LAB_0042c6d7;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  puStack_84 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0xc))(param_1,uVar1,param_3 << 4);
  if (*param_5 == 0 && param_5[1] == 0) {
    iVar2 = GetSystemMetrics(0xb);
    *param_4 = iVar2;
    iVar2 = GetSystemMetrics(0xc);
    param_4[1] = iVar2;
  }
  else {
    *param_4 = *param_5;
    param_4[1] = param_5[1];
  }
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_0042b8a4();
  }
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff68;
  GetDeviceCaps(hdc,0xe);
  GetDeviceCaps(hdc,0xc);
  *in_FS_OFFSET = uVar1;
  ReleaseDC((HWND)0x0,hdc);
  return;
}

