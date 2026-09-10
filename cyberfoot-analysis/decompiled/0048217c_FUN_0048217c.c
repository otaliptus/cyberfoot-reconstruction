// Address: 0048217c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048217c(int param_1)

{
  WPARAM wParam;
  LPARAM lParam;
  
  if ((*(byte *)(param_1 + 0x2f4) & 0x10) == 0) {
    FUN_00469df4(param_1);
  }
  else {
    lParam = 0;
    wParam = FUN_0046cae0(param_1);
    SendMessageA(*(HWND *)(*(int *)(DAT_0066cbf4 + 0x44) + 0x254),0x221,wParam,lParam);
  }
  *(undefined4 *)(param_1 + 0x254) = 0;
  return;
}

