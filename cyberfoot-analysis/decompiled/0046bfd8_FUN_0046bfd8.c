// Address: 0046bfd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046bfd8(int *param_1)

{
  char cVar1;
  HWND hWnd;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  (**(code **)(*param_1 + -0x10))();
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    uFlags = 0x37;
    cy = 0;
    cx = 0;
    Y = 0;
    X = 0;
    hWndInsertAfter = (HWND)0x0;
    hWnd = (HWND)FUN_0046cae0(param_1);
    SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
    if (*(char *)((int)param_1 + 0x57) != '\0') {
      (**(code **)(*param_1 + 0x7c))();
    }
  }
  return;
}

