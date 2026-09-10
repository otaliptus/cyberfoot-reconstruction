// Address: 00435cfc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435cfc(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)0x435d09;
  FUN_00435cb4(DAT_0066ca50);
  puStack_c = &LAB_00435eb3;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  if (0 < DAT_0066ca4c) {
    DAT_0066ca4c = DAT_0066ca4c + -1;
  }
  puStack_8 = &stack0xfffffffc;
  if ((DAT_0066ca48 != (HMODULE)0x0) && (puStack_8 = &stack0xfffffffc, DAT_0066ca4c == 0)) {
    puStack_8 = &stack0xfffffffc;
    FreeLibrary(DAT_0066ca48);
    DAT_0066ca48 = (HMODULE)0x0;
    DAT_0066c988 = 0;
    DAT_0066c98c = 0;
    DAT_0066c990 = 0;
    _DAT_0066c994 = 0;
    DAT_0066c998 = 0;
    _DAT_0066c99c = 0;
    _DAT_0066c9a0 = 0;
    _DAT_0066c9a4 = 0;
    _DAT_0066c9a8 = 0;
    _DAT_0066c9ac = 0;
    _DAT_0066c9b0 = 0;
    DAT_0066c9b4 = 0;
    DAT_0066c9b8 = 0;
    _DAT_0066c9bc = 0;
    DAT_0066c9c0 = 0;
    _DAT_0066c9c4 = 0;
    _DAT_0066c9c8 = 0;
    _DAT_0066c9cc = 0;
    _DAT_0066c9d0 = 0;
    _DAT_0066c9d4 = 0;
    _DAT_0066c9d8 = 0;
    _DAT_0066c9dc = 0;
    _DAT_0066c9e0 = 0;
    _DAT_0066c9e4 = 0;
    _DAT_0066c9e8 = 0;
    _DAT_0066c9ec = 0;
    _DAT_0066c9f0 = 0;
    _DAT_0066c9f4 = 0;
    _DAT_0066c9f8 = 0;
    _DAT_0066c9fc = 0;
    _DAT_0066ca00 = 0;
    _DAT_0066ca04 = 0;
    _DAT_0066ca08 = 0;
    _DAT_0066ca0c = 0;
    _DAT_0066ca10 = 0;
    _DAT_0066ca14 = 0;
    DAT_0066ca18 = 0;
    DAT_0066ca1c = 0;
    _DAT_0066ca20 = 0;
    _DAT_0066ca24 = 0;
    _DAT_0066ca28 = 0;
    _DAT_0066ca2c = 0;
    _DAT_0066ca30 = 0;
    _DAT_0066ca34 = 0;
    _DAT_0066ca38 = 0;
    DAT_0066ca3c = 0;
    _DAT_0066ca40 = 0;
  }
  puVar1 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_00435eba;
  puStack_c = (undefined1 *)0x435eb2;
  FUN_00435cbc(DAT_0066ca50,uStack_10,puVar1);
  return;
}

