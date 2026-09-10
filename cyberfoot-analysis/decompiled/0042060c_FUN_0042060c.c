// Address: 0042060c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042060c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((char)param_1[7] != '\0') {
    FUN_0041f4bc(param_1,PTR_PTR_0066b0f0,0);
  }
  if ((param_2 < 0) || (param_1[5] < param_2)) {
    FUN_0041f4bc(param_1,PTR_PTR_0066b4e8,param_2);
  }
  (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,param_4);
  return;
}

