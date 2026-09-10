// Address: 00528b14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00528b14(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x30) = param_2;
    FUN_00528664();
  }
  return;
}

