// Address: 004b53e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b53e4(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 local_c [4];
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x4b53f6;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_18 = &LAB_004b5427;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0040343c(local_8,local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004b542e;
  puStack_18 = (undefined1 *)0x4b5426;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

