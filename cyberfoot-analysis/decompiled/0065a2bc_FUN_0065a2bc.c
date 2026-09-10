// Address: 0065a2bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x0065b00d) */
/* WARNING: Removing unreachable block (ram,0x0065b01a) */
/* WARNING: Removing unreachable block (ram,0x0065b024) */
/* WARNING: Removing unreachable block (ram,0x0065b031) */
/* WARNING: Removing unreachable block (ram,0x0065b039) */
/* WARNING: Removing unreachable block (ram,0x0065b045) */
/* WARNING: Removing unreachable block (ram,0x0065b051) */
/* WARNING: Removing unreachable block (ram,0x0065b05c) */
/* WARNING: Removing unreachable block (ram,0x0065b067) */
/* WARNING: Removing unreachable block (ram,0x0065b078) */
/* WARNING: Removing unreachable block (ram,0x0065b07d) */
/* WARNING: Removing unreachable block (ram,0x0065b0ad) */
/* WARNING: Removing unreachable block (ram,0x0065b086) */
/* WARNING: Removing unreachable block (ram,0x0065b0d2) */
/* WARNING: Removing unreachable block (ram,0x0065b0e0) */
/* WARNING: Removing unreachable block (ram,0x0065b10a) */
/* WARNING: Removing unreachable block (ram,0x0065b0e5) */
/* WARNING: Removing unreachable block (ram,0x0065b12e) */
/* WARNING: Removing unreachable block (ram,0x0065b13b) */
/* WARNING: Removing unreachable block (ram,0x0065b147) */
/* WARNING: Removing unreachable block (ram,0x0065b14e) */
/* WARNING: Removing unreachable block (ram,0x0065b153) */
/* WARNING: Removing unreachable block (ram,0x0065b17f) */
/* WARNING: Removing unreachable block (ram,0x0065b1b2) */
/* WARNING: Removing unreachable block (ram,0x0065b184) */
/* WARNING: Removing unreachable block (ram,0x0065b1de) */
/* WARNING: Removing unreachable block (ram,0x0065b1eb) */
/* WARNING: Removing unreachable block (ram,0x0065b1f4) */
/* WARNING: Removing unreachable block (ram,0x0065b1fb) */
/* WARNING: Removing unreachable block (ram,0x0065b200) */
/* WARNING: Removing unreachable block (ram,0x0065b22c) */
/* WARNING: Removing unreachable block (ram,0x0065b25f) */
/* WARNING: Removing unreachable block (ram,0x0065b231) */
/* WARNING: Removing unreachable block (ram,0x0065b28b) */
/* WARNING: Removing unreachable block (ram,0x0065b298) */
/* WARNING: Removing unreachable block (ram,0x0065b2a1) */
/* WARNING: Removing unreachable block (ram,0x0065b2a8) */
/* WARNING: Removing unreachable block (ram,0x0065b2ad) */
/* WARNING: Removing unreachable block (ram,0x0065b2d9) */
/* WARNING: Removing unreachable block (ram,0x0065b30c) */
/* WARNING: Removing unreachable block (ram,0x0065b2de) */
/* WARNING: Removing unreachable block (ram,0x0065b338) */
/* WARNING: Removing unreachable block (ram,0x0065b345) */
/* WARNING: Removing unreachable block (ram,0x0065b34e) */
/* WARNING: Removing unreachable block (ram,0x0065b355) */
/* WARNING: Removing unreachable block (ram,0x0065b35a) */
/* WARNING: Removing unreachable block (ram,0x0065b386) */
/* WARNING: Removing unreachable block (ram,0x0065b3b9) */
/* WARNING: Removing unreachable block (ram,0x0065b38b) */
/* WARNING: Removing unreachable block (ram,0x0065b3e5) */
/* WARNING: Removing unreachable block (ram,0x0065b3f2) */
/* WARNING: Removing unreachable block (ram,0x0065b3fb) */
/* WARNING: Removing unreachable block (ram,0x0065af28) */
/* WARNING: Removing unreachable block (ram,0x0065ae8c) */
/* WARNING: Removing unreachable block (ram,0x0065aeb4) */
/* WARNING: Removing unreachable block (ram,0x0065aed9) */
/* WARNING: Removing unreachable block (ram,0x0065aede) */
/* WARNING: Removing unreachable block (ram,0x0065aeb9) */
/* WARNING: Removing unreachable block (ram,0x0065ae91) */

