// Address: 0062abf4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062abf4(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined3 uVar4;
  int unaff_EBX;
  undefined4 *puVar5;
  int *piVar6;
  int unaff_ESI;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 *local_20;
  
  local_20 = (undefined4 *)&stack0xfffffffc;
  iVar3 = 0x10;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  local_24 = (int *)&LAB_0062b973;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x62ac31;
  FUN_00466128(*(undefined4 *)(param_1 + 0x344),0);
  local_2c = 0x62ac41;
  FUN_00466128(*(undefined4 *)(param_1 + 0x348),0);
  local_2c = 0x62ac51;
  FUN_00466128(*(undefined4 *)(param_1 + 0x34c),0);
  _DAT_006d4b64 = *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x144 + unaff_EBX * 0x294);
  if (param_2 < 0) {
    param_2 = 0;
  }
  iVar3 = 0x28;
  puVar5 = &DAT_006d4a24;
  do {
    local_2c = 0x62ac92;
    FUN_00466238(*puVar5,0);
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    unaff_ESI = 0x28;
    local_2c = 0x62acca;
    FUN_00465978(*(undefined4 *)(param_1 + 0x2fc),*(int *)(DAT_006d49fc + 0x40) + 0x1e);
    local_2c = 0x62ace3;
    FUN_00465978(*(undefined4 *)(param_1 + 0x308),*(int *)(DAT_006d4a00 + 0x40) + 0x1e);
    iVar3 = 1;
    piVar6 = &DAT_006d4a24;
    piVar7 = &DAT_006d4ac4;
    do {
      local_2c = 0x62ad1c;
      FUN_00404b48(&local_28,
                   *(int *)PTR_DAT_0066af70 +
                   *(int *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -4 + iVar3 * 4) * 0x2f8);
      local_2c = 0x62ad26;
      FUN_00466238(*piVar6,local_28);
      local_2c = 0x62ad44;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -4 + iVar3 * 4),
                   &local_2c);
      uVar1 = local_2c;
      local_2c = 0x62ad53;
      FUN_00404928(*piVar6 + 0x80,uVar1);
      local_2c = 0x62ad71;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -4 + iVar3 * 4),
                   &local_30);
      if (local_30 == 0) {
        local_2c = 0x62adb0;
        FUN_0043aa68(*piVar7,0);
      }
      else {
        local_2c = 0x62ad95;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -4 + iVar3 * 4),
                     &local_34);
        local_2c = 0x62ada5;
        FUN_0042d6c0(*(undefined4 *)(*piVar7 + 0x168),local_34);
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 != 0xb);
    iVar3 = 0xb;
    piVar6 = &DAT_006d4a4c;
    piVar7 = &DAT_006d4aec;
    do {
      local_2c = 0x62adf9;
      FUN_00404b48(&local_38,
                   *(int *)PTR_DAT_0066af70 +
                   *(int *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x24 + iVar3 * 4) * 0x2f8);
      local_2c = 0x62ae03;
      FUN_00466238(*piVar6,local_38);
      local_2c = 0x62ae21;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x24 + iVar3 * 4),
                   &local_3c);
      local_2c = 0x62ae30;
      FUN_00404928(*piVar6 + 0x80,local_3c);
      local_2c = 0x62ae4e;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x24 + iVar3 * 4),
                   &local_40);
      if (local_40 == 0) {
        local_2c = 0x62ae8d;
        FUN_0043aa68(*piVar7,0);
      }
      else {
        local_2c = 0x62ae72;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x24 + iVar3 * 4),
                     &local_44);
        local_2c = 0x62ae82;
        FUN_0042d6c0(*(undefined4 *)(*piVar7 + 0x168),local_44);
      }
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 != 0x15);
    if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294) < 3) {
      iVar3 = 10;
      piVar6 = &DAT_006d4a74;
      local_20 = &DAT_006d49ac;
      puVar5 = &DAT_006d4b14;
      do {
        local_2c = 0x62b016;
        FUN_00466128(*piVar6,0);
        local_2c = 0x62b022;
        FUN_00466128(*local_20,0);
        local_2c = 0x62b02e;
        FUN_004048d4(*piVar6 + 0x80);
        local_2c = 0x62b037;
        FUN_00466128(*puVar5,0);
        puVar5 = puVar5 + 1;
        local_20 = local_20 + 1;
        piVar6 = piVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_2c = 0x62b054;
      FUN_00466128(*(undefined4 *)(param_1 + 0x300),0);
      local_2c = 0x62b060;
      FUN_00466128(DAT_006d4a04,0);
    }
    else {
      local_2c = 0x62aec6;
      FUN_00466128(DAT_006d4a04,CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
      iVar3 = 0x15;
      piVar6 = &DAT_006d4a74;
      puVar5 = &DAT_006d49ac;
      piVar7 = &DAT_006d4b14;
      do {
        local_2c = 0x62aee5;
        FUN_00466128(*piVar6,1);
        local_2c = 0x62aef1;
        FUN_00466128(*puVar5,1);
        local_2c = 0x62aefa;
        FUN_00466128(*piVar7,1);
        local_2c = 0x62af24;
        FUN_00404b48(&local_48,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x4c + iVar3 * 4) * 0x2f8
                    );
        local_2c = 0x62af2e;
        FUN_00466238(*piVar6,local_48);
        local_2c = 0x62af4c;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x4c + iVar3 * 4),
                     &local_4c);
        local_2c = 0x62af5b;
        FUN_00404928(*piVar6 + 0x80,local_4c);
        local_2c = 0x62af6b;
        FUN_00466128(*(undefined4 *)(param_1 + 0x300),1);
        local_2c = 0x62af84;
        FUN_00465978(*(undefined4 *)(param_1 + 0x300),*(int *)(DAT_006d4a04 + 0x40) + 0x1e);
        local_2c = 0x62afa2;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x4c + iVar3 * 4),
                     &local_50);
        if (local_50 == 0) {
          local_2c = 0x62afe1;
          FUN_0043aa68(*piVar7,0);
        }
        else {
          local_2c = 0x62afc6;
          FUN_00645508(*(undefined4 *)
                        (*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x4c + iVar3 * 4),&local_54);
          local_2c = 0x62afd6;
          FUN_0042d6c0(*(undefined4 *)(*piVar7 + 0x168),local_54);
        }
        iVar3 = iVar3 + 1;
        piVar7 = piVar7 + 1;
        puVar5 = puVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar3 != 0x1f);
    }
    if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294) < 4) {
      iVar3 = 10;
      piVar6 = &DAT_006d4a9c;
      local_24 = (int *)&DAT_006d49d4;
      puVar5 = &DAT_006d4b3c;
      do {
        local_2c = 0x62b1df;
        FUN_00466128(*piVar6,0);
        local_2c = 0x62b1eb;
        FUN_00466128(*local_24,0);
        local_2c = 0x62b1f4;
        FUN_00466128(*puVar5,0);
        local_2c = 0x62b200;
        FUN_004048d4(*piVar6 + 0x80);
        puVar5 = puVar5 + 1;
        local_24 = local_24 + 1;
        piVar6 = piVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_2c = 0x62b21d;
      FUN_00466128(*(undefined4 *)(param_1 + 0x304),0);
      local_2c = 0x62b229;
      FUN_00466128(DAT_006d4a08,0);
    }
    else {
      local_2c = 0x62b089;
      FUN_00466128(DAT_006d4a08,CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
      iVar3 = 0x1f;
      puVar5 = &DAT_006d49d4;
      local_24 = &DAT_006d4a9c;
      piVar6 = &DAT_006d4b3c;
      do {
        local_2c = 0x62b0a8;
        FUN_00466128(*puVar5,1);
        local_2c = 0x62b0b4;
        FUN_00466128(*local_24,1);
        local_2c = 0x62b0bd;
        FUN_00466128(*piVar6,1);
        local_2c = 0x62b0e7;
        FUN_00404b48(&local_58,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x74 + iVar3 * 4) * 0x2f8
                    );
        local_2c = 0x62b0f4;
        FUN_00466238(*local_24,local_58);
        local_2c = 0x62b112;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x74 + iVar3 * 4),
                     &local_5c);
        local_2c = 0x62b124;
        FUN_00404928(*local_24 + 0x80,local_5c);
        local_2c = 0x62b134;
        FUN_00466128(*(undefined4 *)(param_1 + 0x304),1);
        local_2c = 0x62b14d;
        FUN_00465978(*(undefined4 *)(param_1 + 0x304),*(int *)(DAT_006d4a08 + 0x40) + 0x1e);
        local_2c = 0x62b16b;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x74 + iVar3 * 4),
                     &local_60);
        if (local_60 == 0) {
          local_2c = 0x62b1aa;
          FUN_0043aa68(*piVar6,0);
        }
        else {
          local_2c = 0x62b18f;
          FUN_00645508(*(undefined4 *)
                        (*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + 0x74 + iVar3 * 4),&local_64);
          local_2c = 0x62b19f;
          FUN_0042d6c0(*(undefined4 *)(*piVar6 + 0x168),local_64);
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 1;
        local_24 = local_24 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar3 != 0x29);
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    local_2c = 0x62b247;
    FUN_00466128(DAT_006d4a04,0);
    local_2c = 0x62b253;
    FUN_00466128(DAT_006d4a08,0);
    if (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294)) {
      local_2c = 0x62b27c;
      FUN_00466128(*(undefined4 *)(param_1 + 0x344),
                   CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
      if (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294)) {
        local_2c = 0x62b2a5;
        FUN_00466128(*(undefined4 *)(param_1 + 0x348),
                     CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
      }
      if (3 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294)) {
        local_2c = 0x62b2ce;
        FUN_00466128(*(undefined4 *)(param_1 + 0x34c),
                     CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
      }
    }
    unaff_ESI = 0x28;
    local_2c = 0x62b2ee;
    FUN_00465978(*(undefined4 *)(param_1 + 0x2fc),*(int *)(DAT_006d49fc + 0x40) + 0x1e);
    local_2c = 0x62b307;
    FUN_00465978(*(undefined4 *)(param_1 + 0x308),*(int *)(DAT_006d4a00 + 0x40) + 0x1e);
    local_2c = 0x62b317;
    FUN_00466128(*(undefined4 *)(param_1 + 0x300),0);
    local_2c = 0x62b327;
    FUN_00466128(*(undefined4 *)(param_1 + 0x304),0);
    iVar3 = 1;
    piVar6 = &DAT_006d4a24;
    local_24 = &DAT_006d4ac4;
    do {
      local_2c = 0x62b362;
      FUN_00404b48(&local_68,
                   *(int *)PTR_DAT_0066af70 +
                   *(int *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -4 + iVar3 * 4) * 0x2f8);
      local_2c = 0x62b36c;
      FUN_00466238(*piVar6,local_68);
      local_2c = 0x62b382;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -4 + iVar3 * 4),
                   &local_6c);
      local_2c = 0x62b391;
      FUN_00404928(*piVar6 + 0x80,local_6c);
      local_2c = 0x62b3a7;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -4 + iVar3 * 4),
                   &local_70);
      if (local_70 == 0) {
        local_2c = 0x62b3e4;
        FUN_0043aa68(*local_24,0);
      }
      else {
        local_2c = 0x62b3c3;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -4 + iVar3 * 4),
                     &local_74);
        local_2c = 0x62b3d6;
        FUN_0042d6c0(*(undefined4 *)(*local_24 + 0x168),local_74);
      }
      iVar3 = iVar3 + 1;
      local_24 = local_24 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 != 0x15);
    if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294) < 2) {
      local_2c = 0x62b5c0;
      FUN_00466128(DAT_006d4a00,0);
      local_2c = 0x62b5d0;
      FUN_00466128(*(undefined4 *)(param_1 + 0x308),0);
    }
    else {
      local_2c = 0x62b41e;
      FUN_00466128(DAT_006d4a00,CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
      iVar3 = 0x15;
      local_24 = &DAT_006d4a74;
      puVar5 = &DAT_006d49ac;
      piVar6 = &DAT_006d4b14;
      do {
        local_2c = 0x62b440;
        FUN_00466128(*local_24,1);
        local_2c = 0x62b449;
        FUN_00466128(*puVar5,1);
        local_2c = 0x62b452;
        FUN_00466128(*piVar6,1);
        local_2c = 0x62b48c;
        FUN_00404b48(&local_78,
                     *(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -0xa4 + iVar3 * 4) *
                     0x2f8);
        local_2c = 0x62b499;
        FUN_00466238(*local_24,local_78);
        local_2c = 0x62b4c5;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -0xa4 + iVar3 * 4)
                     ,&local_7c);
        local_2c = 0x62b4d7;
        FUN_00404928(*local_24 + 0x80,local_7c);
        local_2c = 0x62b4e7;
        FUN_00466128(*(undefined4 *)(param_1 + 0x308),1);
        local_2c = 0x62b500;
        FUN_00465978(*(undefined4 *)(param_1 + 0x308),*(int *)(DAT_006d4a00 + 0x40) + 0x1e);
        local_2c = 0x62b52c;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -0xa4 + iVar3 * 4)
                     ,&local_80);
        if (local_80 == 0) {
          local_2c = 0x62b579;
          FUN_0043aa68(*piVar6,0);
        }
        else {
          local_2c = 0x62b55e;
          FUN_00645508(*(undefined4 *)
                        (*(int *)PTR_DAT_0066aca0 + param_2 * 0x294 + -0xa4 + iVar3 * 4),&local_84);
          local_2c = 0x62b56e;
          FUN_0042d6c0(*(undefined4 *)(*piVar6 + 0x168),local_84);
        }
        local_2c = 0x62b58a;
        FUN_00642c50(0x22,&local_88);
        local_2c = 0x62b59e;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_88);
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 1;
        puVar5 = puVar5 + 1;
        local_24 = local_24 + 1;
      } while (iVar3 != 0x29);
    }
  }
  if (0 < unaff_ESI) {
    puVar5 = &DAT_006d495c;
    piVar6 = &DAT_006d4a24;
    iVar3 = unaff_ESI;
    do {
      local_2c = 0x62b5ea;
      (**(code **)(*(int *)*puVar5 + 100))((int *)*puVar5,1);
      local_2c = 0x62b5f9;
      FUN_0042a3a0(*(undefined4 *)(*piVar6 + 0x68),0xffffff);
      piVar6 = piVar6 + 1;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0x1e;
  if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294) == 3) {
    iVar3 = 0x14;
  }
  else if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294) == 2) {
    iVar3 = 10;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294) < 2) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0x14;
    }
  }
  local_2c = 0x62b67a;
  cVar2 = FUN_00651f8c();
  if (cVar2 == '\0') {
    if (iVar3 != 0) {
      puVar5 = &DAT_006d495c;
      piVar6 = &DAT_006d4a24;
      do {
        local_2c = 0x62b69b;
        (**(code **)(*(int *)*puVar5 + 100))((int *)*puVar5,0);
        local_2c = 0x62b6aa;
        FUN_0042a3a0(*(undefined4 *)(*piVar6 + 0x68),0x808080);
        local_2c = 0x62b6c0;
        FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x68),0xc0c0c0);
        local_2c = 0x62b6d6;
        FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x68),0xc0c0c0);
        local_2c = 0x62b6ec;
        FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x300) + 0x68),0xc0c0c0);
        piVar6 = piVar6 + 1;
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    local_2c = 0x62b70a;
    FUN_00466128(*(undefined4 *)(param_1 + 0x310),0);
    local_2c = 0x62b71a;
    FUN_00466128(*(undefined4 *)(param_1 + 0x30c),0);
    local_2c = 0x62b72a;
    FUN_00466128(*(undefined4 *)(param_1 + 0x318),0);
    local_2c = 0x62b73a;
    FUN_00466128(*(undefined4 *)(param_1 + 0x314),0);
    local_2c = 0x62b750;
    FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x68),0xffffff);
    local_2c = 0x62b766;
    FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x68),0xffffff);
    local_2c = 0x62b77c;
    FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x300) + 0x68),0xffffff);
  }
  iVar3 = 0x28;
  puVar5 = &DAT_006d495c;
  do {
    local_2c = 0x62b792;
    (**(code **)(*(int *)*puVar5 + 0xcc))((int *)*puVar5,0);
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294);
    uVar4 = (undefined3)((uint)*(int *)PTR_DAT_0066aca0 >> 8);
    if (iVar3 == 2) {
      local_2c = 0x62b7dc;
      (**(code **)(*DAT_006d4984 + 0xcc))(DAT_006d4984,CONCAT31(uVar4,1));
    }
    else if (iVar3 == 3) {
      local_2c = 0x62b7ed;
      (**(code **)(*DAT_006d49ac + 0xcc))(DAT_006d49ac,CONCAT31(uVar4,1));
    }
    else if (iVar3 == 4) {
      local_2c = 0x62b7fe;
      (**(code **)(*DAT_006d49d4 + 0xcc))(DAT_006d49d4,CONCAT31(uVar4,1));
    }
    iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294);
    if (iVar3 == 2) {
      local_2c = 0x62b833;
      FUN_004663a8(DAT_006d4a4c,0x182f13);
    }
    else if (iVar3 == 3) {
      local_2c = 0x62b847;
      FUN_004663a8(DAT_006d4a74,0x182f13);
    }
    else if (iVar3 == 4) {
      local_2c = 0x62b85b;
      FUN_004663a8(DAT_006d4a9c,0x182f13);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294);
    uVar4 = (undefined3)((uint)*(int *)PTR_DAT_0066aca0 >> 8);
    if (iVar3 == 1) {
      local_2c = 0x62b88a;
      (**(code **)(*DAT_006d495c + 0xcc))(DAT_006d495c,CONCAT31(uVar4,1));
    }
    else if (iVar3 == 2) {
      local_2c = 0x62b89b;
      (**(code **)(*DAT_006d49ac + 0xcc))(DAT_006d49ac,CONCAT31(uVar4,1));
    }
    iVar3 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + param_2 * 0x294);
    if (iVar3 == 1) {
      local_2c = 0x62b8c8;
      FUN_004663a8(DAT_006d4a24,0x182f13);
    }
    else if (iVar3 == 2) {
      local_2c = 0x62b8d9;
      FUN_004663a8(DAT_006d4a74,0x182f13);
    }
  }
  if (0 < unaff_ESI) {
    piVar6 = &DAT_006d4a24;
    puVar5 = &DAT_006d495c;
    do {
      if (*(int *)(*piVar6 + 0x80) != 0) {
        local_2c = 0x62b902;
        iVar3 = FUN_00409ff8(*(undefined4 *)(*piVar6 + 0x80));
        if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar3 * 0x2f8) != '\0') {
          local_2c = 0x62b91d;
          (**(code **)(*(int *)*puVar5 + 100))((int *)*puVar5,0);
          local_2c = 0x62b92c;
          FUN_0042a3a0(*(undefined4 *)(*piVar6 + 0x68),0x808080);
          local_2c = 0x62b938;
          (**(code **)(*(int *)*puVar5 + 0xcc))((int *)*puVar5,0);
          local_2c = 0x62b944;
          FUN_004663a8(*piVar6,0x2d5b24);
        }
      }
      puVar5 = puVar5 + 1;
      piVar6 = piVar6 + 1;
      unaff_ESI = unaff_ESI + -1;
    } while (unaff_ESI != 0);
  }
  puVar5 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = (undefined4 *)&LAB_0062b97a;
  local_24 = (int *)0x62b965;
  FUN_00404ff0(&local_88,local_28,puVar5);
  local_24 = (int *)0x62b972;
  FUN_004048f8(&local_84,0x18);
  return;
}

