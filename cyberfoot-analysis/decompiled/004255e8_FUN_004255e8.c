// Address: 004255e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004255e8(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = 0;
  puStack_10 = &LAB_00425630;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00404b48(&local_8,*(int *)(in_stack_00000004 + -8) + 0x1a);
  FUN_004263f8(*(undefined4 *)(in_stack_00000004 + -4),local_8);
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00425637;
  puStack_10 = (undefined1 *)0x42562f;
  FUN_004048d4(&local_8,uStack_14,puVar1);
  return;
}

