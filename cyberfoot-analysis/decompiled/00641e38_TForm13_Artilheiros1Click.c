// Address: 00641e38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Artilheiros1Click(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)0x641e4b;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
  puStack_c = &LAB_00641eb4;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  puStack_8 = &stack0xfffffffc;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0059df94,PTR_DAT_0066ac3c);
  puVar1 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_00641ebb;
  puStack_c = (undefined1 *)0x641e8c;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,puVar1);
  puStack_c = (undefined1 *)0x641e91;
  iVar2 = FUN_00647b80();
  if (iVar2 < 2) {
    puStack_c = (undefined1 *)0x641ea4;
    FUN_0046571c(*(undefined4 *)PTR_DAT_0066ac3c,5);
  }
  puStack_c = (undefined1 *)0x641eb3;
  (**(code **)(**(int **)PTR_DAT_0066ac3c + 0xec))();
  return;
}

