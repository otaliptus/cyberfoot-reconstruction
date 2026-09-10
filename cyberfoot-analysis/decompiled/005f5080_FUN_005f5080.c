// Address: 005f5080
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f5080(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  char *local_5c;
  int *local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  char local_45;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_a0 = &stack0xfffffffc;
  local_44 = 0;
  local_4c = (undefined4 *)0x0;
  puStack_a4 = &LAB_005f5e6f;
  uStack_a8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a8;
  local_40 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_45 = '\0';
  local_24 = 0;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if (8 < *(int *)PTR_DAT_0066b080) {
    FUN_004060a8(&local_44,PTR_DAT_005f5040,1,0);
    iVar7 = 0x16e;
    local_58 = (int *)(PTR_DAT_0066b574 + 0x10);
    do {
      if (*local_58 == 3) {
        local_24 = local_24 + 1;
        FUN_004060a8(&local_44,PTR_DAT_005f5040,1,local_24);
        *(int *)(local_44 + -8 + local_24 * 8) = local_58[-2];
        *(int *)(local_44 + -4 + local_24 * 8) = local_58[-1];
      }
      local_58 = local_58 + 6;
      iVar7 = iVar7 + -1;
      puVar2 = puStack_a0;
    } while (iVar7 != 0);
  }
  puStack_a0 = puVar2;
  local_28 = 0;
  local_14 = 0;
  local_5c = PTR_DAT_0066ae98 + 0x52d;
  do {
    if ((*local_5c != '\0') &&
       (0 < *(int *)(PTR_DAT_0066b3b0 +
                    *(int *)PTR_DAT_0066b080 * 4 + *(int *)(local_5c + 3) * 0x50 + -0x54))) {
      local_1c = local_14;
      iVar7 = *(int *)(PTR_DAT_0066b50c + *(int *)(local_5c + 3) * 0x30 + -0x2c);
      if (*(int *)PTR_DAT_0066b080 < 0xb) {
        local_30 = *(int *)(PTR_DAT_0066ae98 + local_14 * 0x568 + 0x510);
      }
      else {
        local_30 = 1;
      }
      local_c = 1;
      local_60 = &DAT_0066a3d4;
      local_64 = &local_90;
      local_68 = (int *)&DAT_0066a3b4;
      do {
        iVar8 = 2;
        piVar3 = local_64;
        piVar5 = local_68;
        piVar6 = local_60;
        do {
          if (*(int *)(local_5c + 3) == 2) {
            *piVar3 = *piVar6;
          }
          else {
            *piVar3 = *piVar5;
          }
          piVar5 = piVar5 + 1;
          piVar3 = piVar3 + 1;
          piVar6 = piVar6 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        local_c = local_c + 1;
        local_68 = local_68 + 2;
        local_64 = local_64 + 2;
        local_60 = local_60 + 2;
      } while (local_c != 5);
      local_c = 5;
      local_45 = 1 < iVar7;
      if (0 < local_30) {
        local_50 = local_30;
        local_10 = 1;
        local_68 = (int *)(PTR_DAT_0066ae98 + 0x54);
        do {
          iVar8 = 0;
          FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,0);
          iVar7 = 0x14;
          local_6c = local_68;
          do {
            iVar1 = local_6c[local_1c * 0x15a + -0x15];
            if (-1 < iVar1) {
              iVar8 = iVar8 + 1;
              FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,iVar8);
              *(int *)(DAT_006d3f88 + -0x28 + iVar8 * 0x28) = local_6c[local_1c * 0x15a + -0x15];
              *(undefined4 *)(DAT_006d3f88 + -0x24 + iVar8 * 0x28) =
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xc0 + iVar1 * 0x2f8);
              *(undefined4 *)(DAT_006d3f88 + -0x20 + iVar8 * 0x28) =
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xe8 + iVar1 * 0x2f8);
              *(undefined4 *)(DAT_006d3f88 + -0x1c + iVar8 * 0x28) =
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x110 + iVar1 * 0x2f8);
              *(int *)(DAT_006d3f88 + -0x18 + iVar8 * 0x28) =
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0xe8 + iVar1 * 0x2f8) -
                   (*(int *)(*(int *)PTR_DAT_0066af70 + 0x110 + iVar1 * 0x2f8) +
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x138 + iVar1 * 0x2f8));
              *(undefined4 *)(DAT_006d3f88 + -0x14 + iVar8 * 0x28) =
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x138 + iVar1 * 0x2f8);
              *(undefined4 *)(DAT_006d3f88 + -0x10 + iVar8 * 0x28) =
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x160 + iVar1 * 0x2f8);
              *(undefined4 *)(DAT_006d3f88 + -0xc + iVar8 * 0x28) =
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x188 + iVar1 * 0x2f8);
              *(int *)(DAT_006d3f88 + -8 + iVar8 * 0x28) =
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x160 + iVar1 * 0x2f8) -
                   *(int *)(*(int *)PTR_DAT_0066af70 + 0x188 + iVar1 * 0x2f8);
            }
            local_6c = local_6c + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          DAT_006d3f44 = FUN_00405eec(DAT_006d3f88);
          FUN_004bcdb0(DAT_006d3f88,0x28,0,&LAB_005f2b00,DAT_006d3f44 + -1);
          iVar8 = FUN_00405eec(DAT_006d3f88);
          iVar7 = 0;
          if (-1 < iVar8 + -1) {
            iVar7 = 0;
            local_54 = iVar8;
            do {
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 +
                      *(int *)(DAT_006d3f88 + iVar7 * 0x28) * 0x2f8) = iVar7 + 1;
              if ((*(int *)(PTR_DAT_0066b3b0 +
                           *(int *)PTR_DAT_0066b080 * 4 + *(int *)(local_5c + 3) * 0x50 + -0x54) ==
                   10) && (local_10 == 1)) {
                FUN_006490a8(*(undefined4 *)(DAT_006d3f88 + iVar7 * 0x28),iVar7 + 1,3,1);
              }
              iVar7 = iVar7 + 1;
              local_54 = local_54 + -1;
            } while (local_54 != 0);
          }
          uVar4 = FUN_00405eec(DAT_006d3f88);
          FUN_004060a8(&local_4c,PTR_DAT_005f5060,1,uVar4);
          iVar8 = FUN_00405ef4(DAT_006d3f88);
          if (-1 < iVar8) {
            local_54 = iVar8 + 1;
            iVar7 = 0;
            do {
              local_4c[iVar7] = *(undefined4 *)(DAT_006d3f88 + iVar7 * 0x28);
              iVar7 = iVar7 + 1;
              local_54 = local_54 + -1;
            } while (local_54 != 0);
          }
          if ((local_45 != '\0') && (local_10 == 1)) {
            local_20 = 0;
            FUN_004060a8(&local_4c,PTR_DAT_005f5060,1,9);
            local_34 = *(int *)(PTR_DAT_0066b50c + *(int *)(local_5c + 3) * 0x30 + -0x2c);
            local_3c = *(int *)(PTR_DAT_0066b50c + *(int *)(local_5c + 3) * 0x30 + -0x1c);
            if (0 < local_34) {
              local_18 = 1;
              local_6c = (int *)(PTR_DAT_0066ae98 + 0x2c);
              local_54 = local_34;
              do {
                iVar8 = 0;
                uVar4 = 0x5f5599;
                FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,0);
                iVar7 = 1;
                local_70 = local_6c;
                do {
                  iVar1 = local_70[local_1c * 0x15a + 0x59];
                  if (-1 < iVar1) {
                    iVar8 = iVar8 + 1;
                    uVar4 = 0x5f55d9;
                    FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,iVar8);
                    *(int *)(DAT_006d3f88 + -0x28 + iVar8 * 0x28) =
                         local_70[local_1c * 0x15a + 0x59];
                    *(undefined4 *)(DAT_006d3f88 + -0x24 + iVar8 * 0x28) =
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xc0 + iVar1 * 0x2f8);
                    *(undefined4 *)(DAT_006d3f88 + -0x20 + iVar8 * 0x28) =
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xe8 + iVar1 * 0x2f8);
                    *(undefined4 *)(DAT_006d3f88 + -0x1c + iVar8 * 0x28) =
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x110 + iVar1 * 0x2f8);
                    *(int *)(DAT_006d3f88 + -0x18 + iVar8 * 0x28) =
                         *(int *)(*(int *)PTR_DAT_0066af70 + 0xe8 + iVar1 * 0x2f8) -
                         (*(int *)(*(int *)PTR_DAT_0066af70 + 0x110 + iVar1 * 0x2f8) +
                         *(int *)(*(int *)PTR_DAT_0066af70 + 0x138 + iVar1 * 0x2f8));
                    *(undefined4 *)(DAT_006d3f88 + -0x14 + iVar8 * 0x28) =
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x138 + iVar1 * 0x2f8);
                    *(undefined4 *)(DAT_006d3f88 + -0x10 + iVar8 * 0x28) =
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x160 + iVar1 * 0x2f8);
                    *(undefined4 *)(DAT_006d3f88 + -0xc + iVar8 * 0x28) =
                         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x188 + iVar1 * 0x2f8);
                    *(int *)(DAT_006d3f88 + -8 + iVar8 * 0x28) =
                         *(int *)(*(int *)PTR_DAT_0066af70 + 0x160 + iVar1 * 0x2f8) -
                         *(int *)(*(int *)PTR_DAT_0066af70 + 0x188 + iVar1 * 0x2f8);
                  }
                  iVar7 = iVar7 + 1;
                  local_70 = local_70 + 1;
                } while (iVar7 != 0xb);
                DAT_006d3f44 = FUN_00405eec(DAT_006d3f88);
                FUN_004bcdb0(DAT_006d3f88,0x28,0,uVar4,DAT_006d3f44 + -1,&LAB_005f2b00);
                if (-1 < local_3c + -1) {
                  iVar8 = 0;
                  iVar7 = local_3c;
                  do {
                    local_4c[local_20] = *(undefined4 *)(DAT_006d3f88 + iVar8 * 0x28);
                    local_20 = local_20 + 1;
                    iVar8 = iVar8 + 1;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                local_18 = local_18 + 1;
                local_6c = local_6c + 10;
                local_54 = local_54 + -1;
                iVar7 = 0xb;
              } while (local_54 != 0);
            }
          }
          if ((*(int *)(PTR_DAT_0066b3b0 +
                       *(int *)PTR_DAT_0066b080 * 4 + *(int *)(local_5c + 3) * 0x50 + -0x54) == 10)
             && (local_10 == 1)) {
            if (local_45 == '\0') {
              iVar7 = FUN_00405ef4(DAT_006d3f88);
              if (-1 < iVar7) {
                local_54 = iVar7 + 1;
                iVar7 = 0;
                do {
                  *(undefined1 *)
                   (*(int *)PTR_DAT_0066af70 + 0x216 + *(int *)(DAT_006d3f88 + iVar7 * 0x28) * 0x2f8
                   ) = 0;
                  FUN_006490a8(*(undefined4 *)(DAT_006d3f88 + iVar7 * 0x28),iVar7 + 1,3,1);
                  iVar7 = iVar7 + 1;
                  local_54 = local_54 + -1;
                } while (local_54 != 0);
                local_54 = 0;
              }
            }
            else if ((local_45 != '\0') && (0 < local_34)) {
              local_54 = local_34;
              local_18 = 1;
              local_6c = (int *)(PTR_DAT_0066ae98 + 0x28);
              do {
                if (-1 < local_6c[local_1c * 0x15a + iVar7 + 0x59]) {
                  *(undefined1 *)
                   (*(int *)PTR_DAT_0066af70 + 0x216 +
                   local_6c[local_1c * 0x15a + iVar7 + 0x59] * 0x2f8) = 0;
                }
                local_18 = local_18 + 1;
                local_6c = local_6c + 10;
                local_54 = local_54 + -1;
              } while (local_54 != 0);
            }
            local_40 = *(int *)(PTR_DAT_0066b50c + *(int *)(local_5c + 3) * 0x30 + -0x1c);
            if (local_45 != '\0') {
              local_40 = local_40 * local_34;
            }
            local_38 = *(int *)(PTR_DAT_0066b50c + *(int *)(local_5c + 3) * 0x30 + -0x20);
            if (local_40 == 2) {
              FUN_0065a1c0(local_4c[1],*local_4c,0x65,
                           *(undefined4 *)(local_44 + *(int *)PTR_DAT_0066b080 * 8),
                           *(undefined4 *)(local_44 + 4 + *(int *)PTR_DAT_0066b080 * 8),
                           *(int *)PTR_DAT_0066b080 + 1,1,local_14,3);
              if (local_38 == 2) {
                FUN_0065a1c0(*local_4c,local_4c[1],0x66,
                             *(undefined4 *)(local_44 + 8 + *(int *)PTR_DAT_0066b080 * 8),
                             *(undefined4 *)(local_44 + 0xc + *(int *)PTR_DAT_0066b080 * 8),
                             *(int *)PTR_DAT_0066b080 + 2,2,local_14,3);
              }
              *(undefined4 *)(local_5c + -9) = *local_4c;
              *(undefined4 *)(local_5c + -5) = local_4c[1];
              iVar7 = 0;
              do {
                *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x216 + local_4c[iVar7] * 0x2f8) = 1;
                iVar7 = iVar7 + 1;
              } while (iVar7 != 2);
            }
            if (local_40 == 4) {
              FUN_0065a1c0(local_4c[3],*local_4c,0xc9,
                           *(undefined4 *)(local_44 + *(int *)PTR_DAT_0066b080 * 8),
                           *(undefined4 *)(local_44 + 4 + *(int *)PTR_DAT_0066b080 * 8),
                           *(int *)PTR_DAT_0066b080 + 1,1,local_14,3);
              if (local_38 == 2) {
                FUN_0065a1c0(*local_4c,local_4c[3],0xca,
                             *(undefined4 *)(local_44 + 8 + *(int *)PTR_DAT_0066b080 * 8),
                             *(undefined4 *)(local_44 + 0xc + *(int *)PTR_DAT_0066b080 * 8),
                             *(int *)PTR_DAT_0066b080 + 2,2,local_14,3);
              }
              FUN_0065a1c0(local_4c[2],local_4c[1],0xc9,
                           *(undefined4 *)(local_44 + *(int *)PTR_DAT_0066b080 * 8),
                           *(undefined4 *)(local_44 + 4 + *(int *)PTR_DAT_0066b080 * 8),
                           *(int *)PTR_DAT_0066b080 + 1,1,local_14,3);
              if (local_38 == 2) {
                FUN_0065a1c0(local_4c[1],local_4c[2],0xca,
                             *(undefined4 *)(local_44 + 8 + *(int *)PTR_DAT_0066b080 * 8),
                             *(undefined4 *)(local_44 + 0xc + *(int *)PTR_DAT_0066b080 * 8),
                             *(int *)PTR_DAT_0066b080 + 2,2,local_14,3);
              }
              iVar7 = 0;
              do {
                *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x216 + local_4c[iVar7] * 0x2f8) = 1;
                iVar7 = iVar7 + 1;
              } while (iVar7 != 4);
            }
            if (local_40 == 8) {
              FUN_0065a1c0(local_4c[local_90],local_4c[local_8c],0x191,
                           *(undefined4 *)(local_44 + *(int *)PTR_DAT_0066b080 * 8),
                           *(undefined4 *)(local_44 + 4 + *(int *)PTR_DAT_0066b080 * 8),
                           *(int *)PTR_DAT_0066b080 + 1,1,local_14,3);
              if (local_38 == 2) {
                FUN_0065a1c0(local_4c[local_8c],local_4c[local_90],0x192,
                             *(undefined4 *)(local_44 + 8 + *(int *)PTR_DAT_0066b080 * 8),
                             *(undefined4 *)(local_44 + 0xc + *(int *)PTR_DAT_0066b080 * 8),
                             *(int *)PTR_DAT_0066b080 + 2,2,local_14,3);
              }
              FUN_0065a1c0(local_4c[local_88],local_4c[local_84],0x191,
                           *(undefined4 *)(local_44 + *(int *)PTR_DAT_0066b080 * 8),
                           *(undefined4 *)(local_44 + 4 + *(int *)PTR_DAT_0066b080 * 8),
                           *(int *)PTR_DAT_0066b080 + 1,1,local_14,3);
              if (local_38 == 2) {
                FUN_0065a1c0(local_4c[local_84],local_4c[local_88],0x192,
                             *(undefined4 *)(local_44 + 8 + *(int *)PTR_DAT_0066b080 * 8),
                             *(undefined4 *)(local_44 + 0xc + *(int *)PTR_DAT_0066b080 * 8),
                             *(int *)PTR_DAT_0066b080 + 2,2,local_14,3);
              }
              FUN_0065a1c0(local_4c[local_80],local_4c[local_7c],0x191,
                           *(undefined4 *)(local_44 + *(int *)PTR_DAT_0066b080 * 8),
                           *(undefined4 *)(local_44 + 4 + *(int *)PTR_DAT_0066b080 * 8),
                           *(int *)PTR_DAT_0066b080 + 1,1,local_14,3);
              if (local_38 == 2) {
                FUN_0065a1c0(local_4c[local_7c],local_4c[local_80],0x192,
                             *(undefined4 *)(local_44 + 8 + *(int *)PTR_DAT_0066b080 * 8),
                             *(undefined4 *)(local_44 + 0xc + *(int *)PTR_DAT_0066b080 * 8),
                             *(int *)PTR_DAT_0066b080 + 2,2,local_14,3);
              }
              FUN_0065a1c0(local_4c[local_78],local_4c[local_74],0x191,
                           *(undefined4 *)(local_44 + *(int *)PTR_DAT_0066b080 * 8),
                           *(undefined4 *)(local_44 + 4 + *(int *)PTR_DAT_0066b080 * 8),
                           *(int *)PTR_DAT_0066b080 + 1,1,local_14,3);
              if (local_38 == 2) {
                FUN_0065a1c0(local_4c[local_74],local_4c[local_78],0x192,
                             *(undefined4 *)(local_44 + 8 + *(int *)PTR_DAT_0066b080 * 8),
                             *(undefined4 *)(local_44 + 0xc + *(int *)PTR_DAT_0066b080 * 8),
                             *(int *)PTR_DAT_0066b080 + 2,2,local_14,3);
              }
              iVar7 = 0;
              do {
                *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x216 + local_4c[iVar7] * 0x2f8) = 1;
                iVar7 = iVar7 + 1;
              } while (iVar7 != 8);
            }
          }
          if ((*(int *)PTR_DAT_0066b080 == 10) && (1 < local_10)) {
            iVar7 = 0;
            do {
              *(undefined1 *)
               (*(int *)PTR_DAT_0066af70 + 0x216 + *(int *)(DAT_006d3f88 + iVar7 * 0x28) * 0x2f8) =
                   0;
              FUN_006490a8(*(undefined4 *)(DAT_006d3f88 + iVar7 * 0x28),iVar7 + 1,3,local_10);
              iVar7 = iVar7 + 1;
            } while (iVar7 != 6);
          }
          FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,0);
          FUN_004060a8(&local_4c,PTR_DAT_005f5060,1,0);
          local_10 = local_10 + 1;
          local_68 = local_68 + 0x14;
          local_50 = local_50 + -1;
        } while (local_50 != 0);
      }
    }
    local_14 = local_14 + 1;
    local_5c = local_5c + 0x568;
  } while (local_14 != 0x1b);
  local_2c = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
  if (-1 < local_2c + -1) {
    iVar7 = 0;
    local_50 = local_2c;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar7 * 0x48) == 3) &&
         (*(double *)(*(int *)PTR_DAT_0066afa0 + 0x30 + iVar7 * 0x48) ==
          *(double *)(PTR_DAT_0066b574 + *(int *)PTR_DAT_0066adac * 0x18 + -0x10))) {
        FUN_00646a38(3,*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar7 * 0x48),
                     *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar7 * 0x48),0,
                     *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar7 * 0x48),
                     *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar7 * 0x48));
      }
      iVar7 = iVar7 + 1;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  puVar2 = puStack_a0;
  *in_FS_OFFSET = uStack_a8;
  puStack_a0 = &LAB_005f5e76;
  puStack_a4 = (undefined1 *)0x5f5e60;
  FUN_004061c8(&local_4c,PTR_DAT_005f5060,puVar2);
  puStack_a4 = (undefined1 *)0x5f5e6e;
  FUN_004061c8(&local_44,PTR_DAT_005f5040);
  return;
}

