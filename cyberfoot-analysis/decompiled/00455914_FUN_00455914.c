// Address: 00455914
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00455914(int param_1,int param_2)

{
  char cVar1;
  LPARAM lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  if (*(int *)(param_1 + 0x280) != 0) {
    FUN_0047490c(*(int *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x27c));
  }
  *(int *)(param_1 + 0x280) = param_2;
  if (param_2 == 0) {
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      FUN_004673cc(param_1,0x402,0,0);
      FUN_00469fa0(param_1);
    }
  }
  else {
    FUN_00474950(param_2,*(undefined4 *)(param_1 + 0x27c));
    FUN_00426f28(*(undefined4 *)(param_1 + 0x280),param_1);
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      lParam = FUN_00473bd0(*(undefined4 *)(param_1 + 0x280));
      wParam = 0;
      Msg = 0x402;
      hWnd = (HWND)FUN_0046cae0(param_1);
      PostMessageA(hWnd,Msg,wParam,lParam);
      return;
    }
  }
  return;
}

