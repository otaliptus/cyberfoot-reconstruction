// Address: 00464de4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00464de4(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x58)) {
    FUN_00464db0(param_1);
    *(int *)(param_1 + 0x58) = param_2;
  }
  return;
}

