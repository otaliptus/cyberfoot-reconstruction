// Address: 0044c554
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044c554(int *param_1,undefined4 *param_2)

{
  int iVar1;
  LPARAM lParam;
  HWND hWnd;
  LRESULT LVar2;
  UINT Msg;
  WPARAM wParam;
  
  iVar1 = (**(code **)(*param_1 + 0xcc))();
  FUN_00404f30(param_2,iVar1 + 1);
  lParam = FUN_00404da4(*param_2);
  wParam = 0;
  Msg = 0x43e;
  hWnd = (HWND)FUN_0046cae0(param_1);
  LVar2 = SendMessageA(hWnd,Msg,wParam,lParam);
  FUN_00404f30(param_2,LVar2);
  return;
}

