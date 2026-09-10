// Address: 00425020
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00425020(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_0042509f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0041a524(*(undefined4 *)(in_stack_00000004 + -4),*(undefined4 *)(in_stack_00000004 + -8),
               &local_8);
  if (*(char *)(in_stack_00000004 + -9) == '\0') {
    FUN_00405378(local_8,0);
  }
  else {
    FUN_0041a524(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
                 &local_c);
    FUN_00405378(local_8,local_c);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004250a6;
  puStack_18 = (undefined1 *)0x42509e;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

