// Address: 00596c14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00596c14(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00596c45;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d228c = _DAT_006d228c + 1;
  if (_DAT_006d228c == 0) {
    FUN_004048d4(&DAT_006d2288);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

