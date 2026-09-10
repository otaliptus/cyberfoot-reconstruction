// Address: 004e87c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e87c4(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    lParam = 0;
    wParam = 9;
    Msg = 0x100;
    hWnd = (HWND)FUN_0046cae0(*(int *)(param_1 + 0x30));
    PostMessageA(hWnd,Msg,wParam,lParam);
  }
  return;
}

