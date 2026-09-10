// Address: 0053f260
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053f260(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x92]) {
    *(char *)(param_1 + 0x92) = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

