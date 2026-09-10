// Address: 00479118
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00479118(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x3d)) {
    *(char *)((int)param_1 + 0x3d) = param_2;
    if (((char)param_1[0xe] != '\0') && (*(char *)((int)param_1 + 0x3d) != '\0')) {
      FUN_004789dc(param_1);
    }
    (**(code **)(*param_1 + 0x3c))(param_1,1);
  }
  return;
}

