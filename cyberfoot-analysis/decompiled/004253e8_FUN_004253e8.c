// Address: 004253e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004253e8(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_2c = &stack0xfffffffc;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  local_24 = 0;
  puStack_30 = &LAB_0042546f;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  FUN_0041aa04(*(undefined4 *)(in_stack_00000004 + -4),*(undefined4 *)(in_stack_00000004 + -8),
               &local_14);
  if (*(char *)(in_stack_00000004 + -9) == '\0') {
    FUN_004173d8(&local_14);
  }
  else {
    FUN_0041aa04(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
                 &local_24);
    FUN_00417548(&local_14,&local_24);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00425476;
  puStack_30 = (undefined1 *)0x42546e;
  FUN_00405744(&local_24,PTR_DAT_004010f8,2);
  return;
}

