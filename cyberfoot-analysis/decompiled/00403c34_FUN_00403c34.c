// Address: 00403c34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00403c34(int *param_1,int param_2)

{
  if (param_1 != (int *)0x0) {
    while (*param_1 != param_2) {
      param_1 = *(int **)(*param_1 + -0x24);
      if (param_1 == (int *)0x0) {
        FUN_00402958(10);
        return;
      }
    }
  }
  return;
}

