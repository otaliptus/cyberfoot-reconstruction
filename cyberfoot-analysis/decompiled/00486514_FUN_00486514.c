// Address: 00486514
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00486514(int param_1)

{
  HWND hWnd;
  int iVar1;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  if (((*(int *)(DAT_0066cbf4 + 0x30) != 0) && (0 < *(int *)(param_1 + 0x94))) &&
     (*(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1, *(int *)(param_1 + 0x94) == 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x90) + 8) + -1;
    if (-1 < iVar1) {
      do {
        uFlags = 0x213;
        cy = 0;
        cx = 0;
        Y = 0;
        X = 0;
        hWndInsertAfter = (HWND)0xffffffff;
        hWnd = (HWND)FUN_0041e01c(*(undefined4 *)(param_1 + 0x90),iVar1);
        SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    (**(code **)(**(int **)(param_1 + 0x90) + 8))();
  }
  return;
}

