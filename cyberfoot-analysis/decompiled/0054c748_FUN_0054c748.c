// Address: 0054c748
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054c748(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x29a)) {
    *(char *)((int)param_1 + 0x29a) = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

