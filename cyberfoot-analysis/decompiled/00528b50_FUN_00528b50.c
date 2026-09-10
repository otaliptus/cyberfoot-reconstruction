// Address: 00528b50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00528b50(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x20)) {
    *(int *)(param_1 + 0x20) = param_2;
    FUN_00528664();
  }
  return;
}

