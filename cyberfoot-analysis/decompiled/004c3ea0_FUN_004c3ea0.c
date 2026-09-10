// Address: 004c3ea0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c3ea0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  short sVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int iVar8;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined1 uVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 6;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = (undefined1 *)0x4c3ec0;
  local_8 = param_1;
  FUN_00404d94(param_1);
  local_24 = &LAB_004c40fb;
  local_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  cVar1 = *PTR_DAT_0066b70c;
  local_2c = (undefined4 *)0x4c3ee3;
  local_20 = &stack0xfffffffc;
  FUN_00404abc(&stack0xffffffe8,cVar1);
  local_2c = (undefined4 *)0x4c3eee;
  uVar4 = FUN_00404ee8(unaff_ESI,local_8);
  if ((short)uVar4 < 1) {
    local_2c = (undefined4 *)0x4c3fa5;
    iVar8 = FUN_00404ba4(local_8);
    iVar8 = iVar8 + -1;
    uVar9 = iVar8 == 0;
    local_2c = (undefined4 *)0x4c3fb4;
    FUN_00404928(param_2,&DAT_004c4130);
  }
  else {
    local_2c = (undefined4 *)0x4c3f05;
    FUN_00404928(param_2,&DAT_004c4114);
    iVar8 = CONCAT22((short)((uint)uVar4 >> 0x10),(short)uVar4 + -2);
    local_2c = (undefined4 *)0x4c3f11;
    pcVar5 = (char *)FUN_00404da4(local_8);
    if (*pcVar5 == cVar1) {
      local_2c = &local_8;
      local_30 = (undefined4 *)0x4c3f24;
      iVar6 = FUN_00404ba4(local_8);
      local_30 = (undefined4 *)0x4c3f34;
      FUN_00404e04(local_8,2,iVar6 + -1);
      while( true ) {
        local_2c = (undefined4 *)0x4c3f67;
        pcVar5 = (char *)FUN_00404da4(local_8);
        uVar9 = *pcVar5 == '0';
        if (!(bool)uVar9) break;
        local_2c = (undefined4 *)0x4c3f42;
        FUN_00404bac(param_2,&DAT_004c4120);
        local_2c = &local_8;
        local_30 = (undefined4 *)0x4c3f4e;
        iVar6 = FUN_00404ba4(local_8);
        local_30 = (undefined4 *)0x4c3f5e;
        FUN_00404e04(local_8,2,iVar6 + -1);
        iVar8 = iVar8 + -1;
      }
    }
    else {
      local_2c = (undefined4 *)CONCAT31((int3)((uint)pcVar5 >> 8),DAT_004c4124);
      local_30 = (undefined4 *)&stack0xffffffe4;
      local_34 = 0x4c3f83;
      FUN_00404abc(&local_20,cVar1);
      uVar9 = 1;
      local_34 = 0x4c3f90;
      FUN_0040f7c8(local_8,local_20);
      local_34 = 0x4c3f9b;
      FUN_0040496c(&local_8,unaff_EDI);
    }
  }
  local_34 = 0x4c3fc1;
  FUN_00404cf0(local_8,&DAT_004c4130);
  if (!(bool)uVar9) {
    local_34 = 0x4c3fcb;
    iVar6 = FUN_00404ba4(local_8);
    uVar9 = iVar6 + -1 == 0;
    local_34 = 0x4c3fd8;
    FUN_00404f94(0x30,iVar6 + -1,&local_28);
    local_34 = 0x4c3fe8;
    FUN_00404bf0(&local_24,&DAT_004c4130,local_28);
    local_34 = 0x4c3ff3;
    FUN_00404cf0(local_8,local_24);
    if (!(bool)uVar9) {
      local_34 = 0x4c401e;
      FUN_0040496c(&local_10,&DAT_004c4130);
      local_34 = 0x4c4029;
      FUN_0040496c(&local_c,local_10);
      local_34 = 0x4c4031;
      sVar3 = FUN_00404ba4(local_10);
      local_34 = 0x4c4041;
      FUN_00404f94(0x30,(int)(short)(sVar3 + -1),&local_30);
      local_34 = 0x4c404c;
      FUN_00404bac(&local_10,local_30);
      local_34 = 0x4c4057;
      iVar6 = FUN_004c2f84(local_10,local_8);
      uVar9 = iVar6 == 0;
      if (iVar6 < 0) {
        local_34 = 0x4c4068;
        FUN_00404bac(&local_10,&DAT_004c4120);
      }
      local_34 = 0x4c406f;
      FUN_004048d4(param_2);
      while( true ) {
        local_34 = 0x4c40aa;
        FUN_00404cf0(local_c,&DAT_004c4120);
        if ((bool)uVar9) break;
        local_34 = 0x4c40b3;
        iVar6 = FUN_00404ba4(*param_2);
        iVar7 = (short)(sVar3 + -1) + 0x40;
        uVar9 = iVar6 == iVar7;
        if (iVar7 <= iVar6) break;
        local_30 = &local_34;
        local_38 = 0x4c4083;
        FUN_004c3c3c(local_10,local_8,&local_c);
        local_38 = 0x4c408d;
        FUN_00404bac(param_2,local_34);
        local_38 = 0x4c409d;
        FUN_00404bf0(&local_10,local_c,&DAT_004c4120);
      }
      local_34 = 0x4c40c9;
      FUN_004c3cfc(*param_2,iVar8,&local_38);
      local_34 = 0x4c40d3;
      FUN_00404928(param_2,local_38);
      goto LAB_004c40d3;
    }
  }
  local_34 = 0x4c4002;
  FUN_004c3cfc(*param_2,iVar8 + -1,&local_2c);
  local_34 = 0x4c400c;
  FUN_00404928(param_2,local_2c);
LAB_004c40d3:
  puVar2 = local_28;
  *in_FS_OFFSET = (int)local_30;
  local_28 = &LAB_004c4102;
  local_2c = (undefined4 *)0x4c40ed;
  FUN_004048f8(&local_38,9,puVar2);
  local_2c = (undefined4 *)0x4c40fa;
  FUN_004048f8(&local_10,3);
  return;
}

