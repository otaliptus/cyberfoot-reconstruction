// Address: 00488154
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00488154(int param_1)

{
  char cVar1;
  HWND pHVar2;
  BOOL BVar3;
  int nCmdShow;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    cVar1 = FUN_0046cde4(*(int *)(param_1 + 0x84));
    if (cVar1 != '\0') {
      pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x84));
      BVar3 = IsWindowVisible(pHVar2);
      if (BVar3 != 0) {
        nCmdShow = 0;
        pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x84));
        ShowWindow(pHVar2,nCmdShow);
      }
    }
  }
  return;
}

