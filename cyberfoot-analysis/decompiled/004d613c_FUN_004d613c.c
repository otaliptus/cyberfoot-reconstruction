// Address: 004d613c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d613c(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x10))();
  }
  FUN_00406898(param_1 + 0x10,param_2);
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(*(int **)(param_1 + 0x10),param_1);
  }
  return;
}

