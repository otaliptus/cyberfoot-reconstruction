// Address: 004d2fb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d2fb4(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x7c)) {
    *(char *)(param_1 + 0x7c) = param_2;
    FUN_004d2d94();
  }
  return;
}

