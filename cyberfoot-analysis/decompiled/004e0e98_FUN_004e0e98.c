// Address: 004e0e98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004e0e98(void)

{
  HWND hWnd;
  int in_stack_00000004;
  UINT Msg;
  WPARAM wParam;
  undefined4 *lParam;
  undefined4 local_c [2];
  
  lParam = local_c;
  wParam = 0;
  Msg = 0x434;
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x1c));
  SendMessageW(hWnd,Msg,wParam,(LPARAM)lParam);
  return local_c[0];
}

