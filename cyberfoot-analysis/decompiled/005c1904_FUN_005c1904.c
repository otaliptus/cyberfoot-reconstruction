// Address: 005c1904
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c1904(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined1 local_5;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_005c19b1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (DAT_0066a194 == (int *)0x0) {
    local_5 = 0;
    puStack_2c = &LAB_005c1987;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    cVar2 = FUN_004d8178(PTR_DAT_0066b65c);
    if (cVar2 != '\0') {
      FUN_005c0694(PTR_LAB_005c0638,&local_c);
      FUN_00406898(&DAT_0066a194,local_c);
      (**(code **)(*DAT_0066a194 + 0xf0))();
      local_5 = 1;
    }
    *in_FS_OFFSET = uStack_30;
  }
  else {
    local_5 = 1;
    puStack_1c = &stack0xfffffffc;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005c19b8;
  puStack_20 = (undefined1 *)0x5c19b0;
  FUN_00406880(&local_c,uStack_24,puVar1);
  return;
}

