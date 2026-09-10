// Address: 00550b24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00550b24(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff5c;
  undefined4 uVar8;
  undefined1 *in_stack_ffffff64;
  undefined1 *puVar9;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [16];
  undefined1 local_4c [8];
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  puStack_7c = &stack0xfffffffc;
  local_6c = 0;
  local_60 = 0;
  local_64 = 0;
  puStack_80 = &LAB_00550df7;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  puVar9 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x168) == '\0') {
    uVar3 = *(undefined4 *)(param_1 + 4);
    cVar2 = FUN_00403c10(uVar3,PTR_PTR_00461f94);
    if (cVar2 != '\0') {
      FUN_00403c34(uVar3,PTR_PTR_00461f94);
      cVar2 = FUN_0046cde4();
      puVar9 = puStack_7c;
      if (cVar2 == '\0') goto LAB_00550dd1;
    }
    uVar3 = FUN_0042b5a8(*(undefined4 *)(param_1 + 0x160));
    local_3c = FUN_004af018(PTR_DAT_004ae274,1,uVar3);
    FUN_004aeba4(local_5c);
    iVar1 = *(int *)(param_1 + 0x16c);
    uVar3 = 0;
    FUN_0042a5b0(*(undefined4 *)(iVar1 + 0x1c),&local_64);
    FUN_004051d4(&local_60,local_64);
    iVar4 = FUN_004b134c(PTR_DAT_004addd4,1,local_60,uVar3);
    if (*(int *)(iVar4 + 8) - 0xeU < 2) {
      FUN_00403a84(iVar4);
      iVar4 = FUN_004b134c(PTR_DAT_004addd4,1,L"Arial",0);
    }
    local_30 = 0;
    uVar5 = FUN_0042a660(*(undefined4 *)(iVar1 + 0x1c));
    if ((uVar5 & 1) != 0) {
      local_30 = local_30 + 1;
    }
    uVar5 = FUN_0042a660(*(undefined4 *)(iVar1 + 0x1c));
    if ((uVar5 & 2) != 0) {
      local_30 = local_30 + 2;
    }
    uVar5 = FUN_0042a660(*(undefined4 *)(iVar1 + 0x1c));
    if ((uVar5 & 4) != 0) {
      local_30 = local_30 + 4;
    }
    uVar3 = 0;
    if (*(char *)(param_1 + 0x178) == '\0') {
      uVar3 = 0x1000;
    }
    local_2c = FUN_004aebc4(PTR_DAT_004ae0a8,1,uVar3,0);
    if (*(char *)(param_1 + 0x178) != '\0') {
      switch(*(undefined1 *)(iVar1 + 0xc)) {
      case 0:
      case 3:
      case 6:
        FUN_004aec3c(local_2c,0);
        break;
      case 1:
      case 4:
      case 7:
        FUN_004aec3c(local_2c,1);
        break;
      case 2:
      case 5:
      case 8:
        FUN_004aec3c(local_2c,2);
      }
    }
    local_68 = FUN_0042a624(*(undefined4 *)(iVar1 + 0x1c));
    uVar6 = FUN_004b140c(PTR_DAT_004ade30,1,iVar4,3,local_30,(float)local_68);
    puVar9 = local_5c;
    in_stack_ffffff64 = local_4c;
    uVar8 = 0;
    in_stack_ffffff5c = 0;
    uVar3 = local_2c;
    local_28 = uVar6;
    uVar7 = FUN_00404ba4(*(undefined4 *)(iVar1 + 0x24));
    FUN_004051d4(&local_6c,*(undefined4 *)(iVar1 + 0x24));
    FUN_004af67c(local_3c,local_6c,uVar7,in_stack_ffffff5c,uVar8,in_stack_ffffff64,uVar3,puVar9,
                 uVar6);
    local_14 = (double)local_44;
    local_c = (double)local_40;
    if (*(char *)(iVar1 + 0xc) == '\t') {
      local_1c = (double)*(int *)(*(int *)(param_1 + 0x16c) + 0x2c);
      local_24 = (double)*(int *)(*(int *)(param_1 + 0x16c) + 0x28);
    }
    else {
      FUN_00550718(param_1,&local_1c,&local_24,*(char *)(iVar1 + 0xc),local_c,local_14,local_5c);
    }
    local_38 = local_44;
    local_34 = local_40;
    *(undefined1 *)(param_1 + 0x168) = 1;
    uVar3 = FUN_00402c38();
    FUN_004659c4(param_1,uVar3);
    uVar3 = FUN_00402c38();
    FUN_004659e8(param_1,uVar3);
    *(undefined1 *)(param_1 + 0x168) = 0;
    FUN_00403a84(iVar4);
    FUN_00403a84(local_28);
    FUN_00403a84(local_2c);
    puVar9 = puStack_7c;
  }
LAB_00550dd1:
  puStack_7c = puVar9;
  *in_FS_OFFSET = in_stack_ffffff5c;
  FUN_00404ff0(&local_6c,in_stack_ffffff5c,in_stack_ffffff64,&LAB_00550dfe);
  FUN_004048d4(&local_64);
  FUN_00404ff0(&local_60);
  return;
}

