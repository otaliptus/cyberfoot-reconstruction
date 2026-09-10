// Address: 0060c85c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0060c85c(uint param_1,char param_2,undefined1 param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined *local_1c;
  undefined *local_18;
  uint local_14;
  int local_10;
  undefined1 local_a;
  char local_9;
  uint local_8;
  
  local_a = param_3;
  local_9 = param_2;
  local_8 = param_1;
  FUN_00402b90();
  iVar2 = FUN_004032c8(100);
  iVar2 = iVar2 + 1;
  if (local_9 == '\0') {
    FUN_0060cb40(local_8,local_a,&local_28);
  }
  else {
    FUN_0060cc6c(local_8,&local_28);
  }
  iVar5 = 0;
  if (local_28 < iVar2) {
    if (local_28 + local_24 < iVar2) {
      if (iVar2 < 0x65) {
        iVar5 = 2;
      }
    }
    else {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = 1;
  }
  uVar4 = (int)local_8 >> 0x1f;
  iVar2 = (local_8 ^ uVar4) - uVar4;
  if (iVar2 < 6) {
    local_10 = 1;
  }
  else if (iVar2 < 0xb) {
    local_10 = 2;
  }
  else if (iVar2 < 0x10) {
    local_10 = 3;
  }
  else if (iVar2 < 0x1a) {
    local_10 = 4;
  }
  else {
    local_10 = 5;
  }
  local_2c = 0;
  local_14 = 0;
  if (iVar5 != 0) {
    iVar2 = FUN_004032c8(100);
    iVar3 = FUN_0060c820(local_8,iVar5);
    if (iVar3 == 0) {
      uVar4 = 1;
      local_18 = PTR_DAT_0066b254 + 4;
      do {
        uVar1 = uVar4;
        if (iVar2 + 1 < *(int *)(local_18 + local_10 * 0x28 + -0x2c)) break;
        uVar4 = uVar4 + 1;
        local_18 = local_18 + 4;
        uVar1 = local_14;
      } while (uVar4 != 0xb);
    }
    else {
      uVar4 = 1;
      local_1c = PTR_DAT_0066b2d8 + 4;
      do {
        uVar1 = uVar4;
        if (iVar2 + 1 < *(int *)(local_1c + local_10 * 0x28 + -0x2c)) break;
        uVar4 = uVar4 + 1;
        local_1c = local_1c + 4;
        uVar1 = local_14;
      } while (uVar4 != 0xb);
    }
    local_14 = uVar1;
    iVar2 = FUN_004032c8(100);
    iVar2 = iVar2 + 1;
    if (iVar2 < 0x29) {
      local_2c = 0;
    }
    else if (iVar2 < 0x47) {
      local_2c = 1;
    }
    else if (iVar2 < 0x5b) {
      local_2c = 2;
    }
    else if (iVar2 < 0x61) {
      local_2c = 3;
    }
    else if (iVar2 < 0x65) {
      local_2c = 4;
    }
    uVar4 = (int)local_8 >> 0x1f;
    iVar2 = (local_8 ^ uVar4) - uVar4;
    if (((iVar2 < 0x10) && (9 < iVar2)) && (3 < local_2c)) {
      local_2c = local_2c - 1;
    }
    else {
      iVar2 = (local_8 ^ uVar4) - uVar4;
      if (((iVar2 < 0x1f) && (0xe < iVar2)) && (2 < local_2c)) {
        local_2c = local_2c - 2;
      }
    }
    if ((int)local_14 <= (int)local_2c) {
      local_2c = 0;
    }
    if ((int)local_2c < 0) {
      local_2c = 0xffffffff;
    }
  }
  uVar1 = local_14;
  if (iVar5 == 0) {
    iVar2 = FUN_004032c8(800,uVar4);
    iVar2 = iVar2 + 1;
    if (iVar2 < 0xc9) {
      local_2c = 0;
    }
    else if (iVar2 < 0x1f5) {
      local_2c = 1;
    }
    else if (iVar2 < 0x2bd) {
      local_2c = 2;
    }
    else if (iVar2 < 0x317) {
      local_2c = 3;
    }
    else if (iVar2 < 800) {
      local_2c = 4;
    }
    else if (iVar2 < 0x321) {
      local_2c = 5;
    }
    uVar1 = local_2c;
    if ((0xe < (int)((local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f))) &&
       (3 < (int)local_2c)) {
      local_2c = FUN_004032c8(3);
      uVar1 = local_2c;
    }
  }
  local_14 = uVar1;
  if (iVar5 == 1) {
    local_30 = local_14;
  }
  else {
    local_30 = local_2c;
    if (iVar5 == 2) {
      local_2c = local_14;
    }
    else {
      local_2c = local_14;
    }
  }
  *param_4 = iVar5;
  param_4[1] = local_30;
  param_4[2] = local_2c;
  return;
}

