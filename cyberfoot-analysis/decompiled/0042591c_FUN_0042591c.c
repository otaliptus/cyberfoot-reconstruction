// Address: 0042591c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042591c(void)

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
  puStack_10 = &LAB_00425971;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_0041a524(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
               &local_8);
  FUN_004255e8();
  FUN_00426590(*(undefined4 *)(in_stack_00000004 + -4),local_8,in_stack_00000004);
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00425978;
  puStack_10 = (undefined1 *)0x425970;
  FUN_00404ff0(&local_8,uStack_14,puVar1);
  return;
}

