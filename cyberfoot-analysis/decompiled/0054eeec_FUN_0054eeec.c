// Address: 0054eeec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054eeec(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = *param_3;
  iVar1 = param_3[1];
  local_20 = param_3[2];
  local_1c = param_3[3];
  iVar6 = local_20 - iVar3;
  local_2c = local_1c - iVar1;
  if (*(char *)(param_1 + 0x176) == '\x01') {
    iVar6 = iVar6 + 1;
    local_2c = local_2c + 1;
  }
  local_28 = iVar3;
  local_24 = iVar1;
  iVar2 = FUN_00430280(param_2);
  FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(param_1 + 0x70));
  FUN_0042af8c(iVar2,&local_28);
  FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(param_1 + 0x17c));
  FUN_0042a88c(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x178));
  FUN_0042a998(*(undefined4 *)(iVar2 + 0x10),1);
  FUN_0042b090(iVar2,iVar3,iVar1,local_1c + -1,iVar3,local_1c + -1,iVar6 + iVar3,local_2c * 2 + -1,
               iVar6);
  FUN_0042b064(iVar2,iVar3,local_1c);
  FUN_0042b004(iVar2,iVar6 + iVar3,local_1c);
  iVar3 = FUN_0054e8d4(param_1);
  if (0 < iVar3) {
    FUN_0042a88c(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x178));
    local_14 = (int)*(uint *)(param_1 + 0x48) >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((*(uint *)(param_1 + 0x48) & 1) != 0);
    }
    FUN_0042b064(iVar2,local_14,local_1c + -1);
    local_18 = FUN_0054e8d4(param_1);
    FUN_00402c04();
    local_18 = local_1c + -1;
    uVar4 = FUN_00402c38();
    FUN_00402bdc();
    uVar5 = FUN_00402c38();
    FUN_0042b004(iVar2,uVar5,uVar4);
  }
  return;
}

