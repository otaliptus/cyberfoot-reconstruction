// Address: 0054c0f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054c0f0(undefined4 param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x147;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

