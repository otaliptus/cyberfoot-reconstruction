// Address: 00536bc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00536bc8(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 local_c [4];
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x536bda;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_18 = &LAB_00536c0b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0040343c(local_8,local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00536c12;
  puStack_18 = (undefined1 *)0x536c0a;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

