// Address: 00511a00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00511a00(undefined4 param_1,undefined4 param_2,char param_3)

{
  HWND pHVar1;
  RECT *pRVar2;
  BOOL bErase;
  RECT local_1c;
  
  pRVar2 = &local_1c;
  FUN_0050f6c0(param_1,param_2,&local_1c);
  bErase = 0;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  InvalidateRect(pHVar1,pRVar2,bErase);
  if (param_3 != '\0') {
    InflateRect(&local_1c,-3,-4);
    pRVar2 = &local_1c;
    pHVar1 = (HWND)FUN_0046cae0(param_1);
    ValidateRect(pHVar1,pRVar2);
  }
  return;
}

