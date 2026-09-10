// Address: 0055c690
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055c690(undefined4 param_1)

{
  HWND hWnd;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  FUN_0055b354(param_1,0);
  FUN_00403c80(param_1);
  uFlags = 0x23;
  cy = 0;
  cx = 0;
  Y = 0;
  X = 0;
  hWndInsertAfter = (HWND)0x0;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  FUN_0055b5e8(param_1,0);
  FUN_0055c6d8(param_1);
  return;
}

