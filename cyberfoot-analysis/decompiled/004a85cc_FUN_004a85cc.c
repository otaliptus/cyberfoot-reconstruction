// Address: 004a85cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a85cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_1c = (code *)0x0;
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  switch(*(char *)(iVar1 + 0x461)) {
  case '\0':
  case '\x03':
    switch(*(undefined1 *)(iVar1 + 0x460)) {
    case 1:
    case 4:
    case 8:
      local_1c = FUN_004a8398;
      local_18 = param_1;
      break;
    case 2:
      if (*(char *)(iVar1 + 0x461) == '\x03') {
        local_1c = FUN_004a83e8;
        local_18 = param_1;
      }
      else {
        local_1c = FUN_004a83a8;
        local_18 = param_1;
      }
      break;
    case 0x10:
      local_1c = FUN_004a8428;
      local_18 = param_1;
    }
    break;
  case '\x02':
    if (*(char *)(iVar1 + 0x460) == '\b') {
      local_1c = FUN_004a82a4;
      local_18 = param_1;
    }
    else if (*(char *)(iVar1 + 0x460) == '\x10') {
      local_1c = FUN_004a82f8;
      local_18 = param_1;
    }
    break;
  case '\x04':
    if (*(char *)(iVar1 + 0x460) == '\b') {
      local_1c = FUN_004a8570;
      local_18 = param_1;
    }
    else if (*(char *)(iVar1 + 0x460) == '\x10') {
      local_1c = FUN_004a8594;
      local_18 = param_1;
    }
    break;
  case '\x06':
    if (*(char *)(iVar1 + 0x460) == '\b') {
      local_1c = FUN_004a8450;
      local_18 = param_1;
    }
    else if (*(char *)(iVar1 + 0x460) == '\x10') {
      local_1c = (code *)&UNK_004a84bc;
      local_18 = param_1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  local_14 = *(int *)(iVar1 + 0x468) * (iVar2 + -1);
  local_10 = local_14 + *(int *)(iVar1 + 0x450);
  local_c = *(int *)(iVar1 + 0x454);
  local_14 = local_14 + *(int *)(iVar1 + 0x44c);
  do {
    iVar1 = FUN_004a77f8(param_1,param_3,
                         *(undefined4 *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4),
                         param_4,param_1 + 0x4c,*(int *)(param_1 + 0x20) + 1);
    if (iVar1 == 0) {
      return;
    }
    FUN_004a87b8(param_1);
    (*local_1c)(local_18,*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + 1,local_10
                ,local_14,local_c);
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) ^ 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x468);
    local_10 = local_10 - iVar1;
    local_14 = local_14 - iVar1;
    local_c = local_c + *(int *)(param_1 + 0x18);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

