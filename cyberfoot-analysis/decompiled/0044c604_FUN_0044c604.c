// Address: 0044c604
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044c604(int param_1,char param_2)

{
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if (param_2 != *(char *)(param_1 + 600)) {
    *(char *)(param_1 + 600) = param_2;
    lParam = 1;
    wParam = (uint)*(byte *)(param_1 + 600);
    Msg = 0x43f;
    hWnd = (HWND)FUN_0046cae0(param_1);
    SendMessageA(hWnd,Msg,wParam,lParam);
  }
  return;
}

