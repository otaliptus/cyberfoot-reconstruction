// Address: 004c5c18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c5c18(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004c5c68;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0067ab14 = _DAT_0067ab14 + 1;
  if (_DAT_0067ab14 == 0) {
    FUN_00406880(&DAT_0067ab10);
    FUN_00406880(&DAT_0067ab0c);
    FUN_00405744(&PTR_s_Unknown_0066960c,PTR_DAT_004010dc,0x26);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

