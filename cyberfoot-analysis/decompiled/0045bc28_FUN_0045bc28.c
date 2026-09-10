// Address: 0045bc28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045bc28(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x16e)) {
    *(char *)((int)param_1 + 0x16e) = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

