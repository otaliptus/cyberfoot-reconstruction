// Address: 00557fe0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557fe0(int param_1)

{
  float10 fVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  char cVar8;
  float10 in_ST0;
  float10 fVar9;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 in_stack_ffffff18;
  undefined1 *in_stack_ffffff20;
  float *pfVar14;
  undefined4 uVar15;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float10 local_94;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  float local_68;
  float local_64;
  undefined1 local_58 [8];
  float local_50;
  float local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_c0 = &stack0xfffffffc;
  local_a0 = 0;
  local_98 = 0;
  local_9c = 0;
  local_88 = 0;
  local_7c = 0;
  local_80 = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  puStack_c4 = &LAB_00558880;
  uStack_c8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c8;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  local_44 = FUN_0042fcb8(PTR_PTR_00429378,1);
  FUN_00430280(local_44);
  uVar3 = FUN_0042b5a8();
  uVar3 = FUN_004af018(PTR_DAT_004ae274,1,uVar3);
  FUN_004af588(uVar3,4);
  FUN_004aeba4(&local_68);
  iVar4 = FUN_0041edb0(*(undefined4 *)(param_1 + 0xbc));
  if (0 < iVar4) {
    uVar15 = 0;
    FUN_0042a5b0(*(undefined4 *)(param_1 + 0xd0),&local_80);
    FUN_004051d4(&local_7c,local_80);
    local_8 = FUN_004b134c(PTR_DAT_004addd4,1,local_7c,uVar15);
    if (*(int *)(local_8 + 8) - 0xeU < 2) {
      FUN_00403a84(local_8);
      local_8 = FUN_004b134c(PTR_DAT_004addd4,1,L"Arial",0);
    }
    uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 0xd0));
    cVar8 = (uVar5 & 1) != 0;
    uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 0xd0));
    if ((uVar5 & 2) != 0) {
      cVar8 = cVar8 + '\x02';
    }
    uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 0xd0));
    if ((uVar5 & 4) != 0) {
      cVar8 = cVar8 + '\x04';
    }
    local_10 = FUN_004aebc4(PTR_DAT_004ae0a8,1,0,0);
    local_84 = FUN_0042a624(*(undefined4 *)(param_1 + 0xd0));
    local_c = FUN_004b140c(PTR_DAT_004ade30,1,local_8,3,cVar8,(float)local_84);
    local_1c = 0.0;
    local_24 = 0.0;
    in_stack_ffffff20 = local_58;
    in_stack_ffffff18 = 0;
    FUN_004af67c(uVar3,&DAT_005588a4,2,0,0,in_stack_ffffff20,local_10,&local_68,local_c);
    iVar4 = FUN_0041edb0(*(undefined4 *)(param_1 + 0xbc));
    if (-1 < iVar4 + -1) {
      iVar7 = 0;
      local_48 = iVar4;
      do {
        uVar2 = SUB42(local_58,0);
        uVar12 = 0;
        uVar11 = 0;
        uVar15 = local_10;
        iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
        uVar6 = FUN_00404ba4(*(undefined4 *)(iVar4 + 0x30));
        iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
        FUN_004051d4(&local_88,*(undefined4 *)(iVar4 + 0x30));
        FUN_004af67c(uVar3,local_88,uVar6,uVar11,uVar12,uVar2,uVar15);
        iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
        fVar9 = in_ST1;
        fVar10 = in_ST3;
        if (*(int *)(iVar4 + 0x28) != 0) {
          iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
          cVar8 = (**(code **)(**(int **)(iVar4 + 0x28) + 0x1c))();
          fVar9 = in_ST1;
          fVar10 = in_ST3;
          if (cVar8 == '\0') {
            iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
            FUN_004b0854(*(undefined4 *)(iVar4 + 0x28));
            iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
            if ((*(char *)(iVar4 + 0x38) == '\0') ||
               (iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7),
               *(char *)(iVar4 + 0x38) == '\x01')) {
              iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
              local_84 = (**(code **)(**(int **)(iVar4 + 0x28) + 0x2c))();
              local_94 = (float10)local_84 + (float10)local_50;
              iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
              local_50 = (float)(local_94 + (float10)*(int *)(iVar4 + 0x3c));
              fVar9 = in_ST1;
              fVar10 = in_ST3;
            }
            else {
              iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
              local_84 = (**(code **)(**(int **)(iVar4 + 0x28) + 0x2c))();
              local_50 = (float)local_84;
              fVar9 = in_ST1;
              fVar10 = in_ST3;
            }
          }
        }
        in_ST3 = in_ST5;
        in_ST1 = fVar10;
        fVar10 = in_ST3;
        FUN_00432434();
        local_50 = (float)in_ST0;
        if ((float)local_1c < local_50) {
          local_1c = (double)local_50;
        }
        iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
        in_ST0 = in_ST2;
        fVar1 = in_ST4;
        if (*(int *)(iVar4 + 0x28) != 0) {
          iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
          cVar8 = (**(code **)(**(int **)(iVar4 + 0x28) + 0x1c))();
          in_ST0 = in_ST2;
          fVar1 = in_ST4;
          if (cVar8 == '\0') {
            iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
            FUN_004b0854(*(undefined4 *)(iVar4 + 0x28));
            iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
            if ((*(char *)(iVar4 + 0x38) == '\x03') ||
               (iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7),
               *(char *)(iVar4 + 0x38) == '\x02')) {
              iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
              local_84 = (**(code **)(**(int **)(iVar4 + 0x28) + 0x20))();
              local_94 = (float10)local_84 + (float10)local_4c;
              iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
              local_4c = (float)(local_94 + (float10)*(int *)(iVar4 + 0x3c));
              in_ST0 = in_ST2;
              fVar1 = in_ST4;
            }
            else {
              iVar4 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar7);
              local_84 = (**(code **)(**(int **)(iVar4 + 0x28) + 0x20))();
              local_4c = (float)local_84;
              in_ST0 = in_ST2;
              fVar1 = in_ST4;
            }
          }
        }
        in_ST4 = fVar10;
        in_ST2 = fVar1;
        in_ST5 = in_ST4;
        FUN_00432434();
        local_4c = (float)fVar9;
        if ((float)local_24 < local_4c) {
          local_24 = (double)local_4c;
        }
        iVar7 = iVar7 + 1;
        local_48 = local_48 + -1;
      } while (local_48 != 0);
    }
    *(undefined4 *)(param_1 + 0x38) = (undefined4)local_1c;
    *(undefined4 *)(param_1 + 0x3c) = local_1c._4_4_;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)local_24;
    *(undefined4 *)(param_1 + 0x44) = local_24._4_4_;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x44);
    FUN_00403a84(local_10);
    FUN_00403a84(local_c);
    FUN_00403a84(local_8);
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_0042a5b0(*(undefined4 *)(param_1 + 0xcc),&local_9c);
    FUN_004051d4(&local_98,local_9c);
    local_8 = FUN_004b134c(PTR_DAT_004addd4,1,local_98);
    if (*(int *)(local_8 + 8) - 0xeU < 2) {
      FUN_00403a84(local_8);
      local_8 = FUN_004b134c(PTR_DAT_004addd4,1,L"Arial",0);
    }
    uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 0xcc));
    cVar8 = (uVar5 & 1) != 0;
    uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 0xcc));
    if ((uVar5 & 2) != 0) {
      cVar8 = cVar8 + '\x02';
    }
    uVar5 = FUN_0042a660(*(undefined4 *)(param_1 + 0xcc));
    if ((uVar5 & 4) != 0) {
      cVar8 = cVar8 + '\x04';
    }
    local_10 = FUN_004aebc4(PTR_DAT_004ae0a8,1,0,0);
    local_84 = FUN_0042a624(*(undefined4 *)(param_1 + 0xcc));
    uVar6 = FUN_004b140c(PTR_DAT_004ade30,1,local_8,3,cVar8,(float)local_84);
    pfVar14 = &local_68;
    in_stack_ffffff20 = local_58;
    uVar12 = 0;
    in_stack_ffffff18 = 0;
    uVar15 = local_10;
    local_c = uVar6;
    uVar11 = FUN_00404ba4(*(undefined4 *)(param_1 + 0x8c));
    FUN_004051d4(&local_a0,*(undefined4 *)(param_1 + 0x8c));
    FUN_004af67c(uVar3,local_a0,uVar11,in_stack_ffffff18,uVar12,in_stack_ffffff20,uVar15,pfVar14,
                 uVar6);
    *(double *)(param_1 + 0x58) = (double)*(int *)(param_1 + 0x94);
    *(double *)(param_1 + 0x60) = (double)(local_50 + _DAT_005588b0);
    *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x58);
    if (*(double *)(param_1 + 0x70) < *(double *)(param_1 + 0x60)) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 100);
    }
    FUN_00403a84(local_10);
    FUN_00403a84(local_c);
    FUN_00403a84(local_8);
  }
  iVar4 = *(int *)(param_1 + 0xa8);
  if (*(int *)(iVar4 + 0x14) != 0) {
    uVar15 = FUN_00402c38();
    uVar13 = CONCAT44(uVar15,local_b0);
    uVar15 = FUN_00402c38();
    in_ST1 = (float10)local_64;
    uVar2 = FUN_00402c38();
    in_ST0 = (float10)local_68;
    uVar6 = FUN_00402c38();
    FUN_00407174(uVar6,uVar2,uVar15,uVar13);
    FUN_00557074(uVar3,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),2,
                 *(undefined4 *)(param_1 + 0xa4),0,local_78,local_40,local_3c,&local_2c,&local_28,
                 &local_38,&local_34,&local_30,*(undefined4 *)(iVar4 + 0x18),0x1fffffff,0x1fffffff,
                 *(undefined4 *)(iVar4 + 8),0,0x3ff00000,1,0,0,0,0,1,0,*(undefined4 *)(iVar4 + 0xc),
                 0xffffffff,0xffffffff,0,0,*(undefined4 *)(param_1 + 0xa0),local_b0);
    *(double *)(param_1 + 0x48) = (double)(local_2c + 0x14 + *(int *)(iVar4 + 0x2c));
    *(double *)(param_1 + 0x50) = (double)(local_28 + 0x14 + *(int *)(iVar4 + 0x30));
    *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x48);
    if (*(double *)(param_1 + 0x70) < *(double *)(param_1 + 0x50)) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
    }
  }
  if ((*(char *)(param_1 + 0x114) != '\0') && (*(char *)(param_1 + 0x134) != '\t')) {
    *(double *)(param_1 + 0x78) = (double)(*(int *)(param_1 + 0x130) + 0x19);
    *(double *)(param_1 + 0x80) = (double)(*(int *)(param_1 + 0x138) + 0x14);
    *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x78);
    if (*(double *)(param_1 + 0x70) < *(double *)(param_1 + 0x80)) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x84);
    }
  }
  *(double *)(param_1 + 0x68) = (double)*(int *)(param_1 + 0x98) + *(double *)(param_1 + 0x68);
  iVar4 = *(int *)(param_1 + 0x98) * 2;
  *(double *)(param_1 + 0x70) = (double)iVar4 + *(double *)(param_1 + 0x70);
  local_84 = *(int *)(param_1 + 0x160);
  fVar9 = in_ST0;
  if (local_84 != 0) {
    fVar9 = in_ST1;
    FUN_00432400();
    *(double *)(param_1 + 0x70) = (double)in_ST0;
    iVar4 = local_84;
  }
  local_84 = iVar4;
  if (*(int *)(param_1 + 0x164) != 0) {
    local_84 = *(int *)(param_1 + 0x164);
    FUN_00432400();
    *(double *)(param_1 + 0x68) = (double)fVar9;
  }
  FUN_00403a84(uVar3);
  FUN_00403a84(local_44);
  *in_FS_OFFSET = in_stack_ffffff18;
  FUN_00404ff0(&local_a0,in_stack_ffffff18,in_stack_ffffff20,&LAB_00558887);
  FUN_004048d4(&local_9c);
  FUN_00404ff0(&local_98);
  FUN_00404ff0(&local_88);
  FUN_004048d4(&local_80);
  FUN_00404ff0(&local_7c);
  FUN_004048f8(&local_38,3);
  return;
}

