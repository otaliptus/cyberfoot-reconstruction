// Address: 005289a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005289a8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x28) = param_2;
    FUN_00528664();
  }
  return;
}

