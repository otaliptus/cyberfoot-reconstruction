// Address: 00427e4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00427e4c(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x427e5c;
  iVar2 = FUN_0041e41c(DAT_0066c85c);
  puStack_18 = &LAB_00427ea1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = *(int *)(iVar2 + 8);
  puStack_14 = &stack0xfffffffc;
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    puStack_14 = &stack0xfffffffc;
    do {
      FUN_0041e01c(iVar2,iVar4);
      FUN_00403a84();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00427ea8;
  puStack_18 = (undefined1 *)0x427ea0;
  FUN_0041e480(DAT_0066c85c,uStack_1c,puVar1);
  return;
}

