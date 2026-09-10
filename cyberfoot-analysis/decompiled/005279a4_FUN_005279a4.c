// Address: 005279a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005279a4(int param_1,int param_2,float *param_3,float *param_4,char param_5,char param_6,
                 char param_7,char param_8,undefined4 param_9)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined3 uVar8;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar9;
  byte bVar10;
  ushort uVar11;
  float afStackY_1894 [1516];
  float *pfVar12;
  float fVar13;
  undefined4 local_b8;
  int aiStack_b4 [4];
  int local_a4;
  float local_a0;
  float afStack_9c [4];
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float local_44 [4];
  int local_34;
  char local_2d;
  char local_2c;
  char local_2b;
  char local_2a;
  char local_29;
  undefined4 local_28;
  double local_24;
  double local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  bVar10 = 0;
  local_48 = *param_3;
  local_44[0] = param_3[1];
  local_44[1] = param_3[2];
  local_44[2] = param_3[3];
  local_2a = param_8;
  if (param_8 == -1) {
    local_2a = *(char *)(param_1 + 8);
  }
  if (param_7 == -1) {
    local_2b = *(char *)(param_1 + 0x10);
  }
  else {
    local_2b = param_7;
  }
  if (param_6 == -1) {
    local_2c = *(char *)(param_1 + 0x25);
  }
  else {
    local_2c = param_6;
  }
  if (param_5 == -1) {
    param_5 = *(char *)(param_1 + 0x2c);
  }
  local_29 = (char)param_9;
  if (local_29 == -1) {
    local_29 = *(char *)(param_1 + 0x8c);
    param_9 = CONCAT31((int3)((uint)param_9 >> 8),local_29);
  }
  uVar11 = (ushort)(local_44[2] < _DAT_005282e4) << 8 |
           (ushort)(NAN(local_44[2]) || NAN(_DAT_005282e4)) << 10 |
           (ushort)(local_44[2] == _DAT_005282e4) << 0xe;
  local_2d = param_5;
  if (((local_44[2] == _DAT_005282e4) != 0) ||
     (uVar11 = (ushort)(local_44[1] < _DAT_005282e4) << 8 |
               (ushort)(NAN(local_44[1]) || NAN(_DAT_005282e4)) << 10 |
               (ushort)(local_44[1] == _DAT_005282e4) << 0xe, (local_44[1] == _DAT_005282e4) != 0))
  {
    if ((0 < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 4) != 0x1fffffff)) {
      fVar13 = (float)*(int *)(param_1 + 0x38);
      uVar3 = FUN_004b1cd0(CONCAT31((int3)(CONCAT22((short)((uint)param_9 >> 0x10),uVar11) >> 8),
                                    local_29),*(undefined4 *)(param_1 + 4),param_3,fVar13);
      uVar3 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar3,fVar13);
      FUN_004b18c0(param_2,uVar3);
      FUN_00403a84(uVar3);
    }
    goto LAB_00527ffc;
  }
  if (param_2 == 0) {
    return;
  }
  local_8 = 0;
  if ((0 < *(int *)(param_1 + 0x20)) && (*(int *)(param_1 + 0x34) != 0x1fffffff)) {
    cVar2 = *(char *)(param_1 + 0x24);
    if (cVar2 == '\0') {
LAB_00527a7e:
      if (*(char *)(param_1 + 0x24) == '\x02') {
        local_c = FUN_0052698c(&local_48,*(undefined4 *)(param_1 + 0x20),3,1);
      }
      else {
        local_c = FUN_0052698c(&local_48,*(undefined4 *)(param_1 + 0x30),
                               *(undefined1 *)(param_1 + 0x78),1);
      }
      uVar3 = FUN_004b166c(PTR_DAT_004ae160,1,local_c);
      FUN_004b164c(uVar3,4);
      local_74 = FUN_004b1ca0(0,0,0,0);
      local_70 = FUN_004b1cd0(0xb4,*(undefined4 *)(param_1 + 0x34));
      local_6c = FUN_004b1cd0(0xb4,*(undefined4 *)(param_1 + 0x34));
      local_80 = 0;
      local_7c = 0x3dcccccd;
      local_78 = 0x3f800000;
      FUN_004b1604(uVar3,&local_74,&local_80,3);
      FUN_004b1c30(param_2,uVar3,local_c);
      FUN_00403a84(local_c);
      FUN_00403a84(uVar3);
      if (*(char *)(param_1 + 0x24) == '\x02') {
        local_48 = (float)*(int *)(param_1 + 0x20) + local_48;
        local_44[0] = (float)*(int *)(param_1 + 0x20) + local_44[0];
        local_44[1] = local_44[1] - (float)(*(int *)(param_1 + 0x20) * 2);
        local_a4 = *(int *)(param_1 + 0x20) * 2;
        local_44[2] = local_44[2] - (float)local_a4;
      }
      else {
        local_44[1] = local_44[1] - (float)*(int *)(param_1 + 0x20);
        local_44[2] = local_44[2] - (float)*(int *)(param_1 + 0x20);
      }
    }
    else if (cVar2 == '\x01') {
      local_a4 = *(int *)(param_1 + 0x20) * 2;
      aiStack_b4[3] = *(int *)(param_1 + 0x20) * 2;
      FUN_004aeba4(local_58,param_5,param_3,(float)aiStack_b4[3],local_44[1],
                   (local_44[0] + local_44[2]) - (float)local_a4,local_48);
      FUN_005272dc(param_2,local_58,*(undefined4 *)(param_1 + 0x34),2,
                   *(undefined4 *)(param_1 + 0x30),1,0xff,0,*(undefined4 *)(param_1 + 0x34));
      local_44[2] = local_44[2] - (float)*(int *)(param_1 + 0x20);
    }
    else if (cVar2 == '\x02') goto LAB_00527a7e;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (((iVar1 == 7) || (iVar1 == 9)) || (*(int *)(param_1 + 0x3c) == 0x1fffffff)) {
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0x1c) != 0x1fffffff) {
        uVar3 = *(undefined4 *)(param_1 + 0x44);
        if (*(int *)(param_1 + 0x44) == 0x1fffffff) {
          uVar3 = *(undefined4 *)(param_1 + 0x1c);
        }
        FUN_005272dc(param_2,&local_48,*(undefined4 *)(param_1 + 0x1c),
                     CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x30) >> 8),
                              *(undefined1 *)(param_1 + 0x78)),*(undefined4 *)(param_1 + 0x30),1,
                     local_2b,local_2a,uVar3);
      }
    }
    else {
      uVar8 = (undefined3)((uint)iVar1 >> 8);
      FUN_00527028(param_1,param_2,&local_48,CONCAT31(uVar8,local_2d),CONCAT31(uVar8,local_2c),
                   CONCAT31(uVar8,local_2b),CONCAT31(uVar8,local_2a),0);
    }
  }
  else {
    local_1c = (double)local_44[2];
    local_24 = local_1c / (double)_DAT_005282e8;
    FUN_004aeba4(local_58);
    if (*(int *)(param_1 + 0xc) == 1) {
      if (*(int *)(param_1 + 0x1c) != 0x1fffffff) {
        uVar3 = *(undefined4 *)(param_1 + 0x44);
        if (*(int *)(param_1 + 0x44) == 0x1fffffff) {
          uVar3 = *(undefined4 *)(param_1 + 0x1c);
        }
        FUN_005272dc(param_2,local_58,*(undefined4 *)(param_1 + 0x1c),1,
                     *(undefined4 *)(param_1 + 0x30),1,local_2b,local_2a,uVar3);
      }
    }
    else {
      FUN_00527028(param_1,param_2,local_58,local_2d,local_2c,local_2b,local_2a,0);
    }
    FUN_004aeba4(local_68);
    if (*(int *)(param_1 + 0x28) == 1) {
      if (*(int *)(param_1 + 0x3c) != 0x1fffffff) {
        uVar3 = *(undefined4 *)(param_1 + 0x40);
        if (*(int *)(param_1 + 0x40) == 0x1fffffff) {
          uVar3 = *(undefined4 *)(param_1 + 0x3c);
        }
        FUN_005272dc(param_2,local_68,*(undefined4 *)(param_1 + 0x3c),2,
                     *(undefined4 *)(param_1 + 0x30),0,local_2d,local_2c,uVar3);
      }
    }
    else {
      FUN_00527028(param_1,param_2,local_68,local_2d,local_2c,local_2b,local_2a,1);
    }
  }
  if (local_8 != 0) {
    FUN_00403a84(local_8);
  }
  if ((*(char *)(param_1 + 0x9d) == '\0') &&
     (cVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x1c))(), cVar2 == '\0')) {
    FUN_004b0854(*(undefined4 *)(param_1 + 0x68));
    uVar3 = (**(code **)(**(int **)(param_1 + 0x68) + 0x2c))();
    local_28 = (**(code **)(**(int **)(param_1 + 0x68) + 0x20))();
    uVar4 = FUN_00402c38();
    pfVar12 = afStack_9c + 3;
    uVar5 = FUN_00402c38();
    uVar6 = FUN_00402c38();
    uVar7 = FUN_00402c38();
    FUN_00407174(uVar7,uVar6,uVar5,pfVar12,uVar4);
    if (*(int *)(param_1 + 0xc) == 9) {
      local_8 = 0;
      local_34 = 0;
      if (*(char *)(param_1 + 0x9d) == '\0') {
        local_a0 = local_48;
        afStack_9c[(uint)bVar10 * -2] = local_44[(uint)bVar10 * -2];
        afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             local_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        (afStack_9c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (local_44 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        local_8 = FUN_0052698c(&local_a0,*(undefined4 *)(param_1 + 0x30),
                               *(undefined1 *)(param_1 + 0x78),0);
        local_34 = FUN_004b12c8(PTR_DAT_004add1c,1,local_8);
        FUN_004b1c5c(param_2,local_34,0);
      }
      if (*(char *)(param_1 + 100) == '\v') {
        FUN_005274fc(param_2,*(undefined1 *)(param_1 + 0xac),*(undefined1 *)(param_1 + 0xae),
                     *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),afStack_9c + 3,
                     local_28,uVar3,
                     CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x68) >> 8),
                              *(undefined1 *)(param_1 + 100)),*(undefined4 *)(param_1 + 0x68));
      }
      else {
        FUN_005274fc(param_2,*(undefined1 *)(param_1 + 0xac),*(undefined1 *)(param_1 + 0xae),
                     local_8c,afStack_9c[3],afStack_9c + 3,local_28,uVar3,
                     CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x68) >> 8),
                              *(undefined1 *)(param_1 + 100)),*(undefined4 *)(param_1 + 0x68));
      }
      if (*(char *)(param_1 + 0x9d) == '\0') {
        FUN_004b1c84(param_2);
        if (local_34 != 0) {
          FUN_00403a84(local_34);
        }
        if (local_8 != 0) {
          FUN_00403a84(local_8);
        }
      }
    }
  }
  if ((0 < *(int *)(param_1 + 0x38)) && (*(int *)(param_1 + 4) != 0x1fffffff)) {
    local_14 = FUN_0052698c(&local_48,*(undefined4 *)(param_1 + 0x30),
                            *(undefined1 *)(param_1 + 0x78),0);
    fVar13 = (float)*(int *)(param_1 + 0x38);
    uVar3 = FUN_004b1cd0(local_29,*(undefined4 *)(param_1 + 4));
    uVar3 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar3,fVar13);
    FUN_004aed50(uVar3,0);
    FUN_004af5f4(param_2,uVar3,local_14);
    FUN_00403a84(uVar3);
    FUN_00403a84(local_14);
  }
