// Address: 005bf39c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bf39c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_24 = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_005bf3ea;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00416640(&local_14,param_3);
  FUN_005bf05c(param_1,param_2,&local_14);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005bf3f1;
  puStack_28 = (undefined1 *)0x5bf3e9;
  FUN_00411d4c(&local_14,uStack_2c,puVar1);
  return;
}

