// Address: 0044a024
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044a024(int param_1,int param_2)

{
  char cVar1;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  if (param_2 != *(int *)(param_1 + 0x224)) {
    *(int *)(param_1 + 0x224) = param_2;
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      lParam = 1;
      wParam = *(WPARAM *)(param_1 + 0x224);
      Msg = 0x414;
      hWnd = (HWND)FUN_0046cae0(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
  }
  return;
}

