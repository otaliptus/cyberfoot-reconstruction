// Address: 005f4074
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f4074(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x5f4087;
  FUN_00466128(*(undefined4 *)(param_1 + 0x308),0);
  puStack_18 = &LAB_005f40c3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar1 = FUN_00405ef4(DAT_006d3fec);
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = 0;
    do {
      FUN_0040fe60(DAT_006d3fec + iVar2 * 4);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}

