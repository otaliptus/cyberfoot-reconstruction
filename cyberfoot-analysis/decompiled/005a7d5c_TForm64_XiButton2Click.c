// Address: 005a7d5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm64_XiButton2Click(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_24 = &LAB_005a7ee6;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00429e74(0x499494,&local_8);
  FUN_0064a178("opcoes",&DAT_005a7efc,local_8);
  FUN_00429e74(0x64b3b3,&local_c);
  FUN_0064a178("opcoes",&DAT_005a7f1c,local_c);
  FUN_00429e74(0x81c0c0,&local_10);
  FUN_0064a178("opcoes",&DAT_005a7f2c,local_10);
  FUN_00429e74(0xa3d1d1,&local_14);
  FUN_0064a178("opcoes",&DAT_005a7f3c,local_14);
  FUN_00429e74(0xbcdede,&local_18);
  FUN_0064a178("opcoes",&DAT_005a7f4c,local_18);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xe4) = 0x499494;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xe8) = 0x64b3b3;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xec) = 0x81c0c0;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xf0) = 0xa3d1d1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xf4) = 0xbcdede;
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x16c),0x499494);
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x16c),0x64b3b3);
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x16c),0x81c0c0);
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x16c),0xa3d1d1);
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 800) + 0x16c),0xbcdede);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005a7eed;
  puStack_24 = (undefined1 *)0x5a7ee5;
  FUN_004048f8(&local_18,5,puVar1);
  return;
}

