// Address: 006297e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006297e0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00629857;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d494c = _DAT_006d494c + 1;
  if (_DAT_006d494c == 0) {
    FUN_004061c8(&DAT_006d4950,PTR_DAT_00624ff0);
    FUN_004061c8(&DAT_006d4948,PTR_DAT_00624fd0);
    FUN_004061c8(&DAT_006d4944,PTR_DAT_00624fb0);
    FUN_004061c8(&DAT_006d4940,PTR_DAT_00624f90);
    FUN_004061c8(&DAT_006d493c,PTR_DAT_00624f70);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

