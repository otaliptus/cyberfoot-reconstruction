// Address: 00404850
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404850(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)0x404858;
  FUN_004039b8();
  puStack_c = &LAB_004043b4;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  uVar1 = in_stack_00000004[1];
  pcVar2 = (code *)*in_stack_00000004;
  puStack_8 = &stack0xfffffffc;
  FUN_0040281c();
  (*pcVar2)(uVar1);
  *in_FS_OFFSET = uStack_10;
  return;
}

