// Address: 0044b560
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044b560(int param_1,WPARAM param_2,undefined4 param_3)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  UINT UVar4;
  LPARAM LVar5;
  WPARAM *lParam;
  WPARAM local_18;
  int local_14;
  
  if (-1 < (int)param_2) {
    LVar5 = 0;
    UVar4 = 0xbb;
    pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    WVar2 = SendMessageA(pHVar1,UVar4,param_2,LVar5);
    if (WVar2 != 0xffffffff) {
      LVar5 = 0;
      UVar4 = 0xc1;
      local_18 = WVar2;
      pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
      LVar3 = SendMessageA(pHVar1,UVar4,WVar2,LVar5);
      lParam = &local_18;
      local_14 = LVar3 + local_18;
      WVar2 = 0;
      UVar4 = 0x437;
      pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
      SendMessageA(pHVar1,UVar4,WVar2,(LPARAM)lParam);
      LVar5 = FUN_00404da4(param_3);
      WVar2 = 0;
      UVar4 = 0xc2;
      pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
      SendMessageA(pHVar1,UVar4,WVar2,LVar5);
    }
  }
  return;
}

