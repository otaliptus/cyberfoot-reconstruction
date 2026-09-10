// Address: 0041a408
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041a408(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0041a450;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0041a524(param_1,param_2,&local_8);
  FUN_00404b6c(param_3,local_8);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041a457;
  puStack_1c = (undefined1 *)0x41a44f;
  FUN_00404ff0(&local_8,uStack_20,puVar1);
  return;
}

