// Address: 0046cdf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046cdf0(int param_1)

{
  BOOL BVar1;
  uint uVar2;
  HWND hWnd;
  undefined1 local_48 [12];
  int local_3c;
  WINDOWPLACEMENT local_38;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x180));
  if (BVar1 == 0) {
    GetWindowRect(*(HWND *)(param_1 + 0x180),(LPRECT)local_48);
  }
  else {
    local_38.length = 0x2c;
    GetWindowPlacement(*(HWND *)(param_1 + 0x180),&local_38);
    local_48._0_4_ = local_38.rcNormalPosition.left;
    local_48._4_4_ = local_38.rcNormalPosition.top;
    local_48._8_4_ = local_38.rcNormalPosition.right;
    local_3c = local_38.rcNormalPosition.bottom;
  }
  uVar2 = GetWindowLongA(*(HWND *)(param_1 + 0x180),-0x10);
  if ((uVar2 & 0x40000000) != 0) {
    hWnd = (HWND)GetWindowLongA(*(HWND *)(param_1 + 0x180),-8);
    if (hWnd != (HWND)0x0) {
      ScreenToClient(hWnd,(LPPOINT)local_48);
      ScreenToClient(hWnd,(LPPOINT)(local_48 + 8));
    }
  }
  *(undefined4 *)(param_1 + 0x40) = local_48._0_4_;
  *(undefined4 *)(param_1 + 0x44) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x48) = local_48._8_4_ - local_48._0_4_;
  *(int *)(param_1 + 0x4c) = local_3c - local_48._4_4_;
  FUN_0046585c(param_1);
  return;
}

