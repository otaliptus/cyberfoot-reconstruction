// Address: 00550000
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00550000(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *in_FS_OFFSET;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iStack_c8;
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined4 local_b0 [4];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  int local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  undefined4 local_8;
  
  puStack_c0 = &stack0xfffffffc;
  local_90 = 0;
  local_84 = 0;
  local_88 = 0;
  local_70 = *param_6;
  uStack_6c = param_6[1];
  uStack_68 = param_6[2];
  uStack_64 = param_6[3];
  puStack_c4 = &LAB_005505e4;
  iStack_c8 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_c8;
  local_8 = param_3;
  FUN_0042a5b0(*(undefined4 *)(param_2 + 0x1c),&local_88,param_3,0);
  FUN_004051d4(&local_84,local_88);
  iVar2 = FUN_004b134c(PTR_DAT_004addd4,1,local_84);
  if (*(int *)(iVar2 + 8) - 0xeU < 2) {
    FUN_00403a84(iVar2);
    iVar2 = FUN_004b134c(PTR_DAT_004addd4,1,L"Arial",0);
  }
  local_54 = 0;
  uVar3 = FUN_0042a660(*(undefined4 *)(param_2 + 0x1c));
  if ((uVar3 & 1) != 0) {
    local_54 = local_54 + 1;
  }
  uVar3 = FUN_0042a660(*(undefined4 *)(param_2 + 0x1c));
  if ((uVar3 & 2) != 0) {
    local_54 = local_54 + 2;
  }
  uVar3 = FUN_0042a660(*(undefined4 *)(param_2 + 0x1c));
  if ((uVar3 & 4) != 0) {
    local_54 = local_54 + 4;
  }
  uVar4 = 0;
  if (*(char *)(param_1 + 0x178) == '\0') {
    uVar4 = 0x1000;
  }
  local_40 = FUN_004aebc4(PTR_DAT_004ae0a8,1,uVar4,0);
  if (*(char *)(param_1 + 0x178) != '\0') {
    switch(*(undefined1 *)(param_2 + 0xc)) {
    case 0:
    case 3:
    case 6:
      FUN_004aec3c(local_40,0);
      break;
    case 1:
    case 4:
    case 7:
      FUN_004aec3c(local_40,1);
      break;
    case 2:
    case 5:
    case 8:
      FUN_004aec3c(local_40,2);
    }
  }
  local_8c = FUN_0042a624(*(undefined4 *)(param_2 + 0x1c));
  uVar5 = FUN_004b140c(PTR_DAT_004ade30,1,iVar2,3,local_54,(float)local_8c);
  puVar8 = &local_70;
  puVar12 = &local_80;
  uVar11 = 0;
  iVar10 = 0;
  uVar4 = local_40;
  local_30 = uVar5;
  uVar6 = FUN_00404ba4(*(undefined4 *)(param_2 + 0x24));
  FUN_004051d4(&local_90,*(undefined4 *)(param_2 + 0x24));
  FUN_004af67c(local_8,local_90,uVar6,iVar10,uVar11,puVar12,uVar4,puVar8,uVar5);
  local_1c = (double)local_78;
  local_14 = (double)local_74;
  if (*(char *)(param_2 + 0xc) == '\t') {
    local_24 = (double)*(int *)(*(int *)(param_1 + 0x16c) + 0x2c);
    local_2c = (double)*(int *)(*(int *)(param_1 + 0x16c) + 0x28);
  }
  else {
    FUN_00550718(param_1,&local_24,&local_2c,*(char *)(param_2 + 0xc),local_14,local_1c,&local_70);
  }
  local_4c = (float)param_5 + (float)local_24;
  local_50 = (float)param_4 + (float)local_2c;
  if (*(char *)(*(int *)(param_1 + 0x174) + 0x24) == '\x02') {
    local_4c = (float)*(int *)(*(int *)(param_1 + 0x174) + 0x20) + local_4c;
    local_50 = (float)*(int *)(*(int *)(param_1 + 0x174) + 0x20) + local_50;
  }
  local_5c = local_78;
  local_58 = local_74;
  local_34 = 0;
  local_3c = FUN_004b1cd0(*(undefined1 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x34));
  iVar7 = *(int *)(param_2 + 0x14);
  local_38 = local_3c;
  if (iVar7 != 0x1fffffff) {
    local_3c = FUN_004b1cd0(CONCAT31((int3)((uint)iVar7 >> 8),*(undefined1 *)(param_2 + 0x30)),iVar7
                           );
  }
  FUN_004aeb90(&local_48);
  local_80 = local_48;
  local_7c = local_44;
  if (*(char *)(param_1 + 0x188) == '\0') {
    FUN_004af588(local_8,3);
  }
  else if (*(char *)(param_1 + 0x188) == '\x01') {
    FUN_004af588(local_8,5);
  }
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0:
    local_34 = FUN_004aeda8(PTR_DAT_004adedc,1,local_38);
    break;
  case 2:
    FUN_004aeb90(local_98);
    puVar9 = local_98;
    uVar4 = local_3c;
    uVar5 = local_38;
    FUN_004aeb90(local_a0);
    local_34 = FUN_004aeed0(PTR_DAT_004adf94,1,local_a0,uVar4,uVar5,puVar9);
    break;
  case 3:
    FUN_004aeb90(local_98);
    puVar9 = local_98;
    uVar4 = local_3c;
    uVar5 = local_38;
    FUN_004aeb90(local_a0);
    local_34 = FUN_004aeed0(PTR_DAT_004adf94,1,local_a0,uVar4,uVar5,puVar9);
    break;
  case 4:
    FUN_004aeb90(local_98);
    puVar9 = local_98;
    uVar4 = local_3c;
    uVar5 = local_38;
    FUN_004aeb90(local_a0);
    local_34 = FUN_004aeed0(PTR_DAT_004adf94,1,local_a0,uVar4,uVar5,puVar9);
    break;
  case 5:
    FUN_004aeb90(local_98);
    puVar9 = local_98;
    uVar4 = local_38;
    uVar5 = local_3c;
    FUN_004aeb90(local_a0);
    local_34 = FUN_004aeed0(PTR_DAT_004adf94,1,local_a0,uVar4,uVar5,puVar9);
    break;
  case 7:
    local_34 = FUN_004aedfc(PTR_DAT_004adff8,1,*(undefined4 *)(param_2 + 0x18),local_3c,local_38);
    break;
  case 9:
    cVar1 = (**(code **)(**(int **)(param_2 + 0x10) + 0x1c))();
    if (cVar1 == '\0') {
      uVar4 = FUN_00403a54(PTR_PTR_0041c090,1);
      (**(code **)(**(int **)(param_2 + 0x10) + 0x58))(*(int **)(param_2 + 0x10),uVar4);
      iVar10 = FUN_00427950(PTR_PTR_004ae2cc,1,uVar4,0);
      if (iVar10 != 0) {
        iVar10 = iVar10 + 0x14;
      }
      local_60 = FUN_004b1960(PTR_DAT_004ae1c4,1,iVar10,0);
      local_34 = FUN_004aee58(PTR_DAT_004adf38,1,local_60,0);
      uVar6 = local_30;
      FUN_004aeba4(local_b0);
      puVar12 = local_b0;
      iVar10 = local_34;
      uVar5 = local_40;
      uVar11 = FUN_00404ba4(*(undefined4 *)(param_2 + 0x24));
      FUN_004af9d4(local_8,*(undefined4 *)(param_2 + 0x24),uVar11,iVar10,uVar5,puVar12,uVar6);
      FUN_00403a84(uVar4);
      FUN_00403a84(local_60);
    }
  }
  if (*(int *)(param_2 + 8) != 9) {
    uVar5 = local_30;
    FUN_004aeba4(local_b0);
    puVar8 = local_b0;
    iVar7 = local_34;
    uVar4 = local_40;
    uVar6 = FUN_00404ba4(*(undefined4 *)(param_2 + 0x24));
    FUN_004af9d4(local_8,*(undefined4 *)(param_2 + 0x24),uVar6,iVar7,uVar4,puVar8,uVar5);
  }
  if (local_34 != 0) {
    FUN_00403a84(local_34);
  }
  FUN_00403a84(iVar2);
  FUN_00403a84(local_30);
  FUN_00403a84(local_40);
  *in_FS_OFFSET = iVar10;
  FUN_00404ff0(&local_90,iVar10,puVar12,&LAB_005505eb);
  FUN_004048d4(&local_88);
  FUN_00404ff0(&local_84);
  return;
}

