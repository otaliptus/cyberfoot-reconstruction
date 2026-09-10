// Address: 0047e8e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0047e8e8(int param_1)

{
  HWND hWnd;
  int iVar1;
  int iVar2;
  
  iVar2 = -0x10;
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 4));
  GetWindowLongA(hWnd,iVar2);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar1 = FUN_0047e86c(0,0x15);
    iVar2 = FUN_00465c50(*(undefined4 *)(param_1 + 4));
    iVar1 = iVar1 + iVar2;
  }
  else {
    iVar1 = FUN_0047e86c(1,0x14);
    iVar2 = FUN_00465c0c(*(undefined4 *)(param_1 + 4));
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

