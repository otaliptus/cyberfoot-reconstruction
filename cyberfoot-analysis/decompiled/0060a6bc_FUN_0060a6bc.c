// Address: 0060a6bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0060a6bc(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int unaff_EBX;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_20;
  int local_1c;
  undefined4 *local_14;
  
  local_1c = param_2;
  if (param_2 == -1) {
    uVar1 = FUN_004032c8(100);
    if (uVar1 < 0x24) {
      local_1c = FUN_004032c8(3);
      local_1c = local_1c + 4;
    }
    else if (uVar1 - 0x24 < 0x15) {
      local_1c = FUN_004032c8(3);
      local_1c = local_1c + 7;
    }
    else if (uVar1 - 0x39 < 0xe) {
      local_1c = FUN_004032c8(3);
      local_1c = local_1c + 10;
    }
    else if (uVar1 - 0x47 < 0x1e) {
      local_1c = FUN_004032c8(3);
      local_1c = local_1c + 1;
    }
  }
  if (local_1c != -1) {
    iVar2 = FUN_004032c8(5);
    iVar2 = iVar2 + 1;
    local_20 = 5;
    unaff_EBX = -1;
    do {
      if (iVar2 < 9) {
        puVar3 = &DAT_0066a5e8 + iVar2 * 4;
        iVar5 = iVar2;
        do {
          unaff_EBX = FUN_0060a38c(param_1,*(undefined4 *)(puVar3 + local_1c * 0x20 + -0x24));
          if (0 < unaff_EBX) break;
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 4;
        } while (iVar5 != 9);
      }
    } while ((unaff_EBX < 1) && (local_20 = local_20 + -1, local_20 != 0));
    if (unaff_EBX == -1) {
      iVar2 = 8;
      puVar3 = &DAT_0066a5ec;
      do {
        unaff_EBX = FUN_0060a38c(param_1,*(undefined4 *)(puVar3 + local_1c * 0x20 + -0x24));
        if (0 < unaff_EBX) break;
        puVar3 = puVar3 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_004032c8(0x1e);
    if (iVar2 == 1) {
      unaff_EBX = FUN_0060a38c(param_1,1);
    }
    if (unaff_EBX == -1) {
      local_20 = -0xc;
      local_14 = &DAT_0066a748;
      do {
        iVar2 = 8;
        puVar4 = local_14;
        do {
          unaff_EBX = FUN_0060a38c(param_1,*puVar4);
          if (0 < unaff_EBX) break;
          puVar4 = puVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        if (0 < unaff_EBX) {
          return unaff_EBX;
        }
        local_14 = local_14 + -8;
        local_20 = local_20 + 1;
      } while (local_20 != 0);
    }
  }
  return unaff_EBX;
}

