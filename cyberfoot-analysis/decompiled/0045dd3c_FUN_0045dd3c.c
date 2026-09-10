// Address: 0045dd3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045dd3c(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  FUN_004699b8(param_1);
  lParam = 0;
  wParam = *(WPARAM *)(param_1 + 0x20c);
  Msg = 0x141;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  return;
}

