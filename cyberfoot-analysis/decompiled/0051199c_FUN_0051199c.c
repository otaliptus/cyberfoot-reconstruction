// Address: 0051199c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051199c(int param_1,undefined4 param_2)

{
  int iVar1;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_18;
  
  lpRect = &local_18;
  if (*(char *)(param_1 + 700) == '\0') {
    FUN_0050f590(param_1,param_2,&local_18);
  }
  else if (*(char *)(param_1 + 700) == '\x01') {
    FUN_0050f6c0(param_1,param_2,&local_18);
  }
  local_18.top = local_18.bottom + -1;
  iVar1 = FUN_0050f404(param_1,3);
  local_18.bottom = iVar1 + local_18.top;
  bErase = 0;
  hWnd = (HWND)FUN_0046cae0(param_1);
  InvalidateRect(hWnd,lpRect,bErase);
  return;
}

