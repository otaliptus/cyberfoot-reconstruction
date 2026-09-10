// Address: 00436648
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436648(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00436690;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0066ca44 = _DAT_0066ca44 + 1;
  if (_DAT_0066ca44 == 0) {
    while (0 < DAT_0066ca4c) {
      FUN_00435cfc();
    }
    FUN_00403a84(DAT_0066ca50);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

