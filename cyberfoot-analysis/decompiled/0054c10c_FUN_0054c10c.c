// Address: 0054c10c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054c10c(int param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if (*(char *)(param_1 + 0x2cd) != '\0') {
    *(WPARAM *)(param_1 + 0x2c8) = param_2;
  }
  lParam = 0;
  Msg = 0x14e;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}

