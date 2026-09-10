// Address: 0054c464
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054c464(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_0054c4ec;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_3;
  (**(code **)(*param_1 + 0xc))(param_1,param_3,&local_10);
  FUN_0054b18c(local_10,&local_c);
  uVar2 = FUN_00404da4(local_c);
  (**(code **)(*param_1 + 0xc))(param_1,param_2,&local_18);
  FUN_0054b18c(local_18,&local_14);
  uVar3 = FUN_00404da4(local_14);
  FUN_004097e0(uVar3,uVar2);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0054c4f3;
  puStack_2c = (undefined1 *)0x54c4eb;
  FUN_004048f8(&local_18,4,puVar1);
  return;
}

