// Address: 0044af74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044af74(int param_1,int param_2)

{
  char cVar1;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  FUN_0046cabc(*(undefined4 *)(param_1 + 4));
  cVar1 = FUN_0046cde4(*(undefined4 *)(param_1 + 4));
  if (cVar1 != '\0') {
    cVar1 = FUN_00403c80(*(undefined4 *)(param_1 + 4));
    if (cVar1 != '\0') {
      if (*(short *)(param_2 + 0x18) == 1) {
        *(undefined2 *)(param_2 + 0x18) = 2;
      }
      else if (*(short *)(param_2 + 0x18) == 2) {
        *(undefined2 *)(param_2 + 0x18) = 1;
      }
    }
    wParam = 0;
    Msg = 0x447;
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 4));
    SendMessageA(hWnd,Msg,wParam,param_2);
  }
  return;
}

