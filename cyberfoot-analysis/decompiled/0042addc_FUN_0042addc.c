// Address: 0042addc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042addc(int *param_1,int *param_2,int param_3,int *param_4)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0042b67c(param_1,DAT_0042ae5c);
  FUN_0042b67c(param_3,DAT_0042ae60);
  StretchBlt((HDC)param_1[1],*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],
             *(HDC *)(param_3 + 4),*param_4,param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1]
             ,param_1[8]);
  (**(code **)(*param_1 + 0xc))();
  return;
}

