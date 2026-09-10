// Address: 00622ec8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00622ec8(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  local_10 = 0;
  local_14 = 0;
  if (param_2 == 4) {
    if (param_3 == 4) {
      local_10 = 8;
    }
    else if (param_3 == 5) {
      local_10 = 10;
    }
    else if (param_3 == 6) {
      local_10 = 0xf;
    }
    else if (param_3 == 7) {
      local_10 = 0x14;
    }
    if (param_3 == 4) {
      local_14 = 10;
    }
    else if (param_3 == 5) {
      local_14 = 7;
    }
    else if (param_3 == 6) {
      local_14 = 5;
    }
    else if (param_3 == 7) {
      local_14 = 3;
    }
  }
  if (param_2 == 4) {
    if (param_3 == 4) {
      local_10 = 5;
    }
    else if (param_3 == 5) {
      local_10 = 7;
    }
    else if (param_3 == 6) {
      local_10 = 10;
    }
    else if (param_3 == 7) {
      local_10 = 0xc;
    }
    if (param_3 == 4) {
      local_14 = 7;
    }
    else if (param_3 == 5) {
      local_14 = 5;
    }
    else if (param_3 == 6) {
      local_14 = 2;
    }
    else if (param_3 == 7) {
      local_14 = 1;
    }
  }
  if (param_2 == 2) {
    switch(param_3) {
    case 1:
      local_10 = 3;
      break;
    case 2:
      local_10 = 5;
      break;
    case 3:
      local_10 = 7;
      break;
    case 4:
      local_10 = 10;
      break;
    case 5:
      local_10 = 0xc;
    }
    switch(param_3) {
    case 1:
      local_14 = 7;
      break;
    case 2:
      local_14 = 5;
      break;
    case 3:
      local_14 = 2;
      break;
    case 4:
      local_14 = 1;
      break;
    case 5:
      local_14 = 1;
    }
  }
  iVar2 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_5 * 0x2f8));
  if (-1 < iVar2) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_5 * 0x2f8);
    *piVar1 = *piVar1 + local_10;
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_5 * 0x2f8);
    *piVar1 = *piVar1 + local_10 + -3;
  }
  iVar2 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_4 * 0x2f8));
  if (-1 < iVar2) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_4 * 0x2f8);
    *piVar1 = *piVar1 - (local_14 + 3);
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_4 * 0x2f8);
    *piVar1 = *piVar1 - local_14;
  }
  if (100 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_5 * 0x2f8)) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_5 * 0x2f8) = 100;
  }
  if (100 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_5 * 0x2f8)) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_5 * 0x2f8) = 100;
  }
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_4 * 0x2f8) < 0) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x54 + param_4 * 0x2f8) = 0;
  }
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_4 * 0x2f8) < 0) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_4 * 0x2f8) = 0;
  }
  return;
}

