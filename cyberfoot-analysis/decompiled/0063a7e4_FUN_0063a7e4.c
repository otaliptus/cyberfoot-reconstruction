// Address: 0063a7e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0063a7e4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int iVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  char local_e;
  char local_d;
  int local_c;
  int local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_24 = 0;
  local_28 = 0;
  local_c = 0;
  puStack_3c = &LAB_0063acff;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_d = '\0';
  iVar9 = 0;
  local_8 = param_1;
  FUN_004060a8(&local_c,PTR_DAT_0063a7c4,1,0);
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    local_1c = 0x14;
  }
  else {
    local_1c = 10;
  }
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (0 < iVar2) {
    iVar8 = 1;
    do {
      iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar8 * 0x130);
      if (((-1 < iVar3) && (iVar3 == *(int *)(PTR_DAT_0066ac78 + 8))) &&
         (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar8 * 0x130) != '\0')) {
        iVar9 = iVar9 + 1;
        FUN_004060a8(&local_c,PTR_DAT_0063a7c4,1,iVar9);
        *(int *)(local_c + -4 + iVar9 * 4) = iVar8;
        local_d = '\x01';
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((local_d != '\0') && (iVar9 = FUN_00405ef4(local_c), -1 < iVar9)) {
    iVar9 = iVar9 + 1;
    iVar2 = 0;
    do {
      iVar8 = FUN_00402c38();
      iVar3 = FUN_00402c38();
      uVar7 = iVar8 - iVar3;
      local_14 = -1;
      local_18 = 0;
      local_e = '\0';
      if ((int)uVar7 < 1000) {
        iVar8 = FUN_004032c8(100);
        if (10 < iVar8) {
          local_e = '\x01';
        }
        if ((int)uVar7 < 1) {
          local_e = '\x01';
        }
      }
      else {
        uVar4 = FUN_00402c38();
        iVar8 = (int)uVar7 >> 0x1f;
        if (iVar8 == extraout_EDX) {
          if (uVar7 <= uVar4) {
LAB_0063a98a:
            iVar8 = FUN_004032c8(100,uVar4);
            if (0x1e < iVar8) {
              local_e = '\x01';
            }
            goto LAB_0063ab56;
          }
        }
        else if (iVar8 <= extraout_EDX) goto LAB_0063a98a;
        uVar4 = FUN_00402c38();
        if (iVar8 == extraout_EDX_00) {
          if (uVar7 <= uVar4) {
LAB_0063a9e4:
            iVar8 = FUN_004032c8(100,uVar4);
            if (0x46 < iVar8) {
              local_e = '\x01';
            }
            goto LAB_0063ab56;
          }
        }
        else if (iVar8 <= extraout_EDX_00) goto LAB_0063a9e4;
        uVar4 = FUN_00402c38();
        if (iVar8 == extraout_EDX_01) {
          if (uVar7 < uVar4) {
LAB_0063aa3e:
            iVar8 = FUN_004032c8(100,uVar4);
            if (0x3c < iVar8) {
              local_e = '\x01';
            }
            goto LAB_0063ab56;
          }
        }
        else if (iVar8 < extraout_EDX_01) goto LAB_0063aa3e;
        uVar4 = FUN_00402c38();
        if (iVar8 == extraout_EDX_02) {
          if (uVar7 <= uVar4) {
LAB_0063aa98:
            iVar8 = FUN_004032c8(100,uVar4);
            if (0x55 < iVar8) {
              local_e = '\x01';
            }
            goto LAB_0063ab56;
          }
        }
        else if (iVar8 <= extraout_EDX_02) goto LAB_0063aa98;
        uVar4 = FUN_00402c38();
        if (iVar8 == extraout_EDX_03) {
          if (uVar7 <= uVar4) {
LAB_0063aaf2:
            iVar8 = FUN_004032c8(100,uVar4);
            if (0x5a < iVar8) {
              local_e = '\x01';
            }
            goto LAB_0063ab56;
          }
        }
        else if (iVar8 <= extraout_EDX_03) goto LAB_0063aaf2;
        uVar4 = FUN_00402c38();
        if (iVar8 == extraout_EDX_04) {
          if (uVar7 <= uVar4) {
LAB_0063ab43:
            iVar8 = FUN_004032c8(100,uVar4);
            if (0x5f < iVar8) {
              local_e = '\x01';
            }
          }
        }
        else if (iVar8 <= extraout_EDX_04) goto LAB_0063ab43;
      }
LAB_0063ab56:
      iVar8 = FUN_0065208c(*(undefined4 *)
                            (*(int *)PTR_DAT_0066af70 + 0x3c +
                            *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
      if (iVar8 == -1) goto LAB_0063acd6;
      if (local_e != '\0') {
        local_20 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8
                           );
        if ((local_20 == 0) ||
           (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar8 * 0x294) < local_20)) {
          local_20 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar8 * 0x294);
        }
        for (; (local_14 == -1 && (local_18 < 0x1e)); local_18 = local_18 + 1) {
          iVar3 = FUN_004032c8(local_1c);
          iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + iVar8 * 0x294 + local_20 * 0x50 + -0x50 +
                          iVar3 * 4);
          if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar3 * 0x2f8) == '\0') &&
             (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + iVar3 * 0x2f8) <
              *(int *)PTR_DAT_0066b610 + -2)) {
            local_14 = iVar3;
          }
        }
      }
      if (-1 < local_14) {
        uVar6 = *(undefined4 *)(local_c + iVar2 * 4);
        uVar5 = FUN_00402c38();
        FUN_00635fb0(local_8,uVar6,local_14,1,1,uVar5);
      }
      iVar2 = iVar2 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  uVar6 = FUN_00402c38();
  FUN_006468f4(uVar6,&local_28);
  FUN_00405330(&local_24,3);
  FUN_00545088(*(undefined4 *)(local_8 + 0x420),local_24);
LAB_0063acd6:
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0063ad06;
  puStack_3c = (undefined1 *)0x63acf0;
  FUN_00405008(&local_28,2,puVar1);
  puStack_3c = (undefined1 *)0x63acfe;
  FUN_004061c8(&local_c,PTR_DAT_0063a7c4);
  return;
}

