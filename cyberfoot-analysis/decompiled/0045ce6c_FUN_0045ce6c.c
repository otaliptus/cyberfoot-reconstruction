// Address: 0045ce6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045ce6c(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x146;
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

