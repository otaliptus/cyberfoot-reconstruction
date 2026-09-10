// Address: 004d2e24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d2e24(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = param_2;
    FUN_004d2d94();
  }
  return;
}

