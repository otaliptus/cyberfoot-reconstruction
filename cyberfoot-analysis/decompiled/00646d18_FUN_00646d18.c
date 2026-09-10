// Address: 00646d18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00646d18(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puVar2 = PTR_DAT_0066b5b8;
  puStack_38 = &stack0xfffffffc;
  local_28 = 0;
  puStack_3c = &LAB_00646faa;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  if (param_2 == 0) {
    local_1c = 2;
  }
  else {
    local_1c = 1;
  }
  if (param_3 < 0xb) {
    local_14 = 5;
  }
  else {
    local_14 = param_3 + -10;
  }
  local_18 = param_3 + 10;
  local_20 = 0;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar4 = FUN_00405eec(*(undefined4 *)puVar2);
  local_24 = iVar4;
  if (-1 < iVar4 + -1) {
    iVar6 = 0;
    do {
      if ((((-1 < *(int *)(*(int *)puVar2 + 0x20 + iVar6 * 0x130)) &&
           (*(char *)(*(int *)puVar2 + 0x120 + iVar6 * 0x130) == '\0')) &&
          (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                    *(int *)(*(int *)puVar2 + 0x20 + iVar6 * 0x130) * 0x2f8) == '\0')) &&
         (((local_1c <
            *(int *)(*(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)puVar2 + 0x20 + iVar6 * 0x130) * 0x2f8 + 0x68 + local_c * 4)
           && (*(int *)(*(int *)puVar2 + 0x24 + iVar6 * 0x130) == local_c)) &&
          ((local_14 <= *(int *)(*(int *)puVar2 + 0x28 + iVar6 * 0x130) &&
           ((*(int *)(*(int *)puVar2 + 0x28 + iVar6 * 0x130) <= local_18 &&
            ((float)*(longlong *)(*(int *)puVar2 + 0x40 + iVar6 * 0x130) <=
             (float)param_4 * _DAT_00646fbc)))))))) {
        local_20 = local_20 + 1;
        FUN_004060a8(&local_28,PTR_DAT_00646cf8,1,local_20);
        *(int *)(local_28 + -4 + local_20 * 4) = iVar6;
        if (0x31 < local_20) break;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_20 == 0) {
    if (-1 < local_24 + -1) {
      iVar6 = 0;
      iVar4 = local_24;
      do {
        iVar1 = *(int *)(*(int *)puVar2 + 0x20 + iVar6 * 0x130);
        if ((((-1 < iVar1) && (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar1 * 0x2f8) == '\0'))
            && (local_1c <
                *(int *)(*(int *)PTR_DAT_0066af70 +
                         *(int *)(*(int *)puVar2 + 0x20 + iVar6 * 0x130) * 0x2f8 + 0x68 +
                        local_c * 4))) &&
           ((*(int *)(*(int *)puVar2 + 0x24 + iVar6 * 0x130) == local_c &&
            ((float)*(longlong *)(*(int *)puVar2 + 0x40 + iVar6 * 0x130) <=
             (float)(param_4 * 3) * _DAT_00646fbc)))) {
          local_20 = local_20 + 1;
          FUN_004060a8(&local_28,PTR_DAT_00646cf8,1,local_20);
          *(int *)(local_28 + -4 + local_20 * 4) = iVar6;
          if (0x1d < local_20) break;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (0 < local_20) {
    iVar4 = FUN_004032c8(local_20);
    iVar4 = *(int *)(local_28 + iVar4 * 4);
    if (-1 < iVar4) {
      uVar5 = FUN_00402c38();
      FUN_00650ec4(iVar4,local_8,uVar5);
    }
  }
  FUN_004060a8(&local_28,PTR_DAT_00646cf8,1,0);
  puVar3 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_00646fb1;
  puStack_3c = (undefined1 *)0x646fa9;
  FUN_004061c8(&local_28,PTR_DAT_00646cf8,puVar3);
  return;
}

