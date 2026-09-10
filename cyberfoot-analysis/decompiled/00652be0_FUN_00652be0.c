// Address: 00652be0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00652be0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puVar2 = PTR_DAT_0066b5b8;
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_00652fa7;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar3 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_1 * 0x2f8) == '\0') {
    local_10 = 0;
    iVar4 = FUN_00405eec(*(undefined4 *)puVar2);
    if (-1 < iVar4 + -1) {
      iVar6 = 0;
      do {
        if (((-1 < *(int *)(*(int *)puVar2 + 0x20 + iVar6 * 0x130)) &&
            (*(int *)(*(int *)puVar2 + 0x20 + iVar6 * 0x130) == local_8)) &&
           (*(int *)(*(int *)puVar2 + 0x100 + iVar6 * 0x130) < 2)) {
          local_10 = local_10 + 1;
          FUN_004060a8(&local_14,PTR_DAT_00652bc0,1,local_10);
          *(int *)(local_14 + -4 + local_10 * 4) = iVar6;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = FUN_00405ef4(local_14);
    if (-1 < iVar4) {
      iVar4 = iVar4 + 1;
      iVar6 = 0;
      do {
        FUN_00405ef4(local_14);
        iVar5 = FUN_004032c8();
        local_c = *(undefined4 *)(local_14 + iVar6 * 4);
        *(undefined4 *)(local_14 + iVar6 * 4) = *(undefined4 *)(local_14 + iVar5 * 4);
        *(undefined4 *)(local_14 + iVar5 * 4) = local_c;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((2 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x68 + local_8 * 0x2f8)) && (-1 < local_10 + -1)) {
      iVar6 = 0;
      iVar4 = local_10;
      do {
        iVar5 = *(int *)(local_14 + iVar6 * 4);
        if (((*(int *)(*(int *)puVar2 + 0x24 + iVar5 * 0x130) == 0) &&
            (*(char *)(*(int *)puVar2 + 0x15 + iVar5 * 0x130) == '\0')) &&
           (*(int *)(*(int *)puVar2 + 0x50 + iVar5 * 0x130) == 0)) {
          *(undefined1 *)(*(int *)puVar2 + 0x7d + iVar5 * 0x130) = 1;
          iVar4 = *(int *)(local_14 + iVar6 * 4);
          iVar6 = *(int *)puVar2;
          iVar5 = *(int *)puVar2;
          *(undefined4 *)(iVar6 + 0x48 + iVar4 * 0x130) =
               *(undefined4 *)(iVar5 + 0x40 + iVar4 * 0x130);
          *(undefined4 *)(iVar6 + 0x4c + iVar4 * 0x130) =
               *(undefined4 *)(iVar5 + 0x44 + iVar4 * 0x130);
          break;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((3 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x6c + local_8 * 0x2f8)) && (-1 < local_10 + -1)) {
      iVar6 = 0;
      iVar4 = local_10;
      do {
        iVar5 = *(int *)(local_14 + iVar6 * 4);
        if (((*(int *)(*(int *)puVar2 + 0x24 + iVar5 * 0x130) == 1) &&
            (*(char *)(*(int *)puVar2 + 0x15 + iVar5 * 0x130) == '\0')) &&
           (*(int *)(*(int *)puVar2 + 0x50 + iVar5 * 0x130) == 0)) {
          *(undefined1 *)(*(int *)puVar2 + 0x7d + iVar5 * 0x130) = 1;
          iVar4 = *(int *)(local_14 + iVar6 * 4);
          iVar5 = *(int *)puVar2;
          iVar1 = *(int *)puVar2;
          *(undefined4 *)(iVar5 + 0x48 + iVar4 * 0x130) =
               *(undefined4 *)(iVar1 + 0x40 + iVar4 * 0x130);
          *(undefined4 *)(iVar5 + 0x4c + iVar4 * 0x130) =
               *(undefined4 *)(iVar1 + 0x44 + iVar4 * 0x130);
          iVar4 = FUN_004032c8(100);
          if ((0x1e < iVar4) &&
             (iVar4 = *(int *)(local_14 + iVar6 * 4),
             *(int *)(*(int *)puVar2 + 0x28 + iVar4 * 0x130) < 0x28)) {
            *(undefined4 *)(*(int *)puVar2 + 0x100 + iVar4 * 0x130) = 1;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((3 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x70 + local_8 * 0x2f8)) && (-1 < local_10 + -1)) {
      iVar6 = 0;
      iVar4 = local_10;
      do {
        iVar5 = *(int *)(local_14 + iVar6 * 4);
        if (((*(int *)(*(int *)puVar2 + 0x24 + iVar5 * 0x130) == 2) &&
            (*(char *)(*(int *)puVar2 + 0x15 + iVar5 * 0x130) == '\0')) &&
           (*(int *)(*(int *)puVar2 + 0x50 + iVar5 * 0x130) == 0)) {
          *(undefined1 *)(*(int *)puVar2 + 0x7d + iVar5 * 0x130) = 1;
          iVar4 = *(int *)(local_14 + iVar6 * 4);
          iVar5 = *(int *)puVar2;
          iVar1 = *(int *)puVar2;
          *(undefined4 *)(iVar5 + 0x48 + iVar4 * 0x130) =
               *(undefined4 *)(iVar1 + 0x40 + iVar4 * 0x130);
          *(undefined4 *)(iVar5 + 0x4c + iVar4 * 0x130) =
               *(undefined4 *)(iVar1 + 0x44 + iVar4 * 0x130);
          iVar4 = FUN_004032c8(100);
          if ((0x1e < iVar4) &&
             (iVar4 = *(int *)(local_14 + iVar6 * 4),
             *(int *)(*(int *)puVar2 + 0x28 + iVar4 * 0x130) < 0x28)) {
            *(undefined4 *)(*(int *)puVar2 + 0x100 + iVar4 * 0x130) = 1;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((5 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x74 + local_8 * 0x2f8)) && (-1 < local_10 + -1)) {
      iVar6 = 0;
      iVar4 = local_10;
      do {
        iVar5 = *(int *)(local_14 + iVar6 * 4);
        if (((*(int *)(*(int *)puVar2 + 0x24 + iVar5 * 0x130) == 3) &&
            (*(char *)(*(int *)puVar2 + 0x15 + iVar5 * 0x130) == '\0')) &&
           (*(int *)(*(int *)puVar2 + 0x50 + iVar5 * 0x130) == 0)) {
          *(undefined1 *)(*(int *)puVar2 + 0x7d + iVar5 * 0x130) = 1;
          iVar4 = *(int *)(local_14 + iVar6 * 4);
          iVar5 = *(int *)puVar2;
          iVar1 = *(int *)puVar2;
          *(undefined4 *)(iVar5 + 0x48 + iVar4 * 0x130) =
               *(undefined4 *)(iVar1 + 0x40 + iVar4 * 0x130);
          *(undefined4 *)(iVar5 + 0x4c + iVar4 * 0x130) =
               *(undefined4 *)(iVar1 + 0x44 + iVar4 * 0x130);
          iVar4 = FUN_004032c8(100);
          if ((0x28 < iVar4) &&
             (iVar4 = *(int *)(local_14 + iVar6 * 4),
             *(int *)(*(int *)puVar2 + 0x28 + iVar4 * 0x130) < 0x2d)) {
            *(undefined4 *)(*(int *)puVar2 + 0x100 + iVar4 * 0x130) = 1;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar3 = puStack_24;
    if ((3 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x78 + local_8 * 0x2f8)) && (-1 < local_10 + -1)) {
      iVar6 = 0;
      iVar4 = local_10;
      do {
        iVar5 = *(int *)(local_14 + iVar6 * 4);
        if (((*(int *)(*(int *)puVar2 + 0x24 + iVar5 * 0x130) == 4) &&
            (*(char *)(*(int *)puVar2 + 0x15 + iVar5 * 0x130) == '\0')) &&
           (*(int *)(*(int *)puVar2 + 0x50 + iVar5 * 0x130) == 0)) {
          *(undefined1 *)(*(int *)puVar2 + 0x7d + iVar5 * 0x130) = 1;
          iVar4 = *(int *)(local_14 + iVar6 * 4);
          iVar5 = *(int *)puVar2;
          iVar1 = *(int *)puVar2;
          *(undefined4 *)(iVar5 + 0x48 + iVar4 * 0x130) =
               *(undefined4 *)(iVar1 + 0x40 + iVar4 * 0x130);
          *(undefined4 *)(iVar5 + 0x4c + iVar4 * 0x130) =
               *(undefined4 *)(iVar1 + 0x44 + iVar4 * 0x130);
          iVar4 = FUN_004032c8(100);
          puVar3 = puStack_24;
          if ((0x1e < iVar4) &&
             (iVar4 = *(int *)(local_14 + iVar6 * 4),
             *(int *)(*(int *)puVar2 + 0x28 + iVar4 * 0x130) < 0x28)) {
            *(undefined4 *)(*(int *)puVar2 + 0x100 + iVar4 * 0x130) = 1;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  puStack_24 = puVar3;
  puVar3 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00652fae;
  puStack_28 = (undefined1 *)0x652fa6;
  FUN_004061c8(&local_14,PTR_DAT_00652bc0,puVar3);
  return;
}

