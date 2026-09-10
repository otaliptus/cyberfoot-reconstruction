// Address: 00460804
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460804(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00460856;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar2 = _DAT_0066cb48 == 0;
  _DAT_0066cb48 = _DAT_0066cb48 + -1;
  if (bVar2) {
    DAT_0066cb4c = FUN_00460718(PTR_DAT_0045fc74,1);
    uVar1 = FUN_00406880(DAT_0066cb4c + 0x1c);
    FUN_00433c2c(DAT_0066cb50,uVar1);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

