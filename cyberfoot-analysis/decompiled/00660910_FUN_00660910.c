// Address: 00660910
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00660910(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00660967;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_007c9678 = _DAT_007c9678 + 1;
  if (_DAT_007c9678 == 0) {
    FUN_004061c8(&DAT_007c9674,PTR_DAT_0065bd9c);
    FUN_004061c8(&DAT_007c9670,PTR_DAT_0065bd7c);
    FUN_004061c8(&DAT_007c966c,PTR_DAT_0065bd5c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

