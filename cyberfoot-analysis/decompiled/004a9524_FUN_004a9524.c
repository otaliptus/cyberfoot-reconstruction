// Address: 004a9524
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a9524(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *local_30;
  int *local_2c;
  int *local_28;
  code *local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  byte local_a;
  char local_9;
  undefined4 local_8;
  
  local_24 = (code *)0x0;
  local_20 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  switch(*(undefined1 *)(iVar2 + 0x461)) {
  case 0:
  case 3:
    cVar1 = *(char *)(iVar2 + 0x460);
    if (((cVar1 == '\x01') || (cVar1 == '\x04')) || (cVar1 == '\b')) {
      local_24 = FUN_004a925c;
      local_20 = param_1;
    }
    else if (cVar1 == '\x10') {
      local_24 = FUN_004a9328;
      local_20 = param_1;
    }
    break;
  case 2:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_24 = FUN_004a9170;
      local_20 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_24 = FUN_004a91e0;
      local_20 = param_1;
    }
    break;
  case 4:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_24 = FUN_004a9474;
      local_20 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_24 = (code *)&LAB_004a94c8;
      local_20 = param_1;
    }
    break;
  case 6:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_24 = FUN_004a936c;
      local_20 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_24 = (code *)&LAB_004a93f8;
      local_20 = param_1;
    }
  }
  local_9 = '\0';
  local_28 = &DAT_00669384;
  local_2c = &DAT_006693bc;
  local_30 = &DAT_00669368;
  piVar6 = &DAT_006693a0;
  local_8 = param_3;
  do {
    iVar2 = *local_2c;
    iVar4 = (*(int *)(param_1 + 0x18) - *local_28) + iVar2 + -1;
    uVar5 = FUN_004a5d14(iVar4 / iVar2,
                         CONCAT31((int3)((uint)(iVar4 % iVar2) >> 8),
                                  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x461)),
                         CONCAT31((int3)((uint)iVar2 >> 8),
                                  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x460)));
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    FUN_0040803c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20));
    local_10 = *local_30;
    iVar2 = *(int *)(param_1 + 0x14);
    local_18 = *(int *)(iVar2 + 0x468) * ((*(int *)(param_1 + 0x1c) + -1) - local_10) +
               *(int *)(iVar2 + 0x450);
    iVar4 = *(int *)(param_1 + 0x18) * local_10;
    local_14 = *(int *)(iVar2 + 0x454) + iVar4;
    if (*(int *)(param_1 + 0x20) != 0) {
      for (; local_10 < *(int *)(param_1 + 0x1c); local_10 = local_10 + iVar2) {
        (*local_24)(local_20,CONCAT31((int3)((uint)iVar4 >> 8),local_9),local_18,local_14,
                    *(undefined4 *)(param_1 + 0x3c));
        local_a = FUN_004a974c(param_1);
        FUN_004a8d3c(param_1,local_8,&local_a,1);
        FUN_004a8d3c(param_1,local_8,*(undefined4 *)(param_1 + 0x28 + (uint)local_a * 4),
                     *(undefined4 *)(param_1 + 0x20));
        iVar2 = *piVar6;
        local_18 = local_18 - *(int *)(*(int *)(param_1 + 0x14) + 0x468) * iVar2;
        lVar3 = (longlong)iVar2 * (longlong)*(int *)(param_1 + 0x18);
        iVar4 = (int)((ulonglong)lVar3 >> 0x20);
        local_14 = local_14 + (int)lVar3;
      }
    }
    local_9 = local_9 + '\x01';
    piVar6 = piVar6 + 1;
    local_30 = local_30 + 1;
    local_2c = local_2c + 1;
    local_28 = local_28 + 1;
  } while (local_9 != '\a');
  FUN_004a8d90(param_1,local_8);
  return;
}

