// Address: 00422fc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00422fc4(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_14 = &LAB_00423076;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = FUN_00421f74(*(undefined4 *)(in_stack_00000004 + -4));
  if (cVar2 == '\r') {
    FUN_004239d4(*(undefined4 *)(in_stack_00000004 + -4));
    FUN_00406880(&local_8);
    FUN_0041abe0(*(undefined4 *)(in_stack_00000004 + -8),*(undefined4 *)(in_stack_00000004 + -0xc),
                 local_8);
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x18);
    uVar5 = *(undefined4 *)(in_stack_00000004 + -0xc);
    uVar4 = 0;
    FUN_004229e4(*(undefined4 *)(in_stack_00000004 + -4),&local_c);
    uVar3 = FUN_00421504(PTR_PTR_004214a4,1,*(undefined4 *)(in_stack_00000004 + -8),local_c,uVar4,
                         uVar5,uVar3);
    FUN_0041dec0(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x30),uVar3);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0042307d;
  puStack_14 = (undefined1 *)0x42306d;
  FUN_004048d4(&local_c,uStack_18,puVar1);
  puStack_14 = (undefined1 *)0x423075;
  FUN_00406880(&local_8);
  return;
}

