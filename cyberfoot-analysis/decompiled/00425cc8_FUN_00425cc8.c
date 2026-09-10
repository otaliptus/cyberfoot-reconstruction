// Address: 00425cc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00425cc8(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  local_10 = 0;
  puStack_1c = &LAB_00425d85;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0041ab60(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
               &local_8);
  if (local_8 == 0) {
    FUN_004255e8();
    FUN_00426644(*(undefined4 *)(in_stack_00000004 + -4),0xd,in_stack_00000004);
  }
  else {
    uVar3 = FUN_00406880(&local_c);
    cVar2 = FUN_0040fe70(local_8,&DAT_00425d94,uVar3);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*local_c + 0xc))();
      FUN_00425994(uVar3,&local_10);
      FUN_004255e8();
      FUN_00424c38(*(undefined4 *)(in_stack_00000004 + -4),local_10,in_stack_00000004);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00425d8c;
  puStack_1c = (undefined1 *)0x425d74;
  FUN_004048d4(&local_10,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x425d7c;
  FUN_00406880(&local_c);
  puStack_1c = (undefined1 *)0x425d84;
  FUN_00406880(&local_8);
  return;
}

