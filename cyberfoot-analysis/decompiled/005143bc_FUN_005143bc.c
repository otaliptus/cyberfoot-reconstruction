// Address: 005143bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005143bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_20 = 0;
  puStack_34 = &LAB_00514538;
  puStack_38 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_38;
  local_8 = param_3;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),param_2);
  local_c = FUN_0042b400(*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(iVar2 + 0x94));
  iVar2 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),param_2);
  iVar2 = FUN_0042b3e4(*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(iVar2 + 0x94));
  iVar3 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),param_2);
  if (*(char *)(iVar3 + 0x98) == '\0') {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),param_2);
    local_1c = *(int *)(*(int *)(iVar3 + 0x90) + 8) - (iVar2 + 2);
    local_14 = iVar2 + local_1c;
    local_18 = FUN_0050f2e0(param_1,param_2,local_8);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),param_2);
    local_10 = *(int *)(*(int *)(iVar2 + 0x90) + 0x10) + local_18;
  }
  else if (*(char *)(iVar3 + 0x98) == '\x01') {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),param_2);
    local_1c = *(int *)(*(int *)(iVar3 + 0x90) + 8) + 2;
    local_14 = iVar2 + local_1c;
    local_18 = FUN_0050f2e0(param_1,param_2,local_8);
    local_18 = local_18 - (local_c + 2);
    local_10 = local_18 + local_c;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  FUN_0042a66c(*(undefined4 *)(iVar2 + 0xc),DAT_00514548);
  FUN_0042a3a0(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(param_1 + 0x4cc));
  iVar2 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),param_2);
  FUN_004051d4(&local_20,*(undefined4 *)(iVar2 + 0x94));
  uVar4 = 0;
  FUN_004e63b0(*(undefined4 *)(param_1 + 0x208),&local_1c,0,0,local_20);
  puVar1 = puStack_38;
  *in_FS_OFFSET = uVar4;
  puStack_38 = &LAB_0051453f;
  FUN_00404ff0(&local_20,uVar4,puVar1);
  return;
}

