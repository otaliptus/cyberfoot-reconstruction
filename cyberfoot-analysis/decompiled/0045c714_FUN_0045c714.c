// Address: 0045c714
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LRESULT FUN_0045c714(int param_1)

{
  char cVar1;
  HWND pHVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  LPARAM lParam;
  
  LVar4 = 0;
  cVar1 = FUN_0046cde4(*(undefined4 *)(param_1 + 0x10));
  if ((cVar1 != '\0') || (*(int *)(*(int *)(param_1 + 0x10) + 100) != 0)) {
    LVar7 = 0;
    WVar6 = 0;
    UVar5 = 0xba;
    pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    LVar4 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
    lParam = 0;
    LVar7 = 0;
    WVar6 = LVar4 - 1;
    UVar5 = 0xbb;
    pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    WVar6 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
    UVar5 = 0xc1;
    pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x10));
    LVar3 = SendMessageA(pHVar2,UVar5,WVar6,lParam);
    if (LVar3 == 0) {
      LVar4 = LVar4 + -1;
    }
  }
  return LVar4;
}

