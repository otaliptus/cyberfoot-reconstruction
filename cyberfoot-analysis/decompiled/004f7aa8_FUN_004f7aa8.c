// Address: 004f7aa8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f7aa8(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  HWND hWnd;
  RECT *prcScroll;
  tagRECT *prcClip;
  HRGN hrgnUpdate;
  tagRECT *prcUpdate;
  UINT flags;
  tagRECT tStack_20;
  
  iVar2 = (**(code **)(*param_1 + 0x120))(param_1,param_2);
  if (param_3 != iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x120))(param_1,param_2);
    iVar2 = param_3 - iVar2;
    iVar3 = FUN_004f5b28(param_1[0x166],param_2);
    *(int *)(iVar3 + 0x1c) = param_3;
    FUN_0050ec98(param_1,param_2,param_3);
    prcUpdate = &tStack_20;
    prcClip = &tStack_20;
    cVar1 = (**(code **)(*param_1 + 300))(param_1,param_2);
    if (cVar1 != '\0') {
      FUN_005118f0(param_1,param_2,0);
      FUN_0050f004(param_1,&tStack_20);
      tStack_20.left = 0;
      tStack_20.top = FUN_0050f5f8(param_1,param_2);
      tStack_20.top = param_3 + tStack_20.top;
      flags = 2;
      hrgnUpdate = (HRGN)0x0;
      prcScroll = (RECT *)0x0;
      iVar3 = 0;
      hWnd = (HWND)FUN_0046cae0(param_1);
      ScrollWindowEx(hWnd,iVar3,iVar2,prcScroll,prcClip,hrgnUpdate,prcUpdate,flags);
      (**(code **)(*param_1 + 0x1bc))();
    }
  }
  return;
}

