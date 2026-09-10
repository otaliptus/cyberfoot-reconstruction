// Address: 0041e098
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e098(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[2] < param_2)) {
    FUN_0041dfa8(*param_1,PTR_PTR_0066b4e8,param_2);
  }
  if (param_1[2] == param_1[3]) {
    (**(code **)*param_1)();
  }
  if (param_2 < param_1[2]) {
    FUN_00402a04(param_1[1] + param_2 * 4,param_1[1] + 4 + param_2 * 4,(param_1[2] - param_2) * 4);
  }
  *(int *)(param_1[1] + param_2 * 4) = param_3;
  param_1[2] = param_1[2] + 1;
  if (param_3 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,0);
  }
  return;
}

