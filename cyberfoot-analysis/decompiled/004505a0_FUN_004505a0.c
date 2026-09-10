// Address: 004505a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004505a0(int param_1)

{
  char cVar1;
  
  FUN_0046bf5c(param_1);
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    FUN_00450298(param_1,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18));
    cVar1 = FUN_00450594(param_1);
    if (cVar1 != '\0') {
      InvalidateRect(*(HWND *)(param_1 + 0x264),(RECT *)0x0,-1);
    }
  }
  return;
}

