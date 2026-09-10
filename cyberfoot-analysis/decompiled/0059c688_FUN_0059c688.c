// Address: 0059c688
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059c688(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0059c6df;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d23e8 = _DAT_006d23e8 + 1;
  if (_DAT_006d23e8 == 0) {
    FUN_004061c8(&DAT_006d23dc,PTR_DAT_005973f8);
    FUN_004061c8(&DAT_006d23d8,PTR_DAT_005973d8);
    FUN_004061c8(&DAT_006d23d4,PTR_DAT_005973b8);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

