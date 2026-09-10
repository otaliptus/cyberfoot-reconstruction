// Address: 00450200
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00450200(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x214)) {
    *(char *)(param_1 + 0x214) = param_2;
    FUN_00469fa0();
  }
  return;
}

