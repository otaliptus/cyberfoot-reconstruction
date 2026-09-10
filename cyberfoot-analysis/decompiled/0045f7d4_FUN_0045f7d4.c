// Address: 0045f7d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045f7d4(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  HWND hWnd;
  char cVar3;
  UINT Msg;
  LPARAM lParam;
  
  cVar3 = (char)param_2;
  if (cVar3 != *(char *)((int)param_1 + 0x211)) {
    *(char *)((int)param_1 + 0x211) = cVar3;
    FUN_0046cd14(param_1,param_2);
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      lParam = 0;
      uVar2 = (**(code **)(*param_1 + 200))();
      uVar2 = uVar2 & 0x7f;
      Msg = 0xf1;
      hWnd = (HWND)FUN_0046cae0(param_1);
      SendMessageA(hWnd,Msg,uVar2,lParam);
    }
    if (cVar3 != '\0') {
      FUN_0045f718();
      FUN_00465e14(param_1);
      if ((char)param_1[0x82] == '\0') {
        FUN_00403c80(param_1);
      }
    }
  }
  return;
}

