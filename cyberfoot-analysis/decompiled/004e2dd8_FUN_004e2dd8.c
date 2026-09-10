// Address: 004e2dd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e2dd8(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_14 = *param_2;
  uStack_10 = param_2[1];
  uStack_c = param_2[2];
  uStack_8 = param_2[3];
  puStack_2c = &LAB_004e2e35;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  if (param_1 != (int *)0x0) {
    FUN_00404b6c(&local_18,param_3);
    (**(code **)(*param_1 + 0xd0))(param_1,&local_14,local_18);
    puVar1 = puStack_28;
  }
  puStack_28 = puVar1;
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004e2e3c;
  puStack_2c = (undefined1 *)0x4e2e34;
  FUN_004048d4(&local_18,uStack_30,puVar1);
  return;
}

