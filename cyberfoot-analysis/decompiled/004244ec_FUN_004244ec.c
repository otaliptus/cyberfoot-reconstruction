// Address: 004244ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004244ec(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0042452f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00404abc(&local_8,param_2);
  FUN_0042653c(param_1,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00424536;
  puStack_18 = (undefined1 *)0x42452e;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

