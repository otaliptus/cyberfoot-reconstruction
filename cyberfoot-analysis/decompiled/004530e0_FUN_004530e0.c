// Address: 004530e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004530e0(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)0x4530f5;
  local_8 = param_1;
  FUN_0044e9d8(*(undefined4 *)(param_1 + 0x22c));
  puStack_10 = &LAB_0045312d;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  FUN_0044e9b8(*(undefined4 *)(local_8 + 0x22c));
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00453134;
  puStack_10 = (undefined1 *)0x45312c;
  FUN_0044ebb4(*(undefined4 *)(local_8 + 0x22c),uStack_14,puVar1);
  return;
}

