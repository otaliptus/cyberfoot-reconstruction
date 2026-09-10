// Address: 0055b5e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055b5e8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_FS_OFFSET;
  float *pfVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 **ppuStack_f0;
  undefined1 *puStack_ec;
  float *pfStack_e8;
  undefined1 *local_d8;
  undefined1 *local_d4;
  float *local_d0;
  float local_cc [5];
  int local_b8;
  int local_b4;
  int local_b0;
  undefined1 local_ac [16];
  undefined1 local_9c [8];
  float local_94;
  float local_90;
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [12];
  float local_60;
  float local_5c [2];
  float local_54;
  float local_50;
  undefined1 local_4c [8];
  undefined1 **local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [8];
  undefined1 **local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 *local_10;
  float *local_c;
  int local_8;
  
  pfStack_e8 = (float *)&stack0xfffffffc;
  local_d8 = (undefined1 *)0x0;
  local_d4 = (undefined1 *)0x0;
  local_cc[0] = 0.0;
  local_d0 = (float *)0x0;
  puStack_ec = &LAB_0055bbde;
  ppuStack_f0 = (undefined1 **)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&ppuStack_f0;
  pfVar7 = (float *)&stack0xfffffffc;
  local_8 = param_2;
  if (param_2 == 0) {
    param_2 = FUN_0055b490(param_1);
    pfVar7 = pfStack_e8;
  }
  pfStack_e8 = pfVar7;
  FUN_004af5d4(param_2,4);
  FUN_004af588(param_2,4);
  iVar1 = param_1[0xc2];
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x44))(param_1,&local_3c);
    local_b0 = local_3c;
    local_b4 = (local_34 - local_3c) + -1;
    local_b8 = (local_30 - local_38) + -1;
    FUN_004aeba4(local_7c);
    local_b0 = *(int *)(iVar1 + 0x98) * 2;
    local_b4 = *(int *)(iVar1 + 0x98) * 2;
    FUN_004aeba4(local_8c);
    FUN_00559300(iVar1,&local_3c,local_5c);
    local_5c[0] = local_5c[0] - _DAT_0055bbec;
    local_54 = local_54 + _DAT_0055bbec;
    FUN_005593f8(iVar1,&local_3c,local_6c);
    FUN_00559204(iVar1,&local_3c,local_9c);
    pfVar7 = local_cc + 1;
    FUN_005279a4(*(undefined4 *)(iVar1 + 0x9c),param_2,local_8c,pfVar7,0xff,0xff,0xff,0xff,0xff);
    if ((local_94 != _DAT_0055bbf0) && (local_90 != _DAT_0055bbf0)) {
      iVar2 = FUN_0041edb0(*(undefined4 *)(iVar1 + 0xbc));
      if (0 < iVar2) {
        pfVar7 = local_cc + 1;
        FUN_005279a4(*(undefined4 *)(iVar1 + 0xac),param_2,local_9c,pfVar7,0xff,0xff,0xff,0xff,0xff)
        ;
        iVar2 = FUN_0041edb0(*(undefined4 *)(iVar1 + 0xbc));
        if (-1 < iVar2 + -1) {
          iVar6 = 0;
          local_2c = iVar2;
          do {
            iVar2 = FUN_0055cec0(*(undefined4 *)(iVar1 + 0xbc),iVar6);
            iVar2 = iVar2 + 0xe;
            uVar3 = FUN_0055cec0(*(undefined4 *)(iVar1 + 0xbc),iVar6);
            FUN_00558c94(iVar1,param_2,uVar3,iVar2);
            iVar6 = iVar6 + 1;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
        }
      }
    }
    if (local_50 != _DAT_0055bbf0) {
      pfVar7 = local_cc + 1;
      FUN_005279a4(*(undefined4 *)(iVar1 + 0x90),param_2,local_5c,pfVar7,0xff,0xff,0xff,0xff,0xff);
      if (*(int *)(iVar1 + 0x8c) != 0) {
        local_cc[1] = 0.0;
        FUN_0042a5b0(*(undefined4 *)(iVar1 + 0xcc),&local_d0);
        FUN_004051d4(local_cc,local_d0);
        iVar2 = FUN_004b134c(PTR_DAT_004addd4,1,local_cc[0]);
        if (*(int *)(iVar2 + 8) - 0xeU < 2) {
          uVar3 = 0x55b8e6;
          FUN_00403a84(iVar2);
          local_cc[1] = 0.0;
          iVar2 = FUN_004b134c(PTR_DAT_004addd4,1,L"Arial",uVar3);
        }
        local_c = (float *)0x0;
        local_cc[0] = 7.872398e-39;
        uVar4 = FUN_0042a660(*(undefined4 *)(iVar1 + 0xcc));
        if ((uVar4 & 1) != 0) {
          local_c = (float *)((int)local_c + 1);
        }
        local_cc[0] = 7.872423e-39;
        uVar4 = FUN_0042a660(*(undefined4 *)(iVar1 + 0xcc));
        if ((uVar4 & 2) != 0) {
          local_c = (float *)((int)local_c + 2);
        }
        local_cc[0] = 7.87245e-39;
        uVar4 = FUN_0042a660(*(undefined4 *)(iVar1 + 0xcc));
        if ((uVar4 & 4) != 0) {
          local_c = local_c + 1;
        }
        local_cc[0] = 0.0;
        local_d0 = (float *)0x55b948;
        local_10 = (undefined1 *)FUN_004aebc4(PTR_DAT_004ae0a8,1,0);
        local_cc[0] = 7.872503e-39;
        local_b0 = FUN_0042a624(*(undefined4 *)(iVar1 + 0xcc));
        local_cc[0] = (float)local_b0;
        local_d0 = local_c;
        local_d4 = (undefined1 *)0x3;
        local_d8 = (undefined1 *)0x55b97d;
        local_1c = (float)FUN_004b140c(PTR_DAT_004ade30,1,iVar2);
        local_cc[0] = 7.872582e-39;
        uVar3 = FUN_004ae808(*(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x18));
        local_cc[0] = 7.872601e-39;
        local_20 = (undefined1 **)FUN_004aeda8(PTR_DAT_004adedc,1,uVar3);
        local_cc[0] = local_1c;
        local_d0 = local_5c;
        local_d4 = local_10;
        local_d8 = local_4c;
        uVar3 = FUN_00404ba4(*(undefined4 *)(iVar1 + 0x8c));
        pfStack_e8 = (float *)0x55b9d0;
        FUN_004051d4(&local_d4,*(undefined4 *)(iVar1 + 0x8c));
        FUN_004af67c(param_2,local_d4,uVar3);
        if (*(char *)(iVar1 + 0xc0) == '\t') {
          local_14 = (float)*(int *)(iVar1 + 200);
          local_18 = (float)*(int *)(iVar1 + 0xc4);
        }
        else {
          FUN_00402c38();
          pfStack_e8 = (float *)0x55b9f8;
          pfStack_e8 = (float *)FUN_00402c38();
          puStack_ec = (undefined1 *)
                       CONCAT31((int3)((uint)pfStack_e8 >> 8),*(undefined1 *)(iVar1 + 0xc0));
          ppuStack_f0 = (undefined1 **)0x55ba0e;
          FUN_00557af4(&local_14,&local_18,local_5c);
        }
        pfStack_e8 = (float *)local_18;
        puStack_ec = (undefined1 *)0x55ba32;
        FUN_004aeb90(local_28);
        pfStack_e8 = (float *)local_14;
        puStack_ec = (undefined1 *)local_18;
        ppuStack_f0 = local_44;
        FUN_004aeba4(local_cc + 1);
        pfStack_e8 = local_cc + 1;
        puStack_ec = local_10;
        ppuStack_f0 = local_20;
        uVar3 = FUN_00404ba4(*(undefined4 *)(iVar1 + 0x8c));
        FUN_004af9d4(param_2,*(undefined4 *)(iVar1 + 0x8c),uVar3);
        FUN_00403a84(local_20);
        FUN_00403a84(local_10);
        FUN_00403a84(local_1c);
        FUN_00403a84(iVar2);
      }
    }
    if (local_60 != _DAT_0055bbf0) {
      ppuStack_f0 = &local_d8;
      FUN_00558df4(iVar1,param_2,*(int *)(iVar1 + 0xa8),pfVar7,0xffffffff,0xffffffff,0,
                   *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 0x14),local_6c);
    }
    uVar3 = *(undefined4 *)(iVar1 + 0x110);
    if (*(char *)(iVar1 + 0x114) != '\0') {
      if (*(char *)(iVar1 + 0x134) == '\t') {
        local_14 = (float)*(int *)(iVar1 + 300);
        local_18 = (float)*(int *)(iVar1 + 0x128);
      }
      else {
        uVar10 = *(undefined4 *)(iVar1 + 0x138);
        uVar8 = *(undefined4 *)(iVar1 + 0x130);
        uVar5 = CONCAT31((int3)((uint)uVar8 >> 8),*(undefined1 *)(iVar1 + 0x134));
        FUN_005594fc(iVar1,&local_3c,local_cc + 1,uVar5,uVar8,uVar10);
        FUN_00557af4(&local_14,&local_18,local_cc + 1,uVar5,uVar8,uVar10);
      }
      uVar10 = *(undefined4 *)(iVar1 + 0x130);
      puVar9 = local_ac;
      iVar2 = FUN_00402c38();
      iVar2 = iVar2 + local_38;
      iVar6 = FUN_00402c38();
      FUN_00407174(iVar6 + local_3c,iVar2,*(undefined4 *)(iVar1 + 0x138),puVar9,uVar10);
      FUN_005291e0(uVar3,param_2,local_ac,0,*(undefined4 *)(iVar1 + 0x118),
                   *(undefined4 *)(iVar1 + 0x11c),*(undefined4 *)(iVar1 + 0x108),
                   *(undefined4 *)(iVar1 + 0x10c),*(undefined4 *)(iVar1 + 0x120),
                   *(undefined4 *)(iVar1 + 0x124));
    }
  }
  if (local_8 == 0) {
    FUN_00403a84(param_2);
  }
  pfVar7 = pfStack_e8;
  *in_FS_OFFSET = (int)ppuStack_f0;
  pfStack_e8 = (float *)&LAB_0055bbe5;
  puStack_ec = (undefined1 *)0x55bbbc;
  FUN_004048d4(&local_d8,ppuStack_f0,pfVar7);
  puStack_ec = (undefined1 *)0x55bbc7;
  FUN_00404ff0(&local_d4);
  puStack_ec = (undefined1 *)0x55bbd2;
  FUN_004048d4(&local_d0);
  puStack_ec = (undefined1 *)0x55bbdd;
  FUN_00404ff0(local_cc);
  return;
}

