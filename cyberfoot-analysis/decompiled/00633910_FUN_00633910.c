// Address: 00633910
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00633910(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_12c;
  int local_128;
  int local_114 [9];
  int local_f0 [7];
  int aiStack_d4 [16];
  int aiStack_94 [17];
  int local_50 [16];
  
  iVar7 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_1 * 0x294);
  iVar6 = *(int *)(PTR_DAT_0066ac78 + 0x168);
  if (iVar6 == 2) {
    if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) < 2) {
      local_114[0] = 2;
    }
    else {
      local_114[0] = 1;
    }
  }
  else if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) < 3) {
    local_114[0] = 2;
  }
  else {
    local_114[0] = 1;
  }
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  iVar1 = iVar4 + -1;
  iVar2 = 0;
  local_128 = 0x20;
  if (local_114[0] == 1) {
    if (iVar6 == 2) {
      if ((*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_1 * 0x294) == 0x1d) &&
         (*(int *)(PTR_DAT_0066ac78 + 0xc0) != 1)) {
        if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_1 * 0x294) == 0x1d) {
          iVar7 = 0;
          local_128 = 0x20;
          local_12c = 1;
          do {
            iVar6 = 1;
            do {
              iVar4 = *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + local_12c * 0x50 + -0x54
                              + iVar6 * 4);
              if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x217 + iVar4 * 0x2f8) == '\0') &&
                 (0 < local_128)) {
                iVar7 = iVar7 + 1;
                aiStack_94[iVar7] = iVar4;
                local_128 = local_128 + -1;
                if (local_128 == 0) break;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 != 0x15);
            local_12c = local_12c + 1;
          } while (local_12c != 3);
          iVar7 = 0x10;
          piVar3 = aiStack_94;
          piVar5 = local_114;
          do {
            piVar5 = piVar5 + 1;
            piVar3 = piVar3 + 1;
            *piVar5 = *piVar3;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          iVar7 = 0x10;
          piVar3 = local_50;
          piVar5 = aiStack_d4;
          do {
            piVar5 = piVar5 + 1;
            *piVar5 = *piVar3;
            piVar3 = piVar3 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        iVar6 = 1;
        do {
          iVar2 = iVar2 + 1;
          local_114[iVar2] = *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + -4 + iVar6 * 4);
          local_128 = local_128 + -1;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x11);
        if (1 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294)) {
          iVar6 = 0;
          iVar2 = 0x11;
          do {
            iVar6 = iVar6 + 1;
            aiStack_d4[iVar6] =
                 *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + -4 + iVar2 * 4);
            local_128 = local_128 + -1;
            iVar2 = iVar2 + 1;
          } while (iVar2 != 0x15);
          if (-1 < iVar1) {
            iVar1 = 0;
            do {
              if (((*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar1 * 0x2f8) == iVar7) &&
                  (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar1 * 0x2f8) != '\0')) &&
                 (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar1 * 0x2f8) == 2)) {
                iVar6 = iVar6 + 1;
                aiStack_d4[iVar6] = iVar1;
                local_128 = local_128 + -1;
              }
              iVar1 = iVar1 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iVar7 = 1;
          do {
            if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                          *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + 0x4c + iVar7 * 4) *
                          0x2f8) == '\0') && (0 < local_128)) {
              iVar6 = iVar6 + 1;
              aiStack_d4[iVar6] =
                   *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + 0x4c + iVar7 * 4);
              local_128 = local_128 + -1;
              if (local_128 == 0) break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0x15);
        }
      }
    }
    else {
      iVar6 = 1;
      do {
        iVar2 = iVar2 + 1;
        local_114[iVar2] = *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + -4 + iVar6 * 4);
        local_128 = local_128 + -1;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0xb);
      iVar6 = 1;
      do {
        iVar2 = iVar2 + 1;
        local_114[iVar2] = *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + 0x4c + iVar6 * 4);
        local_128 = local_128 + -1;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 7);
      iVar6 = 0;
      iVar2 = 7;
      do {
        iVar6 = iVar6 + 1;
        aiStack_d4[iVar6] = *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + 0x4c + iVar2 * 4);
        local_128 = local_128 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xb);
      if (-1 < iVar1) {
        iVar8 = 0;
        iVar2 = iVar4;
        do {
          if (((*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar8 * 0x2f8) == iVar7) &&
              (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar8 * 0x2f8) != '\0')) &&
             (2 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar8 * 0x2f8))) {
            iVar6 = iVar6 + 1;
            aiStack_d4[iVar6] = iVar8;
            local_128 = local_128 + -1;
          }
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = 1;
      do {
        iVar8 = *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + 0x9c + iVar2 * 4);
        if (((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar8 * 0x2f8) == '\0') && (0 < local_128)
            ) && (-1 < iVar8)) {
          iVar6 = iVar6 + 1;
          aiStack_d4[iVar6] = iVar8;
          local_128 = local_128 + -1;
          if (local_128 == 0) break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xb);
      if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) == 4) {
        iVar2 = 1;
        do {
          iVar8 = *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + 0xec + iVar2 * 4);
          if (((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar8 * 0x2f8) == '\0') &&
              (0 < local_128)) && (-1 < iVar8)) {
            iVar6 = iVar6 + 1;
            aiStack_d4[iVar6] = iVar8;
            local_128 = local_128 + -1;
            if (local_128 == 0) break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0xb);
      }
      if ((*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294) == 3) && (-1 < iVar1)) {
        iVar1 = 0;
        do {
          if (((*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar1 * 0x2f8) == iVar7) &&
              (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar1 * 0x2f8) == 0)) && (iVar6 < 0x10)) {
            iVar6 = iVar6 + 1;
            aiStack_d4[iVar6] = iVar1;
          }
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  else if (local_114[0] == 2) {
    iVar7 = 0;
    local_128 = 0x10;
    if (iVar6 == 2) {
      iVar6 = 1;
      do {
        if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                     *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + -4 + iVar6 * 4) * 0x2f8)
            != '\0') {
          iVar7 = iVar7 + 1;
          local_114[iVar7] = *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + -4 + iVar6 * 4);
          local_128 = local_128 + -1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x15);
      iVar6 = 1;
      do {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + -4 + iVar6 * 4) * 0x2f8)
             == '\0') && (0 < local_128)) {
          iVar7 = iVar7 + 1;
          local_114[iVar7] = *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + -4 + iVar6 * 4);
          local_128 = local_128 + -1;
          if (local_128 == 0) break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x15);
    }
    else if (iVar6 == 4) {
      iVar6 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_1 * 0x294);
      if (0 < iVar6) {
        local_12c = 1;
        do {
          iVar4 = 1;
          do {
            if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                         *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + local_12c * 0x50 +
                                  -0x54 + iVar4 * 4) * 0x2f8) != '\0') {
              iVar7 = iVar7 + 1;
              local_114[iVar7] =
                   *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + local_12c * 0x50 + -0x54 +
                           iVar4 * 4);
              local_128 = local_128 + -1;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 0xb);
          local_12c = local_12c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = 1;
      do {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                      *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + -4 + iVar6 * 4) * 0x2f8)
             == '\0') && (0 < local_128)) {
          iVar7 = iVar7 + 1;
          local_114[iVar7] = *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + -4 + iVar6 * 4);
          local_128 = local_128 + -1;
          if (local_128 == 0) break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0xb);
      if (0 < local_128) {
        iVar6 = 1;
        do {
          if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                        *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + 0x4c + iVar6 * 4) *
                        0x2f8) == '\0') && (0 < local_128)) {
            iVar7 = iVar7 + 1;
            local_114[iVar7] =
                 *(int *)(*(int *)PTR_DAT_0066aca0 + param_1 * 0x294 + 0x4c + iVar6 * 4);
            local_128 = local_128 + -1;
            if (local_128 == 0) break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0xb);
      }
    }
  }
  iVar7 = 0x10;
  piVar3 = local_114;
  do {
    piVar3 = piVar3 + 1;
    iVar4 = FUN_004032c8(0x10);
    iVar6 = *piVar3;
    *piVar3 = local_114[iVar4 + 1];
    local_114[iVar4 + 1] = iVar6;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (local_114[0] == 1) {
    iVar7 = 0x10;
    piVar3 = aiStack_d4;
    do {
      piVar3 = piVar3 + 1;
      iVar4 = FUN_004032c8(0x10);
      iVar6 = *piVar3;
      *piVar3 = aiStack_d4[iVar4 + 1];
      aiStack_d4[iVar4 + 1] = iVar6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar6 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
  iVar7 = -1;
  if (-1 < iVar6 + -1) {
    iVar4 = 0;
    do {
      if (((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar4 * 0x48) == 2) &&
          (param_1 == *(int *)(*(int *)PTR_DAT_0066afa0 + 0x38 + iVar4 * 0x48))) &&
         (iVar7 = iVar4, *(int *)(*(int *)PTR_DAT_0066afa0 + 0x1c + iVar4 * 0x48) == local_114[0]))
      break;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
      iVar7 = -1;
    } while (iVar6 != 0);
  }
  if (local_114[0] == 1) {
    iVar6 = 0x10;
    piVar3 = local_114;
    piVar5 = aiStack_d4;
    do {
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
      *(int *)(*(int *)PTR_DAT_0066afa0 + iVar7 * 0x48) = *piVar3;
      *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar7 * 0x48) = *piVar5;
      *(int *)(*(int *)PTR_DAT_0066afa0 + (iVar7 + 1) * 0x48) = *piVar5;
      *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar7 + 1) * 0x48) = *piVar3;
      iVar7 = iVar7 + 2;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x214 + *piVar3 * 0x2f8) = 1;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x214 + *piVar5 * 0x2f8) = 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_114[0] == 2) {
    iVar6 = 8;
    piVar3 = local_114;
    do {
      piVar3 = piVar3 + 1;
      *(int *)(*(int *)PTR_DAT_0066afa0 + iVar7 * 0x48) = *piVar3;
      *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar7 * 0x48) = piVar3[8];
      *(int *)(*(int *)PTR_DAT_0066afa0 + (iVar7 + 1) * 0x48) = piVar3[8];
      *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + (iVar7 + 1) * 0x48) = *piVar3;
      iVar7 = iVar7 + 2;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x214 + *piVar3 * 0x2f8) = 1;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x214 + piVar3[8] * 0x2f8) = 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

