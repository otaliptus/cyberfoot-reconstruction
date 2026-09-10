// Address: 0061e4fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061e4fc(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  undefined4 local_a8 [32];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_b8 = &stack0xfffffffc;
  local_24 = 0;
  puStack_bc = &LAB_0061eb31;
  uStack_c0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c0;
  local_18 = 0;
  local_1c = 0;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (0xc < param_2) {
    FUN_004060a8(&local_24,PTR_DAT_0061e4dc,1,0);
    local_c = 0;
    iVar5 = 0x16e;
    piVar6 = (int *)(PTR_DAT_0066b574 + 0x10);
    do {
      if (*piVar6 == 3) {
        local_c = local_c + 1;
        FUN_004060a8(&local_24,PTR_DAT_0061e4dc,1,local_c);
        *(int *)(local_24 + -8 + local_c * 8) = piVar6[-2];
        *(int *)(local_24 + -4 + local_c * 8) = piVar6[-1];
      }
      piVar6 = piVar6 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((param_2 == 0x29) || (param_2 == 0x2a)) {
      local_1c = *(int *)(PTR_DAT_0066b50c +
                         *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) *
                         0x30 + -0x10);
    }
    puVar1 = puStack_b8;
    if ((param_2 == 0x15) || (param_2 == 0x16)) {
      local_1c = *(int *)(PTR_DAT_0066b50c +
                         *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) *
                         0x30 + -0xc);
    }
  }
  puStack_b8 = puVar1;
  if (param_2 == 0x29) {
    local_18 = 1;
  }
  else if (param_2 == 0x2a) {
    local_18 = 2;
  }
  else if (param_2 == 0x15) {
    local_18 = 1;
  }
  else if (param_2 == 0x16) {
    local_18 = 2;
  }
  else if (param_2 == 0xb) {
    local_18 = 1;
  }
  else if (param_2 == 0xc) {
    local_18 = 2;
  }
  if (param_2 == 0x29) {
    local_14 = 4;
  }
  else if (param_2 == 0x2a) {
    local_14 = 4;
  }
  else if (param_2 == 0x15) {
    local_14 = 2;
  }
  else if (param_2 == 0x16) {
    local_14 = 2;
  }
  else {
    local_14 = 1;
  }
  if (param_2 == 0x29) {
    uVar4 = 0x191;
  }
  else if (param_2 == 0x2a) {
    uVar4 = 0x191;
  }
  else if (param_2 == 0x15) {
    uVar4 = 0xc9;
  }
  else if (param_2 == 0x16) {
    uVar4 = 0xc9;
  }
  else {
    uVar4 = 0x65;
  }
  iVar5 = 0x20;
  puVar2 = local_a8;
  do {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = 1;
  iVar5 = FUN_0065a250(*(undefined4 *)PTR_DAT_0066b09c,3,uVar4);
  if (0 < local_14) {
    local_28 = local_14;
    do {
      if ((-1 < *(int *)(*(int *)PTR_DAT_0066afa0 + iVar5 * 0x48)) &&
         (-1 < *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar5 * 0x48))) {
        if (local_18 == 2) {
          iVar3 = FUN_0061edd0(local_8,*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar5 * 0x48),
                               *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar5 * 0x48),
                               *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar5 * 0x48),
                               *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar5 * 0x48),
                               *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x50 + iVar5 * 0x48),
                               *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x54 + iVar5 * 0x48));
        }
        else if (*(int *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar5 * 0x48) <
                 *(int *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar5 * 0x48)) {
          iVar3 = 1;
        }
        else if (*(int *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar5 * 0x48) <
                 *(int *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar5 * 0x48)) {
          iVar3 = 2;
        }
        else {
          iVar3 = -1;
        }
        if ((iVar3 < 1) || (2 < iVar3)) {
          if (local_18 == 1) {
            iVar3 = FUN_0061eb40(local_8,iVar5);
          }
          else {
            iVar3 = FUN_0061eb40(local_8,iVar5 + 1);
          }
          if (local_18 == 1) {
            local_a8[local_20 + -1] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar5 * 0x48 + -4 + iVar3 * 4);
          }
          else {
            local_a8[local_20 + -1] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar5 * 0x48 + 0x44 + iVar3 * 4);
          }
          if (local_18 == 1) {
            if (iVar3 == 1) {
              local_10 = *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar5 * 0x48);
            }
            else {
              local_10 = *(int *)(*(int *)PTR_DAT_0066afa0 + iVar5 * 0x48);
            }
          }
          else if (iVar3 == 1) {
            local_10 = *(int *)(*(int *)PTR_DAT_0066afa0 + 0x4c + iVar5 * 0x48);
          }
          else {
            local_10 = *(int *)(*(int *)PTR_DAT_0066afa0 + 0x48 + iVar5 * 0x48);
          }
        }
        else {
          local_a8[local_20 + -1] =
               *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar5 * 0x48 + -4 + iVar3 * 4);
          if (iVar3 == 1) {
            local_10 = *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar5 * 0x48);
          }
          else {
            local_10 = *(int *)(*(int *)PTR_DAT_0066afa0 + iVar5 * 0x48);
          }
        }
        *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x216 + local_10 * 0x2f8) = 0;
        FUN_006490a8(local_10,param_2,3,1);
        if (local_18 == 2) {
          iVar5 = iVar5 + 2;
        }
        else {
          iVar5 = iVar5 + 1;
        }
        local_20 = local_20 + 1;
      }
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  if ((param_2 == 0xb) || (param_2 == 0xc)) {
    FUN_006243c8(local_8,local_a8[0],local_10);
  }
  else if ((param_2 == 0x15) || (param_2 == 0x16)) {
    FUN_0065a1c0(local_a8[1],local_a8[0],0x65,
                 *(undefined4 *)(local_24 + *(int *)PTR_DAT_0066b080 * 8),
                 *(undefined4 *)(local_24 + 4 + *(int *)PTR_DAT_0066b080 * 8),
                 *(int *)PTR_DAT_0066b080 + 1,1,*(undefined4 *)PTR_DAT_0066b09c,3);
    if (local_1c == 2) {
      FUN_0065a1c0(local_a8[0],local_a8[1],0x66,
                   *(undefined4 *)(local_24 + 8 + *(int *)PTR_DAT_0066b080 * 8),
                   *(undefined4 *)(local_24 + 0xc + *(int *)PTR_DAT_0066b080 * 8),
                   *(int *)PTR_DAT_0066b080 + 2,2,*(undefined4 *)PTR_DAT_0066b09c,3);
    }
    iVar5 = *(int *)PTR_DAT_0066b09c;
    *(undefined4 *)(PTR_DAT_0066ae98 + iVar5 * 0x568 + 0x524) = local_a8[0];
    *(undefined4 *)(PTR_DAT_0066ae98 + iVar5 * 0x568 + 0x528) = local_a8[1];
  }
  else if ((param_2 == 0x29) || (param_2 == 0x2a)) {
    FUN_0065a1c0(local_a8[3],local_a8[0],0xc9,
                 *(undefined4 *)(local_24 + *(int *)PTR_DAT_0066b080 * 8),
                 *(undefined4 *)(local_24 + 4 + *(int *)PTR_DAT_0066b080 * 8),
                 *(int *)PTR_DAT_0066b080 + 1,1,*(undefined4 *)PTR_DAT_0066b09c,3);
    if (local_1c == 2) {
      FUN_0065a1c0(local_a8[0],local_a8[3],0xca,
                   *(undefined4 *)(local_24 + 8 + *(int *)PTR_DAT_0066b080 * 8),
                   *(undefined4 *)(local_24 + 0xc + *(int *)PTR_DAT_0066b080 * 8),
                   *(int *)PTR_DAT_0066b080 + 2,2,*(undefined4 *)PTR_DAT_0066b09c,3);
    }
    FUN_0065a1c0(local_a8[1],local_a8[2],0xc9,
                 *(undefined4 *)(local_24 + *(int *)PTR_DAT_0066b080 * 8),
                 *(undefined4 *)(local_24 + 4 + *(int *)PTR_DAT_0066b080 * 8),
                 *(int *)PTR_DAT_0066b080 + 1,1,*(undefined4 *)PTR_DAT_0066b09c,3);
    if (local_1c == 2) {
      FUN_0065a1c0(local_a8[2],local_a8[1],0xca,
                   *(undefined4 *)(local_24 + 8 + *(int *)PTR_DAT_0066b080 * 8),
                   *(undefined4 *)(local_24 + 0xc + *(int *)PTR_DAT_0066b080 * 8),
                   *(int *)PTR_DAT_0066b080 + 2,2,*(undefined4 *)PTR_DAT_0066b09c,3);
    }
  }
  puVar1 = puStack_b8;
  *in_FS_OFFSET = uStack_c0;
  puStack_b8 = &LAB_0061eb38;
  puStack_bc = (undefined1 *)0x61eb30;
  FUN_004061c8(&local_24,PTR_DAT_0061e4dc,puVar1);
  return;
}

