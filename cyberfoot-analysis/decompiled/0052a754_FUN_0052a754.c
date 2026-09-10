// Address: 0052a754
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052a754(int param_1,undefined4 param_2,int param_3,char param_4,int *param_5,char param_6,
                 char param_7,undefined1 param_8,undefined1 param_9,int param_10,undefined4 param_11
                 ,undefined4 param_12,int param_13,int param_14,int param_15,int param_16)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  float fVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined1 local_88 [19];
  undefined1 local_75 [12];
  float local_69;
  undefined1 local_65 [8];
  float local_5d;
  float local_59;
  undefined1 local_55 [8];
  float local_4d;
  float local_49;
  byte local_45;
  double local_44;
  double local_3c;
  float local_34;
  float local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_a0 = 0;
  local_9c = 0;
  local_94 = 0;
  local_98 = 0;
  puStack_b0 = (undefined1 *)0x52a78d;
  local_c = param_3;
  local_8 = param_2;
  FUN_00404d94(param_3);
  puStack_b4 = &LAB_0052b104;
  uStack_b8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b8;
  local_45 = *(byte *)(param_1 + 0x10);
  local_28 = param_12;
  local_2c = param_13;
  puStack_b0 = &stack0xfffffffc;
  FUN_004aeba4(local_75);
  uVar2 = FUN_0052698c(local_75,4,3,0);
  uVar3 = FUN_004b1cd0(param_8,local_28);
  uVar4 = FUN_004b1cd0(param_8,local_28);
  uVar10 = 1;
  FUN_004aeba4(local_88);
  local_10 = FUN_004aef34(PTR_DAT_004adf94,1,local_88,uVar10,uVar4,uVar3);
  FUN_004b1c30(local_8,local_10,uVar2);
  FUN_00403a84(uVar2);
  FUN_004aeba4(local_75);
  uVar2 = FUN_0052698c(local_75,4,1,0);
  uVar3 = FUN_004b1cd0(0x7d,0xffffff);
  uVar4 = FUN_004b1cd0(0x1e,0xffffff);
  uVar10 = 1;
  fVar8 = local_69 + _DAT_0052b118;
  FUN_004aeba4(local_88);
  local_10 = FUN_004aef34(PTR_DAT_004adf94,1,local_88,uVar10,uVar4,uVar3);
  FUN_004b1c30(local_8,local_10,uVar2);
  FUN_00403a84(uVar2);
  FUN_00403a84(local_10);
  local_3c = 0.0;
  local_44 = 0.0;
  if ((param_7 != '\0') && (0 < param_10)) {
    uVar2 = FUN_00402c38();
    puVar11 = local_88;
    uVar3 = FUN_00402c38();
    uVar4 = FUN_00402c38();
    uVar10 = FUN_00402c38();
    FUN_00407174(uVar10,uVar4,uVar3,puVar11,uVar2);
    uVar2 = FUN_0052a50c(local_88,4,3,param_10);
    uVar3 = FUN_004b1cd0(param_9,param_11);
    local_14 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar3);
    FUN_004b1c30(local_8,local_14,uVar2);
    FUN_00403a84(local_14);
    FUN_00403a84(uVar2);
  }
  local_14 = 0;
  iVar7 = 0;
  local_1c = 0;
  local_18 = 0;
  if (local_c != 0) {
    if (param_6 == '\0') {
      FUN_004aeba4(local_65);
    }
    else {
      local_8c = param_16 + 1;
      local_90 = param_15 + 1;
      FUN_004aeba4(local_65);
    }
    if ((param_5 != (int *)0x0) && (cVar1 = (**(code **)(*param_5 + 0x1c))(), cVar1 == '\0')) {
      FUN_004b0854(param_5);
      if (local_45 < 2) {
        local_8c = (**(code **)(*param_5 + 0x2c))();
        local_5d = (local_5d - (float)local_8c) - (float)*(int *)(param_1 + 0x14);
      }
      else if ((byte)(local_45 - 2) < 2) {
        local_8c = (**(code **)(*param_5 + 0x20))();
        local_59 = (local_59 - (float)local_8c) - (float)*(int *)(param_1 + 0x14);
      }
    }
    uVar2 = 0;
    FUN_0042a5b0(*(undefined4 *)(param_1 + 4),&local_98);
    FUN_004051d4(&local_94,local_98);
    local_18 = FUN_004b134c(PTR_DAT_004addd4,1,local_94,uVar2);
    uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 4));
    cVar1 = (uVar5 & 1) != 0;
    uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 4));
    if ((uVar5 & 2) != 0) {
      cVar1 = cVar1 + '\x02';
    }
    uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 4));
    if ((uVar5 & 4) != 0) {
      cVar1 = cVar1 + '\x04';
    }
    local_1c = FUN_004aebc4(PTR_DAT_004ae0a8,1,0,0);
    FUN_004af588(local_8,5);
    local_8c = FUN_0042a624(*(undefined4 *)(param_1 + 4));
    iVar7 = FUN_004b140c(PTR_DAT_004ade30,1,local_18,3,cVar1,(float)local_8c);
    puVar11 = local_65;
    puVar9 = local_55;
    uVar3 = 0;
    uStack_b8 = 0;
    iVar6 = local_1c;
    iVar12 = iVar7;
    uVar2 = FUN_00404ba4(local_c);
    FUN_004051d4(&local_9c,local_c);
    FUN_004af67c(local_8,local_9c,uVar2,fVar8,uVar3,puVar9,iVar6,puVar11,iVar12);
    uVar2 = FUN_004ae808(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
    local_14 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar2);
    local_3c = (double)local_4d;
    local_44 = (double)local_49;
    FUN_004aeb90(&local_34);
    if ((param_5 != (int *)0x0) && (cVar1 = (**(code **)(*param_5 + 0x1c))(), cVar1 == '\0')) {
      if (local_45 == 0) {
        FUN_004aeb90(&local_34);
        if (local_34 < (float)*(int *)(param_1 + 0x14)) {
          local_34 = (float)*(int *)(param_1 + 0x14);
        }
        local_8c = (**(code **)(*param_5 + 0x2c))();
        local_34 = (float)*(int *)(param_1 + 0x14) + (float)local_8c + local_34;
      }
      else if (local_45 == 1) {
        FUN_004aeb90(&local_34);
        if (local_34 < (float)*(int *)(param_1 + 0x14)) {
          local_34 = (float)*(int *)(param_1 + 0x14);
          iVar6 = (**(code **)(*param_5 + 0x2c))();
          local_8c = ((param_14 - iVar6) - *(int *)(param_1 + 0x14)) - *(int *)(param_1 + 0x14);
          local_3c = (double)local_8c;
          local_5d = (float)local_8c;
        }
      }
      else if (local_45 == 2) {
        FUN_004aeb90(&local_34);
      }
      else if (local_45 == 3) {
        FUN_004aeb90(&local_34);
        local_8c = (**(code **)(*param_5 + 0x20))();
        local_30 = (float)*(int *)(param_1 + 0x14) + (float)local_8c + local_30;
      }
    }
    FUN_004aeba4(local_65);
  }
  if ((param_5 != (int *)0x0) && (cVar1 = (**(code **)(*param_5 + 0x1c))(), cVar1 == '\0')) {
    FUN_004b0854(param_5);
    iVar6 = (**(code **)(*param_5 + 0x2c))();
    local_20 = param_14 - iVar6 >> 1;
    if (local_20 < 0) {
      local_20 = local_20 + (uint)((param_14 - iVar6 & 1U) != 0);
    }
    iVar6 = (**(code **)(*param_5 + 0x20))();
    local_24 = local_2c - iVar6 >> 1;
    if (local_24 < 0) {
      local_24 = local_24 + (uint)((local_2c - iVar6 & 1U) != 0);
    }
    if (param_6 != '\0') {
      local_20 = local_20 + 2;
      local_24 = local_24 + 2;
    }
    if ((local_c == 0) || (local_45 == 4)) {
      uVar2 = (**(code **)(*param_5 + 0x20))();
      puVar11 = local_88;
      uVar3 = (**(code **)(*param_5 + 0x2c))();
      FUN_00407174(local_20 + param_16,local_24 + param_15,uVar3,puVar11,uVar2);
      FUN_004b0b90(param_5,local_8,local_88);
    }
    else if (local_45 == 0) {
      local_8c = (**(code **)(*param_5 + 0x2c))();
      local_20 = FUN_00402c38();
      uVar2 = (**(code **)(*param_5 + 0x20))();
      puVar11 = local_88;
      uVar3 = (**(code **)(*param_5 + 0x2c))();
      FUN_00407174(local_20,local_24 + param_15,uVar3,puVar11,uVar2);
      FUN_004b0b90(param_5,local_8,local_88);
    }
    else if (local_45 == 1) {
      local_20 = FUN_00402c38();
      uVar2 = (**(code **)(*param_5 + 0x20))();
      puVar11 = local_88;
      uVar3 = (**(code **)(*param_5 + 0x2c))();
      FUN_00407174(local_20,local_24 + param_15,uVar3,puVar11,uVar2);
      FUN_004b0b90(param_5,local_8,local_88);
    }
    else if (local_45 == 2) {
      local_24 = FUN_00402c38();
      uVar2 = (**(code **)(*param_5 + 0x20))();
      puVar11 = local_88;
      uVar3 = (**(code **)(*param_5 + 0x2c))();
      FUN_00407174(local_20 + param_16,local_24,uVar3,puVar11,uVar2);
      FUN_004b0b90(param_5,local_8,local_88);
    }
    else if (local_45 == 3) {
      local_8c = (**(code **)(*param_5 + 0x20))();
      local_24 = FUN_00402c38();
      uVar2 = (**(code **)(*param_5 + 0x20))();
      puVar11 = local_88;
      uVar3 = (**(code **)(*param_5 + 0x2c))();
      FUN_00407174(local_20 + param_16,local_24,uVar3,puVar11,uVar2);
      FUN_004b0b90(param_5,local_8,local_88);
    }
  }
  if ((((local_c != 0) && (local_1c != 0)) && (local_14 != 0)) && ((iVar7 != 0 && (local_18 != 0))))
  {
    FUN_004aec9c(local_1c,1);
    if (param_4 == '\0') {
      pfVar13 = &local_34;
      iVar6 = local_14;
      iVar12 = local_1c;
      iVar14 = iVar7;
      uVar2 = FUN_00404ba4(local_c);
      FUN_004051d4(&local_a0,local_c);
      FUN_004af7a4(local_8,local_a0,uVar2,iVar6,iVar12,pfVar13,iVar14);
    }
    else {
      puVar11 = local_65;
      iVar6 = local_14;
      iVar12 = local_1c;
      iVar14 = iVar7;
      uVar2 = FUN_00404ba4(local_c);
      FUN_004af9d4(local_8,local_c,uVar2,iVar6,iVar12,puVar11,iVar14);
    }
    FUN_00403a84(local_14);
    FUN_00403a84(iVar7);
    FUN_00403a84(local_18);
  }
  puVar11 = puStack_b0;
  *in_FS_OFFSET = uStack_b8;
  puStack_b0 = &LAB_0052b10b;
  puStack_b4 = (undefined1 *)0x52b0e5;
  FUN_00405008(&local_a0,2,puVar11);
  puStack_b4 = (undefined1 *)0x52b0f0;
  FUN_004048d4(&local_98);
  puStack_b4 = (undefined1 *)0x52b0fb;
  FUN_00404ff0(&local_94);
  puStack_b4 = (undefined1 *)0x52b103;
  FUN_004048d4(&local_c);
  return;
}

