// Address: 0044d1c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044d1c4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  WPARAM wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  iVar1 = *(int *)(param_2 + 0x48);
  iVar2 = *(int *)(param_2 + 0x40);
  lParam = 0;
  wParam = FUN_0046cae0(param_2);
  Msg = 0x469;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  iVar3 = *(int *)(param_2 + 0x40);
  FUN_004659c4(param_2,iVar1 * 2 - *(int *)(param_2 + 0x48));
  FUN_00465978(param_2,iVar2 - (iVar3 - iVar2));
  return;
}

