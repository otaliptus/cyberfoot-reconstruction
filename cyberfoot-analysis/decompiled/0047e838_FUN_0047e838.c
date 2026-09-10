// Address: 0047e838
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0047e838(short param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  int nIndex;
  
  uVar2 = 0x100000;
  if (param_1 == 1) {
    uVar2 = 0x200000;
  }
  nIndex = -0x10;
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(*(int *)(param_4 + -4) + 4));
  uVar1 = GetWindowLongA(hWnd,nIndex);
  return (uVar1 & uVar2) != 0;
}

