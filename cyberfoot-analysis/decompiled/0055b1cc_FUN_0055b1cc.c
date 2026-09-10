// Address: 0055b1cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055b1cc(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4d]) {
    *(char *)(param_1 + 0x4d) = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

