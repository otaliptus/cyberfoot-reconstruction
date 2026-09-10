// Address: 0064016c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064016c(void)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_006404b6;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar2 = &stack0xfffffffc;
  if (0xe < *(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) {
    iVar3 = FUN_004032c8(100);
    if (iVar3 < 0x1f) {
      local_8 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
    }
    else {
      local_8 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
    }
    local_8 = local_8 + -1;
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      uVar5 = 0x1b;
    }
    else {
      uVar5 = 0x19;
    }
    *(undefined4 *)PTR_DAT_0066ad40 = 0xffffffff;
    *(undefined4 *)PTR_DAT_0066afb0 = 0;
    iVar3 = FUN_004032c8(uVar5);
    puVar2 = puStack_1c;
    if (iVar3 == 1) {
      FUN_004060a8(&local_c,PTR_DAT_0064014c,1,0);
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
      if (0 < iVar3) {
        iVar6 = 1;
        do {
          if (((-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar6 * 0x130)) &&
              (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar6 * 0x130) == 0)) &&
             (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar6 * 0x130) ==
              *(int *)(PTR_DAT_0066ac78 + 8))) {
            iVar4 = FUN_00405eec(local_c);
            FUN_004060a8(&local_c,PTR_DAT_0064014c,1,iVar4 + 1);
            iVar4 = FUN_00405ef4(local_c);
            *(int *)(local_c + iVar4 * 4) = iVar6;
          }
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(undefined4 *)PTR_DAT_0066afb0 = 0;
      *(undefined4 *)PTR_DAT_0066ad40 = 0xffffffff;
      iVar6 = 0;
      iVar3 = FUN_004032c8(100);
      if (iVar3 < 0x33) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      while ((*(int *)PTR_DAT_0066ad40 == -1 && (iVar6 < 200))) {
        iVar6 = iVar6 + 1;
        iVar3 = FUN_004032c8(local_8);
        if ((((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar3 * 0x2f8) == '\0') &&
             ((*(int *)(*(int *)PTR_DAT_0066af70 + 100 + iVar3 * 0x2f8) <
               *(int *)PTR_DAT_0066b610 + -2 &&
              (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) <=
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar3 * 0x2f8))))) &&
            (8 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + iVar3 * 0x2f8))) &&
           (0 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar3 * 0x2f8))) {
          *(int *)PTR_DAT_0066ad40 = iVar3;
        }
        if ((bVar1) &&
           (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) !=
            *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar3 * 0x2f8))) {
          *(undefined4 *)PTR_DAT_0066ad40 = 0xffffffff;
        }
      }
      if (-1 < *(int *)PTR_DAT_0066ad40) {
        iVar3 = 0;
        for (iVar6 = 0; (iVar3 == 0 && (iVar6 < 0x1c)); iVar6 = iVar6 + 1) {
          FUN_00405eec(local_c);
          iVar4 = FUN_004032c8();
          iVar4 = *(int *)(local_c + iVar4 * 4);
          if ((float)*(int *)(&DAT_0066abac +
                             *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                                     *(int *)PTR_DAT_0066ad40 * 0x2f8) * 4) * _DAT_006404c4 <
              (float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar4 * 0x130)) {
            iVar4 = 0;
          }
          if (0 < iVar4) {
            *(int *)PTR_DAT_0066afb0 = iVar4;
            iVar3 = iVar4;
          }
        }
      }
      puVar2 = puStack_1c;
      if ((-1 < *(int *)PTR_DAT_0066ad40) && (0 < *(int *)PTR_DAT_0066afb0)) {
        iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
        puVar2 = puStack_1c;
        if ((*(int *)PTR_DAT_0066afb0 < iVar3) &&
           (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066afb0 * 0x130) ==
            *(int *)(PTR_DAT_0066ac78 + 8))) {
          FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005c85e4,PTR_DAT_0066b56c);
          (**(code **)(**(int **)PTR_DAT_0066b56c + 0xec))();
          puVar2 = puStack_1c;
        }
      }
    }
  }
  puStack_1c = puVar2;
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006404bd;
  puStack_20 = (undefined1 *)0x6404b5;
  FUN_004061c8(&local_c,PTR_DAT_0064014c,puVar2);
  return;
}

