// Address: 004633d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004633d8(int param_1)

{
  char cVar1;
  HWND hWnd;
  int iVar2;
  
  ReleaseCapture();
  DAT_0066305c = 0;
  if (param_1 != 0) {
    cVar1 = FUN_00403c10(param_1,PTR_PTR_00461f94);
    iVar2 = param_1;
    if (cVar1 == '\0') {
      if (*(int *)(param_1 + 0x30) == 0) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x30);
      DAT_0066305c = param_1;
    }
    hWnd = (HWND)FUN_0046cae0(iVar2);
    SetCapture(hWnd);
  }
  return;
}

