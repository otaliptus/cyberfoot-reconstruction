// Address: 00422408
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00422408(void)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00422480;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403c80(*(undefined4 *)(in_stack_00000004 + -0x14),
               *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x2c));
  (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x1c))
            (*(int **)(in_stack_00000004 + -8),*(undefined4 *)(in_stack_00000004 + -0x14),
             in_stack_00000004 + -0x1c);
  if ((*(byte *)(*(int *)(in_stack_00000004 + -0x14) + 0x1c) & 0x10) != 0) {
    iVar2 = FUN_0041d9dc(*(undefined4 *)(in_stack_00000004 + -0x1c));
    if (iVar2 == *(int *)(in_stack_00000004 + -0x14)) {
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + -0x14) + 0x1c);
      *puVar1 = *puVar1 | 0x200;
    }
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}

