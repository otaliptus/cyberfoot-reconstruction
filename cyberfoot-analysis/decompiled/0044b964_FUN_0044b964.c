// Address: 0044b964
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0044b964(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_0044b9a9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *in_stack_00000010 = 0;
  if (*in_stack_00000004 != 0) {
    uVar1 = (**(code **)(*(int *)*in_stack_00000004 + 4))
                      ((int *)*in_stack_00000004,in_stack_00000004[1],in_stack_00000008,
                       in_stack_0000000c);
    *in_stack_00000010 = uVar1;
  }
  *in_FS_OFFSET = uStack_1c;
  return 0;
}

