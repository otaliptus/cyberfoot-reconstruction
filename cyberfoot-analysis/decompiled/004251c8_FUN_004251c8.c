// Address: 004251c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004251c8(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  puStack_18 = &LAB_00425274;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (*(char *)(*(int *)(in_stack_00000004 + 8) + -9) != '\0') {
    FUN_0041ab60(*(undefined4 *)(*(int *)(in_stack_00000004 + 8) + -0x10),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + -8),&local_8);
    puVar1 = puStack_14;
    if (*(int *)(in_stack_00000004 + -4) != local_8) {
      uVar3 = FUN_00406880(&local_c);
      cVar2 = FUN_0040fe70(local_8,&DAT_00425284,uVar3);
      puVar1 = puStack_14;
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*local_c + 0xc))();
        FUN_004250b0(uVar3,*(undefined4 *)(in_stack_00000004 + -8));
        puVar1 = puStack_14;
      }
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042527b;
  puStack_18 = (undefined1 *)0x42526b;
  FUN_00406880(&local_c,uStack_1c,puVar1);
  puStack_18 = (undefined1 *)0x425273;
  FUN_00406880(&local_8);
  return;
}

