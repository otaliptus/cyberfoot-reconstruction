// Address: 004e2e44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e2e44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004e2e9c;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  local_8 = param_3;
  FUN_00404b6c(&local_c,param_3,param_3,param_4,0);
  (**(code **)(*param_1 + 0xd8))(param_1,param_2,local_c);
  puVar1 = puStack_20;
  *in_FS_OFFSET = param_4;
  puStack_20 = &LAB_004e2ea3;
  FUN_004048d4(&local_c,param_4,puVar1);
  return;
}

