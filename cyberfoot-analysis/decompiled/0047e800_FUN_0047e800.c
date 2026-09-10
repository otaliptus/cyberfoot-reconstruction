// Address: 0047e800
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0047e800(int param_1)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  int nIndex;
  
  uVar2 = 0x100000;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar2 = 0x200000;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    nIndex = -0x10;
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 4));
    uVar1 = GetWindowLongA(hWnd,nIndex);
    if ((uVar1 & uVar2) != 0) {
      return 1;
    }
  }
  return 0;
}

