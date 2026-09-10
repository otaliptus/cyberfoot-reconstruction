// Address: 00476ee0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00476ee0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00476f2a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00423834(param_2,&local_8);
  uVar2 = FUN_00476494(local_8);
  FUN_00478b80(param_1,uVar2);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00476f31;
  puStack_18 = (undefined1 *)0x476f29;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

