// Address: 005ac650
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ac650(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 *local_34;
  char *local_30;
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
  local_28 = &LAB_005ac827;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  if (param_1 < 0x11) {
    local_30 = "j";
    local_34 = (undefined1 *)0x5ac690;
    local_24 = &stack0xfffffffc;
    FUN_00409dd8(param_1,&local_14);
    local_34 = local_14;
    FUN_00404c64(&local_10,3);
    iVar4 = FUN_00427360(DAT_006d25b8,local_10);
    FUN_00409dd8(param_1,&stack0xffffffe4);
    FUN_00404c64(&stack0xffffffe8,3);
    local_30 = (char *)0x5ac6e5;
    local_c = FUN_00427360(DAT_006d25b8,unaff_EBX);
    unaff_EBX = iVar4;
    puVar3 = local_24;
  }
  else {
    puVar3 = &stack0xfffffffc;
    if (0x10 < param_1) {
      local_30 = "chave2_j";
      local_34 = (undefined1 *)0x5ac6fe;
      FUN_00409dd8(param_1,&local_24);
      local_34 = local_24;
      FUN_00404c64(&stack0xffffffe0,3);
      unaff_EBX = FUN_00427360(DAT_006d25b8,unaff_EDI);
      FUN_00409dd8(param_1,&local_2c);
      FUN_00404c64(&local_28,3);
      local_30 = (char *)0x5ac753;
      local_c = FUN_00427360(DAT_006d25b8,local_28);
      puVar3 = local_24;
    }
  }
  local_24 = puVar3;
  local_30 = (char *)0x5ac76c;
  FUN_00404b48(&local_30,*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8);
  pcVar1 = local_30;
  local_30 = (char *)0x5ac778;
  FUN_00466238(unaff_EBX,pcVar1);
  local_30 = (char *)0x5ac791;
  FUN_004663a8(unaff_EBX,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + param_2 * 0x2f8));
  local_30 = (char *)0x5ac7ab;
  FUN_0042a3a0(*(undefined4 *)(unaff_EBX + 0x68),
               *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + param_2 * 0x2f8));
  iVar4 = local_8;
  if (local_8 < 0) {
    local_30 = (char *)0x5ac80c;
    FUN_00466128(local_c,0);
  }
  else {
    local_30 = (char *)0x5ac7c8;
    FUN_00404b48(&local_34,*(int *)PTR_DAT_0066af70 + local_8 * 0x2f8);
    iVar2 = local_c;
    local_30 = (char *)0x5ac7d5;
    FUN_00466238(local_c,local_34);
    local_30 = (char *)0x5ac7ea;
    FUN_004663a8(iVar2,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar4 * 0x2f8));
    local_30 = (char *)0x5ac800;
    FUN_0042a3a0(*(undefined4 *)(iVar2 + 0x68),
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar4 * 0x2f8));
  }
  puVar3 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_005ac82e;
  local_28 = (undefined1 *)0x5ac826;
  FUN_004048f8(&local_34,10,puVar3);
  return;
}

