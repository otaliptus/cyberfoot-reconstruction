// Address: 00481950
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00481950(int param_1,byte param_2)

{
  HWND hWnd;
  int nCmdShow;
  
  if (((param_2 != *(byte *)(param_1 + 0x22b)) &&
      (*(byte *)(param_1 + 0x22b) = param_2, (*(byte *)(param_1 + 0x1c) & 0x10) == 0)) &&
     (*(char *)(param_1 + 0x1a6) != '\0')) {
    nCmdShow = *(int *)(&DAT_0066324c + (uint)param_2 * 4);
    hWnd = (HWND)FUN_0046cae0(param_1);
    ShowWindow(hWnd,nCmdShow);
  }
  return;
}

