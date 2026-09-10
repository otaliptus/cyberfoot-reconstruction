// Address: 004f0e80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f0e80(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x4f0e95;
  local_8 = param_3;
  FUN_00404d94(param_3);
  puStack_18 = &LAB_004f0ed8;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004f0798(param_1,*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x280));
  FUN_004f35d4(param_1,param_2,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f0edf;
  puStack_18 = (undefined1 *)0x4f0ed7;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