LAB_00527ffc:
  FUN_00526a28(param_1,param_2,&local_48);
  local_a4 = *(int *)(param_1 + 0x38);
  aiStack_b4[3] = local_a4 * 2;
  FUN_004aeba4(&local_b8);
  puVar9 = (undefined4 *)(param_1 + 0x91 + (uint)bVar10 * -8);
  *(undefined4 *)(param_1 + 0x8d) = local_b8;
  pfVar12 = (float *)(puVar9 + (uint)bVar10 * -2 + 1);
  *puVar9 = *(undefined4 *)((int)aiStack_b4 + (uint)bVar10 * 0xfffffff8);
  *pfVar12 = afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -5];
  pfVar12[(uint)bVar10 * -2 + 1] =
       (afStack_9c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -5)[(uint)bVar10 * -2 + 1];
  if (*(char *)(param_1 + 0x80) != '\0') {
    local_10 = FUN_0052698c(param_1 + 0x8d,*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x38),
                            *(undefined1 *)(param_1 + 0x78),0);
    local_44[3] = (float)FUN_004af5a8(param_2);
    FUN_004af5d4(param_2,0);
    uVar4 = 0x3f800000;
    uVar3 = FUN_004b1cd0(local_2a,*(undefined4 *)(param_1 + 0x84));
    uVar3 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar3,uVar4);
    FUN_004aed50(uVar3,2);
    FUN_004af5f4(param_2,uVar3,local_10);
    FUN_00403a84(uVar3);
    FUN_00403a84(local_10);
    FUN_004af5d4(param_2,local_44[3]);
  }
  if ((*(char *)(param_1 + 0x9d) == '\x01') &&
     (cVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x1c))(), cVar2 == '\0')) {
    FUN_004b0854(*(undefined4 *)(param_1 + 0x68));
    uVar3 = (**(code **)(**(int **)(param_1 + 0x68) + 0x2c))();
    local_28 = (**(code **)(**(int **)(param_1 + 0x68) + 0x20))();
    uVar4 = FUN_00402c38();
    pfVar12 = afStack_9c + 3;
    uVar5 = FUN_00402c38();
    uVar6 = FUN_00402c38();
    uVar7 = FUN_00402c38();
    FUN_00407174(uVar7,uVar6,uVar5,pfVar12,uVar4);
    if (*(int *)(param_1 + 0xc) == 9) {
      if (*(char *)(param_1 + 100) == '\v') {
        FUN_005274fc(param_2,*(undefined1 *)(param_1 + 0xad),*(undefined1 *)(param_1 + 0xaf),
                     *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),afStack_9c + 3,
                     local_28,uVar3,
                     CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x68) >> 8),
                              *(undefined1 *)(param_1 + 100)),*(undefined4 *)(param_1 + 0x68));
      }
      else {
        FUN_005274fc(param_2,*(undefined1 *)(param_1 + 0xad),*(undefined1 *)(param_1 + 0xaf),
                     local_8c,afStack_9c[3],afStack_9c + 3,local_28,uVar3,
                     CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x68) >> 8),
                              *(undefined1 *)(param_1 + 100)),*(undefined4 *)(param_1 + 0x68));
      }
    }
  }
  uVar3 = 0;
  local_28 = 0;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
  if (cVar2 == '\0') {
    FUN_004b0854(*(undefined4 *)(param_1 + 0x14));
    if (*(char *)(param_1 + 0x70) == '\0') {
      uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))();
      local_28 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    }
    else if (*(char *)(param_1 + 0x70) == '\x01') {
      uVar3 = *(undefined4 *)(param_1 + 0x6c);
      local_28 = *(undefined4 *)(param_1 + 0x74);
    }
    uVar4 = FUN_00402c38();
    pfVar12 = afStack_9c + 3;
    uVar5 = FUN_00402c38();
    uVar6 = FUN_00402c38();
    uVar7 = FUN_00402c38();
    FUN_00407174(uVar7,uVar6,uVar5,pfVar12,uVar4);
    if (*(char *)(param_1 + 9) == '\v') {
      FUN_005274fc(param_2,CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x14) >> 8),
                                    *(undefined1 *)(param_1 + 0xad)),*(undefined1 *)(param_1 + 0xaf)
                   ,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),afStack_9c + 3,
                   local_28,uVar3,0xb,*(undefined4 *)(param_1 + 0x14));
    }
    else {
      FUN_005274fc(param_2,CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x14) >> 8),
                                    *(undefined1 *)(param_1 + 0xad)),*(undefined1 *)(param_1 + 0xaf)
                   ,local_8c,afStack_9c[3],afStack_9c + 3,local_28,uVar3,*(char *)(param_1 + 9),
                   *(undefined4 *)(param_1 + 0x14));
    }
  }
  pfVar12 = param_4 + (uint)bVar10 * -2 + 1;
  *param_4 = local_48;
  *pfVar12 = local_44[(uint)bVar10 * -2];
  pfVar12[(uint)bVar10 * -2 + 1] = local_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  (pfVar12 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
       (local_44 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  return;
}

