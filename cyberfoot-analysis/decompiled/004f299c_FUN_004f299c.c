// Address: 004f299c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f299c(int param_1,undefined1 param_2)

{
  HWND hWnd;
  int nCmdShow;
  
  *(undefined1 *)(param_1 + 0x2a8) = param_2;
  nCmdShow = *(int *)(&DAT_00669c8c + (uint)*(byte *)(param_1 + 0x2a8) * 4);
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x28c));
  ShowWindow(hWnd,nCmdShow);
  FUN_00466128(*(undefined4 *)(param_1 + 0x28c),*(undefined1 *)(param_1 + 0x2a8));
  FUN_004ef3b4(param_1);
  return;
}

