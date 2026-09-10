// Address: 004a8fe0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a8fe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *local_1c;
  int local_18;
  byte local_11;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_1c = (code *)0x0;
  local_18 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  switch(*(undefined1 *)(iVar2 + 0x461)) {
  case 0:
  case 3:
    cVar1 = *(char *)(iVar2 + 0x460);
    if (((cVar1 == '\x01') || (cVar1 == '\x04')) || (cVar1 == '\b')) {
      local_1c = (code *)&LAB_004a8ea4;
      local_18 = param_1;
    }
    else if (cVar1 == '\x10') {
      local_1c = FUN_004a8eb4;
      local_18 = param_1;
    }
    break;
  case 2:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_1c = FUN_004a8e00;
      local_18 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_1c = (code *)&LAB_004a8e4c;
      local_18 = param_1;
    }
    break;
  case 4:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_1c = FUN_004a8f90;
      local_18 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_1c = FUN_004a8fb4;
      local_18 = param_1;
    }
    break;
  case 6:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_1c = (code *)&LAB_004a8ed4;
      local_18 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_1c = (code *)&LAB_004a8f2c;
      local_18 = param_1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  local_c = *(int *)(iVar2 + 0x468) * (iVar3 + -1) + *(int *)(iVar2 + 0x450);
  local_10 = *(int *)(iVar2 + 0x454);
  local_8 = param_3;
  do {
    (*local_1c)(local_18,local_c,*(undefined4 *)(param_1 + 0x3c),local_10);
    local_11 = FUN_004a974c(param_1);
    FUN_004a8d3c(param_1,local_8,&local_11,1);
    FUN_004a8d3c(param_1,local_8,*(undefined4 *)(param_1 + 0x28 + (uint)local_11 * 4),
                 *(undefined4 *)(param_1 + 0x20));
    local_c = local_c - *(int *)(*(int *)(param_1 + 0x14) + 0x468);
    local_10 = local_10 + *(int *)(param_1 + 0x18);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_004a8d90(param_1,local_8);
  return;
}

