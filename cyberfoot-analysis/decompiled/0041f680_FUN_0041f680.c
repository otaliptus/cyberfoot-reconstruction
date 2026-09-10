// Address: 0041f680
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041f680(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_0041f6d1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_3;
  (**(code **)(*param_1 + 0xc))(param_1,param_2,&local_c);
  FUN_0041f5fc(param_1,local_c,local_8);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041f6d8;
  puStack_1c = (undefined1 *)0x41f6d0;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  return;
}

