// Address: 0040715c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040715c(int *param_1,int param_2,int param_3)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + param_2;
    param_1[2] = param_1[2] + param_2;
    param_1[1] = param_1[1] + param_3;
    param_1[3] = param_1[3] + param_3;
    return 1;
  }
  return 0;
}

