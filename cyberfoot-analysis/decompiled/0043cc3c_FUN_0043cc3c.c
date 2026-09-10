// Address: 0043cc3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043cc3c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0043cc6d;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0066cabc = _DAT_0066cabc + 1;
  if (_DAT_0066cabc == 0) {
    FUN_00403a84(DAT_0066cac0);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

