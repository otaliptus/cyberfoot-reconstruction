// Address: 00483e00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00483e00(undefined4 param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xb021;
  hWnd = (HWND)FUN_0046cae0(param_1);
  PostMessageA(hWnd,Msg,wParam,lParam);
  return;
}

