// Address: 004357f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004357f4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00435825;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0066c94c = _DAT_0066c94c + 1;
  if (_DAT_0066c94c == 0) {
    FUN_00403a84(DAT_006629ac);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

