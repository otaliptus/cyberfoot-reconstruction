// Address: 005cde0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cde0c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_005cde53;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d2d24 = _DAT_006d2d24 + 1;
  if (_DAT_006d2d24 == 0) {
    FUN_004061c8(&DAT_006d2d20,PTR_DAT_005ca4b8);
    FUN_004061c8(&DAT_006d2d10,PTR_DAT_005ca498);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

