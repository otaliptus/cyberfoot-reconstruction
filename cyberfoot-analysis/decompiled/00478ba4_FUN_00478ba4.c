// Address: 00478ba4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478ba4(int *param_1,int param_2)

{
  if (param_2 != param_1[0x10]) {
    param_1[0x10] = param_2;
    (**(code **)(*param_1 + 0x3c))(param_1,1);
  }
  return;
}

