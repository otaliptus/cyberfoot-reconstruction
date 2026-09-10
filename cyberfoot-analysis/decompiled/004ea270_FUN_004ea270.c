// Address: 004ea270
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ea270(int param_1)

{
  HWND hWndChild;
  HWND hWndNewParent;
  
  FUN_004699b8(param_1);
  hWndNewParent = (HWND)0x0;
  hWndChild = (HWND)FUN_0046cae0(param_1);
  SetParent(hWndChild,hWndNewParent);
  *(undefined4 *)(*(int *)(param_1 + 0x244) + 0x14) = 10;
  return;
}

