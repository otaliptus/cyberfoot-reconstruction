// Address: 00617e08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00617e08(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_64 [4];
  int local_54 [4];
  int local_44 [8];
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 0;
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  iVar4 = 1;
  piVar2 = local_44 + 4;
  local_8 = param_3;
  do {
    *piVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x200 + iVar4 * 4);
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 != 5);
  iVar4 = 1;
  piVar2 = local_54;
  do {
    *piVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x200 + iVar4 * 4);
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 != 5);
  iVar4 = 1;
  local_14 = PTR_DAT_0066b608 + 4;
  piVar2 = local_64;
  do {
    if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_2 * 0x2f8) < 1) ||
       (4 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_2 * 0x2f8))) {
      *piVar2 = 0;
    }
    else {
      *piVar2 = *(int *)(local_14 +
                        *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_2 * 0x2f8) * 0x10 + -4) -
                *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1f0 + iVar4 * 4);
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
    local_14 = local_14 + 4;
  } while (iVar4 != 5);
  piVar2 = *(int **)PTR_DAT_0066af70;
  if (piVar2[param_2 * 0xbe + 0x15] < 0x51) {
    if (piVar2[param_2 * 0xbe + 0x15] < 0x33) {
      uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x1a0);
      if ((int)uVar1 < 6) {
        if (uVar1 == 5) {
          local_c = 0x1e;
          local_10 = 0x28;
          piVar2 = (int *)PTR_DAT_0066af70;
        }
        else if (uVar1 < 4) {
          local_c = 0xf;
          local_10 = 0x19;
          piVar2 = (int *)PTR_DAT_0066af70;
        }
        else {
          piVar2 = (int *)PTR_DAT_0066af70;
          if (uVar1 == 4) {
            local_c = 0x14;
            local_10 = 0x1e;
          }
        }
      }
      else if (uVar1 == 6) {
        local_c = 0x2d;
        local_10 = 0x32;
        piVar2 = (int *)PTR_DAT_0066af70;
      }
      else {
        piVar2 = (int *)PTR_DAT_0066af70;
        if (uVar1 - 7 < 0x5e) {
          local_c = 0x3c;
          local_10 = 0x3c;
        }
      }
    }
    else {
      uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x1a0);
      if ((int)uVar1 < 6) {
        if (uVar1 == 5) {
          local_c = 0x23;
          local_10 = 0x28;
          piVar2 = (int *)PTR_DAT_0066af70;
        }
        else if (uVar1 < 4) {
          local_c = 0x14;
          local_10 = 0x1e;
          piVar2 = (int *)PTR_DAT_0066af70;
        }
        else {
          piVar2 = (int *)PTR_DAT_0066af70;
          if (uVar1 == 4) {
            local_c = 0x19;
            local_10 = 0x1e;
          }
        }
      }
      else if (uVar1 == 6) {
        local_c = 0x37;
        local_10 = 0x37;
        piVar2 = (int *)PTR_DAT_0066af70;
      }
      else {
        piVar2 = (int *)PTR_DAT_0066af70;
        if (uVar1 - 7 < 0x5e) {
          local_c = 0x41;
          local_10 = 0x41;
        }
      }
    }
  }
  else {
    uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x1a0);
    if ((int)uVar1 < 6) {
      if (uVar1 == 5) {
        local_c = 0x28;
        local_10 = 0x2d;
      }
      else if (uVar1 < 4) {
        local_c = 0x19;
        local_10 = 0x23;
      }
      else if (uVar1 == 4) {
        local_c = 0x1e;
        local_10 = 0x28;
      }
    }
    else if (uVar1 == 6) {
      local_c = 0x3c;
      local_10 = 0x3c;
    }
    else if (uVar1 - 7 < 0x5e) {
      local_c = 0x41;
      local_10 = 0x4b;
    }
  }
  if (*(int *)PTR_DAT_0066b484 == 2) {
    local_c = local_c + 5;
    local_10 = local_10 + 10;
  }
  iVar4 = 4;
  local_18 = local_44;
  do {
    FUN_004032c8(0x14,piVar2);
    iVar3 = FUN_00402c38();
    piVar2 = local_18;
    *local_18 = iVar3;
    local_18 = local_18 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8) ==
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + local_8 * 0x2f8)) {
    iVar4 = 4;
    local_1c = local_44;
    do {
      FUN_004032c8(0xf);
      iVar3 = FUN_00402c38();
      *local_1c = iVar3;
      local_1c = local_1c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else {
    iVar4 = 4;
    local_20 = local_44 + 4;
    piVar2 = local_44;
    do {
      FUN_004032c8(0xf);
      iVar3 = FUN_00402c38();
      *piVar2 = iVar3;
      piVar2 = piVar2 + 1;
      local_20 = local_20 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_44[0] < 0) {
    local_44[0] = FUN_004032c8(100);
    local_44[0] = local_44[0] + 0x32;
  }
  if (local_44[1] < 0) {
    local_44[1] = FUN_004032c8(200);
    local_44[1] = local_44[1] + 0x32;
  }
  if (local_44[2] < 0) {
    local_44[2] = FUN_004032c8(0x32);
    local_44[2] = local_44[2] + 0x32;
  }
  if (local_44[3] < 0) {
    local_44[3] = 0;
  }
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_2 * 0x2f8) != '\0') {
    iVar4 = 4;
    local_24 = local_64;
    piVar2 = local_44;
    piVar5 = local_54;
    do {
      if (*local_24 != 0) {
        iVar3 = FUN_00402c38();
        *piVar2 = *piVar2 + iVar3;
        if (*piVar2 < 0) {
          *piVar2 = 0;
        }
        if (*piVar5 < *piVar2) {
          *piVar2 = *piVar5;
        }
      }
      piVar5 = piVar5 + 1;
      piVar2 = piVar2 + 1;
      local_24 = local_24 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_44[4] < local_44[0]) {
    local_44[0] = local_44[4];
  }
  if (local_44[5] < local_44[1]) {
    local_44[1] = local_44[5];
  }
  if (local_44[6] < local_44[2]) {
    local_44[2] = local_44[6];
  }
  if (local_44[7] < local_44[3]) {
    local_44[3] = local_44[7];
  }
  if (local_44[0] < 0x32) {
    local_44[0] = FUN_004032c8(100);
    local_44[0] = local_44[0] + 0x32;
  }
  if (local_44[1] < 100) {
    local_44[1] = FUN_004032c8(200);
    local_44[1] = local_44[1] + 0x32;
  }
  if (local_44[2] < 10) {
    local_44[2] = FUN_004032c8(0x32);
    local_44[2] = local_44[2] + 0x32;
  }
  if (local_44[3] < 0) {
    local_44[3] = 0;
  }
  *param_4 = local_44[0];
  param_4[1] = local_44[1];
  param_4[2] = local_44[2];
  param_4[3] = local_44[3];
  return;
}

