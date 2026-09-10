// Address: 00514018
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00514018(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_14 [4];
  
  FUN_0050f004(*(undefined4 *)(param_4 + -4),local_14);
  *param_2 = local_14[0] - *(int *)(*(int *)(*(int *)(param_4 + -4) + 0x238) + 0x2c);
  iVar1 = FUN_0050f5f8(*(undefined4 *)(param_4 + -4),param_1);
  param_2[1] = iVar1;
  iVar1 = FUN_0050ae54(*(undefined4 *)(*(int *)(param_4 + -4) + 0x4d4));
  param_2[2] = iVar1 + *param_2;
  iVar1 = (**(code **)(**(int **)(param_4 + -4) + 0x120))(*(int **)(param_4 + -4),param_1);
  param_2[3] = iVar1 + param_2[1];
  return;
}

