// Address: 005c5c78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c5c78(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = (undefined1 *)0x5c5c8e;
  local_8 = param_3;
  FUN_00405608(&local_8);
  puStack_1c = &LAB_005c5d1e;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  puStack_28 = &LAB_005c5cc4;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1f0))(*(int **)(param_1 + 0x2f8),param_2);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = (undefined1 *)local_8;
  puStack_28 = (undefined1 *)0x5c5cee;
  (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))(*(int **)(param_1 + 0x2f8),4,param_2);
  puStack_28 = &DAT_005c5d30;
  uStack_2c = 0x5c5d08;
  (**(code **)(**(int **)(param_1 + 0x2f8) + 0x194))(*(int **)(param_1 + 0x2f8),9,param_2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = puStack_28;
  puStack_20 = &LAB_005c5d25;
  puStack_24 = (undefined1 *)0x5c5d1d;
  FUN_00404ff0(&local_8,puStack_28,puVar1);
  return;
}

