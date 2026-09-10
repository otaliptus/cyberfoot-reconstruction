// Address: 00513de0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00513de0(int param_1,int param_2,int param_3)

{
  int iVar1;
  HWND hWnd;
  int iVar2;
  RECT *lpRect;
  BOOL bErase;
  RECT local_30;
  undefined1 local_20 [12];
  int local_14;
  
  lpRect = &local_30;
  if (*(char *)(param_1 + 700) == '\0') {
    FUN_0050f590(param_1,param_2,&local_30);
  }
  else if (*(char *)(param_1 + 700) == '\x01') {
    FUN_0050f6c0(param_1,param_2,&local_30);
  }
  FUN_0050f004(param_1,local_20);
  if (param_2 <= param_3 + -1) {
    iVar2 = ((param_3 + -1) - param_2) + 1;
    do {
      if (local_14 <= local_30.bottom) break;
      iVar1 = FUN_0050efe8(param_1,param_2);
      iVar1 = iVar1 + local_30.bottom;
      local_30.bottom = FUN_0050f404(param_1,3);
      local_30.bottom = iVar1 + local_30.bottom;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  bErase = 0;
  hWnd = (HWND)FUN_0046cae0(param_1);
  InvalidateRect(hWnd,lpRect,bErase);
  return;
}

