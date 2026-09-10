// Address: 00646a38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00646a38(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_c;
  
  local_18 = 1;
  local_1c = 1;
  iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_3 * 0x2f8);
  iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_2 * 0x2f8) - iVar3;
  iVar3 = iVar3 - *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_2 * 0x2f8);
  if (param_5 < param_6) {
    iVar5 = 1;
    local_c = param_6 - param_5;
  }
  else if (param_6 < param_5) {
    iVar5 = 2;
    local_c = param_5 - param_6;
  }
  else {
    iVar5 = 0;
    local_c = 0;
  }
  if (iVar5 == 1) {
    FUN_00646fc0(param_1,param_2,1,1,iVar4,local_c);
    FUN_00646fc0(param_1,param_3,2,1,iVar3,local_c);
  }
  else if (iVar5 == 2) {
    FUN_00646fc0(param_1,param_2,2,2,iVar4,local_c);
    FUN_00646fc0(param_1,param_3,1,2,iVar3,local_c);
  }
  else if (iVar5 == 0) {
    FUN_00646fc0(param_1,param_2,0,1,iVar4,local_c);
    FUN_00646fc0(param_1,param_3,0,2,iVar3,local_c);
  }
  cVar2 = FUN_00646c50(param_2,param_3);
  if (cVar2 != '\0') {
    iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x88);
    if (iVar3 == 3) {
      local_18 = 2;
      local_1c = 5;
    }
    else if (iVar3 == 1) {
      local_18 = 2;
      local_1c = 5;
    }
    else if (iVar3 == 4) {
      local_18 = 10;
      local_1c = 0x14;
    }
    else if (iVar3 == 6) {
      local_18 = 3;
      local_1c = 10;
    }
    if (iVar5 == 1) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
      *piVar1 = *piVar1 + local_18;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_2 * 0x2f8);
      *piVar1 = *piVar1 + local_1c;
    }
    else if (iVar5 == 2) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_3 * 0x2f8);
      *piVar1 = *piVar1 + local_18;
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_3 * 0x2f8);
      *piVar1 = *piVar1 + local_1c;
    }
  }
  return;
}

