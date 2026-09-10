// Address: 004531a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004531a4(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  HWND pHVar2;
  RECT *lpRect;
  int iVar3;
  int iVar4;
  BOOL bErase;
  
  FUN_00456c14();
  cVar1 = FUN_00456cf4();
  if (cVar1 == '\0') {
    FUN_0046ada4(param_1,param_2);
  }
  else {
    iVar3 = 1;
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    iVar3 = GetScrollPos(pHVar2,iVar3);
    FUN_0046ada4(param_1,param_2);
    iVar4 = 1;
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    iVar4 = GetScrollPos(pHVar2,iVar4);
    if (iVar4 != iVar3) {
      bErase = -1;
      lpRect = (RECT *)0x0;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      InvalidateRect(pHVar2,lpRect,bErase);
    }
  }
  return;
}

