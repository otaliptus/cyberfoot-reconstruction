// Address: 00652134
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00652134(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  float local_14;
  int local_10;
  
  puStack_28 = &stack0xfffffffc;
  local_14 = 0.0;
  puStack_2c = &LAB_00652187;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar1 = FUN_0064f2d0(*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0x3c +
                        *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130) * 0x2f8));
  *in_FS_OFFSET = uStack_30;
  iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130) * 2;
  iVar5 = 0x16e;
  switch(iVar1) {
  case 0:
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130) * 0x2f8) < 0x15) {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130) * 0x2f8) < 0x14) {
        if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130) * 0x2f8) < 0x12) {
          if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130) * 0x2f8) < 0xc) {
            iVar5 = 0x16e;
          }
          else {
            iVar5 = 400;
          }
        }
        else {
          iVar5 = 500;
        }
      }
      else {
        iVar5 = 600;
      }
    }
    else {
      iVar5 = 0x2ee;
    }
    break;
  case 1:
    iVar5 = 0x16e;
    break;
  case 2:
    iVar5 = 0x146;
    break;
  case 3:
    iVar5 = 0x146;
    break;
  case 4:
    iVar5 = 300;
    break;
  case 5:
    iVar5 = 300;
  }
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + param_1 * 0x130) != '\0') {
    if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                 *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130) * 0x2f8) < 0x16) ||
       (iVar1 != 0)) {
      if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                   *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130) * 0x2f8) == 0x15) &&
         (iVar1 == 0)) {
        iVar5 = iVar5 * 2;
      }
      else {
        puStack_28 = (undefined1 *)0x65233d;
        iVar2 = FUN_00402c38();
        iVar5 = iVar5 + iVar2;
      }
    }
    else {
      iVar5 = iVar5 * 3;
    }
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x50 + param_1 * 0x130) == 1) {
    puStack_28 = (undefined1 *)0x652365;
    iVar2 = FUN_00402c38();
    iVar5 = iVar5 + iVar2;
  }
  if (iVar1 == 0) {
    local_10 = 0x1c;
  }
  else {
    local_10 = 0x14;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130) < 0x14) {
    iVar5 = iVar5 + (0x20 - *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130)) * 0x1b;
  }
  iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130);
  if ((iVar1 < 0x1a) && (0x13 < iVar1)) {
    iVar5 = iVar5 + (0x20 - iVar1) * local_10;
  }
  iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130);
  if ((iVar1 < 0x20) && (0x19 < iVar1)) {
    iVar5 = iVar5 + (0x20 - iVar1) * 0xf;
  }
  iVar1 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130);
  if ((0x1f < iVar1) && (iVar1 < 0x22)) {
    iVar5 = iVar5 + (0x23 - iVar1) * 0x32;
  }
  puVar4 = PTR_DAT_0066b5b8;
  if (0x21 < iVar1) {
    puVar4 = (undefined *)((iVar1 + -0x22) * 200);
    iVar5 = iVar5 + (iVar1 + -0x22) * -200;
    if (iVar5 < 1) {
      iVar5 = 100;
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xc0) < 1) {
    iVar1 = 0;
  }
  else {
    puStack_28 = (undefined1 *)0x652493;
    iVar1 = FUN_00402c38(PTR_DAT_0066ac78,puVar4);
  }
  if (0 < iVar1) {
    if (100 < iVar1) {
      iVar1 = 100;
    }
    local_14 = (float)iVar1 / _DAT_00652588;
  }
  iVar5 = iVar3 * iVar3 * iVar5;
  if (_DAT_0065258c < local_14) {
    puStack_28 = (undefined1 *)0x6524d8;
    iVar3 = FUN_00402c38();
    iVar5 = iVar5 + iVar3;
  }
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x120 + param_1 * 0x130) == '\0') {
    iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x11c + param_1 * 0x130);
    if ((0 < iVar3) && (iVar3 == *(int *)(PTR_DAT_0066ac78 + 0xc0))) {
      puStack_28 = (undefined1 *)0x652558;
      iVar5 = FUN_00402c38(iVar5 / 0x1e,iVar5 % 0x1e);
      iVar5 = iVar5 * *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + param_1 * 0x130);
    }
  }
  else {
    puStack_28 = (undefined1 *)0x652505;
    iVar5 = FUN_00402c38(iVar5 / 0x1e,iVar5 % 0x1e);
    iVar5 = iVar5 * *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + param_1 * 0x130);
  }
  return iVar5;
}

