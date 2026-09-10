// Address: 004e8480
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e8480(int param_1,char param_2)

{
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_14;
  
  lpRect = &local_14;
  if (param_2 == '\0') {
    FUN_004e7e18(param_1,0,&local_14);
  }
  else if (param_2 == '\x01') {
    FUN_004e7f58(param_1,&local_14);
  }
  else if (param_2 == '\x02') {
    FUN_004e7e18(param_1,1,&local_14);
  }
  bErase = 0;
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x24));
  InvalidateRect(hWnd,lpRect,bErase);
  return;
}

