// Address: 004203c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004203c4(int *param_1,int param_2)

{
  if ((param_2 < 0) || (param_1[5] <= param_2)) {
    FUN_0041f4bc(param_1,PTR_PTR_0066b4e8,param_2);
  }
  (**(code **)(*param_1 + 0x84))();
  FUN_00405830(param_1[4] + param_2 * 8,PTR_DAT_0041bd7c);
  param_1[5] = param_1[5] + -1;
  if (param_2 < param_1[5]) {
    FUN_00402a04(param_1[4] + 8 + param_2 * 8,param_1[4] + param_2 * 8,(param_1[5] - param_2) * 8);
  }
  (**(code **)(*param_1 + 0x80))();
  return;
}

