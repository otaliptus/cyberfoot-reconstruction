// Address: 004eab6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eab6c(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x280) = param_2;
  iVar1 = FUN_004ea5ec(param_1);
  if (param_2 < iVar1 + *(int *)(*(int *)(param_1 + 0x244) + 0x2c)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x244) + 0x2c);
    if (*(int *)(param_1 + 0x280) < iVar1) {
      FUN_004e7c2c(*(int *)(param_1 + 0x244),*(int *)(param_1 + 0x280) - iVar1);
    }
  }
  else {
    iVar1 = FUN_004ea5ec(param_1);
    FUN_004e7c2c(*(undefined4 *)(param_1 + 0x244),
                 *(int *)(param_1 + 0x280) -
                 (iVar1 + *(int *)(*(int *)(param_1 + 0x244) + 0x2c) + -1));
  }
  FUN_004eae38(param_1,*(undefined4 *)(param_1 + 0x280));
  return;
}

