// Address: 00478b94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478b94(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x3e)) {
    *(char *)((int)param_1 + 0x3e) = param_2;
    (**(code **)(*param_1 + 0x3c))(param_1,1);
  }
  return;
}

