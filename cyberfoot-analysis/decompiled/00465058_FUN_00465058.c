// Address: 00465058
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00465058(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004650bf;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar3 = FUN_00472c3c(param_1);
  if (cVar3 != '\0') {
    FUN_00466208(*(undefined4 *)(param_1 + 0x18),&local_8);
    uVar2 = local_8;
    iVar4 = FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
    FUN_00404cf0(uVar2,*(undefined4 *)(iVar4 + 100));
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004650c6;
  puStack_14 = (undefined1 *)0x4650be;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

