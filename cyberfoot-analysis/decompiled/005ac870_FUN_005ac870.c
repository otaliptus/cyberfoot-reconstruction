// Address: 005ac870
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ac870(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_24 = &stack0xfffffffc;
  local_14 = (undefined1 *)0x5;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != (undefined1 *)0x0);
  LOCK();
  UNLOCK();
  local_8 = 0;
  local_28 = &LAB_005aca4b;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  if (param_1 < 9) {
    local_30 = &DAT_005aca64;
    local_34 = (undefined1 *)0x5ac8b1;
    local_24 = &stack0xfffffffc;
    FUN_00409dd8(param_1 + 0x10,&local_14);
    local_34 = local_14;
    FUN_00404c64(&local_10,3);
    iVar4 = FUN_00427360(DAT_006d25b8,local_10);
    FUN_00409dd8(param_1 + 0x10,&stack0xffffffe4);
    FUN_00404c64(&stack0xffffffe8,3);
    local_30 = (undefined *)0x5ac907;
    local_c = FUN_00427360(DAT_006d25b8,unaff_EBX);
    unaff_EBX = iVar4;
    puVar3 = local_24;
  }
  else {
    puVar3 = &stack0xfffffffc;
    if (8 < param_1) {
      local_30 = &DAT_005aca88;
      local_34 = (undefined1 *)0x5ac921;
      FUN_00409dd8(param_1 + 8,&local_24);
      local_34 = local_24;
      FUN_00404c64(&stack0xffffffe0,3);
      unaff_EBX = FUN_00427360(DAT_006d25b8,unaff_EDI);
      FUN_00409dd8(param_1 + 8,&local_2c);
      FUN_00404c64(&local_28,3);
      local_30 = (undefined *)0x5ac977;
      local_c = FUN_00427360(DAT_006d25b8,local_28);
      puVar3 = local_24;
    }
  }
  local_24 = puVar3;
  local_30 = (undefined *)0x5ac990;
  FUN_00404b48(&local_30,*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8);
  puVar1 = local_30;
  local_30 = (undefined *)0x5ac99c;
  FUN_00466238(unaff_EBX,puVar1);
  local_30 = (undefined *)0x5ac9b5;
  FUN_004663a8(unaff_EBX,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + param_2 * 0x2f8));
  local_30 = (undefined *)0x5ac9cf;
  FUN_0042a3a0(*(undefined4 *)(unaff_EBX + 0x68),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + param_2 * 0x2f8));
  iVar4 = local_8;
  if (local_8 < 0) {
    local_30 = (undefined *)0x5aca30;
    FUN_00466128(local_c,0);
  }
  else {
    local_30 = (undefined *)0x5ac9ec;
    FUN_00404b48(&local_34,*(int *)PTR_DAT_0066af70 + local_8 * 0x2f8);
    iVar2 = local_c;
    local_30 = (undefined *)0x5ac9f9;
    FUN_00466238(local_c,local_34);
    local_30 = (undefined *)0x5aca0e;
    FUN_004663a8(iVar2,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar4 * 0x2f8));
    local_30 = (undefined *)0x5aca24;
    FUN_0042a3a0(*(undefined4 *)(iVar2 + 0x68),
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar4 * 0x2f8));
  }
  puVar3 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_005aca52;
  local_28 = (undefined1 *)0x5aca4a;
  FUN_004048f8(&local_34,10,puVar3);
  return;
}

