// Address: 005e15cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e15cc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_005e162d;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d34bc = _DAT_006d34bc + 1;
  if (_DAT_006d34bc == 0) {
    FUN_00405744(&PTR_s_5_000_000_0066a394,PTR_DAT_004010dc,8);
    FUN_00405744(&PTR_s_5_000_000_0066a374,PTR_DAT_004010dc,8);
    FUN_004061c8(&DAT_006d3478,PTR_DAT_005d8cfc);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

