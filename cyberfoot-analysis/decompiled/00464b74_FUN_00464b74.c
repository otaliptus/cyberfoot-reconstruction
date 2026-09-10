// Address: 00464b74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00464b74(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_18 = (undefined1 *)0x464b84;
  local_c = FUN_0041e41c(DAT_0066cba4);
  puStack_1c = &LAB_00464c24;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (-1 < *(int *)(local_c + 8) + -1) {
    local_8 = 0;
    puStack_18 = &stack0xfffffffc;
    local_10 = *(int *)(local_c + 8);
    do {
      puStack_24 = (undefined1 *)0x464bb6;
      local_14 = FUN_0041e01c(local_c,local_8);
      puStack_24 = (undefined1 *)0x464bc1;
      cVar2 = FUN_0042b420(local_14);
      if (cVar2 != '\0') {
        puStack_28 = &LAB_00464bfd;
        uStack_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2c;
        puStack_24 = &stack0xfffffffc;
        FUN_00464db0(local_14);
        FUN_004042fc();
        puStack_24 = (undefined1 *)0x464be5;
        FUN_004042fc();
        return;
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x464c2b;
  puStack_1c = (undefined1 *)0x464c23;
  FUN_0041e480(DAT_0066cba4,uStack_20,puVar1);
  return;
}

