// Address: 0045bf20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0045bf20(int param_1)

{
  char cVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined1 uVar3;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  uVar3 = *(undefined1 *)(param_1 + 0x215);
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    lParam = 0;
    wParam = 0;
    Msg = 0xb8;
    hWnd = (HWND)FUN_0046cae0(param_1);
    LVar2 = SendMessageA(hWnd,Msg,wParam,lParam);
    uVar3 = LVar2 != 0;
  }
  return uVar3;
}

