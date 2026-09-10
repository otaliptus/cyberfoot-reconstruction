// Address: 0063ff1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0063ff1c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  undefined4 local_1c;
  
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    local_1c = 0x14;
  }
  else {
    local_1c = 10;
  }
  local_20 = -1;
  iVar6 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  iVar1 = FUN_0065208c(*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  iVar4 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar1 * 0x294);
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  iVar5 = local_20;
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar3 * 0x130) ==
           *(int *)(PTR_DAT_0066ac78 + 8)) &&
         (iVar5 = iVar3, *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar3 * 0x130) == 1)) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
      iVar5 = local_20;
    } while (iVar2 != 0);
  }
  local_20 = iVar5;
  if (iVar6 == 0) {
    iVar6 = -1;
    if (0 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x80 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) {
      iVar6 = 3;
    }
  }
  else if (iVar6 != iVar4) {
    if (iVar6 == 1) {
      iVar6 = FUN_004032c8(2);
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = 2;
      }
      if ((2 < iVar4) && (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + local_20 * 0x130) < 0x15)) {
        iVar6 = 3;
      }
      if ((3 < iVar4) && (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + local_20 * 0x130) < 0x10)) {
        iVar6 = 3;
      }
    }
    else {
      iVar5 = FUN_004032c8(3);
      if (iVar5 != 0) {
        iVar6 = iVar6 + -1;
      }
    }
  }
  iVar5 = -1;
  iVar2 = 0;
  if ((0 < iVar6) && (iVar6 <= iVar4)) {
    while ((iVar5 == -1 && (iVar2 < 200))) {
      iVar2 = iVar2 + 1;
      iVar4 = FUN_004032c8(local_1c);
      iVar4 = *(int *)(*(int *)PTR_DAT_0066aca0 + iVar1 * 0x294 + iVar6 * 0x50 + -0x54 +
                      (iVar4 + 1) * 4);
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) == '\0') &&
         (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + iVar4 * 0x2f8) < *(int *)PTR_DAT_0066b610)) {
        iVar5 = iVar4;
      }
    }
  }
  if ((-1 < iVar5) && (-1 < local_20)) {
    *(int *)PTR_DAT_0066acf4 = local_20;
    *(int *)PTR_DAT_0066b5ac = iVar5;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005e1640,PTR_DAT_0066b048);
    (**(code **)(**(int **)PTR_DAT_0066b048 + 0xec))();
  }
  return;
}

