// Address: 005e0cc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005e0cc4(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_1bc;
  int local_1b4;
  int local_1b0;
  int local_19c;
  char *local_198;
  int *local_194;
  int local_190 [12];
  int local_160 [4];
  int local_150 [19];
  int aiStack_104 [20];
  int aiStack_b4 [20];
  int aiStack_64 [21];
  
  local_1b4 = 4;
  piVar3 = local_190;
  piVar4 = local_190 + 4;
  piVar2 = local_190 + 8;
  piVar6 = local_190 + 0xc;
  do {
    *piVar3 = -1;
    *piVar4 = -1;
    *piVar2 = -1;
    *piVar6 = -1;
    piVar6 = piVar6 + 1;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
    piVar3 = piVar3 + 1;
    local_1b4 = local_1b4 + -1;
  } while (local_1b4 != 0);
  local_1b4 = 0x14;
  piVar3 = local_190 + 0x10;
  piVar4 = aiStack_104;
  piVar2 = aiStack_b4;
  piVar6 = aiStack_64;
  do {
    piVar6 = piVar6 + 1;
    piVar4 = piVar4 + 1;
    piVar2 = piVar2 + 1;
    *piVar3 = -1;
    *piVar4 = -1;
    *piVar2 = -1;
    *piVar6 = -1;
    piVar3 = piVar3 + 1;
    local_1b4 = local_1b4 + -1;
  } while (local_1b4 != 0);
  local_1b4 = 0;
  local_198 = PTR_DAT_0066ae98 + 0x52d;
  do {
    if (*local_198 != '\0') {
      iVar5 = *(int *)(PTR_DAT_0066b50c + *(int *)(local_198 + 3) * 0x30 + -0x30);
      local_1bc = FUN_0064a9f4(local_1b4);
      if (*(int *)(PTR_DAT_0066b50c + *(int *)(local_198 + 3) * 0x30 + -0x24) <= local_1bc) {
        local_1bc = *(int *)(PTR_DAT_0066b50c + *(int *)(local_198 + 3) * 0x30 + -0x24);
      }
      if (0 < local_1bc) {
        iVar7 = 1;
        piVar3 = (int *)(local_198 + -0x52d);
        do {
          if (-1 < *piVar3) {
            iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + *piVar3 * 0x2f8);
            if ((0 < iVar1) && (iVar1 < 0x15)) {
              local_190[*(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + *piVar3 * 0x2f8) + 0xf] =
                   *piVar3;
              aiStack_b4[*(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + *piVar3 * 0x2f8)] = iVar7;
            }
          }
          iVar7 = iVar7 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar7 != 0x15);
        if (*(int *)(local_198 + -0x1d) < 2) {
          if (*(int *)(local_198 + -0x1d) == 1) {
            iVar7 = 0x14;
            piVar3 = (int *)(local_198 + -0x4dd);
            piVar4 = aiStack_104;
            do {
              piVar4 = piVar4 + 1;
              if (-1 < *piVar3) {
                *piVar4 = *piVar3;
              }
              piVar3 = piVar3 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        else {
          iVar7 = 1;
          piVar3 = (int *)(local_198 + -0x4dd);
          do {
            if (((-1 < *piVar3) &&
                (iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + *piVar3 * 0x2f8), 0 < iVar1))
               && (iVar1 < 0x15)) {
              aiStack_104[*(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + *piVar3 * 0x2f8)] = *piVar3;
              aiStack_64[*(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + *piVar3 * 0x2f8)] = iVar7;
            }
            iVar7 = iVar7 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar7 != 0x15);
        }
        iVar7 = 1;
        local_19c = (iVar5 - local_1bc) - iVar5;
        if (local_19c == 0 || iVar5 - local_1bc < iVar5) {
          local_19c = local_19c + -1;
          piVar3 = local_190 + iVar5 + 0xf;
          do {
            local_190[iVar7 + 0xb] = *piVar3;
            iVar7 = iVar7 + 1;
            piVar3 = piVar3 + -1;
            local_19c = local_19c + 1;
          } while (local_19c != 0);
        }
        if (0 < local_1bc) {
          local_19c = local_1bc;
          piVar4 = aiStack_104;
          piVar3 = local_190 + 8;
          do {
            piVar4 = piVar4 + 1;
            *piVar3 = *piVar4;
            piVar3 = piVar3 + 1;
            local_19c = local_19c + -1;
          } while (local_19c != 0);
        }
        if (0 < local_1bc) {
          local_19c = local_1bc;
          piVar3 = local_190 + 8;
          piVar4 = local_190 + 0xc;
          do {
            if (-1 < *piVar3) {
              iVar5 = 0x14;
              piVar2 = (int *)(local_198 + -0x52d);
              do {
                if (*piVar2 == *piVar4) {
                  *piVar2 = *piVar3;
                }
                piVar2 = piVar2 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            piVar4 = piVar4 + 1;
            piVar3 = piVar3 + 1;
            local_19c = local_19c + -1;
          } while (local_19c != 0);
        }
        if (0 < local_1bc) {
          local_19c = local_1bc;
          piVar3 = local_190 + 0xc;
          piVar4 = local_190 + 8;
          do {
            if (-1 < *piVar3) {
              iVar5 = 0x14;
              local_194 = (int *)(local_198 + -0x4dd);
              do {
                if (*local_194 == *piVar4) {
                  *local_194 = *piVar3;
                  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + *piVar3 * 0x2f8) = 0;
                }
                local_194 = local_194 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            piVar4 = piVar4 + 1;
            piVar3 = piVar3 + 1;
            local_19c = local_19c + -1;
          } while (local_19c != 0);
        }
      }
      if (1 < *(int *)(local_198 + -0x1d)) {
        local_19c = *(int *)(local_198 + -0x1d) + -1;
        iVar5 = 2;
        piVar4 = local_190;
        piVar3 = local_190 + 5;
        local_194 = (int *)(local_198 + -0x4dd);
        do {
          piVar4 = piVar4 + 1;
          iVar7 = FUN_005e0be0(param_1,local_1b4,iVar5 + 1);
          *piVar4 = iVar7;
          iVar7 = FUN_005e0c74(param_1,local_1b4,iVar5);
          *piVar3 = iVar7;
          if (-1 < *piVar4) {
            local_1b0 = 6;
            piVar2 = local_194;
LAB_005e1064:
            if (*piVar2 != *piVar3) goto LAB_005e10b7;
            *piVar2 = *piVar4;
            *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + *piVar4 * 0x2f8) = 0;
            iVar7 = 6;
            piVar2 = local_194 + 0x14;
            do {
              if (*piVar2 == *piVar4) {
                *piVar2 = *piVar3;
                *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + *piVar3 * 0x2f8) = 0;
              }
              piVar2 = piVar2 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
LAB_005e10c0:
          iVar5 = iVar5 + 1;
          local_194 = local_194 + 0x14;
          piVar3 = piVar3 + 1;
          local_19c = local_19c + -1;
        } while (local_19c != 0);
      }
      iVar5 = 4;
      local_194 = local_190;
      piVar3 = local_190 + 4;
      piVar4 = local_190 + 8;
      piVar2 = local_190 + 0xc;
      do {
        *local_194 = -1;
        *piVar3 = -1;
        *piVar4 = -1;
        *piVar2 = -1;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
        local_194 = local_194 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar5 = 0x14;
      piVar3 = local_190 + 0x10;
      piVar4 = aiStack_104;
      piVar2 = aiStack_b4;
      local_194 = aiStack_64;
      do {
        local_194 = local_194 + 1;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
        *piVar3 = -1;
        *piVar4 = -1;
        *piVar2 = -1;
        *local_194 = -1;
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_1b4 = local_1b4 + 1;
    local_198 = local_198 + 0x568;
  } while (local_1b4 != 0x1b);
  local_1b4 = 0x1b;
  local_198 = PTR_DAT_0066ae98 + 0x52c;
  do {
    *local_198 = 0;
    local_198[2] = 0;
    local_198[3] = 0;
    local_198 = local_198 + 0x568;
    local_1b4 = local_1b4 + -1;
  } while (local_1b4 != 0);
  local_19c = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  iVar5 = local_19c + -1;
  if (-1 < iVar5) {
    local_1b4 = 0;
    do {
      iVar5 = local_1b4 * 0x5f;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x216 + local_1b4 * 0x2f8) = 0;
      local_1b4 = local_1b4 + 1;
      local_19c = local_19c + -1;
    } while (local_19c != 0);
  }
  FUN_005b570c(CONCAT31((int3)((uint)iVar5 >> 8),1));
  iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718);
  local_19c = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  if (-1 < local_19c + -1) {
    local_1b4 = 0;
    do {
      if (((*(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_1b4 * 0x2f8) == -1) &&
          (*(char *)(*(int *)PTR_DAT_0066af70 + 0x216 + local_1b4 * 0x2f8) != '\0')) &&
         (iVar7 = iVar5 + -1, -1 < iVar7)) {
        do {
          if (((*(char *)(*(int *)PTR_DAT_0066b718 + 0x40 + iVar7 * 0x80) == '\0') &&
              (*(char *)(*(int *)PTR_DAT_0066b718 + 0x31 + iVar7 * 0x80) == '\0')) &&
             ((*(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar7 * 0x80) == -1 &&
              ((2 < *(int *)(*(int *)PTR_DAT_0066b718 + 0x24 + iVar7 * 0x80) &&
               (*(char *)(*(int *)PTR_DAT_0066b718 + iVar7 * 0x80) != '\0')))))) {
            FUN_00649138(local_1b4,iVar7);
            break;
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != -1);
      }
      local_1b4 = local_1b4 + 1;
      local_19c = local_19c + -1;
    } while (local_19c != 0);
  }
  return;
LAB_005e10b7:
  piVar2 = piVar2 + 1;
  local_1b0 = local_1b0 + -1;
  if (local_1b0 == 0) goto LAB_005e10c0;
  goto LAB_005e1064;
}

