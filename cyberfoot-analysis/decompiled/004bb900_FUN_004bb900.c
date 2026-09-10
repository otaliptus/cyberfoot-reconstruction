// Address: 004bb900
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bb900(int param_1,LONG *param_2)

{
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_14;
  
  local_14.left = *param_2;
  local_14.top = param_2[1];
  local_14.right = param_2[2];
  local_14.bottom = param_2[3];
  if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_0040715c(&local_14,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    bErase = -1;
    lpRect = &local_14;
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x30));
    InvalidateRect(hWnd,lpRect,bErase);
  }
  return;
}

