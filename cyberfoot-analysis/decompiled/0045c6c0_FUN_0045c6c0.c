// Address: 0045c6c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045c6c0(int *param_1)

{
  char cVar1;
  HWND hWnd;
  uint uVar2;
  int nIndex;
  
  (**(code **)(*param_1 + -0x10))();
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    nIndex = -0x10;
    hWnd = (HWND)FUN_0046cae0(param_1);
    uVar2 = GetWindowLongA(hWnd,nIndex);
    if ((uVar2 & 4) == 0) {
      return;
    }
  }
  FUN_00403c80(param_1);
  return;
}

