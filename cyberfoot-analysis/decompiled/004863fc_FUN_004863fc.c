// Address: 004863fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004863fc(int param_1,undefined1 param_2)

{
  uint uVar1;
  HWND hWnd;
  int iVar2;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  HWND local_10;
  undefined1 local_c;
  
  if (*(int *)(DAT_0066cbf4 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x94) == 0) {
      local_10 = *(HWND *)(param_1 + 0x30);
      local_c = param_2;
      EnumWindows(FUN_0048638c,(LPARAM)&local_10);
      if (*(int *)(*(int *)(param_1 + 0x90) + 8) != 0) {
        local_10 = GetWindow(local_10,3);
        uVar1 = GetWindowLongA(local_10,-0x14);
        if ((uVar1 & 8) != 0) {
          local_10 = (HWND)0xfffffffe;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x90) + 8) + -1;
        if (-1 < iVar2) {
          do {
            uFlags = 0x213;
            cy = 0;
            cx = 0;
            Y = 0;
            X = 0;
            hWndInsertAfter = local_10;
            hWnd = (HWND)FUN_0041e01c(*(undefined4 *)(param_1 + 0x90),iVar2);
            SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
      }
    }
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  return;
}

