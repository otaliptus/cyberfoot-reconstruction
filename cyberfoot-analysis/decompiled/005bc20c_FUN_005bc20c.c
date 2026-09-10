// Address: 005bc20c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005bc20c(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_005bc237;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 4))();
  *in_FS_OFFSET = uStack_1c;
  return 0;
}

