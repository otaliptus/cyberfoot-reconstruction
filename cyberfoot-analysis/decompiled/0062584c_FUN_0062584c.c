// Address: 0062584c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062584c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  
  local_18 = 0;
  iVar3 = 0;
  if (0x19 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_1 * 0x2f8)) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_1 * 0x2f8) = 10;
  }
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_1 * 0x2f8) < 1) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_1 * 0x2f8) = 10;
  }
  if (param_1 < *(int *)(PTR_DAT_0066ac78 + 0x3c) + -1) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
      switch(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8)) {
      case 0:
        local_18 = 0;
        break;
      case 1:
        local_18 = 0x14;
        break;
      case 2:
        local_18 = 0xf;
        break;
      case 3:
        local_18 = 10;
        break;
      case 4:
        local_18 = 0;
      }
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      switch(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8)) {
      case 0:
        local_18 = 1;
        break;
      case 1:
        local_18 = 0x14;
        break;
      case 2:
        local_18 = 0xf;
        break;
      case 3:
        local_18 = 5;
        break;
      case 4:
        local_18 = 1;
      }
    }
    switch(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_1 * 0x2f8)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      iVar3 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_1 * 0x2f8);
      break;
    case 8:
      iVar3 = 8;
      break;
    case 9:
      iVar3 = 9;
      break;
    case 10:
      iVar3 = 10;
      break;
    case 0xb:
      iVar3 = 0xb;
      break;
    case 0xc:
      iVar3 = 0xc;
      break;
    case 0xd:
      iVar3 = 0xd;
      break;
    case 0xe:
      iVar3 = 0xe;
      break;
    case 0xf:
      iVar3 = 0xf;
      break;
    case 0x10:
      iVar3 = 0x11;
      break;
    case 0x11:
      iVar3 = 0x12;
      break;
    case 0x12:
      iVar3 = 0x13;
      break;
    case 0x13:
      iVar3 = 0x15;
      break;
    case 0x14:
      iVar3 = 0x19;
      break;
    case 0x15:
      iVar3 = 0x1a;
      break;
    case 0x16:
      iVar3 = 0x1b;
      break;
    case 0x17:
      iVar3 = 0x1c;
      break;
    case 0x18:
      iVar3 = 0x1d;
      break;
    case 0x19:
      iVar3 = 0x1e;
    }
    local_18 = local_18 + iVar3;
  }
  else {
    switch(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_1 * 0x2f8)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      local_18 = 7;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      local_18 = 0xc;
      break;
    case 0xb:
      local_18 = 0xf;
      break;
    case 0xc:
      local_18 = 0x11;
      break;
    case 0xd:
      local_18 = 0x13;
      break;
    case 0xe:
      local_18 = 0x16;
      break;
    case 0xf:
      local_18 = 0x19;
      break;
    case 0x10:
      local_18 = 0x1b;
      break;
    case 0x11:
      local_18 = 0x1e;
      break;
    case 0x12:
      local_18 = 0x23;
      break;
    case 0x13:
      local_18 = 0x27;
      break;
    case 0x14:
      local_18 = 0x2b;
      break;
    case 0x15:
      local_18 = 0x30;
      break;
    case 0x16:
      local_18 = 0x35;
      break;
    case 0x17:
      local_18 = 0x3a;
      break;
    case 0x18:
      local_18 = 0x3f;
      break;
    case 0x19:
      local_18 = 0x44;
    }
  }
  iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar4 = 0;
    do {
      if (param_1 == *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar4 * 0x130)) {
        iVar2 = FUN_004032c8(3);
        *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar4 * 0x130) = iVar2 + local_18;
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x50 + iVar4 * 0x130) == 1) {
          iVar2 = FUN_004032c8(2);
          piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar4 * 0x130);
          *piVar1 = *piVar1 + iVar2 + 8;
        }
        if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar4 * 0x130) != '\0') {
          iVar2 = FUN_004032c8(3);
          piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar4 * 0x130);
          *piVar1 = *piVar1 + iVar2 + 9;
        }
        if (100 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar4 * 0x130)) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar4 * 0x130) = 100;
        }
        if ((*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + iVar4 * 0x130) != '\0') &&
           (piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar4 * 0x130),
           *piVar1 = *piVar1 + -0x17, *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar4 * 0x130) < 5)
           ) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar4 * 0x130) = 10;
        }
        iVar2 = FUN_00652134(iVar4);
        *(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar4 * 0x130) =
             (longlong)ROUND((float)iVar2 * _DAT_00625d00);
        iVar2 = FUN_00652590(iVar4);
        *(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x38 + iVar4 * 0x130) =
             (longlong)ROUND((float)iVar2 * _DAT_00625d00);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

