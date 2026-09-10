// Address: 0045bb70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045bb70(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x5b]) {
    *(char *)(param_1 + 0x5b) = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

