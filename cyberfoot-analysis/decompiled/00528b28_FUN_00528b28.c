// Address: 00528b28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00528b28(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x78)) {
    *(char *)(param_1 + 0x78) = param_2;
    FUN_00528664();
  }
  return;
}

