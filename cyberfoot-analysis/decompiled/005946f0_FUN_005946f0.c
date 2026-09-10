// Address: 005946f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005946f0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00594727;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d2264 = _DAT_006d2264 + 1;
  if (_DAT_006d2264 == 0) {
    FUN_004061c8(&DAT_006d2258,PTR_DAT_00591f8c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

