// Address: 0044a14c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044a14c(int param_1)

{
  char cVar1;
  HWND pHVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    if ((*(int *)(param_1 + 0x22c) == 0) && (*(int *)(param_1 + 0x230) == 0)) {
      LVar5 = 0;
      WVar4 = 1;
      UVar3 = 0x413;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar2,UVar3,WVar4,LVar5);
    }
    else {
      LVar5 = FUN_00408014(*(undefined2 *)(param_1 + 0x22c),*(undefined2 *)(param_1 + 0x230));
      WVar4 = 1;
      UVar3 = 0x40a;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar2,UVar3,WVar4,LVar5);
    }
  }
  return;
}

