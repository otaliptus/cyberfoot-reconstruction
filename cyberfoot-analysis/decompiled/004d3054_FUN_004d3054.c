// Address: 004d3054
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d3054(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x66)) {
    *(char *)(param_1 + 0x66) = param_2;
    FUN_004d2d94();
  }
  return;
}

