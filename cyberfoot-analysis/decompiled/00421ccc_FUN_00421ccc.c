// Address: 00421ccc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421ccc(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x421cde;
  iVar2 = FUN_0041e41c(DAT_0066c868);
  puStack_18 = &LAB_00421d3c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar4 = *(int *)(iVar2 + 8) + -1;
  puStack_14 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < iVar4) {
    do {
      iVar3 = FUN_0041e01c(iVar2,iVar4);
      if ((*(int *)(iVar3 + 4) == *(int *)(param_1 + 4)) &&
         (*(int *)(iVar3 + 0xc) == *(int *)(param_1 + 0xc))) {
        FUN_00403a84();
        FUN_0041df0c(iVar2,iVar4);
      }
      iVar4 = iVar4 + -1;
      puVar1 = puStack_14;
    } while (iVar4 != -1);
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00421d43;
  puStack_18 = (undefined1 *)0x421d3b;
  FUN_0041e480(DAT_0066c868,uStack_1c,puVar1);
  return;
}

