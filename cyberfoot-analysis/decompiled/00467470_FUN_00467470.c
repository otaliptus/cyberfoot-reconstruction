// Address: 00467470
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467470(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x40) = *param_2;
  *(int *)(param_1 + 0x44) = param_2[1];
  *(int *)(param_1 + 0x48) = param_2[2] - *param_2;
  *(int *)(param_1 + 0x4c) = param_2[3] - param_2[1];
  FUN_0046585c();
  return;
}

