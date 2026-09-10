// Address: 005fad94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005fad94(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_28 [5];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_14 = 0;
  puStack_3c = &LAB_005fb1d4;
  puStack_40 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_40;
  local_10 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
  local_c = param_3;
  local_8 = param_2;
  FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,0);
  iVar5 = 5;
  piVar2 = local_28;
  do {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar5) {
    iVar5 = iVar5 + 1;
    iVar6 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar6 * 0x130) < local_10) &&
         (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + iVar6 * 0x130) == local_8)) {
        iVar3 = FUN_00405eec(DAT_006d3f88);
        FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,iVar3 + 1);
        iVar3 = FUN_00405ef4(DAT_006d3f88);
        *(int *)(DAT_006d3f88 + iVar3 * 0x28) = iVar6;
        iVar3 = FUN_00405ef4(DAT_006d3f88);
        *(undefined4 *)(DAT_006d3f88 + 4 + iVar3 * 0x28) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar6 * 0x130);
        if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar6 * 0x130) == '\0') {
          iVar3 = FUN_00405ef4(DAT_006d3f88);
          *(undefined4 *)(DAT_006d3f88 + 8 + iVar3 * 0x28) = 0;
        }
        else {
          iVar3 = FUN_00405ef4(DAT_006d3f88);
          *(undefined4 *)(DAT_006d3f88 + 8 + iVar3 * 0x28) = 1;
        }
        iVar3 = FUN_00405ef4(DAT_006d3f88);
        *(undefined4 *)(DAT_006d3f88 + 0xc + iVar3 * 0x28) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x104 + iVar6 * 0x130);
        iVar3 = FUN_00405ef4(DAT_006d3f88);
        puVar8 = (undefined4 *)(DAT_006d3f88 + 0x10 + iVar3 * 0x28);
        uVar4 = FUN_004032c8(2);
        *puVar8 = uVar4;
        iVar3 = FUN_00405ef4(DAT_006d3f88);
        *(undefined4 *)(DAT_006d3f88 + 0x14 + iVar3 * 0x28) = 0xffffffff;
        iVar3 = FUN_00405ef4(DAT_006d3f88);
        *(undefined4 *)(DAT_006d3f88 + 0x18 + iVar3 * 0x28) = 0xffffffff;
        iVar3 = FUN_00405ef4(DAT_006d3f88);
        *(undefined4 *)(DAT_006d3f88 + 0x1c + iVar3 * 0x28) = 0xffffffff;
        iVar3 = FUN_00405ef4(DAT_006d3f88);
        *(undefined4 *)(DAT_006d3f88 + 0x20 + iVar3 * 0x28) = 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  DAT_006d3f44 = FUN_00405eec(DAT_006d3f88);
  puVar7 = &LAB_005f2b00;
  FUN_004bcdb0(DAT_006d3f88,0x28,0,&LAB_005f2b00,DAT_006d3f44 + -1);
  FUN_004060a8(&local_14,PTR_DAT_005fad74,1,0);
  iVar5 = FUN_00405ef4(DAT_006d3f88);
  if (-1 < iVar5) {
    iVar5 = iVar5 + 1;
    iVar6 = 0;
    do {
      if ((-1 < *(int *)(DAT_006d3f88 + iVar6 * 0x28)) &&
         (local_28[*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                           *(int *)(DAT_006d3f88 + iVar6 * 0x28) * 0x130)] <
          *(int *)(&DAT_0066a3f4 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                          *(int *)(DAT_006d3f88 + iVar6 * 0x28) * 0x130) * 4))) {
        local_28[*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                         *(int *)(DAT_006d3f88 + iVar6 * 0x28) * 0x130)] =
             local_28[*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 +
                              *(int *)(DAT_006d3f88 + iVar6 * 0x28) * 0x130)] + 1;
        iVar3 = FUN_00405eec(local_14);
        FUN_004060a8(&local_14,PTR_DAT_005fad74,1,iVar3 + 1);
        iVar3 = FUN_00405ef4(local_14);
        *(undefined4 *)(local_14 + iVar3 * 4) = *(undefined4 *)(DAT_006d3f88 + iVar6 * 0x28);
        *(undefined4 *)(DAT_006d3f88 + iVar6 * 0x28) = 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (0 < iVar5) {
    iVar6 = 1;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar6 * 0x130) == local_c) {
        iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b544);
        FUN_004060a8(PTR_DAT_0066b544,PTR_DAT_00488cc0,1,iVar3 + 1);
        iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b544);
        *(int *)(*(int *)PTR_DAT_0066b544 + iVar3 * 8) = iVar6;
        iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b544);
        *(int *)(*(int *)PTR_DAT_0066b544 + 4 + iVar3 * 8) = local_c;
        *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar6 * 0x130) = 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = FUN_00405ef4(local_14);
  if (-1 < iVar5) {
    iVar5 = iVar5 + 1;
    iVar6 = 0;
    do {
      iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b544);
      FUN_004060a8(PTR_DAT_0066b544,PTR_DAT_00488cc0,1,iVar3 + 1);
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b544);
      *(undefined4 *)(*(int *)PTR_DAT_0066b544 + iVar3 * 8) = *(undefined4 *)(local_14 + iVar6 * 4);
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b544);
      *(undefined4 *)(*(int *)PTR_DAT_0066b544 + 4 + iVar3 * 8) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)(local_14 + iVar6 * 4) * 0x130)
      ;
      *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)(local_14 + iVar6 * 4) * 0x130) = local_c;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_004060a8(&local_14,PTR_DAT_005fad74,1,0);
  puVar1 = puStack_40;
  *in_FS_OFFSET = puVar7;
  puStack_40 = &LAB_005fb1db;
  FUN_004061c8(&local_14,PTR_DAT_005fad74,puVar1);
  return;
}

