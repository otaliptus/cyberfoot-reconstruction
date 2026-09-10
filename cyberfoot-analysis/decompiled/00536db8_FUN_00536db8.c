// Address: 00536db8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00536db8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x536dcf;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_14 = (undefined1 *)0x536dd7;
  FUN_00404d94(local_c);
  puStack_18 = &LAB_00536e0f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  uVar2 = FUN_00404ee8(local_8,local_c);
  puVar1 = puStack_14;
  *param_3 = uVar2;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00536e16;
  puStack_18 = (undefined1 *)0x536e0e;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

