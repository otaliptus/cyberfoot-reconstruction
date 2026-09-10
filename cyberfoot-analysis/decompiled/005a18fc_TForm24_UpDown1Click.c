// Address: 005a18fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x005a199b) */
/* WARNING: Removing unreachable block (ram,0x005a19ba) */
/* WARNING: Removing unreachable block (ram,0x005a19d7) */

void TForm24_UpDown1Click(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_14 = 4;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_005a1a75;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x5a1934;
  local_8 = local_14;
  FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_c);
  local_2c = 0x5a193f;
  FUN_0040343c(local_c,&local_8);
  if (local_8 == 0) {
    local_2c = 0x5a1957;
    FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_10);
    local_2c = 0x5a195f;
    iVar3 = FUN_00409ff8(local_10);
    if (iVar3 < 0x98948c) {
      uVar1 = *(undefined4 *)(param_1 + 0x30c);
      local_2c = 0x5a197a;
      FUN_00466208(uVar1,&stack0xffffffe8);
      local_2c = 0x5a1982;
      iVar3 = FUN_00409ff8(unaff_EBX);
      local_2c = 0x5a198f;
      FUN_00409dd8(iVar3 + 500,&local_14);
      local_2c = 0x5a1999;
      FUN_00466238(uVar1,local_14);
    }
    local_2c = 0x5a1a14;
    FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_2c);
    uVar1 = local_2c;
    local_2c = 0x5a1a1c;
    iVar3 = FUN_00409ff8(uVar1);
    if (iVar3 < 0) {
      local_2c = 0x5a1a30;
      FUN_00466238(*(undefined4 *)(param_1 + 0x30c),&DAT_005a1a8c);
    }
  }
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005a1a7c;
  local_24 = (undefined1 *)0x5a1a4a;
  FUN_004048f8(&local_2c,2,puVar2);
  local_24 = (undefined1 *)0x5a1a52;
  FUN_004048d4(&local_24);
  local_24 = (undefined1 *)0x5a1a5f;
  FUN_004048f8(&local_20,3);
  local_24 = (undefined1 *)0x5a1a67;
  FUN_004048d4(&local_14);
  local_24 = (undefined1 *)0x5a1a74;
  FUN_004048f8(&local_10,2);
  return;
}

