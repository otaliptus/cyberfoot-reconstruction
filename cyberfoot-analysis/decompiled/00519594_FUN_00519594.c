// Address: 00519594
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00519594(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_18;
  undefined1 *local_14;
  int local_10;
  
  local_18 = (**(code **)(*(int *)param_2[1] + 0x20))();
  if (-1 < local_18 + -1) {
    local_10 = 0;
    do {
      local_14 = (undefined1 *)(**(code **)*param_2)(param_2,local_10);
      iVar1 = (**(code **)(*(int *)param_2[1] + 0x2c))();
      if (-1 < iVar1 + -1) {
        do {
          FUN_00519638(param_1,param_1 + 4,local_14[2],param_1 + 0xc,param_1 + 8,0,
                       *(undefined4 *)(param_1 + 0x30),*local_14,local_14[1]);
          while (*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 8)) {
            FUN_005197dc(param_1,*(undefined4 *)(param_1 + 0x30),param_1 + 8,param_1 + 0xc);
          }
          local_14 = local_14 + 3;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return 1;
}

