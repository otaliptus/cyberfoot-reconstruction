// Address: 00641db0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Campees1Click(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)0x641dc3;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
  puStack_c = &LAB_00641e2c;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  puStack_8 = &stack0xfffffffc;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005a58b0,PTR_DAT_0066b234);
  puVar1 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_00641e33;
  puStack_c = (undefined1 *)0x641e04;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,puVar1);
  puStack_c = (undefined1 *)0x641e09;
  iVar2 = FUN_00647b80();
  if (iVar2 < 2) {
    puStack_c = (undefined1 *)0x641e1c;
    FUN_0046571c(*(undefined4 *)PTR_DAT_0066b234,5);
  }
  puStack_c = (undefined1 *)0x641e2b;
  (**(code **)(**(int **)PTR_DAT_0066b234 + 0xec))();
  return;
}

