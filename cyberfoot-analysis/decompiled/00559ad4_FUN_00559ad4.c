// Address: 00559ad4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00559ad4(int *param_1,int param_2)

{
  if (param_2 != param_1[0x25]) {
    param_1[0x25] = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

