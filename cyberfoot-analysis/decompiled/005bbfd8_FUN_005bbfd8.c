// Address: 005bbfd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bbfd8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_c;
  undefined4 local_8;
  
  local_c = (int *)0x0;
  puStack_14 = (undefined1 *)0x5bbff1;
  local_8 = param_2;
  FUN_004068f4(param_2);
  puStack_18 = &LAB_005bc032;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_005bbee8(param_1,&local_c);
  (**(code **)(*local_c + 0x10))(local_c,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005bc039;
  puStack_18 = (undefined1 *)0x5bc029;
  FUN_00406880(&local_c,uStack_1c,puVar1);
  puStack_18 = (undefined1 *)0x5bc031;
  FUN_00406880(&local_8);
  return;
}

