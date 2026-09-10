// Address: 00412570
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00412570(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004125ae;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004160cc(&local_8);
  FUN_0041652c(param_1,local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004125b5;
  puStack_14 = (undefined1 *)0x4125ad;
  FUN_00406880(&local_8,uStack_18,puVar1);
  return;
}

