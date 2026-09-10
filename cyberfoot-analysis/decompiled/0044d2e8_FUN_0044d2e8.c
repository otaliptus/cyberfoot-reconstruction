// Address: 0044d2e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044d2e8(int param_1,short param_2)

{
  char cVar1;
  LPARAM lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  if (param_2 != *(short *)(param_1 + 0x212)) {
    *(short *)(param_1 + 0x212) = param_2;
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      lParam = FUN_00408014(*(undefined2 *)(param_1 + 0x212),*(undefined2 *)(param_1 + 0x210));
      wParam = 0;
      Msg = 0x465;
      hWnd = (HWND)FUN_0046cae0(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
  }
  return;
}

