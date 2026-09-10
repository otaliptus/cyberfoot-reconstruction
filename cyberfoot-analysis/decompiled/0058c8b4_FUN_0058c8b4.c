// Address: 0058c8b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058c8b4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0058c903;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d2210 = _DAT_006d2210 + 1;
  if (_DAT_006d2210 == 0) {
    FUN_00404ff0(&DAT_006d220c);
    FUN_00404ff0(&DAT_006d2208);
    FUN_00404ff0(&DAT_006d2204);
    FUN_00404ff0(&DAT_006d2200);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

