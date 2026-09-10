// Address: 0044af40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044af40(int param_1,LPARAM param_2)

{
  char cVar1;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  FUN_0044af24(param_1,param_2);
  cVar1 = FUN_0046cde4(*(undefined4 *)(param_1 + 4));
  if (cVar1 != '\0') {
    wParam = 0;
    Msg = 0x43d;
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 4));
    SendMessageA(hWnd,Msg,wParam,param_2);
  }
  return;
}

