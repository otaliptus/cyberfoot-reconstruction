// Address: 0040ff80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040ff80(undefined4 param_1,UINT param_2)

{
  LPCSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x40ff8f;
  SetErrorMode(param_2);
  puStack_1c = &LAB_0040fff2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_28 = &LAB_0040ffd4;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  lpLibFileName = (LPCSTR)FUN_00404da4(param_1);
  LoadLibraryA(lpLibFileName);
  *in_FS_OFFSET = uStack_2c;
  return;
}

