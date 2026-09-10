// Address: 0060876c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0060876c(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_30;
  undefined *local_20;
  int local_14;
  int local_10;
  int local_c;
  
  iVar3 = -1;
  local_10 = -1;
  local_14 = param_2;
  if (param_2 < 1) {
    if ((0 < param_6) && (iVar3 = param_6, param_5 == 1)) {
      iVar5 = 0x19;
      do {
        iVar6 = 1;
        do {
          if ((*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 +
                        *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar6 * 4) * 0x130
                        ) != '\0') &&
             (iVar5 == *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + iVar6 * 4))) {
            local_14 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar6 * 4);
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0xc);
      } while ((local_14 < 1) && (iVar5 = iVar5 + -1, iVar5 != 9));
    }
  }
  else {
    iVar5 = 1;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar5 * 4) == param_2) {
        iVar3 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + iVar5 * 4);
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xc);
  }
  if (iVar3 != -1) {
    iVar5 = *(int *)(PTR_DAT_0066b734 + iVar3 * 0xc + -0xc);
    iVar3 = *(int *)(PTR_DAT_0066b734 + iVar3 * 0xc + -4);
    local_c = 4;
    puVar2 = PTR_DAT_0066ae5c;
    do {
      local_20 = puVar2 + 4;
      iVar6 = 1;
      do {
        iVar4 = 1;
        do {
          if (0 < *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar4 * 4)) {
            if (iVar6 == 1) {
              local_38 = iVar5;
              local_30 = iVar3;
            }
            if (iVar6 == 2) {
              local_38 = iVar5;
              local_30 = iVar3;
            }
            if (iVar6 == 3) {
              local_30 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 +
                                 *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c +
                                         iVar4 * 4) * 0x130);
              local_38 = iVar5;
            }
            local_38 = *(int *)(puVar2 + local_38 * 0x14);
            if ((((0 < *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar4 * 4)) &&
                 (iVar1 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar4 * 4),
                 *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar1 * 0x130) == local_38)) &&
                (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + iVar1 * 0x130) == local_30)) &&
               (local_10 == -1)) {
              local_10 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar4 * 4);
              *(undefined4 *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar4 * 4) =
                   0xffffffff;
              break;
            }
            if (0 < local_10) break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 8);
      } while ((local_10 < 1) && (iVar6 = iVar6 + 1, iVar6 != 4));
    } while ((local_10 < 1) && (local_c = local_c + -1, puVar2 = local_20, local_c != 0));
    *param_4 = local_14;
    param_4[1] = local_10;
  }
  return;
}

