// Address: 004825dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004825dc(int param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  
  if ((*(int *)(param_1 + 0x220) != 0) && (*(int *)(param_1 + 0x250) == 0)) {
    param_1 = *(int *)(param_1 + 0x220);
  }
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  SetFocus(pHVar1);
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  pHVar2 = GetFocus();
  if (pHVar1 == pHVar2) {
    FUN_004673cc(param_1,0xb029,0,0);
  }
  return;
}

