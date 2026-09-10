// Address: 004dd304
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dd304(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004dd335;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0067aec0 = _DAT_0067aec0 + 1;
  if (_DAT_0067aec0 == 0) {
    FUN_0040fe60(&DAT_0067aebc);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

