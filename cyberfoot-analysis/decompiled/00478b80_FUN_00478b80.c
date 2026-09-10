// Address: 00478b80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478b80(int *param_1,short param_2)

{
  if (param_2 != (short)param_1[0x18]) {
    *(short *)(param_1 + 0x18) = param_2;
    (**(code **)(*param_1 + 0x3c))(param_1,1);
  }
  return;
}

