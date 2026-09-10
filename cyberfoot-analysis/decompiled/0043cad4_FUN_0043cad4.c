// Address: 0043cad4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043cad4(void)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  short sVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x43cae4;
  (**(code **)(**(int **)(in_stack_00000004 + -4) + 0x18))();
  puStack_14 = &LAB_0043cb43;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  uVar4 = EnumClipboardFormats(0);
  sVar5 = (short)uVar4;
  while ((sVar5 != 0 && (cVar3 = FUN_0042d8e4(PTR_PTR_0042902c,uVar4), cVar3 == '\0'))) {
    uVar4 = EnumClipboardFormats(uVar4 & 0xffff);
    sVar5 = (short)uVar4;
  }
  puVar2 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0043cb4a;
  iVar1 = **(int **)(in_stack_00000004 + -4);
  puStack_14 = (undefined1 *)0x43cb42;
  (**(code **)(iVar1 + 0x14))(*(int **)(in_stack_00000004 + -4),iVar1,puVar2);
  return;
}

