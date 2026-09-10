// Address: 0044c634
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044c634(undefined4 param_1,int param_2)

{
  HWND pHVar1;
  UINT UVar2;
  WPARAM WVar3;
  int *piVar4;
  LPARAM lParam;
  int local_10;
  int local_c;
  
  piVar4 = &local_10;
  WVar3 = 0;
  UVar2 = 0x434;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  SendMessageA(pHVar1,UVar2,WVar3,(LPARAM)piVar4);
  piVar4 = &local_10;
  local_c = param_2 + local_10;
  WVar3 = 0;
  UVar2 = 0x437;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  SendMessageA(pHVar1,UVar2,WVar3,(LPARAM)piVar4);
  lParam = 0;
  WVar3 = 0;
  UVar2 = 0x431;
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  SendMessageA(pHVar1,UVar2,WVar3,lParam);
  return;
}

