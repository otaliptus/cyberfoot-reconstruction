// Address: 00420824
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420824(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[7]) {
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0x90))();
    }
    *(char *)(param_1 + 7) = param_2;
  }
  return;
}

