// Address: 0045bf58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045bf58(int param_1,byte param_2)

{
  char cVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    lParam = 0;
    wParam = (uint)param_2;
    Msg = 0xb9;
    hWnd = (HWND)FUN_0046cae0(param_1);
    SendMessageA(hWnd,Msg,wParam,lParam);
    return;
  }
  *(byte *)(param_1 + 0x215) = param_2;
  return;
}

