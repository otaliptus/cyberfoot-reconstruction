// Address: 00511884
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00511884(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT RStack_18;
  
  lpRect = &RStack_18;
  iVar2 = (**(code **)(*param_1 + 0x11c))();
  cVar1 = FUN_00432488(param_2,0,iVar2 + -1);
  if (cVar1 != '\0') {
    FUN_0050f590(param_1,param_2,&RStack_18);
    iVar2 = FUN_0050f404(param_1,1);
    RStack_18.top = RStack_18.top - iVar2;
    iVar2 = FUN_0050f404(param_1,3);
    RStack_18.bottom = RStack_18.bottom + iVar2;
    RStack_18.right = 0xc;
    bErase = 0;
    hWnd = (HWND)FUN_0046cae0(param_1);
    InvalidateRect(hWnd,lpRect,bErase);
  }
  return;
}

