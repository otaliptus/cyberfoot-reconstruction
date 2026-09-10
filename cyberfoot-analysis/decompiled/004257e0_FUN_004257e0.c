// Address: 004257e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004257e0(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int iVar4;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00425894;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar3 = FUN_00419ee8(*(undefined4 *)(in_stack_00000004 + -0x10),
                       *(undefined4 *)(in_stack_00000004 + -8));
  iVar4 = in_stack_00000004;
  FUN_004255e8();
  cVar1 = **(char **)(in_stack_00000004 + -0xc);
  if (cVar1 == '\x01') {
    FUN_004256d0(*(undefined4 *)**(undefined4 **)(in_stack_00000004 + -8),uVar3,iVar4,
                 in_stack_00000004);
  }
  else if (cVar1 == '\x02') {
    FUN_004244ec(*(undefined4 *)(in_stack_00000004 + -4),uVar3);
  }
  else if (cVar1 == '\x03') {
    FUN_00419c34(*(undefined4 *)(in_stack_00000004 + -0xc),uVar3,&local_8);
    FUN_00424c38(*(undefined4 *)(in_stack_00000004 + -4),local_8);
  }
  else if (cVar1 == '\x06') {
    FUN_0042563c(uVar3);
  }
  puVar2 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0042589b;
  puStack_14 = (undefined1 *)0x425893;
  FUN_004048d4(&local_8,uStack_18,puVar2);
  return;
}

