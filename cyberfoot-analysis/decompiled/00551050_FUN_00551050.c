// Address: 00551050
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00551050(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = param_2;
    FUN_00550f2c();
  }
  return;
}

