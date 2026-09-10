// Address: 00449d90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00449d90(int *param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  lParam = 0;
  wParam = 0;
  Msg = 0x400;
  hWnd = (HWND)FUN_0046cae0(param_1);
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  param_1[0x8a] = LVar1;
  FUN_00403c80(param_1);
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

