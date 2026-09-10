// Address: 00640ba0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_MenuItem7Click(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)0x640bb3;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
  puStack_c = &LAB_00640c04;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  puStack_8 = &stack0xfffffffc;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005c4fdc,PTR_DAT_0066adec);
  puVar2 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_00640c0b;
  iVar1 = **(int **)PTR_DAT_0066adec;
  puStack_c = (undefined1 *)0x640bf5;
  (**(code **)(iVar1 + 0xec))(*(int **)PTR_DAT_0066adec,iVar1,puVar2);
  puStack_c = (undefined1 *)0x640c03;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
  return;
}

