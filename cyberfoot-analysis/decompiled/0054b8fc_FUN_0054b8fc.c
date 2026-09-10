// Address: 0054b8fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054b8fc(undefined4 param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0xffffffff;
  Msg = 0x154;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

