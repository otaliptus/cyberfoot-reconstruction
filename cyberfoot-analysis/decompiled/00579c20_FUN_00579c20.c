// Address: 00579c20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00579c20(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00579ca7;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d2184 = _DAT_006d2184 + 1;
  if (_DAT_006d2184 == 0) {
    FUN_004061c8(&DAT_006d2178,PTR_DAT_00578764);
    FUN_004061c8(&DAT_006d216c,PTR_DAT_0057873c);
    FUN_004061c8(&DAT_006d2168,PTR_DAT_00578714);
    FUN_004061c8(&DAT_006d2164,PTR_DAT_005786ec);
    FUN_004061c8(&DAT_006d2160,PTR_DAT_005786ec);
    FUN_004061c8(&DAT_006d215c,PTR_DAT_005786ec);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

