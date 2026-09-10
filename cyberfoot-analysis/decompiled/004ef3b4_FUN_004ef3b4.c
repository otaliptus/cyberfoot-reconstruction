// Address: 004ef3b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef3b4(int *param_1)

{
  undefined2 extraout_var;
  LPARAM lParam;
  HWND hWnd;
  undefined2 extraout_var_00;
  UINT Msg;
  WPARAM wParam;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *(undefined4 *)(param_1[0x8c] + 8);
  local_c = *(undefined4 *)(param_1[0x8c] + 0xc);
  (**(code **)(*param_1 + 0x124))(param_1,&local_10,&local_c);
  lParam = FUN_004080f8(CONCAT22(extraout_var,(undefined2)local_10),
                        CONCAT22(extraout_var_00,(undefined2)local_c));
  wParam = 3;
  Msg = 0xd3;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

