// Address: 00550a68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00550a68(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x198)) {
    *(int *)(param_1 + 0x198) = param_2;
    FUN_0054fe58();
  }
  return;
}

