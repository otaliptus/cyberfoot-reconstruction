// Address: 004c1fc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c1fc4(undefined2 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_8;
  
  local_8 = param_3;
  FUN_0040c388(&local_8,param_1 + 1,param_1 + 2,param_4,param_5);
  *param_1 = (undefined2)local_8;
  FUN_0040c0ac(param_1 + 3,param_1 + 4,param_1 + 5,(int)&local_8 + 2,param_4,param_5);
  *(uint *)(param_1 + 6) = local_8 >> 0x10;
  return;
}

