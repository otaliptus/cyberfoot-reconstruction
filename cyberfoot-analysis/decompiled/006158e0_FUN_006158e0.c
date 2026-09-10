// Address: 006158e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006158e0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_58 [4];
  int local_48 [4];
  int local_38 [8];
  int *local_18;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar4 = 1;
  piVar1 = local_38 + 4;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  do {
    *piVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + local_c * 0x2f8 + 0x200 + iVar4 * 4);
    iVar4 = iVar4 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar4 != 5);
  iVar4 = 1;
  piVar1 = local_48;
  do {
    *piVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + local_c * 0x2f8 + 0x200 + iVar4 * 4);
    iVar4 = iVar4 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar4 != 5);
  iVar4 = 1;
  piVar1 = local_58;
  puVar2 = PTR_DAT_0066b608;
  do {
    *piVar1 = *(int *)(puVar2 + *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_c * 0x2f8) * 0x10)
              - *(int *)(*(int *)PTR_DAT_0066af70 + local_c * 0x2f8 + 0x1f0 + iVar4 * 4);
    iVar3 = local_c;
    iVar4 = iVar4 + 1;
    piVar1 = piVar1 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar4 != 5);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_c * 0x2f8) == 4) {
    if (3000 < local_38[4]) {
      iVar4 = FUN_004032c8(1000);
      local_38[4] = iVar4 + 2000;
    }
    if (15000 < local_38[5]) {
      iVar4 = FUN_004032c8(2000);
      local_38[5] = iVar4 + 13000;
    }
    if (1000 < local_38[6]) {
      iVar4 = FUN_004032c8(100);
      local_38[6] = iVar4 + 900;
    }
    if (0x96 < local_38[7]) {
      iVar4 = FUN_004032c8(0x32);
      local_38[7] = iVar4 + 100;
    }
  }
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar3 * 0x2f8) == 3) {
    if (15000 < local_38[4]) {
      iVar4 = FUN_004032c8(2000);
      local_38[4] = iVar4 + 13000;
    }
    if (35000 < local_38[5]) {
      iVar4 = FUN_004032c8(5000);
      local_38[5] = iVar4 + 30000;
    }
    if (4000 < local_38[6]) {
      iVar4 = FUN_004032c8(1000);
      local_38[6] = iVar4 + 3000;
    }
    if (500 < local_38[7]) {
      iVar4 = FUN_004032c8(200);
      local_38[7] = iVar4 + 300;
    }
  }
  if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar3 * 0x2f8) == 2) && (70000 < local_38[5])) {
    iVar4 = FUN_004032c8(10000);
    local_38[5] = iVar4 + 60000;
  }
  iVar4 = 4;
  piVar1 = local_38;
  do {
    FUN_004032c8(0x14);
    iVar3 = FUN_00402c38();
    *piVar1 = iVar3;
    piVar1 = piVar1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (((*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) &&
      ((iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_c * 0x2f8), iVar4 == 0 ||
       (iVar4 == 4)))) &&
     ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_10 * 0x2f8) == 1 ||
      (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_10 * 0x2f8) == 2)))) {
    iVar4 = 4;
    piVar1 = local_38;
    do {
      FUN_004032c8(0x1e);
      iVar3 = FUN_00402c38();
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
     (((iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_c * 0x2f8), iVar4 == 3 ||
       (iVar4 == 2)) && (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_10 * 0x2f8) == 1)))) {
    iVar4 = 4;
    local_18 = local_38 + 4;
    piVar1 = local_38;
    do {
      FUN_004032c8(0x1e);
      iVar3 = FUN_00402c38();
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
      local_18 = local_18 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (((*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) &&
      ((iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_c * 0x2f8), iVar4 == 1 ||
       (iVar4 == 2)))) &&
     ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_10 * 0x2f8) == 4 ||
      (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_10 * 0x2f8) == 0)))) {
    iVar4 = 4;
    piVar1 = local_38;
    do {
      FUN_004032c8(0x1e);
      iVar3 = FUN_00402c38();
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
      (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_c * 0x2f8) == 1)) &&
     ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_10 * 0x2f8) == 2 ||
      (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_10 * 0x2f8) == 3)))) {
    iVar4 = 4;
    piVar1 = local_38;
    do {
      FUN_004032c8(0x1e);
      iVar3 = FUN_00402c38();
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (((*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) &&
      ((iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_c * 0x2f8), iVar4 == 1 ||
       (iVar4 == 2)))) &&
     ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_10 * 0x2f8) == 1 ||
      (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_10 * 0x2f8) == 2)))) {
    iVar4 = 4;
    piVar1 = local_38;
    do {
      FUN_004032c8(0x1e);
      iVar3 = FUN_00402c38();
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
      (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_c * 0x2f8) == 1)) &&
     (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + local_10 * 0x2f8) == 1)) {
    iVar4 = 4;
    piVar1 = local_38;
    do {
      FUN_004032c8(0x1e);
      iVar3 = FUN_00402c38();
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (5 < *(int *)(PTR_DAT_0066ac78 + 0x188)) {
    iVar4 = 4;
    piVar1 = local_38;
    do {
      FUN_004032c8(0x1e);
      iVar3 = FUN_00402c38();
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_38[0] < 0x32) {
    iVar4 = FUN_004032c8(100);
    local_38[0] = iVar4 + 0x32;
  }
  if (local_38[1] < 100) {
    iVar4 = FUN_004032c8(200);
    local_38[1] = iVar4 + 0x32;
  }
  if (local_38[2] < 10) {
    iVar4 = FUN_004032c8(0x32);
    local_38[2] = iVar4 + 0x32;
  }
  if (local_38[3] < 0) {
    local_38[3] = FUN_004032c8(0x14);
  }
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + local_c * 0x2f8) != '\0') {
    iVar4 = 4;
    piVar1 = local_58;
    piVar5 = local_38;
    local_18 = local_48;
    do {
      if (*piVar1 != 0) {
        iVar3 = FUN_00402c38();
        *piVar5 = *piVar5 + iVar3;
        if (*piVar5 < 0) {
          *piVar5 = 0;
        }
        if (*local_18 < *piVar5) {
          *piVar5 = *local_18;
        }
      }
      local_18 = local_18 + 1;
      piVar5 = piVar5 + 1;
      piVar1 = piVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
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
  *param_4 = local_38[0];
  param_4[1] = local_38[1];
  param_4[2] = local_38[2];
  param_4[3] = local_38[3];
  return;
}

