// Address: 005bda6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bda6c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_005bdac9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004160cc(&local_c,param_1);
  FUN_004068c4(&local_8,local_c,&LAB_005bdad8);
  FUN_005bbfd8(param_2,local_8);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005bdad0;
  puStack_1c = (undefined1 *)0x5bdac0;
  FUN_00406880(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x5bdac8;
  FUN_00406880(&local_8);
  return;
}

