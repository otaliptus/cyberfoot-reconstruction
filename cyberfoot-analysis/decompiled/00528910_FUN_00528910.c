// Address: 00528910
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00528910(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = param_2;
    FUN_00528664();
  }
  return;
}

