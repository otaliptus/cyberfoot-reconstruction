// Address: 006607dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm1_Shape1MouseDown(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)0x6607ef;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
  puStack_8 = (undefined1 *)0x6607fb;
  FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
  puStack_c = &LAB_00660849;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  puStack_8 = &stack0xfffffffc;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0062e56c,PTR_DAT_0066b454);
  FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b454);
  puVar1 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_00660850;
  puStack_c = (undefined1 *)0x660848;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,puVar1);
  return;
}

