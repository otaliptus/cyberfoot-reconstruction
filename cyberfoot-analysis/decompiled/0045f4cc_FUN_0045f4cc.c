// Address: 0045f4cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045f4cc(int param_1,char param_2)

{
  char cVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if (param_2 != *(char *)(param_1 + 0x212)) {
    *(char *)(param_1 + 0x212) = param_2;
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      lParam = 0;
      wParam = (uint)*(byte *)(param_1 + 0x212);
      Msg = 0xf1;
      hWnd = (HWND)FUN_0046cae0(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
    if (*(char *)(param_1 + 0x208) == '\0') {
      FUN_00403c80(param_1);
    }
  }
  return;
}

