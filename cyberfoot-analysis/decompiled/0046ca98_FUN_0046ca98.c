// Address: 0046ca98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0046ca98(int param_1)

{
  HWND pHVar1;
  
  if (*(int *)(param_1 + 0x180) != 0) {
    pHVar1 = GetFocus();
    if (pHVar1 == *(HWND *)(param_1 + 0x180)) {
      return 1;
    }
  }
  return 0;
}

