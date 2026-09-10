// Address: 004c2db8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c2db8(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  double local_c;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_004c2e00;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004c552c(param_1,&local_10);
  FUN_0040beb0(local_10);
  puVar1 = puStack_18;
  local_c = (double)in_ST0;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004c2e07;
  puStack_1c = (undefined1 *)0x4c2dff;
  FUN_004048d4(&local_10,uStack_20,puVar1);
  return;
}

