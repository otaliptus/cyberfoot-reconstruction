// Address: 004df1e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df1e4(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004df246;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_0067aec8 == 0;
  _DAT_0067aec8 = _DAT_0067aec8 + -1;
  if (bVar1) {
    DAT_0067aec4 = RegisterWindowMessageA("TntUnicodeVcl.DestroyWindow");
    DAT_00669718 = FUN_00432710(PTR_PTR_00432598,1,1);
    DAT_00669720 = FUN_00432710(PTR_PTR_00432598,1,0);
    FUN_004df128();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

