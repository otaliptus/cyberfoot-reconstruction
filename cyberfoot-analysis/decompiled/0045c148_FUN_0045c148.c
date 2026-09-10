// Address: 0045c148
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045c148(undefined4 param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = -1;
  wParam = 0;
  Msg = 0xb1;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

