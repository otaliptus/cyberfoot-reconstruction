// Address: 0044a654
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LRESULT FUN_0044a654(int param_1)

{
  char cVar1;
  HWND hWnd;
  LRESULT LVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  cVar1 = FUN_0046cde4(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x208) != '\0')) {
    lParam = 0;
    wParam = 0;
    Msg = 0x407;
    hWnd = (HWND)FUN_0046cae0(param_1);
    LVar2 = SendMessageA(hWnd,Msg,wParam,lParam);
    return LVar2;
  }
  return *(LRESULT *)(param_1 + 0x210);
}

