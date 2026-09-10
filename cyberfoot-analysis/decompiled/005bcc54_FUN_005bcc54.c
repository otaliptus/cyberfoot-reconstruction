// Address: 005bcc54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bcc54(LONG *param_1,LPPOINT param_2)

{
  LONG LVar1;
  LONG LVar2;
  HDC hdc;
  
  LVar1 = *param_1;
  LVar2 = param_1[1];
  hdc = GetDC((HWND)0x0);
  SetMapMode(hdc,3);
  param_2->x = LVar1;
  param_2->y = LVar2;
  param_2->y = -param_2->y;
  LPtoDP(hdc,param_2,1);
  ReleaseDC((HWND)0x0,hdc);
  return;
}

