// Address: 004cfc8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cfc8c(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x2c8)) {
    *(int *)(param_1 + 0x2c8) = param_2;
    FUN_004cfc00();
  }
  return;
}

