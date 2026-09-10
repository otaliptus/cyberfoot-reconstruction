// Address: 0041248c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041248c(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004124ca;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00415af4(&local_8);
  FUN_004164f4(param_1,local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004124d1;
  puStack_14 = (undefined1 *)0x4124c9;
  FUN_00404ff0(&local_8,uStack_18,puVar1);
  return;
}

