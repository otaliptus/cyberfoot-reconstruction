// Address: 004bbec4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bbec4(int *param_1,int param_2)

{
  if (param_2 != param_1[0x79]) {
    param_1[0x79] = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

