// Address: 00528960
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00528960(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0xa4)) {
    *(char *)(param_1 + 0xa4) = param_2;
    FUN_00528664();
  }
  return;
}

