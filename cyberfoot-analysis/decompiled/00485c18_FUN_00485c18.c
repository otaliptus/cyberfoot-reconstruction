// Address: 00485c18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00485c18(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (DAT_0066cbf4 != 0) {
    puStack_18 = &LAB_00485c49;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    FUN_0048811c(DAT_0066cbf4);
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}

