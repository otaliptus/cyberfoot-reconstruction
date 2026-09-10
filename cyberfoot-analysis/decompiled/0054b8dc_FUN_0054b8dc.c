// Address: 0054b8dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054b8dc(undefined4 param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0x160;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}

