// Address: 0041d3ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0041d3ec(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41d409;
  FUN_0041d17c(DAT_0066c860);
  puStack_20 = &LAB_0041d463;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
  puStack_1c = &stack0xfffffffc;
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      uVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar5);
      iVar3 = FUN_0041cc58(uVar2,param_2);
      if (iVar3 != 0) {
        FUN_004042fc();
        return iVar3;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x41d46a;
  puStack_20 = (undefined1 *)0x41d462;
  iVar4 = FUN_0041d234(DAT_0066c860,uStack_24,puVar1);
  return iVar4;
}

