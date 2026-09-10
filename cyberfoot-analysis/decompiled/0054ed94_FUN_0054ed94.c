// Address: 0054ed94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054ed94(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  local_18 = param_3[3];
  uVar6 = local_1c - local_24;
  iVar5 = local_18 - local_20;
  if (*(char *)(param_1 + 0x176) == '\x01') {
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 1;
  }
  iVar1 = FUN_00430280(param_2);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(param_1 + 0x70));
  FUN_0042af8c(iVar1,&local_24);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(param_1 + 0x17c));
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x178));
  FUN_0042a998(*(undefined4 *)(iVar1 + 0x10),1);
  FUN_0042af44(iVar1,local_24,local_20,iVar5,uVar6);
  iVar2 = FUN_0054e8d4(param_1);
  if (0 < iVar2) {
    FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(param_1 + 0x178));
    iVar2 = (int)uVar6 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar6 & 1) != 0);
    }
    local_14 = FUN_0054e8d4(param_1);
    FUN_00402bdc();
    uVar3 = FUN_00402c38();
    FUN_00402c04();
    uVar4 = FUN_00402c38();
    FUN_0042b090(iVar1,local_24,local_20,0,iVar2,uVar4,uVar3,iVar5,uVar6);
  }
  return;
}

