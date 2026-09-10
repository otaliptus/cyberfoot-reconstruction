// Address: 0045bc44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045bc44(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x16f)) {
    *(char *)((int)param_1 + 0x16f) = param_2;
    FUN_00403c80(param_1);
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

