// Address: 0041d884
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0041d884(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x41d89c;
  iVar2 = FUN_0041e41c(DAT_0066c85c);
  puStack_1c = &LAB_0041d8ee;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar5 = *(int *)(iVar2 + 8) + -1;
  puStack_18 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < iVar5) {
    do {
      iVar3 = FUN_0041e01c(iVar2,iVar5);
      if (param_1 == *(int *)(iVar3 + 4)) {
        uVar4 = *(undefined4 *)(iVar3 + 8);
        FUN_004042fc();
        return uVar4;
      }
      iVar5 = iVar5 + -1;
      puVar1 = puStack_18;
    } while (iVar5 != -1);
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x41d8f5;
  puStack_1c = (undefined1 *)0x41d8ed;
  uVar4 = FUN_0041e480(DAT_0066c85c,uStack_20,puVar1);
  return uVar4;
}

