// Address: 0060855c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0060855c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_18;
  int local_10;
  
  iVar5 = -1;
  local_28 = -1;
  iVar4 = 1;
  do {
    if (param_2 == *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar4 * 4)) {
      iVar5 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + iVar4 * 4);
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xc);
  iVar4 = *(int *)(PTR_DAT_0066b734 + iVar5 * 0xc + -0xc);
  iVar1 = *(int *)(PTR_DAT_0066b734 + iVar5 * 0xc + -4);
  if (iVar5 != -1) {
    local_2c = 5;
    puVar6 = PTR_DAT_0066ae5c;
    do {
      iVar5 = 1;
      do {
        iVar3 = 1;
        do {
          if (0 < *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar3 * 4)) {
            if (iVar5 == 1) {
              local_18 = iVar4;
              local_10 = iVar1;
            }
            if (iVar5 == 2) {
              local_18 = iVar4;
              local_10 = iVar1;
            }
            if (iVar5 == 3) {
              local_10 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 +
                                 *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c +
                                         iVar3 * 4) * 0x130);
              local_18 = iVar4;
            }
            local_18 = *(int *)(puVar6 + local_18 * 0x14);
            if ((((0 < *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar3 * 4)) &&
                 (iVar2 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar3 * 4),
                 *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar2 * 0x130) == local_18)) &&
                (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x58 + iVar2 * 0x130) == local_10)) &&
               (local_28 == -1)) {
              local_28 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar3 * 4);
              *(undefined4 *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x3c + iVar3 * 4) =
                   0xffffffff;
              break;
            }
            if (0 < local_28) break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 8);
      } while ((local_28 < 1) && (iVar5 = iVar5 + 1, iVar5 != 4));
      if (0 < local_28) break;
      local_2c = local_2c + -1;
      puVar6 = puVar6 + 4;
    } while (local_2c != 0);
    local_30 = local_28;
  }
  return local_30;
}

