// Address: 0050ecec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050ecec(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  
  if (param_3 == '\0') {
    if (param_2 == *(int *)(param_1 + 0x4dc)) {
      uVar1 = FUN_005145d4(param_1,*(int *)(param_1 + 0x4dc));
      *(undefined4 *)(param_1 + 0x4dc) = uVar1;
    }
    uVar1 = FUN_00514610(param_1,*(undefined4 *)(param_1 + 0x4f0));
    *(undefined4 *)(param_1 + 0x4f0) = uVar1;
  }
  else {
    if (param_2 < *(int *)(param_1 + 0x4dc)) {
      *(int *)(param_1 + 0x4dc) = param_2;
    }
    if (*(int *)(param_1 + 0x4f0) < param_2) {
      *(int *)(param_1 + 0x4f0) = param_2;
      return;
    }
  }
  return;
}

