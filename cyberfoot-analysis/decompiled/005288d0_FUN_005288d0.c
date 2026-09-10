// Address: 005288d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005288d0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 4) = param_2;
    FUN_00528664();
  }
  return;
}