void FUN_0065a2bc(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_5c;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *piStack_14;
  
  local_48 = 0;
  local_54 = 1;
  local_38 = local_38 & 0xff000000;
  local_50 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
  FUN_004060a8(&DAT_006d5334,PTR_DAT_0065a12c,1,0);
  iVar6 = 0;
  iVar5 = 0x16e;
  local_24 = (int *)(PTR_DAT_0066b574 + 0x10);
  do {
    if (param_1 == *local_24) {
      iVar6 = iVar6 + 1;
      FUN_004060a8(&DAT_006d5334,PTR_DAT_0065a12c,1,iVar6);
      puVar1 = DAT_006d5334;
      DAT_006d5334[iVar6 * 2 + -2] = local_24[-2];
      puVar1[iVar6 * 2 + -1] = local_24[-1];
    }
    local_24 = local_24 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (param_1 == 1) {
    iVar5 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294);
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      local_64 = 0x13;
      local_5c = 10;
    }
    else {
      local_64 = 9;
      local_5c = 5;
    }
    local_70 = 1;
    do {
      if (local_64 != 0) {
        local_34 = local_64;
        iVar6 = 1;
        do {
          if (0 < iVar5) {
            iVar7 = 1;
            local_30 = iVar5;
            do {
              if (local_5c != 0) {
                local_2c = local_5c;
                iVar9 = 1;
                do {
                  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
                    FUN_00643a40(iVar6,local_6c,local_74,&local_3c);
                  }
                  else {
                    FUN_00649b10(iVar6,local_6c,local_74,&local_3c,iVar9);
                  }
                  FUN_0065a14c(local_50,*(undefined4 *)
                                         (*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + iVar7 * 0x50
                                          + -0x54 + local_40 * 4),
                               *(undefined4 *)
                                (*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + iVar7 * 0x50 + -0x54 +
                                local_3c * 4),0xffffffff,local_70,param_2,1,iVar6);
                  puVar1 = DAT_006d5334;
                  if (local_70 == 1) {
                    puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
                    *puVar2 = DAT_006d5334[iVar6 * 2 + -2];
                    puVar2[1] = puVar1[iVar6 * 2 + -1];
                  }
                  else {
                    puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
                    puVar1 = DAT_006d5334 + (iVar6 + -1 + local_64) * 2;
                    *puVar2 = *puVar1;
                    puVar2[1] = puVar1[1];
                  }
                  iVar9 = iVar9 + 1;
                  local_2c = local_2c + -1;
                } while (local_2c != 0);
              }
              iVar7 = iVar7 + 1;
              local_30 = local_30 + -1;
            } while (local_30 != 0);
          }
          iVar6 = iVar6 + 1;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      local_70 = local_70 + 1;
    } while (local_70 != 3);
  }
  if (param_1 == 2) {
    iVar5 = 0x1f;
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294) < 2) {
        local_38 = (uint)local_38._1_3_ << 8;
      }
      else {
        local_38 = CONCAT31(local_38._1_3_,1);
      }
      if ((*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + param_2 * 0x294) == 0x1d) &&
         (0x50 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x148 + param_2 * 0x294))) {
        local_38._0_2_ = CONCAT11(1,(char)local_38);
        iVar5 = 0x3f;
      }
      cVar4 = FUN_006500c8();
      if (cVar4 != '\0') {
        local_48 = 2;
      }
    }
    else if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294) < 3) {
      local_38 = (uint)local_38._1_3_ << 8;
    }
    else {
      local_38 = CONCAT31(local_38._1_3_,1);
    }
    if (local_38._1_1_ != '\0') {
      iVar6 = 1;
      do {
        iVar7 = 1;
        do {
          local_50 = local_50 + 1;
          FUN_0065a14c(local_50,0xffffffff,0xffffffff,iVar5,iVar6,param_2,2,0);
          puVar1 = DAT_006d5334;
          if (iVar7 == 1) {
            puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
            *puVar2 = *DAT_006d5334;
            puVar2[1] = puVar1[1];
          }
          else {
            puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
            *puVar2 = DAT_006d5334[2];
            puVar2[1] = puVar1[3];
          }
          if (iVar7 == 2) {
            iVar5 = iVar5 + -1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != 3);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x21);
    }
    if ((char)local_38 != '\0') {
      iVar6 = 1;
      do {
        iVar7 = 1;
        do {
          local_50 = local_50 + 1;
          FUN_0065a14c(local_50,0xffffffff,0xffffffff,iVar5,iVar6,param_2,2,1);
          if (iVar7 == 1) {
            puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
            puVar1 = DAT_006d5334 + local_48 * 2;
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
          }
          else {
            puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
            puVar1 = DAT_006d5334 + (local_48 + 1) * 2;
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
          }
          if (iVar7 == 2) {
            iVar5 = iVar5 + -1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != 3);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x11);
    }
    iVar6 = 1;
    do {
      iVar7 = 1;
      do {
        local_50 = local_50 + 1;
        FUN_0065a14c(local_50,0xffffffff,0xffffffff,iVar5,iVar6,param_2,2,2);
        if (iVar7 == 1) {
          puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
          puVar1 = DAT_006d5334 + (local_48 + 2) * 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        }
        else {
          puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
          puVar1 = DAT_006d5334 + (local_48 + 3) * 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        }
        if (iVar7 == 2) {
          iVar5 = iVar5 + -1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 3);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 9);
    iVar6 = 1;
    do {
      iVar7 = 1;
      do {
        local_50 = local_50 + 1;
        FUN_0065a14c(local_50,0xffffffff,0xffffffff,iVar5,iVar6,param_2,2,3);
        if (iVar7 == 1) {
          puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
          puVar1 = DAT_006d5334 + (local_48 + 4) * 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        }
        else {
          puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
          puVar1 = DAT_006d5334 + (local_48 + 5) * 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        }
        if (iVar7 == 2) {
          iVar5 = iVar5 + -1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 3);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 5);
    iVar6 = 1;
    do {
      iVar7 = 1;
      do {
        local_50 = local_50 + 1;
        FUN_0065a14c(local_50,0xffffffff,0xffffffff,iVar5,iVar6,param_2,2,4);
        if (iVar7 == 1) {
          puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
          puVar1 = DAT_006d5334 + (local_48 + 6) * 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        }
        else {
          puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
          puVar1 = DAT_006d5334 + (local_48 + 7) * 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        }
        if (iVar7 == 2) {
          iVar5 = iVar5 + -1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 3);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 3);
    iVar6 = 1;
    do {
      iVar7 = 1;
      do {
        local_50 = local_50 + 1;
        FUN_0065a14c(local_50,0xffffffff,0xffffffff,iVar5,iVar6,param_2,2,5);
        if (iVar7 == 1) {
          puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
          puVar1 = DAT_006d5334 + (local_48 + 8) * 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        }
        else {
          puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
          puVar1 = DAT_006d5334 + (local_48 + 9) * 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        }
        if (iVar7 == 2) {
          iVar5 = iVar5 + -1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 3);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 2);
  }
  if (param_1 == 3) {
    iVar5 = *(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x510);
    local_54 = 2;
    local_64 = 5;
    local_5c = 3;
    if (*(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x530) == 1) {
      FUN_0065b724(6);
    }
    else if (*(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x530) == 2) {
      local_38._0_3_ = CONCAT12(1,(ushort)local_38);
      local_64 = 0xf;
      local_5c = 10;
      local_54 = 1;
    }
    else if (*(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x530) == 8) {
      FUN_0065b724(10);
      local_64 = 9;
      local_5c = 5;
      local_54 = 1;
    }
    else if (((*(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x530) == 5) ||
             (*(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x530) == 6)) ||
            (*(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x530) == 7)) {
      FUN_0065b724(0xc);
      local_64 = 0xb;
      local_5c = 6;
      local_54 = 1;
    }
    else if ((*(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x530) == 3) ||
            (*(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x530) == 4)) {
      FUN_0065b724(0x10);
      local_64 = 0xf;
      local_5c = 8;
      local_54 = 1;
    }
    else if (*(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x530) == 9) {
      FUN_0065b724(8);
      local_64 = 7;
      local_5c = 4;
      local_54 = 2;
    }
    else {
      FUN_0065b724(6);
    }
    if (0 < iVar5) {
      iVar6 = 1;
      local_24 = (int *)(PTR_DAT_0066ae98 + 0x50);
      local_34 = iVar5;
      do {
        local_44 = 0;
        if (iVar6 == 2) {
          FUN_0065b724(6);
          local_54 = 2;
          local_64 = 5;
          local_5c = 3;
          local_38._0_3_ = (uint3)(ushort)local_38;
        }
        if (local_54 != 0) {
          local_30 = local_54;
          local_70 = 1;
          do {
            if (local_64 != 0) {
              local_2c = local_64;
              iVar5 = 1;
              local_20 = (int *)PTR_DAT_0066b6f4;
              local_18 = &DAT_006d5338;
              do {
                local_44 = local_44 + 1;
                if (local_5c != 0) {
                  local_28 = local_5c;
                  local_1c = local_20;
                  piStack_14 = local_18;
                  do {
                    local_50 = local_50 + 1;
                    if (local_38._2_1_ == '\0') {
                      if (local_70 == 1) {
                        local_40 = local_24[param_2 * 0x15a + *piStack_14 + -0x15];
                        local_3c = local_24[param_2 * 0x15a + piStack_14[1] + -0x15];
                      }
                      else {
                        local_40 = local_24[param_2 * 0x15a + piStack_14[1] + -0x15];
                        local_3c = local_24[param_2 * 0x15a + *piStack_14 + -0x15];
                      }
                    }
                    else if (*(int *)(PTR_DAT_0066ae98 + param_2 * 0x568 + 0x530) == 2) {
                      local_40 = *(int *)(PTR_DAT_0066ae98 +
                                         local_1c[1] * 4 +
                                         *local_1c * 0x28 + param_2 * 0x568 + 0x164);
                      local_3c = *(int *)(PTR_DAT_0066ae98 +
                                         local_1c[3] * 4 +
                                         local_1c[2] * 0x28 + param_2 * 0x568 + 0x164);
                    }
                    FUN_0065a14c(local_50,local_40,local_3c,local_44,local_70,param_2,3,iVar5);
                    puVar1 = DAT_006d5334;
                    if (local_70 == 1) {
                      puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
                      *puVar2 = DAT_006d5334[iVar5 * 2 + -2];
                      puVar2[1] = puVar1[iVar5 * 2 + -1];
                    }
                    else {
                      puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_50 * 0x48);
                      puVar1 = DAT_006d5334 + (iVar5 + -1 + local_64) * 2;
                      *puVar2 = *puVar1;
                      puVar2[1] = puVar1[1];
                    }
                    piStack_14 = piStack_14 + 2;
                    local_1c = local_1c + 4;
                    local_28 = local_28 + -1;
                  } while (local_28 != 0);
                }
                iVar5 = iVar5 + 1;
                local_18 = local_18 + 500;
                local_20 = local_20 + 0x28;
                local_2c = local_2c + -1;
              } while (local_2c != 0);
            }
            local_70 = local_70 + 1;
            local_30 = local_30 + -1;
          } while (local_30 != 0);
        }
        iVar6 = iVar6 + 1;
        local_24 = local_24 + 0x14;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
  }
  puVar3 = PTR_DAT_0066ac78;
  if ((param_1 != 4) && (param_1 != 6)) {
    return;
  }
  do {
    uVar10 = 1;
    do {
      iVar5 = 1;
      do {
        piVar8 = &local_40;
        FUN_00648c98(uVar10,piVar8,iVar5);
        if (param_1 == 4) {
          local_44 = *(int *)(puVar3 + local_44 * 4 + 0x1a8);
          local_40 = *(int *)(puVar3 + local_40 * 4 + 0x1a8);
        }
        else if (param_1 == 6) {
          local_44 = *(int *)(puVar3 + local_44 * 4 + 0x2a8);
          local_40 = *(int *)(puVar3 + local_40 * 4 + 0x2a8);
        }
        if (param_1 == 4) {
          local_54 = local_54 + 1;
          FUN_0065a14c(local_54,local_44,local_40,0xffffffff,piVar8,1,4,piVar8);
          iVar6 = FUN_00405eec(DAT_006d5334);
          puVar1 = DAT_006d5334;
          if (0 < iVar6) {
            if (piVar8 == (int *)0x1) {
              puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_54 * 0x48);
              *puVar2 = *DAT_006d5334;
              puVar2[1] = puVar1[1];
            }
            else {
              puVar2 = (undefined4 *)(*(int *)PTR_DAT_0066afa0 + -0x18 + local_54 * 0x48);
              puVar1 = DAT_006d5334 + ((int)piVar8 + local_68 + -1) * 2;
              *puVar2 = *puVar1;
              puVar2[1] = puVar1[1];
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 3);
    } while (piVar8 != (int *)0x3);
  } while( true );
}

