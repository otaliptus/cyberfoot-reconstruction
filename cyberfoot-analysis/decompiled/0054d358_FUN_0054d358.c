// Address: 0054d358
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054d358(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_14 = &LAB_0054d3be;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar3 = FUN_00406880(&local_8);
  cVar2 = FUN_00403b38(param_1,&DAT_0054d3cc,uVar3);
  if (cVar2 == '\0') {
    FUN_0040e370(PTR_DAT_004d34b4,1,"Internal Error: Control does not support ITntGlyphButton.");
    FUN_00404250();
  }
  else {
    (**(code **)(*local_8 + 0x10))();
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0054d3c5;
  puStack_14 = (undefined1 *)0x54d3bd;
  FUN_00406880(&local_8,uStack_18,puVar1);
  return;
}

