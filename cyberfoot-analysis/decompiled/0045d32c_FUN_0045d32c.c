// Address: 0045d32c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0045d32c(undefined4 param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x157;
  hWnd = (HWND)FUN_0046cae0(param_1);
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1 != 0;
}

