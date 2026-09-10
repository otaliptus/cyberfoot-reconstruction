// Address: 00629c94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00629c94(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_68 = &stack0xfffffffc;
  local_54 = 0;
  local_58 = 0;
  local_4c = 0;
  local_50 = 0;
  local_44 = 0;
  local_48 = 0;
  local_3c = 0;
  local_40 = 0;
  local_34 = 0;
  local_38 = 0;
  puStack_6c = &LAB_0062a438;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    local_10 = 0xaf;
  }
  else {
    local_10 = 300;
  }
  local_18 = 0x1a;
  local_14 = 0x13c;
  local_1c = 0x28;
  local_8 = 0x1e;
  local_c = 0x70;
  local_20 = 4;
  iVar5 = 1;
  local_24 = &DAT_006d49fc;
  do {
    piVar2 = (int *)FUN_0043a440(PTR_PTR_00438264,1,param_1);
    *local_24 = piVar2;
    FUN_00409dd8(iVar5,&local_38);
    FUN_00404bf0(&local_34,"shapen",local_38);
    (**(code **)(*piVar2 + 0x18))(piVar2,local_34);
    (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
    FUN_0046599c(piVar2,local_c);
    FUN_00465978(piVar2,local_8);
    FUN_004659c4(piVar2,local_14);
    FUN_004659e8(piVar2,local_10);
    FUN_0042a88c(piVar2[0x5a],0x2d5b24);
    FUN_0042ab6c(piVar2[0x5b],0x2d5b24);
    local_8 = 0x182;
    if (iVar5 == 2) {
      local_c = 0x132;
      local_8 = 0x1e;
    }
    if (iVar5 == 3) {
      local_c = 0x132;
      local_8 = 0x182;
    }
    iVar5 = iVar5 + 1;
    local_24 = local_24 + 1;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  FUN_0046599c(*(undefined4 *)(param_1 + 0x344),
               *(int *)(DAT_006d4a00 + 0x44) + *(int *)(DAT_006d4a00 + 0x4c) + 10);
  FUN_0046599c(*(undefined4 *)(param_1 + 0x348),
               *(int *)(DAT_006d4a00 + 0x44) + *(int *)(DAT_006d4a00 + 0x4c) + 10);
  FUN_0046599c(*(undefined4 *)(param_1 + 0x34c),
               *(int *)(DAT_006d4a00 + 0x44) + *(int *)(DAT_006d4a00 + 0x4c) + 10);
  FUN_0046599c(*(undefined4 *)(param_1 + 0x304),*(int *)(DAT_006d4a08 + 0x44) + 10);
  FUN_00465978(*(undefined4 *)(param_1 + 0x304),*(int *)(DAT_006d4a08 + 0x40) + 0x19);
  FUN_0046599c(*(undefined4 *)(param_1 + 0x2fc),*(int *)(DAT_006d49fc + 0x44) + 10);
  FUN_00465978(*(undefined4 *)(param_1 + 0x2fc),*(int *)(DAT_006d49fc + 0x40) + 0x1e);
  FUN_0046599c(*(undefined4 *)(param_1 + 0x308),*(int *)(DAT_006d4a00 + 0x44) + 10);
  FUN_00465978(*(undefined4 *)(param_1 + 0x308),*(int *)(DAT_006d4a00 + 0x40) + 10);
  FUN_0046599c(*(undefined4 *)(param_1 + 0x300),*(int *)(DAT_006d4a04 + 0x44) + 10);
  FUN_00465978(*(undefined4 *)(param_1 + 0x300),*(int *)(DAT_006d4a04 + 0x40) + 10);
  FUN_00466468(*(undefined4 *)(param_1 + 0x2fc));
  FUN_00466468(*(undefined4 *)(param_1 + 0x308));
  FUN_00466468(*(undefined4 *)(param_1 + 0x300));
  FUN_00466468(*(undefined4 *)(param_1 + 0x304));
  local_8 = *(int *)(DAT_006d49fc + 0x40) + 0x14;
  local_c = 0x96;
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    if (0 < local_1c) {
      local_20 = local_1c;
      iVar5 = 1;
      local_28 = &DAT_006d495c;
      do {
        piVar2 = (int *)FUN_0045f670(PTR_PTR_0045adf8,1,param_1);
        *local_28 = piVar2;
        FUN_00409dd8(iVar5,&local_40);
        FUN_00404bf0(&local_3c,"timeradio",local_40);
        (**(code **)(*piVar2 + 0x18))(piVar2,local_3c);
        FUN_00465978(piVar2,local_8);
        FUN_0046599c(piVar2,local_c);
        local_c = local_c + local_18;
        FUN_004659e8(piVar2,0x12);
        FUN_004659c4(piVar2,0xc);
        FUN_00466468(piVar2);
        FUN_004663cc(piVar2,0);
        FUN_00466238(piVar2,0);
        (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
        piVar2[0x49] = param_1;
        piVar2[0x48] = (int)TForm11_l1Click;
        uVar3 = FUN_0042ab64(*(undefined4 *)(DAT_006d49fc + 0x16c));
        FUN_004663a8(piVar2,uVar3);
        FUN_0042a3a0(piVar2[0x1a],0xffff);
        FUN_0042a5c8(piVar2[0x1a],"Arial");
        if (iVar5 == 5) {
          local_8 = *(int *)(DAT_006d49fc + 0x40) + 0xa3;
          local_c = 0x96;
        }
        if (iVar5 == 10) {
          local_8 = *(int *)(DAT_006d4a00 + 0x40) + 0x14;
          local_c = 0x96;
        }
        if (iVar5 == 0xf) {
          local_8 = *(int *)(DAT_006d4a00 + 0x40) + 0xa3;
          local_c = 0x96;
        }
        if (iVar5 == 0x14) {
          local_8 = *(int *)(DAT_006d4a04 + 0x40) + 0x14;
          local_c = 0x158;
        }
        if (iVar5 == 0x19) {
          local_8 = *(int *)(DAT_006d4a04 + 0x40) + 0xa3;
          local_c = 0x158;
        }
        if (iVar5 == 0x1e) {
          local_8 = *(int *)(DAT_006d4a08 + 0x40) + 0x14;
          local_c = 0x158;
        }
        if (iVar5 == 0x23) {
          local_8 = *(int *)(DAT_006d4a08 + 0x40) + 0xa3;
          local_c = 0x158;
        }
        iVar5 = iVar5 + 1;
        local_28 = local_28 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      local_20 = 0;
    }
  }
  else if (0 < local_1c) {
    local_20 = local_1c;
    iVar5 = 1;
    local_2c = &DAT_006d495c;
    do {
      piVar2 = (int *)FUN_0045f670(PTR_PTR_0045adf8,1,param_1);
      *local_2c = piVar2;
      FUN_00409dd8(iVar5,&local_48);
      FUN_00404bf0(&local_44,"timeradio",local_48);
      (**(code **)(*piVar2 + 0x18))(piVar2,local_44);
      FUN_00465978(piVar2,local_8);
      FUN_0046599c(piVar2,local_c);
      local_c = local_c + local_18;
      FUN_004659e8(piVar2,0x12);
      FUN_004659c4(piVar2,0xc);
      FUN_00466468(piVar2);
      FUN_004663cc(piVar2,0);
      FUN_00466238(piVar2,0);
      (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
      piVar2[0x49] = param_1;
      piVar2[0x48] = (int)TForm11_l1Click;
      uVar3 = FUN_0042ab64(*(undefined4 *)(DAT_006d49fc + 0x16c));
      FUN_004663a8(piVar2,uVar3);
      FUN_0042a3a0(piVar2[0x1a],0xffff);
      FUN_0042a5c8(piVar2[0x1a],"Arial");
      if (iVar5 == 10) {
        local_8 = *(int *)(DAT_006d49fc + 0x40) + 0xa3;
        local_c = 0x96;
      }
      if (iVar5 == 0x14) {
        local_8 = *(int *)(DAT_006d4a00 + 0x40) + 0x14;
        local_c = 0x96;
      }
      if (iVar5 == 0x1e) {
        local_8 = *(int *)(DAT_006d4a00 + 0x40) + 0xa3;
        local_c = 0x96;
      }
      iVar5 = iVar5 + 1;
      local_2c = local_2c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  iVar5 = 1;
  puVar6 = &DAT_006d4ac4;
  local_30 = &DAT_006d495c;
  do {
    piVar2 = (int *)FUN_0043a67c(PTR_PTR_004386b8,1,DAT_006d4958);
    *puVar6 = piVar2;
    FUN_00409dd8(iVar5,&local_50);
    FUN_00404bf0(&local_4c,"esccs",local_50);
    (**(code **)(*piVar2 + 0x18))(piVar2,local_4c);
    (**(code **)(*piVar2 + 0x68))(piVar2,DAT_006d4958);
    (**(code **)(*piVar2 + 0x5c))(piVar2,0);
    FUN_0043aa78(piVar2,1);
    FUN_004659c4(piVar2,0x12);
    FUN_004659e8(piVar2,0x12);
    FUN_0043aa50(piVar2,1);
    FUN_00465978(piVar2,*(int *)(*local_30 + 0x40) + 10);
    FUN_0046599c(piVar2,*(undefined4 *)(*local_30 + 0x44));
    FUN_00466468(piVar2);
    iVar5 = iVar5 + 1;
    local_30 = local_30 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 != 0x29);
  iVar5 = 1;
  local_30 = &DAT_006d4a24;
  piVar2 = &DAT_006d495c;
  do {
    piVar4 = (int *)FUN_0045b76c(PTR_PTR_00457844,1,DAT_006d4958);
    *local_30 = (int)piVar4;
    FUN_00409dd8(iVar5,&local_58);
    FUN_00404bf0(&local_54,"timeescolha",local_58);
    (**(code **)(*piVar4 + 0x18))(piVar4,local_54);
    (**(code **)(*piVar4 + 0x68))(piVar4,DAT_006d4958);
    FUN_004663cc(piVar4,0);
    FUN_004659c4(piVar4,100);
    FUN_004659e8(piVar4,0x12);
    (**(code **)(*piVar4 + 0x5c))(piVar4,0);
    FUN_00466238(piVar4,"teste");
    FUN_00465978(piVar4,*(int *)(*piVar2 + 0x40) + 0x1e);
    FUN_0046599c(piVar4,*(undefined4 *)(*piVar2 + 0x44));
    FUN_004663a8(piVar4,0x2d5b24);
    FUN_0042a3a0(piVar4[0x1a],0xffffff);
    FUN_00466358(piVar4,0);
    FUN_00466468(piVar4);
    FUN_0045bc28(piVar4,1);
    FUN_0042a5c8(piVar4[0x1a],"Arial");
    FUN_0045bb70(piVar4,0);
    FUN_0045bbe4(piVar4,0);
    FUN_00466128(piVar4,1);
    puVar1 = puStack_68;
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 1;
    local_30 = local_30 + 1;
  } while (iVar5 != 0x29);
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_0062a43f;
  puStack_6c = (undefined1 *)0x62a437;
  FUN_004048f8(&local_58,10,puVar1);
  return;
}

