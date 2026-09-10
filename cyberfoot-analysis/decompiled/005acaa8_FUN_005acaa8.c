// Address: 005acaa8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005acaa8(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_005acbf5;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  iVar4 = 1;
  do {
    iVar3 = 1;
    do {
      FUN_00409dd8(iVar4,&local_c);
      FUN_00409dd8(iVar3,&local_10);
      FUN_00404c64(&local_8,4);
      uVar2 = FUN_00427360(DAT_006d25b8,local_8);
      FUN_00466238(uVar2,0);
      FUN_004663a8(uVar2,0xc0c0c0);
      FUN_00466128(uVar2,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 3);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x20);
  iVar4 = 1;
  do {
    FUN_00409dd8(iVar4,&local_18);
    FUN_00404bf0(&local_14,&DAT_005acc24,local_18);
    uVar2 = FUN_00427360(DAT_006d25b8,local_14);
    FUN_00466238(uVar2,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x20);
  FUN_00466238(*(undefined4 *)(DAT_006d25b8 + 0x5d4),0);
  FUN_004663a8(*(undefined4 *)(DAT_006d25b8 + 0x5d4),0xc0c0c0);
  iVar4 = 1;
  do {
    FUN_00409dd8(iVar4,&local_20);
    FUN_00404bf0(&local_1c,&DAT_005acc30,local_20);
    uVar2 = FUN_00427360(DAT_006d25b8,local_1c);
    FUN_0043aa68(uVar2,0);
    puVar1 = puStack_30;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x21);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_005acbfc;
  puStack_34 = (undefined1 *)0x5acbf4;
  FUN_004048f8(&local_20,7,puVar1);
  return;
}

