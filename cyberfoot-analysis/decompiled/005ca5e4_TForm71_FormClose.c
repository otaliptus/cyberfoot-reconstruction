// Address: 005ca5e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm71_FormClose(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_005ca630;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = FUN_00405eec(DAT_006d2d20);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      FUN_0040fe60(DAT_006d2d20 + iVar3 * 4);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x5ca648;
  FUN_00403a84(*(undefined4 *)(param_1 + 0x2fc),uStack_24,puVar1);
  puStack_1c = (undefined1 *)0x5ca652;
  FUN_00403a84(DAT_006d2d08);
  *param_3 = 2;
  return;
}

