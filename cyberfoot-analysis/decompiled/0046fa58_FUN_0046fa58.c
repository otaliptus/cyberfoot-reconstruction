// Address: 0046fa58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046fa58(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_8;
  
  local_8 = param_3;
  FUN_004048d4(param_1);
  (**(code **)(**(int **)(param_4 + -4) + 0xc))(*(int **)(param_4 + -4),&local_8,4);
  if (0 < local_8) {
    FUN_00404f30(param_1,local_8);
    (**(code **)(**(int **)(param_4 + -4) + 0xc))(*(int **)(param_4 + -4),*param_1,local_8);
  }
  return;
}

