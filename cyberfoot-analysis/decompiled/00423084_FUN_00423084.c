// Address: 00423084
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00423084(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  unkbyte10 in_ST0;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  
  local_18 = &stack0xfffffffc;
  iVar5 = 5;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  local_1c = &LAB_0042337f;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  puVar1 = &stack0xfffffffc;
  if (iRam00000008 == 0) {
    puVar1 = &stack0xfffffffc;
    if (*(char *)*puRam00000000 == '\a') {
      local_24._0_2_ = 0x30cf;
      local_24._2_2_ = 0x42;
      uVar4 = FUN_00419ee8(param_2,0);
      local_24._0_2_ = 0x30da;
      local_24._2_2_ = 0x42;
      cVar2 = FUN_00403c10(uVar4,PTR_PTR_0041c690);
      puVar1 = local_18;
      if (cVar2 != '\0') {
        local_24._0_2_ = 0x30e9;
        local_24._2_2_ = 0x42;
        iVar5 = FUN_00419ee8(param_2,0);
        puVar1 = local_18;
        if ((*(byte *)(iVar5 + 0x24) & 4) != 0) goto LAB_004230f9;
      }
    }
    local_18 = puVar1;
    local_24._0_2_ = 0x30f9;
    local_24._2_2_ = 0x42;
    FUN_00421a58(PTR_PTR_0066b464);
    puVar1 = local_18;
  }
LAB_004230f9:
  local_18 = puVar1;
  puVar1 = (undefined1 *)*puRam00000000;
  switch(*puVar1) {
  case 1:
    local_24._0_2_ = 0x3160;
    local_24._2_2_ = 0x42;
    cVar2 = FUN_00421f74(param_1);
    if (cVar2 == '\a') {
      local_24._0_2_ = 0x316f;
      local_24._2_2_ = 0x42;
      FUN_004229e4(param_1,&local_1c);
      local_24._0_2_ = 0x317d;
      local_24._2_2_ = 0x42;
      FUN_00422ee0(param_2,0,local_1c);
    }
    else {
      local_24._0_2_ = 0x318a;
      local_24._2_2_ = 0x42;
      uVar4 = FUN_00422ae4(param_1);
      local_24._0_2_ = 0x3197;
      local_24._2_2_ = 0x42;
      FUN_00419f5c(param_2,0,uVar4);
    }
    break;
  case 2:
    local_24._0_2_ = 0x31a4;
    local_24._2_2_ = 0x42;
    uVar3 = FUN_00422034(param_1);
    local_24._0_2_ = 0x31b3;
    local_24._2_2_ = 0x42;
    FUN_00419f5c(param_2,0,uVar3);
    break;
  case 3:
    local_24._0_2_ = 0x31c3;
    local_24._2_2_ = 0x42;
    FUN_004229e4(param_1,&local_20);
    local_24._0_2_ = 0x31cd;
    local_24._2_2_ = 0x42;
    uVar4 = FUN_00419d58(puVar1,local_20);
    local_24._0_2_ = 0x31da;
    local_24._2_2_ = 0x42;
    FUN_00419f5c(param_2,0,uVar4);
    break;
  case 4:
    local_24._0_2_ = 0x31e7;
    local_24._2_2_ = 0x42;
    FUN_004228c8(param_1);
    uStack_2c = (undefined4)in_ST0;
    local_28 = (undefined4)((unkuint10)in_ST0 >> 0x20);
    local_24._0_2_ = (undefined2)((unkuint10)in_ST0 >> 0x40);
    uStack_30 = 0x4231f9;
    FUN_0041a7f8(param_2,0);
    break;
  case 5:
  case 10:
    local_24._0_2_ = 0x3209;
    local_24._2_2_ = 0x42;
    FUN_00423834(param_1,&local_24);
    uVar4 = CONCAT22(local_24._2_2_,(undefined2)local_24);
    local_24._0_2_ = 0x3217;
    local_24._2_2_ = 0x42;
    FUN_0041a4f8(param_2,0,uVar4);
    break;
  case 6:
    local_24._0_2_ = 0x3244;
    local_24._2_2_ = 0x42;
    uVar4 = FUN_00423718(param_1,puVar1);
    local_24._0_2_ = 0x3251;
    local_24._2_2_ = 0x42;
    FUN_00419f5c(param_2,0,uVar4);
    break;
  case 7:
    local_24._0_2_ = 0x325e;
    local_24._2_2_ = 0x42;
    cVar2 = FUN_00421f74(param_1);
    if (cVar2 == '\r') {
      local_24._0_2_ = 0x3270;
      local_24._2_2_ = 0x42;
      FUN_004239d4(param_1);
      local_24._0_2_ = 0x327d;
      local_24._2_2_ = 0x42;
      FUN_00419f5c(param_2,0,0);
    }
    else if (cVar2 == '\x0e') {
      local_24._0_2_ = 0x328a;
      local_24._2_2_ = 0x42;
      FUN_004239d4(param_1);
      local_24._0_2_ = 0x3295;
      local_24._2_2_ = 0x42;
      uVar4 = FUN_00419ee8(param_2,0);
      local_24._0_2_ = 0x329f;
      local_24._2_2_ = 0x42;
      FUN_0042208c(param_1,uVar4);
    }
    else {
      local_28 = 0x4232b0;
      local_24 = &stack0xfffffffc;
      FUN_004229e4(param_1,&uStack_2c);
      local_28 = 0x4232be;
      FUN_00422f28(param_2,0,uStack_2c);
    }
    break;
  case 8:
    local_24._0_2_ = 0x32cc;
    local_24._2_2_ = 0x42;
    cVar2 = FUN_00421f74(param_1);
    if (cVar2 == '\r') {
      local_24._0_2_ = 0x32d8;
      local_24._2_2_ = 0x42;
      FUN_004239d4(param_1);
      local_24._0_2_ = 0x32e8;
      local_24._2_2_ = 0x42;
      FUN_0041aac4(param_2,0,&DAT_006625cc);
    }
    else {
      local_24._0_2_ = 0x32f5;
      local_24._2_2_ = 0x42;
      FUN_004229e4(param_1,&uStack_30);
      local_24._0_2_ = 0x3306;
      local_24._2_2_ = 0x42;
      local_18 = (undefined1 *)(**(code **)(*param_1 + 0x18))(param_1,param_1[6],uStack_30);
      if (local_18 != (undefined1 *)0x0) {
        local_24._0_2_ = 0x3326;
        local_24._2_2_ = 0x42;
        FUN_0041aac4(param_2,0,&local_18);
      }
    }
    break;
  case 0xb:
    local_24._0_2_ = 0x3227;
    local_24._2_2_ = 0x42;
    FUN_004238f0(param_1,&local_28);
    local_24._0_2_ = 0x3235;
    local_24._2_2_ = 0x42;
    FUN_0041a60c(param_2,0,local_28);
    break;
  case 0xc:
    local_28 = 0x42332e;
    local_24 = &stack0xfffffffc;
    FUN_00422f68();
    break;
  case 0xf:
    local_28 = 0x42334e;
    local_24 = &stack0xfffffffc;
    FUN_00422fc4();
    break;
  case 0x10:
    local_24._0_2_ = 0x3339;
    local_24._2_2_ = 0x42;
    local_28 = FUN_00422b50(param_1);
    local_24._0_2_ = (undefined2)extraout_EDX;
    local_24._2_2_ = (undefined2)((uint)extraout_EDX >> 0x10);
    uStack_2c = 0x423346;
    FUN_0041ab24(param_2,0);
  }
  puVar1 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_00423386;
  local_1c = (undefined1 *)0x423369;
  FUN_004048f8(&uStack_30,2,puVar1);
  local_1c = (undefined1 *)0x423371;
  FUN_00404ff0(&local_28);
  local_1c = (undefined1 *)0x42337e;
  FUN_004048f8(&local_24,3);
  return;
}

