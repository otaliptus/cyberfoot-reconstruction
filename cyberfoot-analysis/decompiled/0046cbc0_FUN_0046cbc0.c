// Address: 0046cbc0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046cbc0(int param_1)

{
  char cVar1;
  HWND hWnd;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      uFlags = 0x16;
      cy = *(int *)(param_1 + 0x4c);
      cx = *(int *)(param_1 + 0x48);
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      hWnd = (HWND)FUN_0046cae0(param_1);
      SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
      FUN_00403c80(param_1);
    }
  }
  return;
}

