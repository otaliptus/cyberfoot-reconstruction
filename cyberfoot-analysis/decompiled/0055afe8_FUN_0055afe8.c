// Address: 0055afe8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055afe8(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x54]) {
    *(char *)(param_1 + 0x54) = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

