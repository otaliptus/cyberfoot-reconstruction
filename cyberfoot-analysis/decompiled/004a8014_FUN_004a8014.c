// Address: 004a8014
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a8014(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *local_30;
  int *local_2c;
  int *local_28;
  code *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_9;
  
  local_24 = (code *)0x0;
  local_20 = 0;
  iVar3 = *(int *)(param_1 + 0x14);
  switch(*(char *)(iVar3 + 0x461)) {
  case '\0':
  case '\x03':
    switch(*(undefined1 *)(iVar3 + 0x460)) {
    case 1:
    case 4:
    case 8:
      local_24 = (code *)&UNK_004a7bb8;
      local_20 = param_1;
      break;
    case 2:
      if (*(char *)(iVar3 + 0x461) == '\x03') {
        local_24 = (code *)&UNK_004a7c6c;
        local_20 = param_1;
      }
      else {
        local_24 = (code *)&UNK_004a7cf0;
        local_20 = param_1;
      }
      break;
    case 0x10:
      local_24 = (code *)&UNK_004a7d78;
      local_20 = param_1;
    }
    break;
  case '\x02':
    if (*(char *)(iVar3 + 0x460) == '\b') {
      local_24 = (code *)0x4a7a64;
      local_20 = param_1;
    }
    else if (*(char *)(iVar3 + 0x460) == '\x10') {
      local_24 = FUN_004a7ae4;
      local_20 = param_1;
    }
    break;
  case '\x04':
    if (*(char *)(iVar3 + 0x460) == '\b') {
      local_24 = (code *)&UNK_004a7f54;
      local_20 = param_1;
    }
    else if (*(char *)(iVar3 + 0x460) == '\x10') {
      local_24 = (code *)&UNK_004a7fac;
      local_20 = param_1;
    }
    break;
  case '\x06':
    if (*(char *)(iVar3 + 0x460) == '\b') {
      local_24 = (code *)&UNK_004a7dcc;
      local_20 = param_1;
    }
    else if (*(char *)(iVar3 + 0x460) == '\x10') {
      local_24 = FUN_004a7e68;
      local_20 = param_1;
    }
  }
  local_9 = '\0';
  local_28 = &DAT_00669384;
  local_2c = &DAT_006693bc;
  local_30 = &DAT_00669368;
  piVar4 = &DAT_006693a0;
  do {
    iVar3 = *local_2c;
    iVar1 = (*(int *)(param_1 + 0x18) - *local_28) + iVar3 + -1;
    uVar2 = FUN_004a5d14(iVar1 / iVar3,
                         CONCAT31((int3)((uint)(iVar1 % iVar3) >> 8),
                                  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x461)),
                         CONCAT31((int3)((uint)iVar3 >> 8),
                                  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x460)));
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    FUN_0040803c(*(undefined4 *)(param_1 + 0x40 + ((*(byte *)(param_1 + 0x48) ^ 1) & 0x7f) * 4),
                 *(undefined4 *)(param_1 + 0x20));
    local_10 = *local_30;
    iVar3 = *(int *)(param_1 + 0x14);
    local_1c = *(int *)(iVar3 + 0x468) * ((*(int *)(param_1 + 0x1c) + -1) - local_10);
    local_18 = local_1c + *(int *)(iVar3 + 0x450);
    local_14 = *(int *)(iVar3 + 0x454) + *(int *)(param_1 + 0x18) * local_10;
    local_1c = local_1c + *(int *)(iVar3 + 0x44c);
    if (*(int *)(param_1 + 0x20) != 0) {
      while ((local_10 < *(int *)(param_1 + 0x1c) &&
             (iVar3 = FUN_004a77f8(param_1,param_3,
                                   *(undefined4 *)
                                    (param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4),param_4,
                                   param_1 + 0x4c,*(int *)(param_1 + 0x20) + 1), iVar3 != 0))) {
        FUN_004a87b8(param_1);
        (*local_24)(local_20,local_9,
                    *(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + 1,local_1c,
                    local_14,local_18);
        *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) ^ 1;
        iVar3 = *piVar4;
        local_10 = local_10 + iVar3;
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x468) * iVar3;
        local_18 = local_18 - iVar1;
        local_14 = local_14 + iVar3 * *(int *)(param_1 + 0x18);
        local_1c = local_1c - iVar1;
      }
    }
    local_9 = local_9 + '\x01';
    piVar4 = piVar4 + 1;
    local_30 = local_30 + 1;
    local_2c = local_2c + 1;
    local_28 = local_28 + 1;
  } while (local_9 != '\a');
  return;
}

