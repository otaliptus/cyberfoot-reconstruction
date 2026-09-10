// Address: 0045d30c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045d30c(undefined4 param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = -0x10000;
  wParam = 0;
  Msg = 0x142;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

