// Address: 004e7afc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e7afc(int *param_1,int param_2)

{
  if (param_2 != param_1[10]) {
    param_1[10] = param_2;
    if (param_2 < 1) {
      param_1[10] = 1;
    }
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}

