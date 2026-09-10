// Address: 00578544
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm78_p1Click(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  uVar3 = 1;
  puStack_18 = &LAB_005785e3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_00403c34(param_2,PTR_PTR_00457844);
  FUN_00466208(iVar2,&local_8);
  FUN_00404cf0(local_8,&DAT_005785f8);
  if (!(bool)uVar3) {
    *(undefined4 *)PTR_DAT_0066b5ec = 1;
    FUN_00403c34(param_2,PTR_PTR_00457844);
    *(undefined4 *)PTR_DAT_0066b27c = *(undefined4 *)(iVar2 + 0xc);
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00570e7c,PTR_DAT_0066b2f0);
    (**(code **)(**(int **)PTR_DAT_0066b2f0 + 0xec))();
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005785ea;
  puStack_18 = (undefined1 *)0x5785e2;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

