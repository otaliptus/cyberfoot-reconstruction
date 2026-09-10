// Address: 00427db8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00427db8(void)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00427e1b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (in_stack_00000008 != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 2;
    uVar1 = (**(code **)**(undefined4 **)(in_stack_00000004 + 0xc))();
    *(undefined4 *)(in_stack_00000008 + 8) = uVar1;
    *(undefined4 *)(in_stack_00000008 + 0xc) = extraout_EDX;
    *(undefined4 *)(in_stack_00000008 + 0x10) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x14) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x18) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x1c) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x20) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x24) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x2c) = 1;
  }
  *in_FS_OFFSET = uStack_1c;
  return 0;
}

