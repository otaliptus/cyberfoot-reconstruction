// Address: 0041f4bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041f4bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0041f504;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00406d44(param_2,&local_8);
  FUN_0041f484(param_1,local_8,param_3);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041f50b;
  puStack_1c = (undefined1 *)0x41f503;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

