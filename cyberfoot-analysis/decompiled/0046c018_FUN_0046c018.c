// Address: 0046c018
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046c018(int param_1)

{
  char cVar1;
  BOOL BVar2;
  
  if (((*(byte *)(param_1 + 0x50) & 0x10) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      BVar2 = IsWindowVisible(*(HWND *)(param_1 + 0x180));
      if (BVar2 != 0) {
        FUN_0046c9e8(param_1);
      }
    }
  }
  FUN_00469790(param_1,0xb011);
  return;
}

