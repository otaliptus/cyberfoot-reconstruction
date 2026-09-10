// Address: 004224a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004224a8(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00422523;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar1 = FUN_00423e68(*(undefined4 *)(in_stack_00000004 + -8),
                       *(undefined4 *)(in_stack_00000004 + -0x18));
  uVar1 = (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x14))
                    (*(int **)(in_stack_00000004 + -8),*(undefined4 *)(in_stack_00000004 + -0x1c),
                     uVar1);
  *(undefined4 *)(in_stack_00000004 + -0x14) = uVar1;
  iVar2 = FUN_00403c80(*(undefined4 *)(in_stack_00000004 + -0x14));
  *(int *)(*(int *)(in_stack_00000004 + -8) + 0x2c) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x2c) =
         *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x18);
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}

