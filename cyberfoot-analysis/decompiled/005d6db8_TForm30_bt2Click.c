// Address: 005d6db8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm30_bt2Click(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_005d6e0c;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005add64,PTR_DAT_0066adf0);
  puVar1 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_005d6e13;
  puStack_c = (undefined1 *)0x5d6dfc;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,puVar1);
  puStack_c = (undefined1 *)0x5d6e0b;
  (**(code **)(**(int **)PTR_DAT_0066adf0 + 0xec))();
  return;
}

