// Address: 004815f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004815f4(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 600)) {
    *(int *)(param_1 + 600) = param_2;
    if (param_2 != 0) {
      FUN_00426f28(param_2,param_1);
    }
    FUN_00481554(param_1);
  }
  return;
}

