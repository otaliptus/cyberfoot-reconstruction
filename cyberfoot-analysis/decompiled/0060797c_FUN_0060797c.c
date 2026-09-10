// Address: 0060797c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0060797c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  FUN_00402b90();
  if (param_5 < 0x5a) {
    uVar3 = 700;
  }
  else {
    uVar3 = 400;
  }
  local_18 = -1;
  local_14 = -1;
  iVar1 = FUN_00405eec(DAT_006d4298);
  iVar2 = FUN_004032c8(100);
  if (iVar2 < 0x5e) {
    iVar1 = FUN_004032c8(uVar3);
    if (iVar1 == 1) {
      local_18 = FUN_0060a6bc(param_1,param_2,param_3);
      local_14 = 2;
      if (0 < local_18) {
        FUN_00607ac0(param_1,local_18);
      }
    }
  }
  else {
    local_18 = FUN_0060a6bc(param_1,param_2,param_3);
    local_14 = 1;
    if (0 < local_18) {
      iVar2 = FUN_00607a88(local_18);
      if (iVar2 == 0) {
        FUN_004060a8(&DAT_006d4298,PTR_DAT_006071a4,1,iVar1 + 1);
        *(int *)(DAT_006d4298 + iVar1 * 4) = local_18;
      }
      else {
        local_14 = 3;
        FUN_00607ac0(param_1,local_18);
      }
    }
  }
  *param_4 = local_18;
  param_4[1] = local_14;
  return;
}

