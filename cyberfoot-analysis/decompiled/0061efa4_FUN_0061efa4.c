// Address: 0061efa4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061efa4(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  switch(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88)) {
  case 1:
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      if (*(int *)(PTR_DAT_0066ac78 + 0x50) == 1) {
        local_c = *(int *)(PTR_DAT_0066ac78 + 0x4c);
      }
      else {
        local_c = *(int *)(PTR_DAT_0066ac78 + 0x4c) + 0x13;
      }
    }
    param_2 = PTR_DAT_0066ac78;
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
      if (*(int *)(PTR_DAT_0066ac78 + 0x50) == 1) {
        local_c = *(int *)(PTR_DAT_0066ac78 + 0x4c);
      }
      else {
        local_c = *(int *)(PTR_DAT_0066ac78 + 0x4c) + 9;
      }
    }
    break;
  case 2:
    local_c = *(int *)(PTR_DAT_0066ac78 + 0x114);
    break;
  case 3:
    param_2 = *(undefined **)PTR_DAT_0066afa0;
    local_c = *(int *)(param_2 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x338) * 0x48 + 0x1c);
    break;
  case 4:
    if (*(int *)(PTR_DAT_0066ac78 + 400) == 1) {
      local_c = *(int *)(PTR_DAT_0066ac78 + 0x194);
    }
    else {
      local_c = *(int *)(PTR_DAT_0066ac78 + 0x194) + 3;
    }
    break;
  case 5:
    local_c = 1;
    break;
  case 6:
    if (*(int *)(PTR_DAT_0066ac78 + 0x19c) == 1) {
      local_c = *(int *)(PTR_DAT_0066ac78 + 0x1a0);
    }
    else {
      local_c = *(int *)(PTR_DAT_0066ac78 + 0x1a0) + 3;
    }
    break;
  case 7:
  case 8:
  case 9:
    local_c = *(int *)(PTR_DAT_0066ac78 + 0x62c);
  }
  puStack_24 = (undefined1 *)0x61f127;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066b154,param_2);
  puStack_24 = (undefined1 *)0x0;
  puStack_28 = (undefined1 *)0x61f13e;
  FUN_004060a8(PTR_DAT_0066aed4,PTR_DAT_0064269c,1);
  local_14 = *(int *)PTR_DAT_0066aea4;
  if (0 < local_14) {
    local_10 = 1;
    do {
      puStack_24 = (undefined1 *)0x61f166;
      iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b154);
      puStack_24 = (undefined1 *)(iVar2 + 1);
      puStack_28 = (undefined1 *)0x61f17d;
      FUN_004060a8(PTR_DAT_0066b154,PTR_DAT_00488c80,1);
      puStack_24 = (undefined1 *)0x61f18c;
      iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b154);
      puStack_24 = (undefined1 *)0x61f19b;
      FUN_0061de24(param_1,iVar3,local_10);
      *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x30 + iVar3 * 600) =
           *(undefined4 *)(PTR_DAT_0066ac78 + 0x88);
      *(int *)(*(int *)PTR_DAT_0066b154 + 0x34 + iVar3 * 600) = local_c;
      *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x38 + iVar3 * 600) =
           *(undefined4 *)(PTR_DAT_0066ac78 + 0x50);
      puVar1 = PTR_DAT_0066b574;
      iVar2 = *(int *)PTR_DAT_0066b154;
      iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x16c);
      *(undefined4 *)(iVar2 + 0x40 + iVar3 * 600) =
           *(undefined4 *)(PTR_DAT_0066b574 + iVar4 * 0x18 + -0x10);
      *(undefined4 *)(iVar2 + 0x44 + iVar3 * 600) = *(undefined4 *)(puVar1 + iVar4 * 0x18 + -0xc);
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x3c + iVar3 * 600) =
             *(undefined4 *)PTR_DAT_0066b09c;
      }
      else {
        iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x88);
        if ((((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 4)) || (iVar2 == 6)) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x3c + iVar3 * 600) =
               *(undefined4 *)PTR_DAT_0066b484;
        }
        else {
          *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x3c + iVar3 * 600) = 0;
        }
      }
      *(undefined1 *)(*(int *)PTR_DAT_0066b154 + 0x48 + iVar3 * 600) =
           *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x170 + local_10 * 0x1bc);
      *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x4c + iVar3 * 600) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + local_10 * 0x1bc);
      *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x50 + iVar3 * 600) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + local_10 * 0x1bc);
      *(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0x10 + iVar3 * 600) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + local_10 * 0x1bc);
      puStack_24 = (undefined1 *)0x61f301;
      FUN_0065867c(iVar3,local_10);
      puStack_24 = (undefined1 *)0x61f30b;
      FUN_006588a4(iVar3,local_10);
      iVar2 = 1;
      do {
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + -4 + iVar2 * 4) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 4 + iVar2 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 4 + iVar2 * 4) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 0x44 + iVar2 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 0x238 + iVar2 * 4) =
             *(undefined4 *)
              (*(int *)PTR_DAT_0066af70 + 0x220 +
              *(int *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 4 + iVar2 * 4) * 0x2f8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 0x240 + iVar2 * 4) =
             *(undefined4 *)
              (*(int *)PTR_DAT_0066af70 + 0x228 +
              *(int *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 4 + iVar2 * 4) * 0x2f8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 0x248 + iVar2 * 4) =
             *(undefined4 *)
              (*(int *)PTR_DAT_0066af70 + 0x224 +
              *(int *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 4 + iVar2 * 4) * 0x2f8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 500 + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 0x84 + iVar2 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 0x1f8 + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 0x94 + iVar2 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 0x1fc + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 0x8c + iVar2 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 0x200 + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 0x9c + iVar2 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 0x204 + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 0xa4 + iVar2 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 0x208 + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 0x164 + iVar2 * 4);
        iVar4 = 1;
        do {
          *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + iVar2 * 0x2c + 0x24 + iVar4 * 4)
               = *(undefined4 *)
                  (*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + iVar2 * 0x2c + 0x80 + iVar4 * 4);
          puStack_28 = (undefined1 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600);
          *(undefined4 *)((int)puStack_28 + iVar2 * 0x2c + 300 + iVar4 * 4) =
               *(undefined4 *)
                (*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + iVar2 * 0x2c + 0xd8 + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0xc);
        iVar2 = iVar2 + 1;
      } while (iVar2 != 3);
      iVar2 = 0;
      do {
        *(undefined4 *)(*(int *)PTR_DAT_0066b154 + iVar3 * 600 + 0x14 + iVar2 * 4) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + local_10 * 0x1bc + 0x28 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 != 5);
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  puStack_24 = (undefined1 *)0x61f5bf;
  iVar2 = FUN_0065208c(*(undefined4 *)
                        (*(int *)PTR_DAT_0066b6ac + 4 +
                        *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x1bc) * 0xc));
  puStack_28 = &LAB_0061f5f0;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 1) && (iVar2 != -1)) {
    puStack_24 = &stack0xfffffffc;
    FUN_00658cbc();
  }
  *in_FS_OFFSET = uStack_2c;
  return;
}

