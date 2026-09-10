// Address: 004cfca4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cfca4(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x2c0)) {
    *(char *)(param_1 + 0x2c0) = param_2;
    FUN_004cfc00();
  }
  return;
}

