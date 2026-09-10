// Address: 005bc040
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bc040(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_005bc083;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  func_0x005bbf38(param_1,&local_8);
  (**(code **)(*local_8 + 0xc))(local_8,param_2);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005bc08a;
  puStack_18 = (undefined1 *)0x5bc082;
  FUN_00406880(&local_8,uStack_1c,puVar1);
  return;
}

