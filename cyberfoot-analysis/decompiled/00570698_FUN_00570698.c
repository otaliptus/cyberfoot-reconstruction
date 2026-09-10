// Address: 00570698
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00570698(int *param_1,int param_2)

{
  if (param_2 != param_1[0x5b]) {
    param_1[0x5b] = param_2;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}

