// Address: 004e24d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e24d0(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar9;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_25;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar8 = PTR_DAT_0066b5b8;
  puStack_4c = &stack0xfffffffc;
  local_20 = 0;
  puStack_50 = &LAB_004e2a4e;
  puStack_54 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_54;
  local_34 = 0xffffffff;
  local_30 = 0xffffffff;
  local_2c = 0xffffffff;
  DAT_0067aee4 = DAT_0067aee4 + 1;
  local_8 = param_1;
  FUN_004060a8(PTR_DAT_0066b238,PTR_DAT_00488c00,1,DAT_0067aee4);
  local_c = DAT_0067aee4 + -1;
  local_18 = 4;
  *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + local_8 * 0x2f8) = local_c;
  FUN_004048d4(&local_20);
  FUN_0064fbb8(0,local_8);
  iVar6 = 0;
  do {
    *(undefined4 *)(*(int *)PTR_DAT_0066b238 + local_c * 0xf8 + 0x2c + iVar6 * 4) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 5);
  FUN_004060a8(&DAT_0067aeec,PTR_DAT_004e1964,1,0);
  FUN_00405eec(*(undefined4 *)puVar8);
  local_10 = 0;
  local_25 = *(int *)(PTR_DAT_0066ac78 + 0x88) == 0;
  iVar6 = FUN_00405ef4(*(undefined4 *)puVar8);
  if (-1 < iVar6) {
    iVar6 = iVar6 + 1;
    iVar7 = 0;
    do {
      iVar4 = *(int *)(*(int *)puVar8 + 0x20 + iVar7 * 0x130);
      if ((((-1 < iVar4) && (iVar4 == local_8)) &&
          (*(int *)(*(int *)puVar8 + iVar7 * 0x130 + 0x8c + *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) <
           3)) && (((*(int *)(*(int *)puVar8 + iVar7 * 0x130 + 0xb8 +
                             *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) == 0 &&
                    (*(double *)(*(int *)puVar8 + 0x68 + iVar7 * 0x130) <=
                     *(double *)
                      (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10))) &&
                   ((cVar1 = *(char *)(*(int *)puVar8 + 0x120 + iVar7 * 0x130), cVar1 == '\0' ||
                    (cVar1 == local_25)))))) {
        uVar3 = FUN_0065173c(iVar7);
        *(undefined4 *)(*(int *)puVar8 + 0x58 + iVar7 * 0x130) = uVar3;
        *(undefined1 *)(*(int *)puVar8 + 0x86 + iVar7 * 0x130) = 0;
        local_10 = local_10 + 1;
        FUN_004060a8(&DAT_0067aeec,PTR_DAT_004e1964,1,local_10);
        *(int *)(DAT_0067aeec + -0x20 + local_10 * 0x20) = iVar7;
        if (*(int *)(*(int *)puVar8 + 0x78 + iVar7 * 0x130) < 0x14) {
          iVar4 = FUN_004032c8(10);
          *(int *)(*(int *)puVar8 + 0x78 + iVar7 * 0x130) = iVar4 + 0x1e;
        }
        FUN_00402c38();
        local_14 = FUN_00402c38();
        iVar4 = FUN_00402c38();
        *(int *)(DAT_0067aeec + -0x1c + local_10 * 0x20) = iVar4 + local_14;
        *(undefined4 *)(DAT_0067aeec + -0x14 + local_10 * 0x20) =
             *(undefined4 *)(*(int *)puVar8 + 0x78 + iVar7 * 0x130);
        *(undefined4 *)(DAT_0067aeec + -0xc + local_10 * 0x20) =
             *(undefined4 *)(*(int *)puVar8 + 0x2c + iVar7 * 0x130);
        *(undefined4 *)(DAT_0067aeec + -8 + local_10 * 0x20) =
             *(undefined4 *)(*(int *)puVar8 + 0x58 + iVar7 * 0x130);
        *(undefined4 *)(DAT_0067aeec + -4 + local_10 * 0x20) =
             *(undefined4 *)(*(int *)puVar8 + 0x24 + iVar7 * 0x130);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  DAT_0067aee8 = FUN_00405eec(DAT_0067aeec);
  puVar9 = &LAB_004e21a8;
  FUN_004bcdb0(DAT_0067aeec,0x20,0,&LAB_004e21a8,DAT_0067aee8 + -1);
  uVar5 = FUN_004032c8(100);
  iVar6 = uVar5 + 1;
  if (iVar6 < 0x32) {
    if (iVar6 < 6) {
      if (uVar5 < 2) {
        local_18 = 1;
      }
      else if (uVar5 - 2 < 2) {
        local_18 = 2;
      }
    }
    else if (uVar5 - 5 < 2) {
      local_18 = 3;
    }
    else if (uVar5 - 7 < 0x1f) {
      local_18 = 4;
    }
    else if (uVar5 - 0x26 < 0xb) {
      local_18 = 5;
    }
  }
  else if (iVar6 < 0x42) {
    if (uVar5 - 0x31 < 0xb) {
      local_18 = 6;
    }
    else if (uVar5 - 0x3c < 5) {
      local_18 = 7;
    }
  }
  else if (uVar5 - 0x41 < 7) {
    local_18 = 8;
  }
  else if (uVar5 - 0x48 < 0x1a) {
    local_18 = 9;
  }
  else if (uVar5 - 0x62 < 2) {
    local_18 = 10;
  }
  if (0 < local_18) {
    iVar6 = 1;
    puVar8 = PTR_DAT_0066ac38;
    do {
      iVar7 = local_18;
      iVar4 = FUN_004e21e4(PTR_DAT_0066b734 +
                           *(int *)(puVar8 + local_18 * 0x2c + -0x2c) * 0xc + -0xc,
                           *(int *)(puVar8 + local_18 * 0x2c + -0x2c));
      if (iVar6 == 1) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + 0x84 + local_c * 0xf8) =
             *(undefined4 *)(puVar8 + iVar7 * 0x2c + -0x2c);
      }
      else {
        *(undefined4 *)(*(int *)PTR_DAT_0066b238 + local_c * 0xf8 + 0x54 + iVar6 * 4) =
             *(undefined4 *)(puVar8 + iVar7 * 0x2c + -0x2c);
      }
      if (0 < iVar4) {
        if (iVar6 == 1) {
          iVar7 = 0xb;
        }
        else {
          iVar7 = iVar6 + -1;
        }
        FUN_006514e8(local_8,iVar4,iVar7);
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 4;
    } while (iVar6 != 0xc);
    local_1c = 0;
    iVar6 = 1;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066b238 + local_c * 0xf8 + -4 + iVar6 * 4) < 1) {
        iVar7 = *(int *)(*(int *)PTR_DAT_0066b238 + local_c * 0xf8 + 0x58 + iVar6 * 4);
        local_24 = *(int *)(PTR_DAT_0066b734 + iVar7 * 0xc + -0xc);
        local_30 = *(undefined4 *)(PTR_DAT_0066b734 + iVar7 * 0xc + -8);
        local_2c = *(undefined4 *)(PTR_DAT_0066b734 + iVar7 * 0xc + -4);
        iVar7 = 5;
        puVar8 = PTR_DAT_0066ae5c;
        do {
          local_34 = *(undefined4 *)(puVar8 + local_24 * 0x14);
          iVar4 = FUN_004e21e4(&local_34,
                               *(undefined4 *)
                                (*(int *)PTR_DAT_0066b238 + local_c * 0xf8 + 0x58 + iVar6 * 4));
          if (0 < iVar4) break;
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + 4;
        } while (iVar7 != 0);
        if (0 < iVar4) {
          FUN_006514e8(local_8,iVar4,iVar6);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xc);
    iVar6 = 7;
    puVar8 = PTR_DAT_0066b6f0;
    do {
      iVar7 = FUN_004e21e4(puVar8,0xffffffff);
      if (0 < iVar7) {
        local_1c = local_1c + 1;
        *(int *)(*(int *)PTR_DAT_0066b238 + local_c * 0xf8 + 0x3c + local_1c * 4) = iVar7;
      }
      puVar8 = puVar8 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00642c6c(local_c);
  puVar2 = puStack_54;
  *in_FS_OFFSET = puVar9;
  puStack_54 = &LAB_004e2a55;
  FUN_004048d4(&local_20,puVar9,puVar2);
  return;
}

