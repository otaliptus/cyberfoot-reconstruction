// Address: 00570794
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00570794(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x5d]) {
    *(char *)(param_1 + 0x5d) = param_2;
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}

