// Address: 00524730
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00524730(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_00524815;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x524754;
  iVar2 = FUN_0041e41c(*(undefined4 *)(param_1 + 0x38));
  puStack_28 = &LAB_005247c5;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (*(int *)(iVar2 + 8) == 0) {
    puStack_24 = &stack0xfffffffc;
    FUN_004042fc();
    puStack_24 = (undefined1 *)0x524775;
    FUN_004042fc();
    return;
  }
  iVar3 = *(int *)(iVar2 + 8) + -1;
  puStack_24 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < iVar3) {
    do {
      FUN_0041e01c(iVar2,iVar3);
      FUN_0041e01c(iVar2,iVar3);
      FUN_00522630();
      iVar3 = iVar3 + -1;
      puVar1 = puStack_24;
    } while (iVar3 != -1);
  }
  puStack_24 = puVar1;
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &DAT_005247cc;
  puStack_28 = (undefined1 *)0x5247c4;
  FUN_0041e480(*(undefined4 *)(param_1 + 0x38),uStack_2c,puVar1);
  return;
}

