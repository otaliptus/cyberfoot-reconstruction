// Address: 0055bca8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055bca8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)0x55bcb7;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_10 = &LAB_0055bcef;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  uVar2 = FUN_00404da4(local_8);
  uVar3 = FUN_0043cb8c();
  FUN_0043c6fc(uVar3,uVar2);
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0055bcf6;
  puStack_10 = (undefined1 *)0x55bcee;
  FUN_004048d4(&local_8,uStack_14,puVar1);
  return;
}

