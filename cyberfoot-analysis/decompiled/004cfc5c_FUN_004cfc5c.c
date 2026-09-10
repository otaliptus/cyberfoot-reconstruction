// Address: 004cfc5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cfc5c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xb3]) {
    *(char *)(param_1 + 0xb3) = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

