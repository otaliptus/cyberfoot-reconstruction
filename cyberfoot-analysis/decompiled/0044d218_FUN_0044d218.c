// Address: 0044d218
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044d218(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  FUN_004656d8(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(int *)(param_1 + 0x20c))) {
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      lParam = 0;
      wParam = 0;
      Msg = 0x469;
      hWnd = (HWND)FUN_0046cae0(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
      *(undefined4 *)(param_1 + 0x20c) = 0;
    }
  }
  return;
}

