// Address: 005288fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005288fc(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x38)) {
    *(int *)(param_1 + 0x38) = param_2;
    FUN_00528664();
  }
  return;
}

