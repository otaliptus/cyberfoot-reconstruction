// Address: 0041e960
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_1c = &LAB_0041e9b5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar2 = FUN_00406880(&local_8);
  FUN_0041e8c8(param_1,uVar2);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0x10))(local_8,param_2,param_3);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041e9bc;
  puStack_1c = (undefined1 *)0x41e9b4;
  FUN_00406880(&local_8,uStack_20,puVar1);
  return;
}

