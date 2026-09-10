// Address: 005c0694
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c0694(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005c06dc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004ac870(&DAT_0066a180,&local_8);
  FUN_004068c4(param_2,local_8,&DAT_005c06e8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005c06e3;
  puStack_14 = (undefined1 *)0x5c06db;
  FUN_00406880(&local_8,uStack_18,puVar1);
  return;
}

