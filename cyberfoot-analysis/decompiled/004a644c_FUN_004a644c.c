// Address: 004a644c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a644c(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_004a6414(param_1,*(undefined4 *)(param_2 + 8));
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00408034(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),*(int *)(param_1 + 8));
  }
  return;
}

