// Address: 005593f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005593f8(undefined4 param_1,int *param_2,float *param_3)

{
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = param_2[2];
  local_8 = param_2[3];
  FUN_004aeba4(local_24,param_2,param_3,(float)((local_8 - local_10) + -1),
               (float)((local_c - local_14) + -1),(float)local_10,(float)local_14);
  FUN_004aeba4(local_34);
  FUN_004aeba4(param_3);
  *param_3 = *param_3 + _DAT_005594f4;
  param_3[2] = param_3[2] - _DAT_005594f8;
  return;
}

