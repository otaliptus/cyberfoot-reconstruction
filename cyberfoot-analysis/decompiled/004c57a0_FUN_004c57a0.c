// Address: 004c57a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c57a0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004c57d1;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0067ab08 = _DAT_0067ab08 + 1;
  if (_DAT_0067ab08 == 0) {
    FUN_0040fe60(&DAT_006695d0);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

