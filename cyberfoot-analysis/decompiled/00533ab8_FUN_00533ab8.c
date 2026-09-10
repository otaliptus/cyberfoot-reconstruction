// Address: 00533ab8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00533ab8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x70)) {
    *(int *)(param_1 + 0x70) = param_2;
    FUN_00533914();
  }
  return;
}

