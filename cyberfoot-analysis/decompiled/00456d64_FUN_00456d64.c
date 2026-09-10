// Address: 00456d64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00456d64(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_20 = *param_5;
  uStack_1c = param_5[1];
  uStack_18 = param_5[2];
  uStack_14 = param_5[3];
  local_10 = *param_3;
  local_c = param_3[1];
  local_8 = param_3[2];
  FUN_00456cb4(param_1,local_10 & 0xff,param_3,param_2,local_c,local_8,&local_20,param_4);
  (**(code **)PTR_DAT_0066b018)();
  return;
}

