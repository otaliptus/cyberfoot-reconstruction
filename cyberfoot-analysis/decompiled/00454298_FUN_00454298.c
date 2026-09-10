// Address: 00454298
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454298(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (*(int *)(param_1 + 0x25c) < 1)) {
    puStack_14 = (undefined1 *)0x4542c0;
    FUN_00454f14(param_1);
    puStack_18 = &LAB_00454302;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    iVar2 = FUN_00454f60(param_1);
    iVar2 = iVar2 + -1;
    if (param_2 - iVar2 == 0 || param_2 < iVar2) {
      iVar3 = (param_2 - iVar2) + -1;
      do {
        FUN_00454164(param_1,iVar2);
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0);
    }
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x454309;
    puStack_18 = (undefined1 *)0x454301;
    FUN_00454f1c(param_1,uStack_1c,puVar1);
    return;
  }
  return;
}

