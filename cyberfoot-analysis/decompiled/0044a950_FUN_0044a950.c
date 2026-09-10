// Address: 0044a950
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044a950(int param_1,LPARAM param_2)

{
  char cVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  
  FUN_0044a934(param_1,param_2);
  cVar1 = FUN_0046cde4(*(undefined4 *)(param_1 + 4));
  if (cVar1 != '\0') {
    wParam = (uint)(*(char *)(param_1 + 8) == '\0');
    Msg = 0x43a;
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 4));
    SendMessageA(hWnd,Msg,wParam,param_2);
  }
  return;
}

