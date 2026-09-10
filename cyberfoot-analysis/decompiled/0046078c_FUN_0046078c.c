// Address: 0046078c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046078c(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004607fa;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0066cb48 = _DAT_0066cb48 + 1;
  if (_DAT_0066cb48 == 0) {
    puVar1 = &stack0xfffffffc;
    if (*(int *)(DAT_0066cb4c + 0x1c) != 0) {
      FUN_0045fdbc(DAT_0066cb4c);
      puVar1 = puStack_8;
    }
    puStack_8 = puVar1;
    FUN_00406880(&DAT_0066cb50);
    FUN_00406880(&DAT_0066cb40);
    FUN_00406880(&DAT_0066cb50);
    FUN_004048d4(&DAT_0066cb44);
    FUN_00406880(&DAT_0066cb40);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

