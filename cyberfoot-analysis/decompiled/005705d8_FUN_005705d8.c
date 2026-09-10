// Address: 005705d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005705d8(int *param_1)

{
  param_1[0x68] = param_1[0x68] + -1;
  if ((param_1[0x68] == 0) && ((char)param_1[0x69] != '\0')) {
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}

