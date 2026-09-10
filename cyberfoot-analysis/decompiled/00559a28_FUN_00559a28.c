// Address: 00559a28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00559a28(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x35]) {
    *(char *)(param_1 + 0x35) = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

