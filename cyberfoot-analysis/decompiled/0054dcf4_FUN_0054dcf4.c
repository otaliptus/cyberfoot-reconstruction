// Address: 0054dcf4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054dcf4(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  puStack_10 = &LAB_0054dd36;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x80))();
  *in_FS_OFFSET = uStack_14;
  *(undefined1 *)(local_8 + 0x8c) = 0;
  return;
}

