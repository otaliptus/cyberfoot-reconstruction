// Address: 00559a6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00559a6c(int *param_1,int param_2)

{
  if (param_2 != param_1[0x37]) {
    param_1[0x37] = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

