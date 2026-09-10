// Address: 0045e304
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0045e304(uint *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  UINT Msg;
  uint *wParam;
  uint *lParam;
  
  Msg = 0x140;
  wParam = param_1;
  lParam = param_2;
  hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_4 + -4));
  SendMessageA(hWnd,Msg,(WPARAM)wParam,(LPARAM)lParam);
  return CONCAT31((int3)(*param_2 >> 8),*param_1 < *param_2);
}

