// Address: 005594fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005594fc(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  local_c = param_2[3];
  local_8 = param_3;
  FUN_004aeba4(local_28,param_2,param_3,(float)((local_c - local_14) + -1),
               (float)((local_10 - local_18) + -1),(float)local_14,(float)local_18);
  FUN_004aeba4(local_38);
  FUN_004aeba4(local_8);
  return;
}

