// Address: 005ac334
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ac334(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_005ac490;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_8 = param_3;
  FUN_00409dd8(param_1,&local_10,param_3,&DAT_005ac4a8);
  FUN_00404c64(&local_c,3);
  iVar1 = FUN_00427360(DAT_006d25b8,local_c);
  puVar5 = &DAT_005ac4a8;
  FUN_00409dd8(param_1,&local_18);
  puVar3 = &DAT_005ac4c0;
  uVar4 = local_18;
  FUN_00404c64(&local_14,3);
  iVar2 = FUN_00427360(DAT_006d25b8,local_14);
  FUN_00404b48(&local_1c,*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8,*(int *)PTR_DAT_0066af70,puVar3,
               uVar4);
  FUN_00466238(iVar1,local_1c);
  FUN_004663a8(iVar1,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + param_2 * 0x2f8));
  FUN_0042a3a0(*(undefined4 *)(iVar1 + 0x68),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + param_2 * 0x2f8));
  iVar1 = local_8;
  if (local_8 < 0) {
    FUN_00466128(iVar2,0);
  }
  else {
    FUN_00404b48(&local_20,*(int *)PTR_DAT_0066af70 + local_8 * 0x2f8);
    FUN_00466238(iVar2,local_20);
    FUN_004663a8(iVar2,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar1 * 0x2f8));
    FUN_0042a3a0(*(undefined4 *)(iVar2 + 0x68),
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar1 * 0x2f8));
  }
  *in_FS_OFFSET = puVar3;
  FUN_004048f8(&local_20,6,puVar5,&LAB_005ac497);
  return;
}

