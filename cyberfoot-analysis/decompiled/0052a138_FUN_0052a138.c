// Address: 0052a138
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0052a138(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  int local_58;
  int local_54 [4];
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [4];
  int local_30;
  int local_24 [4];
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_14 = *param_2;
  uStack_10 = param_2[1];
  uStack_c = param_2[2];
  uStack_8 = param_2[3];
  FUN_0052a340(param_1,&local_14,local_24);
  FUN_0052a340(param_1,&local_14,local_34,(float)local_24[0]);
  FUN_0052a340(param_1,&local_14,local_44,(float)local_30);
  FUN_0052a340(param_1,&local_14,local_54);
  local_58 = local_3c - local_54[0];
  FUN_0052a340(param_1,&local_14,local_68,(float)local_58);
  FUN_0052a340(param_1,&local_14,local_78);
  FUN_004aeba4(param_3);
  return;
}

