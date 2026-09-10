// Address: 005c1e28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005c1e28(int param_1,int param_2)

{
  char cVar1;
  HWND hWnd;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  LRESULT LVar6;
  UINT Msg;
  WPARAM wParam;
  int local_14;
  
  cVar1 = FUN_005c1a78(param_1);
  if ((cVar1 != '\x01') && (0 < param_2)) {
    if (*PTR_DAT_0066adfc == '\0') {
      FUN_00404830("Assertion failure",
                   "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntComCtrls.pas"
                   ,0xb56);
    }
    wParam = 0;
    Msg = 0x436;
    iVar2 = param_2;
    hWnd = (HWND)FUN_0046cae0(param_1);
    iVar2 = SendMessageW(hWnd,Msg,wParam,iVar2);
    if (*(char *)(param_1 + 0x226) != '\0') {
      local_14 = 0;
      if (-1 < iVar2 + -1) {
        iVar5 = 0;
        LVar6 = iVar2;
        do {
          uVar3 = FUN_0046cae0(param_1);
          iVar4 = FUN_004e0be8(uVar3,iVar5,0xffffffff);
          local_14 = local_14 + iVar4;
          iVar5 = iVar5 + 1;
          LVar6 = LVar6 + -1;
        } while (LVar6 != 0);
      }
      uVar3 = FUN_0046cae0(param_1);
      iVar2 = FUN_004e0b30(uVar3,iVar2);
      iVar2 = iVar2 - local_14;
    }
    param_2 = iVar2 + param_2;
  }
  return param_2;
}

