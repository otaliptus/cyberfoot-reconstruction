// Address: 00529ca4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00529ca4(int param_1,undefined4 param_2,int *param_3,char param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined3 uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 local_98;
  float10 local_94;
  float10 *local_88;
  undefined1 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [8];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  double local_34;
  double local_2c;
  undefined1 local_24 [8];
  double local_1c;
  double local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_a8 = &stack0xfffffffc;
  local_98 = 0;
  local_c = 0;
  local_40 = 0;
  local_50 = *param_3;
  local_4c = param_3[1];
  iStack_48 = param_3[2];
  iStack_44 = param_3[3];
  puStack_ac = &LAB_0052a107;
  uStack_b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b0;
  if ((double)CONCAT44(param_10,param_9) <= (double)CONCAT44(param_6,param_5)) {
    if ((double)CONCAT44(param_8,param_7) < (double)CONCAT44(param_6,param_5)) {
      param_5 = param_7;
      param_6 = param_8;
    }
  }
  else {
    param_5 = param_9;
    param_6 = param_10;
  }
  local_3c = 0.0;
  if (*(char *)(param_1 + 0xc) == '\0') {
    if ((double)CONCAT44(param_8,param_7) <= (double)CONCAT44(param_10,param_9)) {
      local_3c = (double)CONCAT44(param_8,param_7);
    }
    else {
      local_3c = (((double)CONCAT44(param_6,param_5) - (double)CONCAT44(param_10,param_9)) /
                 ((double)CONCAT44(param_8,param_7) - (double)CONCAT44(param_10,param_9))) *
                 (double)_DAT_0052a118;
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x01') {
    local_3c = (double)CONCAT44(param_6,param_5);
  }
  local_8 = param_2;
  FUN_0040496c(&local_40,*(undefined4 *)(param_1 + 8));
  local_94 = (float10)local_3c;
  local_88 = &local_94;
  local_84 = 3;
  FUN_0040ae64(local_40,&local_88,0,&local_c);
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1,local_40,&local_c);
  }
  FUN_0052a1e4(param_1,local_8,&local_50,local_70,*(undefined4 *)(param_1 + 0x1c),local_c);
  local_14 = (double)local_68;
  local_1c = (double)local_64;
  FUN_0052a138(param_1,&local_50,&local_60);
  FUN_00528c98(param_1,&local_50,param_4,&local_80,param_5,param_6,param_7,param_8,param_9,param_10)
  ;
  FUN_0052a138(param_1,&local_50,&local_60);
  iVar7 = 0;
  local_2c = 0.0;
  local_34 = 0.0;
  if (param_4 == '\0') {
    local_34 = (double)((local_54 - (float)local_1c) / _DAT_0052a11c);
    local_2c = (double)local_50;
    switch(*(undefined1 *)(param_1 + 0x20)) {
    case 0:
      if (local_78 < (float)local_14) {
        local_2c = (double)local_60;
      }
      else {
        local_2c = (double)((local_78 - (float)local_14) / _DAT_0052a11c + local_60);
      }
      break;
    case 1:
      if (local_78 < (float)local_14) {
        local_2c = (double)local_60;
      }
      else {
        local_2c = (double)((local_78 - (float)local_14) + local_60);
      }
      break;
    case 2:
      local_2c = (double)((local_58 - (float)local_14) / _DAT_0052a11c + (float)local_50);
      break;
    case 3:
      local_2c = (double)local_60;
      break;
    case 4:
      local_2c = (local_2c + (double)local_58) - local_14;
      break;
    case 5:
      local_2c = (double)*(int *)(param_1 + 0x18) + local_2c;
      local_34 = (double)*(int *)(param_1 + 0x14);
    }
    if ((double)local_80 + (double)local_78 <= local_14 / (double)_DAT_0052a11c + local_2c) {
      iVar7 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x34);
    }
  }
  else if (param_4 == '\x01') {
    local_2c = (double)((local_58 - (float)local_14) / _DAT_0052a11c);
    local_34 = (double)local_4c;
    switch(*(undefined1 *)(param_1 + 0x20)) {
    case 0:
      if (local_74 < (float)local_1c) {
        local_34 = (double)local_5c;
      }
      else {
        local_34 = (double)((local_74 - (float)local_1c) / _DAT_0052a11c + local_5c);
      }
      break;
    case 1:
      if (local_74 < (float)local_1c) {
        local_34 = (double)local_5c;
      }
      else {
        local_34 = (double)((local_74 - (float)local_1c) + local_5c);
      }
      break;
    case 2:
      local_34 = (double)((local_54 - (float)local_1c) / _DAT_0052a11c + (float)local_4c);
      break;
    case 3:
      local_34 = (double)local_5c;
      break;
    case 4:
      local_34 = (local_34 + (double)local_54) - local_1c;
      break;
    case 5:
      local_34 = (double)*(int *)(param_1 + 0x14) + local_34;
      local_2c = (double)*(int *)(param_1 + 0x18);
    }
    if ((double)local_7c + (double)local_74 <= local_1c / (double)_DAT_0052a11c + local_34) {
      iVar7 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x34);
    }
  }
  uVar1 = FUN_004aebc4(PTR_DAT_004ae0a8,1,0,0);
  uVar2 = FUN_004af478(local_8,iVar7);
  uVar6 = (undefined3)((uint)uVar2 >> 8);
  if (param_4 == '\0') {
    FUN_004aeb90(local_24);
    uVar6 = extraout_var;
  }
  else if (param_4 == '\x01') {
    FUN_004aeb90(local_24);
    uVar6 = extraout_var_00;
  }
  uVar3 = FUN_004b1cd0(CONCAT31(uVar6,0xff),*(undefined4 *)(iVar7 + 0x18));
  uVar4 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar3);
  puVar9 = local_24;
  uVar3 = uVar4;
  uVar8 = uVar1;
  uVar10 = uVar2;
  uVar5 = FUN_00404ba4(local_c);
  FUN_004051d4(&local_98,local_c);
  FUN_004af7a4(local_8,local_98,uVar5,uVar3,uVar8,puVar9,uVar10);
  FUN_00403a84(uVar4);
  FUN_00403a84(uVar1);
  FUN_00403a84(uVar2);
  *in_FS_OFFSET = uVar3;
  FUN_00404ff0(&local_98,uVar3,puVar9,&LAB_0052a10e);
  FUN_004048d4(&local_40);
  FUN_004048d4(&local_c);
  return;
}

