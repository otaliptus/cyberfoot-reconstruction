// Address: 004cfbe8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cfbe8(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x2c1)) {
    *(char *)((int)param_1 + 0x2c1) = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

