// Address: 004222f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004222f8(void)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_004223de;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x42231d;
  iVar2 = FUN_00423e68(*(undefined4 *)(in_stack_00000004 + -8),
                       *(undefined4 *)(in_stack_00000004 + -0x18));
  *(undefined4 *)(in_stack_00000004 + -0x14) = 0;
  if (*(short *)(*(int *)(in_stack_00000004 + -8) + 0x6a) != 0) {
    puStack_20 = (undefined1 *)(in_stack_00000004 + -0x14);
    puStack_24 = (undefined1 *)0x42234f;
    (**(code **)(*(int *)(in_stack_00000004 + -8) + 0x68))
              (*(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x6c),
               *(undefined4 *)(in_stack_00000004 + -8),iVar2);
  }
  if (*(int *)(in_stack_00000004 + -0x14) == 0) {
    puStack_20 = (undefined1 *)0x42235d;
    uVar3 = (**(code **)(iVar2 + -0xc))();
    *(undefined4 *)(in_stack_00000004 + -0x14) = uVar3;
    if ((*(byte *)(in_stack_00000004 + -9) & 4) != 0) {
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + -0x14) + 0x1c);
      *puVar1 = *puVar1 | 1;
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + -0x14) + 0x1c);
      *puVar1 = *puVar1 | 0x200;
    }
    puStack_24 = &LAB_004223b2;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    (**(code **)(**(int **)(in_stack_00000004 + -0x14) + 0x2c))
              (*(int **)(in_stack_00000004 + -0x14),0xffffffff,
               *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x28));
    *in_FS_OFFSET = uStack_28;
  }
  puVar1 = (ushort *)(*(int *)(in_stack_00000004 + -0x14) + 0x1c);
  *puVar1 = *puVar1 | 1;
  *in_FS_OFFSET = uStack_1c;
  return;
}

