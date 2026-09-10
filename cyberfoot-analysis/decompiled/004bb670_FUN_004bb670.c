// Address: 004bb670
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bb670(int *param_1,int param_2)

{
  if (param_2 != param_1[0x73]) {
    param_1[0x73] = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

