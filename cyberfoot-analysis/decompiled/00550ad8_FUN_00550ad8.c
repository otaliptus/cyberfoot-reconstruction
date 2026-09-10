// Address: 00550ad8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00550ad8(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x188)) {
    *(char *)(param_1 + 0x188) = param_2;
    FUN_0054fe58();
  }
  return;
}

