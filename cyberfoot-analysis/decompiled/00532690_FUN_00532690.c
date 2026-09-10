// Address: 00532690
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00532690(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [6];
  undefined4 local_28;
  undefined4 local_20;
  
  puStack_58 = &stack0xfffffffc;
  local_48 = 0;
  local_44 = 0;
  puVar3 = local_40;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_5c = &LAB_005327c8;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  FUN_00533ab8(*(undefined4 *)(param_1 + 0x22c),local_28);
  FUN_00533acc(*(undefined4 *)(param_1 + 0x22c),local_28);
  FUN_00533c84(*(undefined4 *)(param_1 + 0x22c),local_20);
  FUN_00533ae0(*(undefined4 *)(param_1 + 0x22c),local_20);
  (**(code **)(**(int **)(param_1 + 0x22c) + 0xc))(*(int **)(param_1 + 0x22c),local_40[1]);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x22c) + 100),local_40[2]);
  FUN_004c0920(&local_44);
  FUN_0042a5c8(*(undefined4 *)(*(int *)(param_1 + 0x22c) + 0x20),local_44);
  FUN_004c0920(&local_48);
  FUN_0042a5c8(*(undefined4 *)(param_1 + 0x68),local_48);
  FUN_0042a3a0(*(undefined4 *)(param_1 + 0x68),local_40[2]);
  FUN_00528910(*(undefined4 *)(param_1 + 0x240),local_40[0]);
  FUN_0052894c(*(undefined4 *)(param_1 + 0x240),local_40[0]);
  FUN_00528924(*(undefined4 *)(param_1 + 0x240),local_40[0]);
  FUN_00528938(*(undefined4 *)(param_1 + 0x240),local_40[0]);
  FUN_005288d0(*(undefined4 *)(param_1 + 0x240),local_40[1]);
  FUN_00528b14(*(undefined4 *)(param_1 + 0x240),0);
  FUN_00528b3c(*(undefined4 *)(param_1 + 0x240),0x1fffffff);
  puVar1 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_005327cf;
  puStack_5c = (undefined1 *)0x5327c7;
  FUN_004048f8(&local_48,2,puVar1);
  return;
}

