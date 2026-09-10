// Address: 0044d518
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044d518(int param_1,char param_2)

{
  char cVar1;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  if (param_2 != *(char *)(param_1 + 0x208)) {
    *(char *)(param_1 + 0x208) = param_2;
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      lParam = 0;
      wParam = 0;
      Msg = 0x469;
      hWnd = (HWND)FUN_0046cae0(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
    FUN_00469fa0(param_1);
  }
  return;
}

