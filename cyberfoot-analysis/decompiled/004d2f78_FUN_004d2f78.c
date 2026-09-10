// Address: 004d2f78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d2f78(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x50) = param_2;
    FUN_004d2d94();
  }
  return;
}

