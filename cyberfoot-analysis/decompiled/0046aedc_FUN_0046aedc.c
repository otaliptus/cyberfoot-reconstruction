// Address: 0046aedc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046aedc(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  BOOL BVar4;
  
  if ((((*(char *)(param_1 + 0x1a5) == '\0') || ((*(byte *)(param_1 + 0x50) & 0x10) == 0)) ||
      (*(int *)(param_1 + 0x30) == 0)) || ((*(byte *)(*(int *)(param_2 + 8) + 0x18) & 8) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0x18) & 2) == 0) {
    BVar4 = IsWindowVisible(*(HWND *)(param_1 + 0x180));
    if (BVar4 == 0) goto LAB_0046af21;
    bVar2 = true;
  }
  else {
LAB_0046af21:
    bVar2 = false;
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0x18) & 1) == 0) {
    BVar4 = IsWindowVisible(*(HWND *)(param_1 + 0x180));
    if (BVar4 != 0) {
      bVar3 = true;
      goto LAB_0046af49;
    }
  }
  bVar3 = false;
LAB_0046af49:
  if ((bVar1) && (bVar2 || bVar3)) {
    FUN_0046c9e8(param_1);
  }
  if ((*(byte *)(param_1 + 0x55) & 2) == 0) {
    FUN_0046cdf0(param_1);
  }
  FUN_00467d00(param_1,param_2);
  if ((bVar1) && ((bVar2 || bVar3 || ((*(byte *)(*(int *)(param_2 + 8) + 0x18) & 0xc0) != 0)))) {
    FUN_0046c9e8(param_1);
  }
  return;
}

