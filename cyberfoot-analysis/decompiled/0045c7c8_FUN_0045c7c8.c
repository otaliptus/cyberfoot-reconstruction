// Address: 0045c7c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045c7c8(int param_1,WPARAM param_2,undefined4 param_3)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  int lParam;
  UINT UVar4;
  WPARAM wParam;
  LPARAM LVar5;
  
  LVar5 = 0;
  UVar4 = 0xbb;
  pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
  WVar2 = SendMessageA(pHVar1,UVar4,param_2,LVar5);
  if (-1 < (int)WVar2) {
    LVar5 = 0;
    UVar4 = 0xc1;
    wParam = WVar2;
    pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    LVar3 = SendMessageA(pHVar1,UVar4,wParam,LVar5);
    lParam = LVar3 + WVar2;
    UVar4 = 0xb1;
    pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    SendMessageA(pHVar1,UVar4,WVar2,lParam);
    LVar5 = FUN_00404da4(param_3);
    WVar2 = 0;
    UVar4 = 0xc2;
    pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    SendMessageA(pHVar1,UVar4,WVar2,LVar5);
  }
  return;
}

