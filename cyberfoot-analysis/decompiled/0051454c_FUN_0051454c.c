// Address: 0051454c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051454c(int *param_1,int param_2,int param_3,char param_4)

{
  HWND hWnd;
  int dx;
  int dy;
  RECT *prcScroll;
  tagRECT *prcClip;
  HRGN hrgnUpdate;
  tagRECT *prcUpdate;
  UINT flags;
  tagRECT local_18;
  int local_8;
  
  local_8 = param_3;
  (**(code **)(*param_1 + 0x204))(param_1,param_2,0);
  local_18.left =
       (*(int *)(param_2 + 0x74) + *(int *)(param_2 + 0xb0)) - *(int *)(param_1[0x8e] + 0x2c);
  local_18.top = 0;
  local_18.right = FUN_00465c0c(param_1);
  if (param_4 == '\0') {
    local_18.bottom = FUN_00465c50(param_1);
  }
  else {
    local_18.bottom = param_1[0xb0];
  }
  flags = 2;
  prcUpdate = &local_18;
  hrgnUpdate = (HRGN)0x0;
  prcClip = &local_18;
  prcScroll = (RECT *)0x0;
  dy = 0;
  dx = local_8;
  hWnd = (HWND)FUN_0046cae0(param_1);
  ScrollWindowEx(hWnd,dx,dy,prcScroll,prcClip,hrgnUpdate,prcUpdate,flags);
  return;
}

