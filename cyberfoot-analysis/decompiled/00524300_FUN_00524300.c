// Address: 00524300
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00524300(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_24 = *param_1;
  local_10 = param_1[1];
  local_c = param_1[2];
  local_8 = param_1[3];
  piVar2 = (int *)(param_4 + -4);
  local_14 = local_24;
  if ((*(byte *)(*piVar2 + 0x3d) & 1) == 0) {
    FUN_0042b20c(*(undefined4 *)(param_4 + -8),&local_14,param_2);
  }
  else {
    local_1c = (**(code **)(*(int *)*piVar2 + 0x2c))();
    local_1c = local_1c + local_24;
    while (local_24 < local_c) {
      local_20 = local_10;
      local_18 = (**(code **)(*(int *)*piVar2 + 0x20))();
      local_18 = local_18 + local_20;
      while (local_20 < local_8) {
        FUN_0042b20c(*(undefined4 *)(param_4 + -8),&local_24,param_2);
        iVar1 = (**(code **)(*(int *)*piVar2 + 0x20))();
        local_20 = local_20 + iVar1;
        local_18 = (**(code **)(*(int *)*piVar2 + 0x20))();
        local_18 = local_18 + local_20;
      }
      iVar1 = (**(code **)(*(int *)*piVar2 + 0x2c))();
      local_24 = local_24 + iVar1;
      local_1c = (**(code **)(*(int *)*piVar2 + 0x2c))();
      local_1c = local_1c + local_24;
    }
  }
  return;
}

