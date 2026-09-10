// Address: 00516934
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00516934(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)0x516943;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_10 = &LAB_00516981;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  uVar1 = FUN_00516930();
  FUN_0040e370(PTR_DAT_00515990,1,local_8,uVar1);
  FUN_00404250();
  return;
}

