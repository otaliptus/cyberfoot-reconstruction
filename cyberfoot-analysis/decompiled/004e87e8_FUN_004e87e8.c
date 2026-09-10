// Address: 004e87e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e87e8(int param_1)

{
  HWND pHVar1;
  UINT UVar2;
  WPARAM WVar3;
  LPARAM LVar4;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    LVar4 = 0;
    WVar3 = 0x10;
    UVar2 = 0x100;
    pHVar1 = (HWND)FUN_0046cae0(*(int *)(param_1 + 0x30));
    PostMessageA(pHVar1,UVar2,WVar3,LVar4);
    LVar4 = 0;
    WVar3 = 9;
    UVar2 = 0x100;
    pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x30));
    PostMessageA(pHVar1,UVar2,WVar3,LVar4);
  }
  return;
}

