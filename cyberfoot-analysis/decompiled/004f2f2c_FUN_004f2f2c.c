// Address: 004f2f2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f2f2c(int param_1,undefined1 param_2)

{
  HWND hWnd;
  int nCmdShow;
  
  *(undefined1 *)(param_1 + 0x2a9) = param_2;
  nCmdShow = *(int *)(&DAT_00669ca4 + (uint)*(byte *)(param_1 + 0x2a9) * 4);
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x288));
  ShowWindow(hWnd,nCmdShow);
  FUN_00466128(*(undefined4 *)(param_1 + 0x288),*(undefined1 *)(param_1 + 0x2a9));
  FUN_004ef3b4(param_1);
  FUN_004f2c2c(param_1);
  return;
}

