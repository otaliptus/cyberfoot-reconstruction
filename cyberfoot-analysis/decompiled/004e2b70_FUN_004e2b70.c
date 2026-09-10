// Address: 004e2b70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2b70(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004e2ba7;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0067aee0 = _DAT_0067aee0 + 1;
  if (_DAT_0067aee0 == 0) {
    FUN_004061c8(&DAT_0067aeec,PTR_DAT_004e1964);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

