// Address: 005a4550
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005a4550(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (*PTR_DAT_0066af24 == '\0') {
    puStack_14 = (undefined1 *)0x5a456a;
    FUN_00483bc4(DAT_006d24b0);
    puStack_14 = (undefined1 *)0x5a4582;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00634a00,PTR_DAT_0066b054);
    puStack_14 = (undefined1 *)0x5a458e;
    FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b054);
  }
  else {
    *PTR_DAT_0066af24 = 0;
    puStack_18 = &LAB_005a45bf;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    FUN_006380e8(*(undefined4 *)PTR_DAT_0066b054);
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x5a45d3;
    FUN_00483bc4(DAT_006d24b0,uStack_1c,puVar1);
    if (*(int *)PTR_DAT_0066b2ec != 0) {
      puStack_18 = &LAB_005a4601;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b2ec);
      *in_FS_OFFSET = uStack_1c;
    }
    if (*(int *)PTR_DAT_0066add4 != 0) {
      puStack_18 = &LAB_005a4639;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066add4);
      *in_FS_OFFSET = uStack_1c;
    }
  }
  return;
}

