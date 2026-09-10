// Address: 004866b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004866b0(void)

{
  HDC hDC;
  HICON hIcon;
  int in_stack_00000004;
  tagPAINTSTRUCT local_44;
  
  hDC = BeginPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x30),&local_44);
  hIcon = (HICON)FUN_00486e00(*(undefined4 *)(in_stack_00000004 + -4));
  DrawIcon(hDC,0,0,hIcon);
  EndPaint(*(HWND *)(*(int *)(in_stack_00000004 + -4) + 0x30),&local_44);
  return;
}

