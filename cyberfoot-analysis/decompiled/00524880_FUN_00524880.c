// Address: 00524880
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00524880(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_005248cb;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0067b228 = _DAT_0067b228 + 1;
  if (_DAT_0067b228 == 0) {
    FUN_00403a84(DAT_00669da4);
    FUN_00403a84(DAT_00669dc0);
    FUN_0042d9c4(PTR_PTR_0042902c,PTR_PTR_00516570);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

