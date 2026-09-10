// Address: 004cfc74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cfc74(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x2c4)) {
    *(int *)(param_1 + 0x2c4) = param_2;
    FUN_004cfc00();
  }
  return;
}

