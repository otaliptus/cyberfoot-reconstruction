// Address: 004d03f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d03f0(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x241)) {
    *(char *)((int)param_1 + 0x241) = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

