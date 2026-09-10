// Address: 004d2f50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d2f50(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = param_2;
    FUN_004d2d94();
  }
  return;
}

