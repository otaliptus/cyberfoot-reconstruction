// Address: 0044a990
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044a990(int param_1,LPARAM param_2)

{
  char cVar1;
  HWND hWnd;
  uint wParam;
  UINT Msg;
  
  wParam = (uint)(*(char *)(param_1 + 8) == '\0');
  cVar1 = FUN_0046cde4(*(undefined4 *)(param_1 + 4));
  if (cVar1 != '\0') {
    Msg = 0x444;
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 4));
    SendMessageA(hWnd,Msg,wParam,param_2);
  }
  return;
}

