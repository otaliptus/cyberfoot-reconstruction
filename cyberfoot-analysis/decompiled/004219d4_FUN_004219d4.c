// Address: 004219d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004219d4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (DAT_0066c868 != 0) {
    puStack_18 = (undefined1 *)0x4219f1;
    iVar2 = FUN_0041e41c(DAT_0066c868);
    puStack_1c = &LAB_00421a4b;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    iVar4 = *(int *)(iVar2 + 8) + -1;
    puStack_18 = &stack0xfffffffc;
    puVar1 = &stack0xfffffffc;
    if (-1 < iVar4) {
      do {
        iVar3 = FUN_0041e01c(iVar2,iVar4);
        if (*(int *)(iVar3 + 4) == param_1) {
          FUN_0041df0c(iVar2,iVar4);
          FUN_00403a84(iVar3);
        }
        iVar4 = iVar4 + -1;
        puVar1 = puStack_18;
      } while (iVar4 != -1);
    }
    puStack_18 = puVar1;
    puVar1 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x421a52;
    puStack_1c = (undefined1 *)0x421a4a;
    FUN_0041e480(DAT_0066c868,uStack_20,puVar1);
    return;
  }
  return;
}

