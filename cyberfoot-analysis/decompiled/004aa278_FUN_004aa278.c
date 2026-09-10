// Address: 004aa278
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004aa278(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x4aa28a;
  local_8 = param_3;
  FUN_00404d94(param_3);
  puStack_14 = &LAB_004aa2bf;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0040e370(param_2,1,local_8);
  FUN_00404250();
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004aa2c6;
  puStack_14 = (undefined1 *)0x4aa2be;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

