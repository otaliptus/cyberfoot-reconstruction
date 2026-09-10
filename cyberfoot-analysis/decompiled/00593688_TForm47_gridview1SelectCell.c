// Address: 00593688
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm47_gridview1SelectCell(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  
  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_005936d1;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x134))();
  if (0 < iVar1) {
    FUN_0059315c(param_1,0xffffffff);
  }
  *(undefined4 *)PTR_DAT_0066b394 = 0xffffffff;
  *in_FS_OFFSET = uStack_14;
  return;
}

