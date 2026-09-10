// Address: 0045d350
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045d350(int *param_1,uint param_2)

{
  HWND pHVar1;
  UINT Msg;
  RECT *lpRect;
  LPARAM lParam;
  BOOL bErase;
  RECT RStack_18;
  
  lParam = 0;
  param_2 = param_2 & 0xff;
  Msg = 0x14f;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  SendMessageA(pHVar1,Msg,param_2,lParam);
  lpRect = &RStack_18;
  (**(code **)(*param_1 + 0x44))(param_1,&RStack_18);
  bErase = -1;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  InvalidateRect(pHVar1,lpRect,bErase);
  return;
}

