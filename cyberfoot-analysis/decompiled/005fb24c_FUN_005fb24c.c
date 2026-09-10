// Address: 005fb24c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fb24c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_005fb2b3;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d4068 = _DAT_006d4068 + 1;
  if (_DAT_006d4068 == 0) {
    FUN_004061c8(&DAT_006d3ff0,PTR_DAT_005f2ae0);
    FUN_004061c8(&DAT_006d3fec,PTR_DAT_005f2ac0);
    FUN_004061c8(&DAT_006d3f8c,PTR_DAT_005f2aa0);
    FUN_004061c8(&DAT_006d3f88,PTR_DAT_005f2a80);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

