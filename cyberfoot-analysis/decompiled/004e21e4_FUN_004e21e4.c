// Address: 004e21e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004e21e4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_5c;
  int local_58;
  int local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_20 [4];
  
  local_48 = *param_1;
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  local_3c = 1;
  local_5c = -1;
  iVar3 = FUN_00405eec(DAT_0067aeec);
  if (param_2 == 1) {
    local_3c = 3;
  }
  if ((param_2 == 10) || (param_2 == 0x11)) {
    local_3c = 2;
  }
  if ((2 < param_2) && (param_2 < 9)) {
    local_3c = 3;
  }
  if ((0xd < param_2) && (param_2 < 0x11)) {
    local_3c = 3;
  }
  local_44 = iVar2;
  if (0x11 < param_2) {
    local_3c = 2;
    local_44 = 1;
  }
  if ((param_2 == 2) || (param_2 == 9)) {
    local_3c = 3;
  }
  if (local_3c != 0) {
    local_54 = 1;
    local_30 = local_20;
    iVar5 = iVar2;
    local_4c = iVar1;
    do {
      local_38 = 3;
      if (1 < local_54) {
        local_48 = *local_30;
        if ((param_2 == 10) || (param_2 == 0x11)) {
          local_44 = 1;
        }
        if (((local_54 == 2) && (2 < param_2)) && (param_2 < 9)) {
          local_38 = 1;
        }
        if (((local_54 == 3) && (2 < param_2)) && (param_2 < 9)) {
          local_44 = -1;
        }
      }
      if (local_38 != 0) {
        local_58 = 1;
        do {
          if (-1 < iVar3 + -1) {
            iVar4 = 0;
            local_34 = iVar3;
            do {
              if (local_58 == 1) {
                if (0x11 < param_2) {
                  local_44 = -1;
                }
                iVar5 = local_44;
                if (local_44 == -1) {
                  iVar5 = *(int *)(DAT_0067aeec + 0x18 + iVar4 * 0x20);
                }
                local_4c = iVar1;
                if (iVar1 == -1) {
                  local_4c = *(int *)(DAT_0067aeec + 0x14 + iVar4 * 0x20);
                }
              }
              else if (local_58 == 2) {
                local_4c = *(int *)(DAT_0067aeec + 0x14 + iVar4 * 0x20);
              }
              else if (local_58 == 3) {
                iVar5 = *(int *)(DAT_0067aeec + 0x18 + iVar4 * 0x20);
                local_4c = *(int *)(DAT_0067aeec + 0x14 + iVar4 * 0x20);
              }
              if (local_44 == -1) {
                iVar5 = *(int *)(DAT_0067aeec + 0x18 + iVar4 * 0x20);
              }
              if (((local_54 == 2) && (2 < param_2)) && (param_2 < 9)) {
                iVar5 = 0;
                local_4c = *(int *)(DAT_0067aeec + 0x14 + iVar4 * 0x20);
              }
              if ((((*(char *)(DAT_0067aeec + 0x10 + iVar4 * 0x20) == '\0') &&
                   (*(int *)(DAT_0067aeec + 0x1c + iVar4 * 0x20) == local_48)) &&
                  (iVar5 == *(int *)(DAT_0067aeec + 0x18 + iVar4 * 0x20))) &&
                 (*(int *)(DAT_0067aeec + 0x14 + iVar4 * 0x20) == local_4c)) {
                if (iVar2 == 0xc) {
                  *(undefined1 *)(DAT_0067aeec + 0x10 + iVar4 * 0x20) = 1;
                  local_5c = *(int *)(DAT_0067aeec + iVar4 * 0x20);
                }
                else {
                  *(undefined1 *)(DAT_0067aeec + 0x10 + iVar4 * 0x20) = 1;
                  local_5c = *(int *)(DAT_0067aeec + iVar4 * 0x20);
                }
                break;
              }
              iVar4 = iVar4 + 1;
              local_34 = local_34 + -1;
            } while (local_34 != 0);
          }
          if (-1 < local_5c) break;
          local_58 = local_58 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      if (-1 < local_5c) {
        return local_5c;
      }
      local_54 = local_54 + 1;
      local_30 = local_30 + 1;
      local_3c = local_3c + -1;
    } while (local_3c != 0);
  }
  return local_5c;
}

