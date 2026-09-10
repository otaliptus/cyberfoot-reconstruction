// Address: 004d03ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d03ac(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x23d)) {
    *(char *)((int)param_1 + 0x23d) = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

