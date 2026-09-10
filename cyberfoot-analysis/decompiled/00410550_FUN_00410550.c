// Address: 00410550
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00410550(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004105aa;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (in_stack_00000008 == 0x400) {
    FUN_00404b6c(&local_8,in_stack_00000004);
    FUN_0040a04c(local_8,in_stack_00000010);
    puVar1 = puStack_10;
  }
  puStack_10 = puVar1;
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004105b1;
  puStack_14 = (undefined1 *)0x4105a9;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

