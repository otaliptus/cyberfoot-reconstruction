// Address: 00513ca4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00513ca4(undefined4 param_1,LONG *param_2)

{
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_1c;
  
  lpRect = &local_1c;
  local_1c.left = *param_2;
  local_1c.top = param_2[1];
  local_1c.right = param_2[2];
  local_1c.bottom = param_2[3];
  bErase = 0;
  hWnd = (HWND)FUN_0046cae0(param_1);
  InvalidateRect(hWnd,lpRect,bErase);
  return;
}

