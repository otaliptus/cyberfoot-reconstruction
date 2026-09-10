// Address: 0061794c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x00617c65) */
/* WARNING: Removing unreachable block (ram,0x00617c70) */

void FUN_0061794c(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_58 [4];
  int local_48 [4];
  int local_38 [8];
  int *local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = 0;
  iVar5 = 1;
  piVar2 = local_38 + 4;
  local_c = param_3;
  local_8 = param_2;
  do {
    *piVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + local_8 * 0x2f8 + 0x200 + iVar5 * 4);
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar5 != 5);
  iVar5 = 1;
  piVar2 = local_48;
  do {
    *piVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + local_8 * 0x2f8 + 0x200 + iVar5 * 4);
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar5 != 5);
  iVar5 = 1;
  piVar2 = local_58;
  piVar3 = (int *)PTR_DAT_0066b670;
  do {
    *piVar2 = *piVar3 - *(int *)(*(int *)PTR_DAT_0066af70 + local_8 * 0x2f8 + 0x1f0 + iVar5 * 4);
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar5 != 5);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  iVar5 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x54 + local_8 * 0x2f8);
  if (iVar5 < 0x51) {
    if (iVar5 < 0x33) {
      uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x194);
      if ((int)uVar1 < 6) {
        if (uVar1 == 5) {
          local_10 = 0x3c;
          local_14 = 0x41;
        }
        else if (uVar1 < 4) {
          local_10 = 0x1e;
          local_14 = 0x23;
        }
        else if (uVar1 == 4) {
          local_10 = 0x32;
          local_14 = 0x3c;
        }
      }
      else if (uVar1 == 6) {
        local_10 = 0x46;
        local_14 = 0x4b;
      }
      else if (uVar1 - 7 < 0x5e) {
        local_10 = 0x50;
        local_14 = 0x50;
      }
    }
    else {
      uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x194);
      if ((int)uVar1 < 6) {
        if (uVar1 == 5) {
          local_10 = 0x46;
          local_14 = 0x4b;
        }
        else if (uVar1 < 4) {
          local_10 = 0x28;
          local_14 = 0x2d;
        }
        else if (uVar1 == 4) {
          local_10 = 0x3c;
          local_14 = 0x41;
        }
      }
      else if (uVar1 == 6) {
        local_10 = 0x50;
        local_14 = 0x50;
      }
      else if (uVar1 - 7 < 0x5e) {
        local_10 = 0x55;
        local_14 = 0x55;
      }
    }
  }
  else {
    uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x194);
    if ((int)uVar1 < 6) {
      if (uVar1 == 5) {
        local_10 = 0x46;
        local_14 = 0x4b;
      }
      else if (uVar1 < 4) {
        local_10 = 0x2d;
        local_14 = 0x37;
      }
      else if (uVar1 == 4) {
        local_10 = 0x3c;
        local_14 = 0x41;
      }
    }
    else if (uVar1 == 6) {
      local_10 = 0x50;
      local_14 = 0x55;
    }
    else if (uVar1 - 7 < 0x5e) {
      local_10 = 0x55;
      local_14 = 0x55;
    }
  }
  if (*(int *)PTR_DAT_0066b484 == 1) {
    local_10 = local_10 + -5;
    local_14 = local_14 + -5;
  }
  if (*(int *)PTR_DAT_0066b484 == 2) {
    local_10 = 0x50;
  }
  iVar5 = 4;
  piVar2 = local_38;
  do {
    FUN_004032c8(0x19);
    iVar4 = FUN_00402c38();
    *piVar2 = iVar4;
    piVar2 = piVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 4;
  piVar2 = local_38;
  do {
    FUN_004032c8(0xf);
    iVar4 = FUN_00402c38();
    *piVar2 = iVar4;
    piVar2 = piVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (local_38[0] < 0) {
    local_38[0] = FUN_004032c8(100);
    local_38[0] = local_38[0] + 0x32;
  }
  if (local_38[1] < 0) {
    local_38[1] = FUN_004032c8(200);
    local_38[1] = local_38[1] + 0x32;
  }
  if (local_38[2] < 0) {
    local_38[2] = FUN_004032c8(0x32);
    local_38[2] = local_38[2] + 0x32;
  }
  if (local_38[3] < 0) {
    local_38[3] = 0;
  }
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + local_8 * 0x2f8) != '\0') {
    iVar5 = 4;
    local_18 = local_58;
    piVar2 = local_38;
    piVar3 = local_48;
    do {
      if (*local_18 != 0) {
        iVar4 = FUN_00402c38();
        *piVar2 = *piVar2 + iVar4;
        if (*piVar2 < 0) {
          *piVar2 = 0;
        }
        if (*piVar3 < *piVar2) {
          *piVar2 = *piVar3;
        }
      }
      piVar3 = piVar3 + 1;
      piVar2 = piVar2 + 1;
      local_18 = local_18 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_38[4] < local_38[0]) {
    local_38[0] = local_38[4];
  }
  if (local_38[5] < local_38[1]) {
    local_38[1] = local_38[5];
  }
  if (local_38[6] < local_38[2]) {
    local_38[2] = local_38[6];
  }
  if (local_38[7] < local_38[3]) {
    local_38[3] = local_38[7];
  }
  if (local_38[0] < 0x32) {
    local_38[0] = FUN_004032c8(100);
    local_38[0] = local_38[0] + 0x32;
  }
  if (local_38[1] < 100) {
    local_38[1] = FUN_004032c8(200);
    local_38[1] = local_38[1] + 0x32;
  }
  if (local_38[2] < 10) {
    local_38[2] = FUN_004032c8(0x32);
    local_38[2] = local_38[2] + 0x32;
  }
  if (local_38[3] < 0) {
    local_38[3] = 0;
  }
  *param_4 = local_38[0];
  param_4[1] = local_38[1];
  param_4[2] = local_38[2];
  param_4[3] = local_38[3];
  return;
}

