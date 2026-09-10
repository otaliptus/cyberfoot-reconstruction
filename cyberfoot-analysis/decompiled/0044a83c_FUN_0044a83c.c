// Address: 0044a83c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044a83c(int param_1,WPARAM param_2)

{
  char cVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if ((*(char *)(param_1 + 0x208) == '\0') && (((int)param_2 < 0 || (0xffff < (int)param_2)))) {
    FUN_0044a458();
  }
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    lParam = 0;
    Msg = 0x402;
    hWnd = (HWND)FUN_0046cae0(param_1);
    SendMessageA(hWnd,Msg,param_2,lParam);
    return;
  }
  *(WPARAM *)(param_1 + 0x214) = param_2;
  return;
}

