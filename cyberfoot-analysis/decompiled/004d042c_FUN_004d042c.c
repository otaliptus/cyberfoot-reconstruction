// Address: 004d042c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d042c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x94]) {
    *(char *)(param_1 + 0x94) = param_2;
    if (*(char *)((int)param_1 + 0x23f) != '\0') {
      FUN_00403c80(param_1);
    }
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

