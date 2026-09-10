// Address: 00551110
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00551110(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x34)) {
    *(int *)(param_1 + 0x34) = param_2;
    FUN_00550f2c();
  }
  return;
}

