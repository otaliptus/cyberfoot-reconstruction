// Address: 0044fb54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044fb54(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0044fc84;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x44fb7a;
  puStack_20 = (undefined1 *)FUN_0041edb0(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x23c))
  ;
  puStack_24 = (undefined1 *)0x44fb8e;
  FUN_004060a8(&local_8,PTR_DAT_0044fb30,1);
  puStack_20 = (undefined1 *)0x44fba2;
  puStack_20 = (undefined1 *)FUN_0041edb0(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x23c))
  ;
  puStack_24 = (undefined1 *)0x44fbae;
  uVar2 = FUN_0046cae0(*(undefined4 *)(in_stack_00000004 + -4));
  puVar1 = puStack_20;
  puStack_20 = (undefined1 *)0x44fbb7;
  FUN_00432fb4(uVar2,puVar1,local_8);
  puStack_20 = (undefined1 *)0x44fbc8;
  (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -4) + 0x23c) + 0x20))();
  puStack_24 = &LAB_0044fc61;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar3 = FUN_0041edb0(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x23c));
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      piVar4 = (int *)FUN_00452e8c(*(undefined4 *)(in_stack_00000004 + -4),
                                   *(undefined4 *)(local_8 + iVar5 * 4));
      (**(code **)(*piVar4 + 0x14))(piVar4,iVar5);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(short *)(*(int *)(in_stack_00000004 + -4) + 0x2da) != 0) {
    (**(code **)(*(int *)(in_stack_00000004 + -4) + 0x2d8))
              (*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x2dc),
               *(undefined4 *)(in_stack_00000004 + -4));
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0044fc68;
  piVar4 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x23c);
  iVar3 = *piVar4;
  puStack_24 = (undefined1 *)0x44fc53;
  (**(code **)(iVar3 + 0x24))(piVar4,iVar3,puVar1);
  *(undefined1 *)(*(int *)(in_stack_00000004 + -4) + 0x295) = 0;
  return;
}

