// Address: 005a3d1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3d1c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_FS_OFFSET;
  int in_stack_ffffffd0;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_005a42c8;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_28;
  puVar1 = &stack0xfffffffc;
  if (DAT_006d24e4 != '\0') {
    iVar2 = FUN_004032c8(4);
    puVar1 = puStack_20;
    if (iVar2 == 1) {
      DAT_006d24e4 = '\x01';
    }
    else {
      DAT_006d24e4 = '\0';
    }
  }
  puStack_20 = puVar1;
  iVar2 = FUN_004032c8(3);
  if (iVar2 == 1) {
    iVar2 = 2;
  }
  else {
    iVar2 = 3;
  }
  if (DAT_006d24d0 < DAT_006d24b4) {
    DAT_006d24e4 = '\0';
  }
  else if (((float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + *(int *)PTR_DAT_0066ad44 * 0x130)
            < (float)DAT_006d24d0 * _DAT_005a42d8) && (iVar2 * DAT_006d24b4 < DAT_006d24d0)) {
    DAT_006d24e4 = '\x01';
  }
  if (DAT_006d24e4 == '\0') {
    if (*(float *)PTR_DAT_0066b6fc == _DAT_005a42dc) {
      *(undefined4 *)PTR_DAT_0066b6fc = 0x3df5c28f;
    }
    if ((*PTR_DAT_0066b668 == '\0') ||
       ((float)DAT_006d24b4 * _DAT_005a42d8 <=
        (float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + *(int *)PTR_DAT_0066ad44 * 0x130) +
        (float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + *(int *)PTR_DAT_0066ad44 * 0x130) *
        *(float *)PTR_DAT_0066b6fc)) {
      if (DAT_006d24b4 < DAT_006d24d0) {
        DAT_006d24b4 = DAT_006d24d0;
      }
      local_c = 0;
      local_8 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40) + -1;
      iVar2 = -1;
      while ((iVar2 == -1 && (local_c < 500))) {
        local_c = local_c + 1;
        iVar5 = FUN_004032c8(local_8 - DAT_006d24ec);
        iVar5 = iVar5 + DAT_006d24ec;
        if (((0x18 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + *(int *)PTR_DAT_0066ad44 * 0x130))
            && (((iVar5 != *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 +
                                   *(int *)PTR_DAT_0066ad44 * 0x130) &&
                 (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar5 * 0x2f8) == '\0')) &&
                (*(int *)(*(int *)PTR_DAT_0066af70 + 0xa0 + iVar5 * 0x2f8) < 0x1c)))) &&
           (((0 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar5 * 0x2f8) &&
             (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066ad44 * 0x130) *
                      0x2f8) + -2 <= *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar5 * 0x2f8))) &&
            (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar5 * 0x2f8) <=
             *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                     *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066ad44 * 0x130) *
                     0x2f8) + 3)))) {
          iVar2 = iVar5;
        }
        if (((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + *(int *)PTR_DAT_0066ad44 * 0x130) < 0x19)
            && (iVar5 != *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066ad44 * 0x130
                                 ))) &&
           ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar5 * 0x2f8) == '\0' &&
            (((*(int *)(*(int *)PTR_DAT_0066af70 + 0xa0 + iVar5 * 0x2f8) < 0x1c &&
              (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                       *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066ad44 * 0x130)
                       * 0x2f8) + -2 <= *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar5 * 0x2f8)))
             && (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar5 * 0x2f8) <=
                 *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                         *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066ad44 * 0x130
                                 ) * 0x2f8) + 2)))))) {
          iVar3 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar5 * 0x2f8));
          iVar4 = FUN_0064f2d0(*(undefined4 *)
                                (*(int *)PTR_DAT_0066af70 + 0x3c +
                                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 +
                                        *(int *)PTR_DAT_0066ad44 * 0x130) * 0x2f8));
          if (iVar3 == iVar4) {
            iVar2 = iVar5;
          }
        }
      }
      if ((iVar2 == -1) && (DAT_006d24b4 <= DAT_006d24d0)) {
        in_stack_ffffffd0 = DAT_006d24d0;
        FUN_005a4354(param_1,1,DAT_006d24d4,DAT_006d24d0,*(undefined4 *)PTR_DAT_0066ad44);
      }
      else if ((iVar2 == -1) && (DAT_006d24d0 < DAT_006d24b4)) {
        in_stack_ffffffd0 = 0;
        FUN_005a4354(param_1,0,0xffffffff,0,*(undefined4 *)PTR_DAT_0066ad44);
      }
      else if (iVar2 < 0) {
        in_stack_ffffffd0 = 0;
        FUN_005a4354(param_1,0,0xffffffff,0,*(undefined4 *)PTR_DAT_0066ad44);
      }
      else {
        if (DAT_006d24b4 - 1U < 100000) {
          iVar5 = FUN_004032c8(10000);
          in_stack_ffffffd0 = iVar5 + 1000 + DAT_006d24b4;
        }
        else if (DAT_006d24b4 - 0x186a1U < 400000) {
          iVar5 = FUN_004032c8(50000);
          in_stack_ffffffd0 = iVar5 + 10000 + DAT_006d24b4;
        }
        else if (DAT_006d24b4 - 0x7a121U < 500000) {
          iVar5 = FUN_004032c8(100000);
          in_stack_ffffffd0 = iVar5 + 30000 + DAT_006d24b4;
        }
        else if (DAT_006d24b4 - 0xf4241U < 1000000) {
          iVar5 = FUN_004032c8(200000);
          in_stack_ffffffd0 = iVar5 + 50000 + DAT_006d24b4;
        }
        else {
          iVar5 = FUN_004032c8(300000);
          in_stack_ffffffd0 = iVar5 + 50000 + DAT_006d24b4;
        }
        FUN_005a4354(param_1,1,iVar2,in_stack_ffffffd0,*(undefined4 *)PTR_DAT_0066ad44);
      }
    }
    else {
      FUN_0043bf7c(*(undefined4 *)(param_1 + 0x37c),1);
      FUN_0043aa68(*(undefined4 *)(param_1 + 0x378),0);
      FUN_00642c50(0x174,&local_10);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x39c),local_10);
    }
  }
  else {
    in_stack_ffffffd0 = DAT_006d24d0;
    FUN_005a4354(param_1,1,DAT_006d24d4,DAT_006d24d0,*(undefined4 *)PTR_DAT_0066ad44);
  }
  if (*PTR_DAT_0066af24 == '\0') {
    *(int *)PTR_DAT_0066b2e0 = *(int *)PTR_DAT_0066b2e0 + -1;
    if (*(int *)PTR_DAT_0066b2e0 < 1) {
      FUN_0043b234(*(undefined4 *)(param_1 + 0x3a0),1);
    }
    else {
      FUN_0043b234(*(undefined4 *)(param_1 + 0x3a4),1);
    }
  }
  else {
    FUN_0043b234(*(undefined4 *)(param_1 + 0x3a0),1);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = in_stack_ffffffd0;
  puStack_28 = &LAB_005a42cf;
  FUN_00404ff0(&local_10,in_stack_ffffffd0,puVar1);
  return;
}

