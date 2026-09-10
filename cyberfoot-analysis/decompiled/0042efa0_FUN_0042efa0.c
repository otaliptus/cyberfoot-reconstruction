// Address: 0042efa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042efa0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if (param_1 != 0) {
    puStack_14 = (undefined1 *)0x42efb9;
    iVar2 = FUN_0041e41c(DAT_00662958);
    puStack_18 = &LAB_0042f010;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    iVar4 = *(int *)(iVar2 + 8) + -1;
    puStack_14 = &stack0xfffffffc;
    puVar1 = &stack0xfffffffc;
    if (-1 < iVar4) {
      do {
        iVar3 = FUN_0041e01c(iVar2,iVar4);
        if ((*(int *)(iVar3 + 0x58) != 0) &&
           (*(int *)(*(int *)(*(int *)(iVar3 + 0x58) + 0x28) + 8) == param_1)) {
          FUN_0042f084();
        }
        iVar4 = iVar4 + -1;
        puVar1 = puStack_14;
      } while (iVar4 != -1);
    }
    puStack_14 = puVar1;
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x42f017;
    puStack_18 = (undefined1 *)0x42f00f;
    FUN_0041e480(DAT_00662958,uStack_1c,puVar1);
    return;
  }
  return;
}

