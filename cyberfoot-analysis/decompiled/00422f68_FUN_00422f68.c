// Address: 00422f68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00422f68(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_18 = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  puStack_1c = &LAB_00422fb7;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004240ec(*(undefined4 *)(in_stack_00000004 + -4),&local_14);
  FUN_0041aa44(*(undefined4 *)(in_stack_00000004 + -8),*(undefined4 *)(in_stack_00000004 + -0xc),
               &local_14);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00422fbe;
  puStack_1c = (undefined1 *)0x422fb6;
  FUN_00411d4c(&local_14,uStack_20,puVar1);
  return;
}

