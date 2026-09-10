// Address: 0041e168
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e168(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_0041dfa8(*param_1,PTR_PTR_0066b4e8,param_2);
  }
  iVar1 = *(int *)(param_1[1] + param_2 * 4);
  if (param_3 != iVar1) {
    *(int *)(param_1[1] + param_2 * 4) = param_3;
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 4))(param_1,iVar1,2);
    }
    if (param_3 != 0) {
      (**(code **)(*param_1 + 4))(param_1,param_3,0);
    }
  }
  return;
}

