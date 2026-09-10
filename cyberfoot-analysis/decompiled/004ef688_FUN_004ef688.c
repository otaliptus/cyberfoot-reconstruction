// Address: 004ef688
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef688(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x219)) {
    *(char *)((int)param_1 + 0x219) = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

