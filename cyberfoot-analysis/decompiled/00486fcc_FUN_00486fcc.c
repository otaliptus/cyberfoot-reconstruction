// Address: 00486fcc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00486fcc(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  
  if (*(HWND *)(param_1 + 0x30) != (HWND)0x0) {
    hWnd = GetLastActivePopup(*(HWND *)(param_1 + 0x30));
    if ((hWnd != (HWND)0x0) && (hWnd != *(HWND *)(param_1 + 0x30))) {
      BVar1 = IsWindowVisible(hWnd);
      if (BVar1 != 0) {
        BVar1 = IsWindowEnabled(hWnd);
        if (BVar1 != 0) {
          SetForegroundWindow(hWnd);
        }
      }
    }
  }
  return;
}

