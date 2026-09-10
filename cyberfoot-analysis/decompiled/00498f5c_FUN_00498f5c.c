// Address: 00498f5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498f5c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x158);
  if (*(int *)(param_1 + 0xb0) == 0) {
    piVar4 = (int *)(param_1 + 0xf4);
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0xf0); iVar3 = iVar3 + 1) {
      iVar2 = *piVar4;
      if (*(int *)(param_1 + 0xe0) == 0) {
        FUN_00498a2c(param_1,*(undefined4 *)(iVar2 + 0x14),0);
        FUN_00498a2c(param_1,*(undefined4 *)(iVar2 + 0x18),1);
      }
      else if (*(int *)(param_1 + 0x138) == 0) {
        if (*(int *)(param_1 + 0x140) == 0) {
          FUN_00498a2c(param_1,*(undefined4 *)(iVar2 + 0x14),0);
        }
      }
      else {
        FUN_00498a2c(param_1,*(undefined4 *)(iVar2 + 0x18),1);
      }
      piVar4 = piVar4 + 1;
    }
  }
  else {
    FUN_00498b08(param_1);
  }
  if (*(int *)(iVar1 + 0x1c) != *(int *)(param_1 + 0xc4)) {
    FUN_00498b0c(param_1);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0xc4);
  }
  FUN_00498bdc(param_1);
  return;
}

