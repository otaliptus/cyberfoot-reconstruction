// Address: 005c1bd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c1bd4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LPARAM lParam;
  HWND hWnd;
  UINT Msg;
  undefined4 *wParam;
  undefined4 local_10;
  undefined4 local_c;
  
  wParam = &local_10;
  local_c = 0;
  local_10 = param_2;
  lParam = FUN_00404da4(param_3);
  Msg = 0x461;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)wParam,lParam);
  return;
}

