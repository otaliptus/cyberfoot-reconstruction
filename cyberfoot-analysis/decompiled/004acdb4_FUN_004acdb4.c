// Address: 004acdb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004acdb4(int *param_1,byte *param_2,undefined4 *param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  int *piVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint **ppuVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uStack_678;
  undefined1 *puStack_674;
  undefined1 *puStack_670;
  undefined4 uStack_66c;
  undefined1 *puStack_668;
  undefined1 *puStack_664;
  uint local_654 [256];
  uint auStack_254 [128];
  undefined1 local_54 [32];
  uint *local_34;
  undefined4 *local_30;
  uint local_2c;
  uint local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_664 = (undefined1 *)0x4acdd6;
  local_c = param_3;
  local_8 = param_1;
  FUN_00405628(local_54,PTR_DAT_0041ad38);
  puStack_668 = &LAB_004ad0e7;
  uStack_66c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_66c;
  local_14 = 0;
  puStack_674 = &LAB_004ad0c4;
  uStack_678 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_678;
  uVar7 = (uint)param_2[1];
  puStack_670 = &stack0xfffffffc;
  puStack_664 = &stack0xfffffffc;
  if (0x40 < uVar7) {
    puStack_670 = &stack0xfffffffc;
    puStack_664 = &stack0xfffffffc;
    FUN_0040e42c(PTR_DAT_004ac518,1,PTR_PTR_0066b01c);
    FUN_00404250();
  }
  if (uVar7 != 0) {
    local_18 = param_5;
    local_1c = local_654 + uVar7 * 4;
    uVar5 = 0;
    do {
      puVar1 = local_18;
      local_1c = local_1c + -4;
      local_10 = (uint)(param_2[uVar5 + 3] & 0x7f);
      bVar2 = param_2[uVar5 + 3] & 0x80;
      if (local_10 == 10) {
        *local_1c = 10;
        local_1c[2] = 0x80020004;
      }
      else {
        if (local_10 == 0x48) {
          local_20 = auStack_254 + local_14 * 2;
          if (bVar2 == 0) {
            uVar3 = FUN_00405bf0(*local_18);
            *local_20 = uVar3;
            local_20[1] = 0;
            *local_1c = 8;
            local_1c[2] = *local_20;
          }
          else {
            uVar3 = FUN_00405bf0(*(undefined4 *)*local_18);
            *local_20 = uVar3;
            local_20[1] = *local_18;
            *local_1c = 0x4008;
            local_1c[2] = (uint)local_20;
          }
          local_14 = local_14 + 1;
        }
        else if (bVar2 == 0) {
          if (local_10 == 0xc) {
            if ((short)*local_18 == 0x100) {
              local_24 = auStack_254 + local_14 * 2;
              uVar3 = FUN_00405bf0(local_18[2]);
              *local_24 = uVar3;
              local_24[1] = 0;
              *local_1c = 8;
              local_1c[2] = *local_24;
              local_14 = local_14 + 1;
            }
            else {
              *local_1c = *local_18;
              local_1c[1] = puVar1[1];
              local_1c[2] = puVar1[2];
              local_1c[3] = puVar1[3];
              local_18 = local_18 + 3;
            }
          }
          else {
            *local_1c = local_10;
            local_1c[2] = *local_18;
            if ((4 < (int)local_10) && ((int)local_10 < 8)) {
              local_18 = local_18 + 1;
              local_1c[3] = *local_18;
            }
          }
        }
        else {
          if ((local_10 == 0xc) && (*(short *)*local_18 == 0x100)) {
            FUN_004126a8(*local_18,*local_18,8);
          }
          *local_1c = local_10 | 0x4000;
          local_1c[2] = *local_18;
        }
        local_18 = local_18 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
  local_34 = local_654;
  local_30 = local_c + 1;
  local_28 = (uint)param_2[2];
  uVar9 = *local_c;
  uVar5 = (uint)*param_2;
  if (uVar5 == 4) {
    if ((local_654[0] & 0xfff) == 9) {
      uVar5 = 8;
    }
    *local_c = 0xfffffffd;
    local_30 = local_c;
    local_28 = local_28 + 1;
  }
  else if (((uVar5 == 1) && (uVar7 == 0)) && (param_4 != 0)) {
    uVar5 = 3;
  }
  uVar14 = 0;
  puVar13 = local_54;
  ppuVar12 = &local_34;
  uVar11 = 0;
  piVar8 = local_8;
  puVar10 = PTR_DAT_0066ad5c;
  local_2c = uVar7;
  iVar4 = (**(code **)(*local_8 + 0x18))();
  iVar6 = local_14;
  if (iVar4 != 0) {
    FUN_004ad394(iVar4,local_54);
    iVar6 = local_14;
  }
  while (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    if (auStack_254[iVar6 * 2 + 1] != 0) {
      FUN_00405bcc(auStack_254[iVar6 * 2],auStack_254[iVar6 * 2 + 1],auStack_254[iVar6 * 2],piVar8,
                   uVar9,puVar10,uVar11,uVar5,ppuVar12,param_4,puVar13,uVar14);
    }
  }
  *in_FS_OFFSET = piVar8;
  iVar6 = local_14;
  while (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    SysFreeString((BSTR)auStack_254[iVar6 * 2]);
  }
  return;
}

