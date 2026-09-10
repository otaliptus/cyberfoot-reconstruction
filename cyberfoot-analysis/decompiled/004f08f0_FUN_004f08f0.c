// Address: 004f08f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004f08f0(uint *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  HWND hWnd;
  UINT Msg;
  uint *wParam;
  uint *lParam;
  
  uVar1 = 0;
  if (*(char *)(*(int *)(param_4 + -4) + 0x27a) == '\0') {
    Msg = 0xb0;
    wParam = param_1;
    lParam = param_2;
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(param_4 + -4));
    SendMessageA(hWnd,Msg,(WPARAM)wParam,(LPARAM)lParam);
    uVar1 = CONCAT31((int3)(*param_2 >> 8),*param_1 < *param_2);
  }
  return uVar1;
}

