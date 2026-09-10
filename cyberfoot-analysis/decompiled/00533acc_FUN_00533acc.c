// Address: 00533acc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00533acc(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x74)) {
    *(int *)(param_1 + 0x74) = param_2;
    FUN_00533914();
  }
  return;
}

