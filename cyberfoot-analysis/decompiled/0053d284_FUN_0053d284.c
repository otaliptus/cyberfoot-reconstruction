// Address: 0053d284
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053d284(int *param_1,char param_2)

{
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_14;
  
  if (param_2 != *(char *)((int)param_1 + 0x211)) {
    *(char *)((int)param_1 + 0x211) = param_2;
    (**(code **)(*param_1 + 0x44))(param_1,&local_14);
    if (*(char *)((int)param_1 + 0x249) == '\0') {
      local_14.right = 0x14;
    }
    else if (*(char *)((int)param_1 + 0x249) == '\x01') {
      local_14.left = local_14.right + -0x14;
    }
    bErase = -1;
    lpRect = &local_14;
    hWnd = (HWND)FUN_0046cae0(param_1);
    InvalidateRect(hWnd,lpRect,bErase);
  }
  return;
}

