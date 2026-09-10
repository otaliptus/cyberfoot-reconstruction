// Address: 00425294
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00425294(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (int *)0x0;
  local_14 = 0;
  puStack_20 = &LAB_00425351;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0041ab60(*(undefined4 *)(in_stack_00000004 + -4),*(undefined4 *)(in_stack_00000004 + -8),
               &local_8);
  if (local_8 != 0) {
    uVar3 = FUN_00406880(&local_10);
    cVar2 = FUN_0040fe70(local_8,&DAT_00425360,uVar3);
    if (cVar2 != '\0') {
      local_c = (**(code **)(*local_10 + 0xc))();
      FUN_004251c8();
      goto LAB_0042532b;
    }
  }
  if (*(char *)(in_stack_00000004 + -9) != '\0') {
    FUN_0041ab60(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
                 &local_14);
  }
LAB_0042532b:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00425358;
  puStack_20 = (undefined1 *)0x425340;
  FUN_00406880(&local_14,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x425348;
  FUN_00406880(&local_10);
  puStack_20 = (undefined1 *)0x425350;
  FUN_00406880(&local_8);
  return;
}

