// Address: 0045f0fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045f0fc(undefined4 param_1,char param_2)

{
  char cVar1;
  HWND pHVar2;
  uint uVar3;
  uint wParam;
  UINT Msg;
  int nIndex;
  LPARAM lParam;
  
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    wParam = (uint)(param_2 != '\0');
    nIndex = -0x10;
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    uVar3 = GetWindowLongA(pHVar2,nIndex);
    if ((uVar3 & 0xf) != wParam) {
      lParam = 1;
      Msg = 0xf4;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
    }
  }
  return;
}

