// Address: 004ef54c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef54c(int *param_1)

{
  FUN_0046aedc(param_1);
  if ((*(byte *)(param_1 + 7) & 8) == 0) {
    (**(code **)(*param_1 + 0x80))();
    (**(code **)(*(int *)param_1[0x8a] + 0x80))();
    FUN_004ef40c(param_1);
  }
  return;
}

