// Address: 0061c174
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061c174(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  char local_19;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_14 = 0;
  puStack_3c = &LAB_0061c5b2;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  cVar5 = '\0';
  local_19 = '\0';
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 5) || (6 < *(int *)(PTR_DAT_0066ac78 + 0x88))) {
    cVar5 = '\x01';
  }
  local_8 = param_2;
  iVar2 = FUN_0060cd60(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + param_2 * 0x1bc),
                       *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + param_2 * 0x1bc),
                       *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + param_2 * 0x1bc),cVar5,
                       *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + param_2 * 0x1bc));
  iVar3 = local_8;
  iVar6 = *(int *)PTR_DAT_0066af70;
  if ((*(char *)(iVar6 + 0x39 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_8 * 0x1bc) * 0x2f8) ==
       '\0') &&
     (iVar6 = *(int *)PTR_DAT_0066af70,
     *(char *)(iVar6 + 0x39 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_8 * 0x1bc) * 0x2f8) ==
     '\0')) {
    iVar6 = *(int *)PTR_DAT_0066af70;
    if (*(int *)(iVar6 + 0x98 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_8 * 0x1bc) * 0x2f8)
        < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                  *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_8 * 0x1bc) * 0x2f8)) {
      iVar2 = iVar2 + 3;
    }
    else {
      iVar6 = *(int *)PTR_DAT_0066af70;
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                  *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_8 * 0x1bc) * 0x2f8) <
          *(int *)(iVar6 + 0x98 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_8 * 0x1bc) * 0x2f8
                  )) {
        iVar2 = iVar2 + -2;
      }
    }
  }
  if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_8 * 0x1bc) * 0x2f8) != '\0') &&
     (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
               *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_8 * 0x1bc) * 0x2f8) == '\0')) {
    iVar6 = *(int *)PTR_DAT_0066af70;
    if (*(int *)(iVar6 + 0x98 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_8 * 0x1bc) * 0x2f8)
        < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                  *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_8 * 0x1bc) * 0x2f8)) {
      iVar2 = iVar2 + 4;
    }
    else {
      iVar6 = *(int *)PTR_DAT_0066af70;
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                  *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_8 * 0x1bc) * 0x2f8) <
          *(int *)(iVar6 + 0x98 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_8 * 0x1bc) * 0x2f8
                  )) {
        iVar2 = iVar2 + 2;
      }
    }
  }
  if (0x1e < iVar2) {
    iVar2 = 0x1e;
  }
  if (iVar2 < -0x1e) {
    iVar2 = -0x1e;
  }
  FUN_0060c85c(iVar2,cVar5,CONCAT31((int3)((uint)iVar6 >> 8),local_19),local_28);
  *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x1b0 + iVar3 * 0x1bc) = iVar2;
  if (cVar5 != '\0') {
    *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x1b4 + iVar3 * 0x1bc) = 1;
  }
  if (local_19 != '\0') {
    *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x1b8 + iVar3 * 0x1bc) = 1;
  }
  local_c = local_24;
  local_10 = local_20;
  FUN_004060a8(&local_14,PTR_DAT_0061c154,1,0);
  iVar6 = local_c + local_10;
  FUN_004060a8(&local_14,PTR_DAT_0061c154,1,iVar6);
  FUN_00402b90();
  if (-1 < iVar6 + -1) {
    local_18 = 0;
    do {
      do {
        iVar3 = FUN_004032c8(0xbe);
        iVar3 = iVar3 + 1;
        iVar2 = FUN_00405eec(local_14);
        if (-1 < iVar2 + -1) {
          iVar4 = 0;
          do {
            if (iVar3 == *(int *)(local_14 + iVar4 * 4)) {
              iVar3 = -1;
              break;
            }
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      } while (iVar3 == -1);
      *(int *)(local_14 + local_18 * 4) = iVar3;
      local_18 = local_18 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar3 = 0;
  iVar6 = FUN_00405eec(local_14);
  if (0 < iVar6) {
    iVar6 = local_c;
    if (-1 < local_c + -1) {
      do {
        iVar2 = FUN_00405eec(DAT_006d491c);
        FUN_004060a8(&DAT_006d491c,PTR_DAT_0060ee48,1,iVar2 + 1);
        iVar2 = FUN_00405ef4(DAT_006d491c);
        *(int *)(DAT_006d491c + iVar2 * 0xc) = local_8;
        iVar2 = FUN_00405ef4(DAT_006d491c);
        *(undefined4 *)(DAT_006d491c + 4 + iVar2 * 0xc) = 1;
        iVar2 = FUN_00405ef4(DAT_006d491c);
        *(undefined4 *)(DAT_006d491c + 8 + iVar2 * 0xc) = *(undefined4 *)(local_14 + iVar3 * 4);
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = local_10;
    if (-1 < local_10 + -1) {
      do {
        iVar2 = FUN_00405eec(DAT_006d491c);
        FUN_004060a8(&DAT_006d491c,PTR_DAT_0060ee48,1,iVar2 + 1);
        iVar2 = FUN_00405ef4(DAT_006d491c);
        *(int *)(DAT_006d491c + iVar2 * 0xc) = local_8;
        iVar2 = FUN_00405ef4(DAT_006d491c);
        *(undefined4 *)(DAT_006d491c + 4 + iVar2 * 0xc) = 2;
        iVar2 = FUN_00405ef4(DAT_006d491c);
        *(undefined4 *)(DAT_006d491c + 8 + iVar2 * 0xc) = *(undefined4 *)(local_14 + iVar3 * 4);
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0061c5b9;
  puStack_3c = (undefined1 *)0x61c5b1;
  FUN_004061c8(&local_14,PTR_DAT_0061c154,puVar1);
  return;
}

