// Address: 004e87a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e87a4(undefined4 param_1)

{
  int iVar1;
  HWND hWnd;
  
  iVar1 = FUN_0047e4c0(param_1);
  if (iVar1 != 0) {
    hWnd = (HWND)FUN_0046cae0(param_1);
    SetFocus(hWnd);
  }
  return;
}

