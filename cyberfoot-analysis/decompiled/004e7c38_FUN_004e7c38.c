// Address: 004e7c38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e7c38(int param_1)

{
  HWND pHVar1;
  UINT UVar2;
  WPARAM WVar3;
  LPARAM LVar4;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      LVar4 = 0;
      WVar3 = 1;
      UVar2 = 0x114;
      pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x24));
      SendMessageA(pHVar1,UVar2,WVar3,LVar4);
    }
    else if (*(char *)(param_1 + 0x11) == '\x01') {
      LVar4 = 0;
      WVar3 = 1;
      UVar2 = 0x115;
      pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x24));
      SendMessageA(pHVar1,UVar2,WVar3,LVar4);
    }
  }
  return;
}

