// Address: 004f2c2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f2c2c(int *param_1)

{
  uint uFlags;
  int cy;
  HWND hWnd;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  
  (**(code **)(*param_1 + 0x80))();
  uFlags = *(uint *)(&DAT_00669c94 + (uint)*(byte *)((int)param_1 + 0x2a9) * 4) | 8;
  cy = FUN_00465c50(param_1);
  cx = *(int *)(param_1[0xa2] + 0x48);
  Y = 0;
  X = 0;
  hWndInsertAfter = (HWND)0x0;
  hWnd = (HWND)FUN_0046cae0(param_1[0xa2]);
  SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  (**(code **)(*(int *)param_1[0xa2] + 0x80))();
  return;
}

