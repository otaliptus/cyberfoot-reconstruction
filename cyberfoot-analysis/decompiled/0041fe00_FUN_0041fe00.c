// Address: 0041fe00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041fe00(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
  }
  FUN_00406898(param_1 + 0xc,param_2);
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(int **)(param_1 + 0xc),param_1);
  }
  return;
}

