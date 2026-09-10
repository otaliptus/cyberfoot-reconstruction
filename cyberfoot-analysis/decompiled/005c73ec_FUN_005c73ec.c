// Address: 005c73ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c73ec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x37c));
  iVar2 = iVar1 + 1;
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    if (iVar2 < 0x26) {
      if (0x12 < iVar2) {
        FUN_005c5d38(param_1,1,iVar1 + -0x11,2);
        FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),iVar2);
        return;
      }
      FUN_005c5d38(param_1,1,iVar1 + 2,1);
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),iVar2);
    }
  }
  else if (iVar2 < 0x12) {
    if (iVar2 < 9) {
      FUN_005c5d38(param_1,1,iVar1 + 2,1);
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),iVar2);
    }
    else {
      FUN_005c5d38(param_1,1,iVar1 + -7,2);
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),iVar2);
    }
  }
  return;
}

