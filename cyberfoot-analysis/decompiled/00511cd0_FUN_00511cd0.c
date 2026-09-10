// Address: 00511cd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00511cd0(int *param_1)

{
  if (0 < param_1[0x12f]) {
    param_1[0x12f] = param_1[0x12f] + -1;
  }
  if (param_1[0x12f] == 0) {
    FUN_005111dc(param_1,1);
    if ((*(byte *)(param_1 + 0x124) & 0x40) != 0) {
      FUN_005111dc(param_1,3);
    }
    if ((*(byte *)(param_1 + 0x124) & 0x10) != 0) {
      FUN_005111dc(param_1,2);
    }
    if ((*(byte *)(param_1 + 0x124) & 0x80) != 0) {
      FUN_005111dc(param_1,4);
    }
    (**(code **)(*param_1 + 0x1bc))();
  }
  return;
}

