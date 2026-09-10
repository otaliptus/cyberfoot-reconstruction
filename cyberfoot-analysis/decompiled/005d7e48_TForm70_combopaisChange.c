// Address: 005d7e48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm70_combopaisChange(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_2c = &LAB_005d8014;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  DAT_006d33f8 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x314));
  DAT_006d33fc = FUN_0064dee4(1,*(undefined4 *)
                                 (*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d33f8 * 0x294),1,
                              0xffffffff,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x310) + 0xd8))();
  FUN_00642c50(0x23,&local_8);
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x310),local_8);
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    if (1 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d33f8 * 0x294)) {
      FUN_00642c50(0x24,&local_c);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x310),local_c);
    }
    if (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d33f8 * 0x294)) {
      FUN_00642c50(0x25,&local_10);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x310),local_10);
    }
    if (3 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d33f8 * 0x294)) {
      FUN_00642c50(0x26,&local_14);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x310),local_14);
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    FUN_00642c50(0x24,&local_18);
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x310),local_18);
    FUN_00642c50(0x25,&local_1c);
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x310),local_1c);
    FUN_00642c50(0x26,&local_20);
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x310),local_20);
  }
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x310),0);
  FUN_005d8068(param_1);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005d801b;
  puStack_2c = (undefined1 *)0x5d8013;
  FUN_00405008(&local_20,7,puVar1);
  return;
}

