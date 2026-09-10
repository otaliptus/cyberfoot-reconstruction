// Address: 004506b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004506b8(int param_1,int param_2)

{
  HWND hWnd;
  LONG LVar1;
  
  if ((*(short *)(param_2 + 4) == 1) && (*(int *)(param_1 + 0x264) == 0)) {
    hWnd = *(HWND *)(param_2 + 8);
    *(HWND *)(param_1 + 0x264) = hWnd;
    LVar1 = GetWindowLongA(hWnd,-4);
    *(LONG *)(param_1 + 0x260) = LVar1;
    SetWindowLongA(*(HWND *)(param_1 + 0x264),-4,*(LONG *)(param_1 + 0x25c));
  }
  FUN_0046bc00(param_1,param_2);
  return;
}

