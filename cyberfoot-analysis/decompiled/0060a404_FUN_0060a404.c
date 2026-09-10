// Address: 0060a404
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0060a404(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined *local_20;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  
  local_1c = -1;
  local_14 = 0xb;
  puStack_30 = (undefined1 *)0x60a42a;
  uVar1 = FUN_004032c8(100);
  if ((int)uVar1 < 0x50) {
    if ((int)uVar1 < 0x37) {
      if (uVar1 < 0x13) {
        local_14 = 0xb;
      }
      else if (uVar1 - 0x13 < 0x13) {
        local_14 = 0xc;
      }
      else if (uVar1 - 0x26 < 0x11) {
        local_14 = 10;
      }
    }
    else if (uVar1 - 0x37 < 0xb) {
      local_14 = 8;
    }
    else if (uVar1 - 0x42 < 7) {
      local_14 = 9;
    }
    else if (uVar1 - 0x49 < 7) {
      local_14 = 7;
    }
  }
  else {
    switch(uVar1) {
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
      local_14 = 5;
      break;
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
      local_14 = 4;
      break;
    case 0x59:
    case 0x5a:
      local_14 = 6;
      break;
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
      local_14 = 2;
      break;
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
      local_14 = 3;
      break;
    case 99:
    case 100:
      local_14 = 1;
    }
  }
  if (param_3 == -2) {
    puStack_30 = (undefined1 *)0x60a557;
    uVar1 = FUN_004032c8(100);
    if (uVar1 < 0x5b) {
      local_14 = 2;
    }
    else if (uVar1 - 0x5b < 10) {
      local_14 = 5;
    }
  }
  puStack_30 = (undefined1 *)0x60a57d;
  iVar2 = FUN_004032c8(5);
  iVar2 = iVar2 + 1;
  local_10 = 5;
  do {
    if (iVar2 < 9) {
      local_20 = &DAT_0066a5e8 + iVar2 * 4;
      local_c = iVar2;
      do {
        puStack_34 = &LAB_0060a5d0;
        uStack_38 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_38;
        puStack_30 = &stack0xfffffffc;
        local_1c = FUN_0060a38c(param_1,*(undefined4 *)(local_20 + local_14 * 0x20 + -0x24));
        *in_FS_OFFSET = uStack_38;
        if (0 < local_1c) break;
        local_c = local_c + 1;
        local_20 = local_20 + 4;
      } while (local_c != 9);
    }
  } while ((local_1c < 1) && (local_10 = local_10 + -1, local_10 != 0));
  if (local_1c == -1) {
    puStack_30 = (undefined1 *)0x60a608;
    iVar2 = FUN_004032c8(2);
    if (iVar2 == 1) {
      local_c = 8;
      puVar3 = &DAT_0066a5ec;
      do {
        puStack_30 = (undefined1 *)0x60a629;
        local_1c = FUN_0060a38c(param_1,*(undefined4 *)(puVar3 + local_14 * 0x20 + -0x24));
        if (0 < local_1c) break;
        puVar3 = puVar3 + 4;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    else {
      local_c = -8;
      puVar3 = &DAT_0066a608;
      do {
        puStack_30 = (undefined1 *)0x60a65a;
        local_1c = FUN_0060a38c(param_1,*(undefined4 *)(puVar3 + local_14 * 0x20 + -0x24));
        if (0 < local_1c) break;
        puVar3 = puVar3 + -4;
        local_c = local_c + 1;
      } while (local_c != 0);
    }
  }
  if (local_1c == -1) {
    local_10 = -0xc;
    puVar5 = &DAT_0066a748;
    do {
      local_c = 8;
      puVar4 = puVar5;
      do {
        puStack_30 = (undefined1 *)0x60a690;
        local_1c = FUN_0060a38c(param_1,*puVar4);
        if (0 < local_1c) break;
        puVar4 = puVar4 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      if (0 < local_1c) {
        return local_1c;
      }
      puVar5 = puVar5 + -8;
      local_10 = local_10 + 1;
    } while (local_10 != 0);
  }
  return local_1c;
}

