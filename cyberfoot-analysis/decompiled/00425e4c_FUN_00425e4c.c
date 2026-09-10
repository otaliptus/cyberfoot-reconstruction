// Address: 00425e4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00425e4c(void)

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
  puStack_1c = &LAB_00425ea5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0041aa04(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
               &local_14);
  FUN_004255e8();
  FUN_00425ffc(*(undefined4 *)(in_stack_00000004 + -4),&local_14,in_stack_00000004);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00425eac;
  puStack_1c = (undefined1 *)0x425ea4;
  FUN_00411d4c(&local_14,uStack_20,puVar1);
  return;
}

