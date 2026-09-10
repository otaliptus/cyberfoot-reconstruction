// Address: 004eac04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eac04(int param_1,int param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_48 = &stack0xfffffffc;
  local_38 = 0;
  local_34 = 0;
  local_c = 0;
  local_30 = *param_3;
  iStack_2c = param_3[1];
  iStack_28 = param_3[2];
  iStack_24 = param_3[3];
  puStack_4c = &LAB_004ead7d;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  iVar6 = local_30 + 2;
  puVar3 = &stack0xfffffffc;
  local_20 = local_30;
  local_1c = iStack_2c;
  iStack_18 = iStack_28;
  iStack_14 = iStack_24;
  local_8 = param_2;
  if ((*(char *)(param_1 + 0x294) != '\0') &&
     (puVar3 = &stack0xfffffffc, *(int *)(param_1 + 0x27c) != 0)) {
    iVar4 = (int)*(uint *)(param_1 + 0x284) >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((*(uint *)(param_1 + 0x284) & 1) != 0);
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0x27c) + 0x30);
    iVar5 = (int)uVar2 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar2 & 1) != 0);
    }
    local_10 = (iVar4 - iVar5) + iStack_2c;
    iVar4 = FUN_00473f5c(*(int *)(param_1 + 0x27c));
    if (local_8 < iVar4) {
      FUN_00474474(*(undefined4 *)(param_1 + 0x27c),*(undefined4 *)(param_1 + 0x208),iVar6,1,local_8
                   ,local_10);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x27c) + 0x34) + local_20 + 5;
    puVar3 = puStack_48;
  }
  puStack_48 = puVar3;
  cVar1 = *(char *)(param_1 + 0x268);
  local_30 = iVar6;
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x288) + 0xc))(*(int **)(param_1 + 0x288),local_8,&local_c);
  }
  else if (cVar1 == '\x01') {
    FUN_0041f680(*(undefined4 *)(param_1 + 0x288),local_8,&local_c);
  }
  else if (cVar1 == '\x02') {
    FUN_004ead98(param_1,local_8,&local_c);
  }
  else if (cVar1 == '\x03') {
    FUN_0041f680(*(undefined4 *)(param_1 + 0x288),local_8,&local_34);
    iVar6 = FUN_00409ff8(local_34);
    FUN_004ead98(param_1,local_8,&local_c);
    local_30 = local_30 + iVar6 * 10;
  }
  uVar8 = 0;
  FUN_004051d4(&local_38,local_c);
  uVar7 = 0;
  FUN_004e5798(PTR_DAT_004e5160,*(undefined4 *)(param_1 + 0x208),&local_30,0,local_38);
  *in_FS_OFFSET = uVar7;
  FUN_00404ff0(&local_38,uVar7,uVar8,&LAB_004ead84);
  FUN_004048d4(&local_34);
  FUN_004048d4(&local_c);
  return;
}

