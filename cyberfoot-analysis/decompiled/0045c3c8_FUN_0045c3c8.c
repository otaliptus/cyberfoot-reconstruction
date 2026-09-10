// Address: 0045c3c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045c3c8(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x214) = 1;
  puStack_10 = &LAB_0045c407;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_004699b8(param_1);
  *in_FS_OFFSET = uStack_14;
  *(undefined1 *)(local_8 + 0x214) = 0;
  return;
}

