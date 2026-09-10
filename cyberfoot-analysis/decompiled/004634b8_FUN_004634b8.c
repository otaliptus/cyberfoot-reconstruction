// Address: 004634b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HWND FUN_004634b8(void)

{
  HWND hWnd;
  HWND pHVar1;
  HWND pHVar2;
  int in_stack_00000004;
  
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(in_stack_00000004 + -4));
  pHVar1 = pHVar2;
  while (hWnd = pHVar2, hWnd != (HWND)0x0) {
    pHVar2 = GetParent(hWnd);
    pHVar1 = hWnd;
  }
  return pHVar1;
}

