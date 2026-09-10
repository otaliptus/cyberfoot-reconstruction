// Address: 00510248
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00510248(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_005102bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x2d8) == '\0') {
    FUN_00466208(*(undefined4 *)(param_1 + 0x2d4),&local_c);
    FUN_004051d4(&local_8,local_c);
    FUN_00403c80(param_1,*(undefined4 *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x284),local_8);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005102c3;
  puStack_1c = (undefined1 *)0x5102b3;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x5102bb;
  FUN_00404ff0(&local_8);
  return;
}

