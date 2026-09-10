// Address: 004e13a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e13a4(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004e13e9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004e1400(param_1,&local_8);
  FUN_004e1340(param_1,param_2,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004e13f0;
  puStack_18 = (undefined1 *)0x4e13e8;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

