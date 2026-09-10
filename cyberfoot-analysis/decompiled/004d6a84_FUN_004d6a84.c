// Address: 004d6a84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d6a84(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_004d6ae0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0041a524(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_c);
  FUN_004d4bb0(local_c,&local_8);
  FUN_0042653c(param_2,local_8);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d6ae7;
  puStack_1c = (undefined1 *)0x4d6ad7;
  FUN_00404ff0(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x4d6adf;
  FUN_004048d4(&local_8);
  return;
}

