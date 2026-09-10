// Address: 0063f204
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Rankingdeclubes1Click(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)0x63f217;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
  puStack_c = &LAB_0063f280;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  puStack_8 = &stack0xfffffffc;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005ca018,PTR_DAT_0066b73c);
  puVar1 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_0063f287;
  puStack_c = (undefined1 *)0x63f24f;
  iVar2 = FUN_00647b80(0,uStack_10,puVar1);
  if (iVar2 < 2) {
    puStack_c = (undefined1 *)0x63f262;
    FUN_0046571c(*(undefined4 *)PTR_DAT_0066b73c,5);
  }
  puStack_c = (undefined1 *)0x63f270;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
  puStack_c = (undefined1 *)0x63f27f;
  (**(code **)(**(int **)PTR_DAT_0066b73c + 0xec))();
  return;
}

