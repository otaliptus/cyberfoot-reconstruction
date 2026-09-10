// Address: 005e9a30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005e9a30(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  int local_58 [4];
  int local_48;
  int local_44;
  undefined *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  undefined1 *local_30;
  int local_2c;
  undefined *local_28;
  int local_24;
  undefined1 *local_20;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int local_10;
  
  iVar2 = 0x12;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  local_48 = *param_2;
  local_44 = param_2[1];
  puVar3 = (undefined *)param_2[2];
  *in_FS_OFFSET = &local_28;
  iVar2 = 1;
  local_30 = (undefined1 *)0x0;
  local_10 = -1;
  local_2c = 0x5e9a9e;
  local_40 = puVar3;
  local_28 = puVar3;
  local_24 = local_48;
  local_20 = (undefined1 *)local_44;
  FUN_00405eec(DAT_006d34f0);
  if ((local_30 == (undefined1 *)0xa) || (local_30 == (undefined1 *)0x11)) {
    iVar2 = 2;
    local_58[1] = 3;
  }
  if ((2 < (int)local_30) && ((int)local_30 < 9)) {
    iVar2 = 3;
    local_58[1] = 3;
    local_58[2] = 1;
  }
  if ((0xd < (int)local_30) && ((int)local_30 < 0x11)) {
    iVar2 = 3;
    local_58[1] = 1;
    local_58[2] = 4;
  }
  if (0x11 < (int)local_30) {
    iVar2 = 2;
    local_58[1] = 3;
    local_28 = (undefined *)0x1;
  }
  if ((local_30 == (undefined1 *)0x2) || (local_30 == (undefined1 *)0x9)) {
    iVar2 = 3;
    local_58[1] = 3;
    local_58[2] = 2;
  }
  if (iVar2 != 0) {
    iVar4 = 1;
    local_3c = local_58;
    local_34 = iVar2;
    do {
      iVar2 = 3;
      if (1 < iVar4) {
        local_24 = *local_3c;
        if ((local_30 == (undefined1 *)0xa) || (local_30 == (undefined1 *)0x11)) {
          local_28 = (undefined *)0x1;
        }
        if (((iVar4 == 2) && (2 < (int)local_30)) && ((int)local_30 < 9)) {
          iVar2 = 1;
        }
        if (((iVar4 == 3) && (2 < (int)local_30)) && ((int)local_30 < 9)) {
          local_28 = (undefined *)0xffffffff;
        }
      }
      if (iVar2 != 0) {
        iVar5 = 1;
        local_38 = iVar2;
        do {
          local_2c = 0x5e9bb3;
          iVar2 = FUN_00405ef4(DAT_006d34f0);
          if (-1 < iVar2) {
            do {
              if (iVar5 == 1) {
                if (0x11 < (int)local_30) {
                  local_28 = (undefined *)0xffffffff;
                }
                puVar3 = local_28;
                if (local_28 == (undefined *)0xffffffff) {
                  puVar3 = *(undefined **)(DAT_006d34f0 + 0x1c + iVar2 * 0x24);
                }
                if (local_2c == -1) {
                  local_20 = *(undefined1 **)(DAT_006d34f0 + 0x14 + iVar2 * 0x24);
                }
                else {
                  local_20 = (undefined1 *)local_2c;
                }
              }
              else if (iVar5 == 2) {
                local_20 = *(undefined1 **)(DAT_006d34f0 + 0x14 + iVar2 * 0x24);
              }
              else if (iVar5 == 3) {
                local_20 = *(undefined1 **)(DAT_006d34f0 + 0x14 + iVar2 * 0x24);
                puVar3 = *(undefined **)(DAT_006d34f0 + 0x1c + iVar2 * 0x24);
              }
              if (local_28 == (undefined *)0xffffffff) {
                puVar3 = *(undefined **)(DAT_006d34f0 + 0x1c + iVar2 * 0x24);
              }
              if (((iVar4 == 2) && (2 < (int)local_30)) && ((int)local_30 < 9)) {
                puVar3 = (undefined *)0x0;
                local_20 = *(undefined1 **)(DAT_006d34f0 + 0x14 + iVar2 * 0x24);
              }
              if ((((*(int *)(DAT_006d34f0 + 0x20 + iVar2 * 0x24) == 0) &&
                   (*(int *)(DAT_006d34f0 + 0x18 + iVar2 * 0x24) == local_24)) &&
                  (*(undefined **)(DAT_006d34f0 + 0x1c + iVar2 * 0x24) == puVar3)) &&
                 ((undefined1 *)*(int *)(DAT_006d34f0 + 0x14 + iVar2 * 0x24) == local_20)) {
                if (local_40 == (undefined *)0xc) {
                  *(undefined4 *)(DAT_006d34f0 + 0x20 + iVar2 * 0x24) = 2;
                  local_10 = *(int *)(DAT_006d34f0 + iVar2 * 0x24);
                  local_28 = &DAT_005e9de4;
                  local_30 = (undefined1 *)0x5e9d2b;
                  FUN_00416244(local_88,*(undefined4 *)(DAT_006d34f0 + 4 + iVar2 * 0x24),0xfc);
                  local_30 = local_88;
                  local_34 = 0x5e9d42;
                  FUN_00416478(local_98,"nxstatus");
                  puVar1 = local_30;
                  local_30 = (undefined1 *)0x5e9d57;
                  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_98,puVar1);
                }
                else {
                  *(undefined4 *)(DAT_006d34f0 + 0x20 + iVar2 * 0x24) = 1;
                  local_10 = *(int *)(DAT_006d34f0 + iVar2 * 0x24);
                  local_28 = &DAT_005e9dc8;
                  local_30 = (undefined1 *)0x5e9cd7;
                  FUN_00416244(local_68,*(undefined4 *)(DAT_006d34f0 + 4 + iVar2 * 0x24),0xfc);
                  local_30 = local_68;
                  local_34 = 0x5e9ce8;
                  FUN_00416478(local_78,"nxstatus");
                  puVar1 = local_30;
                  local_30 = (undefined1 *)0x5e9cfa;
                  FUN_0050e9b8(*(undefined4 *)(param_1 + 0x304),local_78,puVar1);
                }
                break;
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != -1);
          }
          if (-1 < local_10) break;
          iVar5 = iVar5 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      if (-1 < local_10) break;
      iVar4 = iVar4 + 1;
      local_3c = local_3c + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005e9db9;
  local_24 = 0x5e9db1;
  FUN_00405744(local_98,PTR_DAT_004010f8,4);
  return;
}

