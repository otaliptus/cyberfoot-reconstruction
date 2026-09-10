// Address: 00661228
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void entry(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x661238;
  FUN_00406ffc(&DAT_00660a10);
  puStack_1c = &LAB_006612ad;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_0048745c(*(undefined4 *)PTR_DAT_0066b3ac);
  FUN_00487054(*(undefined4 *)PTR_DAT_0066b3ac,"Cyberfoot 2015");
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0065b99c,PTR_DAT_0066b64c);
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0060e964,PTR_DAT_0066b6a4);
  FUN_004874f4(*(undefined4 *)PTR_DAT_0066b3ac);
  *in_FS_OFFSET = uStack_20;
  return;
}

