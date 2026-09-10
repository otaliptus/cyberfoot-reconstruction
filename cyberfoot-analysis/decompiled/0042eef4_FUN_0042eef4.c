// Address: 0042eef4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042eef4(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_14 = (undefined1 *)0x42ef04;
  local_c = FUN_0041e41c(DAT_00662958);
  puStack_18 = &LAB_0042ef92;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = *(int *)(local_c + 8) + -1;
  puStack_14 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < iVar3) {
    do {
      local_8 = iVar3;
      puStack_14 = puVar1;
      puStack_20 = (undefined1 *)0x42ef2f;
      local_10 = FUN_0041e01c(local_c,local_8);
      puStack_20 = (undefined1 *)0x42ef3a;
      cVar2 = FUN_0042b420(local_10);
      if (cVar2 != '\0') {
        puStack_24 = &LAB_0042ef6a;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        FUN_0042f084(local_10);
        puVar1 = puStack_20;
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x42ef71;
        puStack_24 = (undefined1 *)0x42ef69;
        FUN_0042b47c(local_10,uStack_28,puVar1);
        return;
      }
      local_8 = local_8 + -1;
      puVar1 = puStack_14;
      iVar3 = local_8;
    } while (local_8 != -1);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042ef99;
  puStack_18 = (undefined1 *)0x42ef91;
  FUN_0041e480(DAT_00662958,uStack_1c,puVar1);
  return;
}

