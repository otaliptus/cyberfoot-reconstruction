// Address: 00425da4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00425da4(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 local_110 [256];
  undefined4 local_10;
  int local_c [2];
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  puStack_11c = &LAB_00425e3f;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_0041aa84(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
               local_c);
  FUN_004255e8();
  if (local_c[0] == 0) {
    FUN_00426644(*(undefined4 *)(in_stack_00000004 + -4),0xd,in_stack_00000004);
  }
  else {
    FUN_00403d58(**(undefined4 **)(*(int *)(in_stack_00000004 + -4) + 0x1c),local_c[0],local_110);
    FUN_00404b48(&local_10,local_110);
    FUN_00424c38(*(undefined4 *)(in_stack_00000004 + -4),local_10);
  }
  puVar1 = puStack_118;
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_00425e46;
  puStack_11c = (undefined1 *)0x425e3e;
  FUN_004048d4(&local_10,uStack_120,puVar1);
  return;
}

