// Address: 00469ea0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469ea0(int *param_1)

{
  HWND hWndInsertAfter;
  int iVar1;
  int iVar2;
  int cx;
  int cy;
  UINT uFlags;
  
  if (param_1[0x60] == 0) {
    (**(code **)(*param_1 + 0xa0))();
    SetPropA((HWND)param_1[0x60],(LPCSTR)(uint)DAT_0066cb62,param_1);
    SetPropA((HWND)param_1[0x60],(LPCSTR)(uint)DAT_0066cb60,param_1);
    if (param_1[0xc] != 0) {
      uFlags = 0x13;
      cy = 0;
      cx = 0;
      iVar2 = 0;
      iVar1 = 0;
      hWndInsertAfter = (HWND)FUN_00469e58(param_1[0xc],param_1);
      SetWindowPos((HWND)param_1[0x60],hWndInsertAfter,iVar1,iVar2,cx,cy,uFlags);
    }
    iVar1 = FUN_00469730(param_1);
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        FUN_004696f4(param_1,iVar2);
        FUN_0046585c();
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

