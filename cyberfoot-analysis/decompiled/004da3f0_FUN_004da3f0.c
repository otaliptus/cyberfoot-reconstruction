// Address: 004da3f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004da3f0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004da421;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0067ae9c = _DAT_0067ae9c + 1;
  if (_DAT_0067ae9c == 0) {
    FUN_00403a84(DAT_0067aea0);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

