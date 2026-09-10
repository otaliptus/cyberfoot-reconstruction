// Address: 004d2de8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d2de8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = param_2;
    FUN_004d2d94();
  }
  return;
}

